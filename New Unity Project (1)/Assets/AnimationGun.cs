using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationGun : MonoBehaviour
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
                fire.SetBool("Holdshot", false);
            }
        }
        if (Input.GetMouseButton(0))
        {
            if (holdfire)
            {
                fire.SetBool("Holdshot", true);
            }
            if (firerate >= gunMode.instance.firerateAmount && !holdfire)
            {
                fire.SetTrigger("Shot");
                firerate = 0;

            }
            
        }
       

    }
}
