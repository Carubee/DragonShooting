using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class CheckUID : NetworkBehaviour
{
    public string UidShooter;
    public static CheckUID instance;
    void Start()
    {
        instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    [Rpc(RpcSources.StateAuthority,RpcTargets.All)]
    public void Rpc_GetUID(string id)
    {
        UidShooter = id;
        Debug.Log(UidShooter);
    }
}
