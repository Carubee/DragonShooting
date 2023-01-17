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
        
    }

    // Update is called once per frame
    void Update()
    {
        if (GotnewItem.instance.AmountBox > 0)
        {
                GameObject itemF = Instantiate(itemFill, itemEmpty[0].transform.position, Quaternion.identity) as GameObject;
                itemF.transform.SetParent(itemEmpty[0].transform, true);
            
        }
    }
}
