window.getLoginUrl = function() {
    if (!window.appConfig || !window.appConfig.loginUrl) {
        return "../auth";
    }
    return window.appConfig.loginUrl;
}

window.addEventListener("beforeunload", function (event) {
    console.log("Unloading...");
    if (!window.configEvents) {
        console.error("No config data.");
    }
    if (!window.profileMetas) {
        console.error("No profile data.");
    }
    var type = window.configEvents.type;
    var key = window.configEvents.key;
    if (type == "enquiry") {
        if (window.profileMetas.enquiries && window.profileMetas.enquiries.hasOwnProperty(key)) {
            console.log("Already has a enquiry key: " + key);
            window.open(window.getLoginUrl(), "_self");
            return;
        }
    }
    var logoutClick = window.configEvents.logout.click;
    var clickTarget = logoutClick.target;
    clickTarget = clickTarget.replace("[token]", window.accessToken);
    window.openUrlByType("new_window", clickTarget);
});

window.setOnCloseIFrameMessage = function (functionName) {
    window.onCloseIFrame = function () {
        window.unityInstance.SendMessage('AppEvents', functionName);
    };
}

window.openUrlIFrame = function (url) {
    var frameContainer = document.getElementById("web-iframe-container");
    var frame = document.getElementById("web-iframe");
    frame.src = url;
    frameContainer.classList.add("visible");
    if (url && window.appConfig && window.appConfig.openUrlIFrame) {
        if (url == window.appConfig.openUrlIFrame.coinPageAddress) {
            frameContainer.classList.add("iframe-coin-page");
            window.onCloseIFrame = function () {
                frameContainer.classList.remove("iframe-coin-page");
            };
        }
        if (url == window.appConfig.openUrlIFrame.profileSettingAddress) {
            window.setOnCloseIFrameMessage("OnCloseIFrameAfterUpdateProfile");
        }
    }
}

window.closeIFrame = function () {
    var frameContainer = document.getElementById("web-iframe-container");
    frameContainer.classList.remove("visible");
    var frame = document.getElementById("web-iframe");
    frame.src = "about:_blank";
    if (window.onCloseIFrame) {
        window.onCloseIFrame();
    }
    window.onCloseIFrame = undefined;
}

window.openUrlByType = function (type, url) {
    if (type == "iframe") {
        window.openUrlIFrame(url);
        return;
    }
    if (type == "popup") {
        window.open(url, "PopupWindow", "width=800,height=600");
        return;
    }
    if (type == "new_window") {
        window.open(url, "_blank");
        return;
    }
    if (type == "default") {
        window.open(url, "_self");
        return;
    }
}

window.onLogout = function () {
    var type = undefined;
    try {
        type = window.configEvents.type;
    } catch {
        console.error("Cannot read `type` from `window.configEvents`");
    }
    var key = undefined;
    try {
        key = window.configEvents.key;
    } catch {
        console.error("Cannot read `key` from `window.configEvents`");
    }
    if (type && type == "enquiry") {
        if (window.profileMetas.enquiries && window.profileMetas.enquiries.hasOwnProperty(key)) {
            console.log("Already has a enquiry key: " + key);
            window.goToLoggedOut();
            return;
        }
    }
    var logoutClick = undefined;
    try {
        logoutClick = window.configEvents.logout.click;
    } catch {
        console.error("Cannot read `logout.click` from `window.configEvents`");
    }
    if (logoutClick) {
        var clickType = logoutClick.type;
        var clickTarget = logoutClick.target;
        clickTarget = clickTarget.replace("[token]", window.accessToken);
        window.onCloseIFrame = function () {
            window.goToLoggedOut();
        };
        window.openUrlByType(clickType, clickTarget);
    } else {
        window.goToLoggedOut();
    }
}

window.goToLoggedOut = function () {
    window.open(window.getLoginUrl(), "_self");
}

window.onProfileLoaded = function (json) {
    console.log("Profile loaded " + JSON.stringify(json));
    window.profileMetas = json.response.metas;
}

