using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GotnewItem : MonoBehaviour
{
    public GameObject Box;
    public GameObject Inventory;
    public static GotnewItem instance;
    [SerializeField] Text namePlayer;

    void Start()
    {
        instance = this;
        Box.SetActive(true);
        Box.SetActive(false);
        namePlayer.text =  NameInput.Instance.input;

    }

    void Update()
    {
        
    }
    public void closeUI()
    {
        Box.gameObject.SetActive(false);
        gunMode.instance.canPlay = true;
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
