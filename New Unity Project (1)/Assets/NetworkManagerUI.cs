using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;

public class NetworkManagerUI : NetworkBehaviour
{
    
    [SerializeField] private GameObject playerGun;

    public void StartClient()
    {
        gunMode.instance.Rpc_Spawn(1);
        gunMode.instance.canPlay = true;
    }
    public void StartClient2()
    {
        gunMode.instance.Rpc_Spawn(2);
        gunMode.instance.canPlay = true;

    }
    public void StartClient3()
    {
        gunMode.instance.Rpc_Spawn(3);
        gunMode.instance.canPlay = true;

    }
    public void StartClient4()
    {
        gunMode.instance.Rpc_Spawn(4);
        gunMode.instance.canPlay = true;

    }

}
