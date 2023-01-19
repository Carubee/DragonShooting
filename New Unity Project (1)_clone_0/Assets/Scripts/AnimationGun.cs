using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public class AnimationGun : NetworkBehaviour
{
    public Animator fire;
    public float firerate;
    public bool holdfire;
    public float timeLaser;
    public float firerateLaser;
    bool laserSwitch;
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
        if (!Input.GetMouseButton(0) && gunMode.instance.gunNumber != 6)
        {
            if (holdfire)
            {
                Rpc_animHoldDis();
            }
        }
        if (Input.GetMouseButton(0) && gunMode.instance.gunNumber != 6 )
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
        if (firerateLaser < 1)
        {
            firerateLaser += Time.deltaTime;
        }

        if(Input.GetMouseButton(0) && firerateLaser >= 1 && gunMode.instance.gunNumber == 6 && PlayerPrefs.GetInt("coin") > 75)
        {
            laserSwitch = true;
           
        }
        if (laserSwitch)
        {
            Rpc_animHold();
            timeLaser += Time.deltaTime;
            if (timeLaser > 0.5)
            {
                Rpc_animHoldDis();
                timeLaser = 0;
                firerateLaser = 0;
                laserSwitch = false;
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
