using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class exitDestroy : MonoBehaviour
{
    void Start()
    {

    }

    void Update()
    {

    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        Destroy(collision.gameObject);

        if (collision.gameObject.tag == "fish")
        {
            //Destroy(collision.gameObject);
   
        }
    }
    
}