window.onConfigLoaded = function (json) {
    console.log("Config loaded " + JSON.stringify(json));
    window.configEvents = json.response.events;
}

window.localPeer = null;
window.voipRemoteSpeakers = new Map();
window.onGameRoomJoined = function (id) {
    window.onGameRoomLeft(id);
    window.localPeer = new Peer(id, {
        debug: 2,
        host: window.appConfig.peerServerAddress,
        port: window.appConfig.peerServerPort,
        path: window.appConfig.peerServerPath,
        secure: window.appConfig.peerServerSecure,
    });

    window.localPeer.on('call', (call) => {
        call.answer();
        call.on('stream', (stream) => {
            var video = document.getElementById("vdo_" + call.peer);
            // Clear timeout before setup new remote speaker
            if (voipRemoteSpeakers.has(call.peer)) {
                var speakerData = voipRemoteSpeakers.get(call.peer);
                if (speakerData.timeoutId) {
                    clearTimeout(speakerData.timeoutId);
                }
            }
            voipRemoteSpeakers.set(call.peer, call);
            // Use created element or create new one
            if (video) {
                video.srcObject = stream;
            } else {
                var video = document.createElement("video");
                video.id = "vdo_" + call.peer;
                video.srcObject = stream;
                video.addEventListener('loadedmetadata', () => {
                    video.play();
                });
                video.addEventListener('timeupdate', () => {
                    if (!voipRemoteSpeakers.has(call.peer)) {
                        return;
                    }
                    // Clear timeout before setup new speaking signal timeout
                    var speakerData = voipRemoteSpeakers.get(call.peer);
                    if (speakerData.timeoutId) {
                        clearTimeout(speakerData.timeoutId);
                    }
                    // Delete speaker if there is no update, peerJS's close event not working!
                    // video events that relates to media stop playing also not working too!
                    speakerData.timeoutId = setTimeout(() => {
                        voipRemoteSpeakers.delete(call.peer);
                    }, 1000);
                });
                document.body.appendChild(video);
            }
        });
    });

    window.localPeer.on('error', (err) => {
        console.log('ShareScreenWebRTC err.type', err.type)
        console.error('ShareScreenWebRTC', err)
    });

    window.localPeer.on('open', (id) => {
        console.log('Connected to server with id: ' + id);
    })
}

window.onGameRoomLeft = function (id) {
    if (window.localPeer && !window.localPeer.disconnected) {
        window.localPeer.disconnect();
        window.localPeer = null;
    }
}

window.voipRemotePeers = new Map();
window.voipConnect = function (id) {
    if (!window.localPeer || window.localPeer.disconnected) {
        return;
    }

    if (window.voipRemotePeers.has(id)) {
        return;
    }
    window.voipRemotePeers.set(id, {});

    if (!navigator.mediaDevices) {
        return;
    }

    console.log("Start calling: " + id);
    // `getUserMedia`/`getDisplayMedia`
    navigator.mediaDevices.getUserMedia({
        "audio": true,
        "video": false
    }).then((stream) => {
        console.log("Calling: " + id);
        var remotePeer = window.localPeer.call(id, stream);
        window.voipRemotePeers.set(id, remotePeer);
    }).catch((reason) => {
        console.error(reason);
        window.voipRemotePeers.delete(id);
    });
}

window.voipDisconnect = function (id) {
    if (!window.voipRemotePeers.has(id)) {
        return;
    }
    console.log("Stop calling: " + id);
    var remotePeer = window.voipRemotePeers.get(id);
    window.voipRemotePeers.delete(id);
    if (remotePeer.close && typeof remotePeer.close === "function") {
        remotePeer.close();
    }
}

window.getVoipRemotePeerIds = function () {
    var remotePeers = [];
    for (var remotePeer of window.voipRemotePeers.keys()) {
        remotePeers.push(remotePeer);
    }
    return remotePeers;
}

window.getVoipRemoteSpeakerIds = function () {
    var remotePeers = [];
    for (var remotePeer of window.voipRemoteSpeakers.keys()) {
        remotePeers.push(remotePeer);
    }
    return remotePeers;
}
