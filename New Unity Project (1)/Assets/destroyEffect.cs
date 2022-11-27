using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class destroyEffect : MonoBehaviour
{
    public float destroytime;
    public float timeRun;

    [SerializeField] bool dieDragon;
    void Start()
    {
        if (dieDragon)
            gameObject.SetActive(false);
    }

    void Update()
    {
        timeRun += Time.deltaTime;
        if (timeRun >= destroytime)
        {
            Destroy(this.gameObject);
        }
        if (dieDragon)
            this.gameObject.transform.position -= new Vector3(0, 0, 0.01f);
    }

}

