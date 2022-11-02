using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;

public class NetworkManagerUI : NetworkBehaviour
{
    [SerializeField] private Button serverBtn;
    [SerializeField] private Button hostBtn;
    [SerializeField] private Button clientBtn;
    [SerializeField] private GameObject playerGun;
    private void Awake()
    {
        serverBtn.onClick.AddListener(() =>
        {
            NetworkManager.Singleton.StartServer();
        });
        hostBtn.onClick.AddListener(() =>
        {
            NetworkManager.Singleton.StartHost();

        });
        clientBtn.onClick.AddListener(() =>
        {
            NetworkManager.Singleton.StartClient();

        });
    }

    
        
    
    public void StartClient()
    {
        gunMode.instance.SelectSpawn(1);
        gunMode.instance.canPlay = true;
    }
    public void StartClient2()
    {
        gunMode.instance.SelectSpawn(2);
        gunMode.instance.canPlay = true;

    }
    public void StartClient3()
    {
        gunMode.instance.SelectSpawn(3);
        gunMode.instance.canPlay = true;

    }
    public void StartClient4()
    {
        gunMode.instance.SelectSpawn(4);
        gunMode.instance.canPlay = true;

    }

}
