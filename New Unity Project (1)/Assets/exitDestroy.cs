using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class exitDestroy : NetworkBehaviour
{
    void Start()
    {

    }

    void Update()
    {

    }
    private void OnTriggerExit2D(Collider2D collision)
    {

        if (collision.gameObject.tag == "fish")
        {
            Destroy(collision.gameObject);
            collision.gameObject.GetComponent<NetworkObject>().Despawn();
        }
    }
    
}
