using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GotnewItem : MonoBehaviour
{
    public GameObject Box;
    public GameObject Inventory;
    public static GotnewItem instance;

    void Start()
    {
        instance = this;
        Box.SetActive(true);
        Box.SetActive(false);
    }

    void Update()
    {
        
    }
    public void closeUI()
    {
        Box.gameObject.SetActive(false);
    }
    public void closeInventory()
    {
        Box.gameObject.SetActive(false);
        Inventory.gameObject.SetActive(false);
        gunMode.instance.canPlay = true;

    }
    public void openInventory()
    {
        Box.gameObject.SetActive(false);
        Inventory.SetActive(true);
        gunMode.instance.canPlay = false;
    }
    
}
