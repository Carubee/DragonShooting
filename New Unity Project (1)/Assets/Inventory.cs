using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    [SerializeField] GameObject[] itemEmpty;
    [SerializeField] GameObject inventory;
    [SerializeField] GameObject itemFill;
    void Start()
    {
        for (int i = 0; i < 5; i++)
        {
            GameObject itemF = Instantiate(itemFill,itemEmpty[i].transform.position,Quaternion.identity) as GameObject;
            itemF.transform.SetParent(itemEmpty[i].transform,true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
