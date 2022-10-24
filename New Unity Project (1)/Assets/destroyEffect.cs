using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class destroyEffect : NetworkBehaviour
{
    public float destroytime;
    public float timeRun;
    void Start()
    {
            
    }

    void Update()
    {
        timeRun += Time.deltaTime;
        if (timeRun >= destroytime)
        {
            Destroy(this.gameObject);
        }
    }

}

