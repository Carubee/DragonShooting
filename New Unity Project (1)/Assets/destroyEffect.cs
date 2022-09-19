using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyEffect : MonoBehaviour
{
    public float destroytime;
    void Start()
    {
        
        Destroy(this.gameObject, destroytime);
    }

    void Update()
    {
        
    }
}
