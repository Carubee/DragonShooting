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
    private bool _mouseButton0;
    private bool _mouseButton0Up;
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
    private void Update()
    {
        _mouseButton0 = _mouseButton0 || Input.GetMouseButton(0);
        _mouseButton0Up = _mouseButton0Up || Input.GetMouseButtonUp(0);
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
        AudioMIxer.instance.BGM.Play();
        if (runner.IsServer)
        {
            Vector3 spawnPos = new Vector3(0, 90, 0);
            NetworkObject networkObject = runner.Spawn(_playerPrefab, spawnPos, Quaternion.identity, player);
            _spawnedCharacter.Add(player, networkObject);
            if (!FirstSpawn)
            {
                _runner.Spawn(Fishspawn);
                FirstSpawn = true;
            }
            lobbyMenu.SetActive(false);

        }
    }
    public void OnInput(NetworkRunner runner,NetworkInput input)
    {
        var data = new NetworkInputData();
        
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            data.gunChange = (byte)1;
            Debug.Log("Pess1");
        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            data.gunChange = (byte)2;
            Debug.Log("Pess2");

        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            data.gunChange = 3;
        }
        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            data.gunChange = 4;
        }
        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            data.gunChange = 5;

        }
        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            data.gunChange = 6;
        }
        data.direction = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        if (_mouseButton0 )
        {
            data.button |= NetworkInputData.MOUSEBUTTON1;
            _mouseButton0 = false;
        }
        if (_mouseButton0Up)
        {
            data.button |= NetworkInputData.MOUSEBUTTON2;
            _mouseButton0Up = false;
        }
        
        //ตำแหน่งใหม่
        if (TestButton.instancel.Switch)
        {
            if (TestButton.instancel.LastPos == 1)
            {
                data.LastPose = 1;
            }
            if (TestButton.instancel.LastPos == 2)
            {
                data.LastPose = 2;
            }
            if (TestButton.instancel.LastPos == 3)
            {
                data.LastPose = 3;
            }
            if (TestButton.instancel.LastPos == 4)
            {
                data.LastPose = 4;
            }
            //ตำแหน่งใหม่
            if (TestButton.instancel.Pos == 1)
            {
                data.PosChange = 1;
            }
            if (TestButton.instancel.Pos == 2)
            {
                data.PosChange = 2;
            }
            if (TestButton.instancel.Pos == 3)
            {
                data.PosChange = 3;
            }
            if (TestButton.instancel.Pos == 4)
            {
                data.PosChange = 4;
            }
            TestButton.instancel.Switch = false;
           
        }
        input.Set(data);
    }

    public void OnPlayerLeft(NetworkRunner runner, PlayerRef player)
    {
        if (_spawnedCharacter.TryGetValue(player, out NetworkObject networkObject))
        {
            runner.Despawn(networkObject);
            _spawnedCharacter.Remove(player);
        }
    }

    public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input)
    {
    }

    public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason )
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
