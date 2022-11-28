using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class singleDinamic : MonoBehaviour
{
    public GameObject PrefabToSpawn;
    public bool DestroyWithSpawner;
    private GameObject m_PrefabInstance;

    public  void shoot()
    {
        // Only the server spawns, clients will disable this component on their side
        if (!enabled || PrefabToSpawn == null)
        {
            return;
        }
        // Instantiate the GameObject Instance
        m_PrefabInstance = Instantiate(PrefabToSpawn);

        // Optional, this example applies the spawner's position and rotation to the new instance
        m_PrefabInstance.transform.position = transform.position;
        m_PrefabInstance.transform.rotation = transform.rotation;

        // Get the instance's NetworkObject and Spawn
       
    }
    private void Update()
    {
        if (Input.GetKeyDown("1"))
        {
            shoot();
            Debug.Log("ss");
        }
    }

    
}