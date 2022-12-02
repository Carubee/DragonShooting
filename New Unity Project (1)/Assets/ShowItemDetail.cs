using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowItemDetail : MonoBehaviour
{
    public itemUse itemUseThis;
    public GameObject showItem;
    public Image image;
    public Text Name;
    public Text Amount;
    public Text Des;
    public static ShowItemDetail instance;
    void Start()
    {
        instance = this;
    }

    void Update()
    {
    }
    public void ShowDetail()
    {
        showItem.SetActive(true);
        Name.text = itemUseThis.Name;
        Amount.text = "จำนวนที่มี : " + GotnewItem.instance.AmountBox.ToString();
        Des.text = itemUseThis.Desciption;
        image.sprite = itemUseThis.ImageName;
    }
}
