using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class AnimationGun : NetworkBehaviour
{
    public Animator fire;
    public float firerate;
    public bool holdfire;
    void Start()
    {
        fire = GetComponent<Animator>();
        firerate = 0.5f;

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(!gunMode.instance.canPlay) return;

        if (firerate <= 2)
        {
            firerate += Time.deltaTime;
        }
        if (!Input.GetMouseButton(0))
        {
            if (holdfire)
            {
                Rpc_animHoldDis();
            }
        }
        if (Input.GetMouseButton(0))
        {
            if (holdfire)
            {
                Rpc_animHold();
            }
            if (firerate >= gunMode.instance.firerateAmount && !holdfire)
            {
                Rpc_anim();
                firerate = 0;

            }
            
        }
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_anim()
    {
        fire.SetTrigger("Shot");
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_animHold()
    {
        fire.SetBool("Holdshot", true);

    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_animHoldDis()
    {
        fire.SetBool("Holdshot", false);

    }
}
