using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyEffect : MonoBehaviour
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

