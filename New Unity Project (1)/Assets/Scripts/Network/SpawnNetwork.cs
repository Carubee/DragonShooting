using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;
using Fusion.Sockets;
using System;
using UnityEngine.SceneManagement;

public class SpawnNetwork : MonoBehaviour, INetworkRunnerCallbacks
{
    private NetworkRunner _runner;
    public float pos;
    public GameObject Fishspawn;
    public GameObject lobbyMenu;
    public static SpawnNetwork instance;
    [Networked] bool FirstSpawn { get; set; }
    async void StartGame(GameMode mode)
    {
        _runner = gameObject.AddComponent<NetworkRunner>();
        _runner.ProvideInput = true;
        await _runner.StartGame(new StartGameArgs()
        {
            GameMode = mode,
            SessionName = "TestRoom",
            Scene = SceneManager.GetActiveScene().buildIndex,
            SceneManager = gameObject.AddComponent<NetworkSceneManagerDefault>()

        }) ; ;}

    private void Start()
    {
        instance = this;
    }
    // Update is called once per 
    public void JoinGame()
    {
        StartGame(GameMode.AutoHostOrClient);

    }
    public void QuitGame()
    {
        
    }

    public void StartClient()
    {
        gunMode.instance.canPlay = true;
    }
    public void StartClient2()
    {
        gunMode.instance.canPlay = true;

    }
    public void StartClient3()
    {
        gunMode.instance.canPlay = true;

    }
    public void StartClient4()
    {
        gunMode.instance.canPlay = true;

    }
    public  void OnConnectedToServer(NetworkRunner runner)
    {
       

        
    }
    [SerializeField] private NetworkPrefabRef _playerPrefab;
    private Dictionary<PlayerRef, NetworkObject> _spawnedCharacter = new Dictionary<PlayerRef, NetworkObject>();
    public void OnPlayerJoined(NetworkRunner runner,PlayerRef player)
    {
        lobbyMenu.SetActive(false);

        if (runner.IsServer)
        {
            Vector3 spawnPos = new Vector3(0, 90, 0);
            NetworkObject networkObject = runner.Spawn(_playerPrefab, spawnPos, Quaternion.identity, player);
            _spawnedCharacter.Add(player, networkObject);
            gunMode.instance.Rpc_ChangeGunServer(1);
            if (!FirstSpawn)
            {
                _runner.Spawn(Fishspawn);
                FirstSpawn = true;
            }

        }



    }
    public void OnInput(NetworkRunner runner,NetworkInput input)
    {
        var data = new NetworkInputData();
       


        input.Set(data);
    }

    public void OnPlayerLeft(NetworkRunner runner, PlayerRef player)
    {
        if(_spawnedCharacter.TryGetValue(player,out NetworkObject networkObject))
        {
            runner.Despawn(networkObject);
            _spawnedCharacter.Remove(player);
        }
    }

    public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input)
    {
    }

    public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason)
    {
    }

    public void OnDisconnectedFromServer(NetworkRunner runner)
    {
    }

    public void OnConnectRequest(NetworkRunner runner, NetworkRunnerCallbackArgs.ConnectRequest request, byte[] token)
    {
    }

    public void OnConnectFailed(NetworkRunner runner, NetAddress remoteAddress, NetConnectFailedReason reason)
    {
    }

    public void OnUserSimulationMessage(NetworkRunner runner, SimulationMessagePtr message)
    {
    }

    public void OnSessionListUpdated(NetworkRunner runner, List<SessionInfo> sessionList)
    {
    }

    public void OnCustomAuthenticationResponse(NetworkRunner runner, Dictionary<string, object> data)
    {
    }

    public void OnHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken)
    {

    }

    public void OnReliableDataReceived(NetworkRunner runner, PlayerRef player, ArraySegment<byte> data)
    {
    }

    public void OnSceneLoadDone(NetworkRunner runner)
    {
    }

    public void OnSceneLoadStart(NetworkRunner runner)
    {
    }
}
