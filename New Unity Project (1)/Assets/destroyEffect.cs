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
        if (!IsOwner) return;
        timeRun += Time.deltaTime;
        if (timeRun >= destroytime)
        {
            this.gameObject.GetComponent<NetworkObject>().Despawn(true);
            Destroy(this.gameObject);
        }
    }

}

