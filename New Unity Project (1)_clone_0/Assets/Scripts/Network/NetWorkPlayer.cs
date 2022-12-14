using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class NetWorkPlayer : NetworkBehaviour, IPlayerLeft
{
    public static NetWorkPlayer Local { get; set; }
    void Start()
    {
        
    }

    public override void Spawned()
    {
        if (Object.HasInputAuthority)
        {
            Local = this;
            Debug.Log("Spawn");
        }
        else Debug.Log("Spawn Other");
    }
    public void PlayerLeft(PlayerRef player)
    {
        if(player == Object.InputAuthority)
        {
            Runner.Despawn(Object);
        }
    }
}
