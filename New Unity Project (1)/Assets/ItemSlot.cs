using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class ItemSlot : MonoBehaviour
{
    public itemUse itemUse;

    public Text name;
    public Text amount;
    public TMP_Text amountTmp;
    public Text Des;
    public Image artwork;
    void Start()
    {
        //scriptable = Resources.Load<Scriptable>("item/Box");
        artwork.sprite = itemUse.ImageName;
        itemUse.Amount = GotnewItem.instance.AmountBox;
    }
    private void Update()
    {
        amountTmp.text = GotnewItem.instance.AmountBox.ToString();
    }

    public void UpdateText()
    {
        name.text = itemUse.name;
        amount.text = itemUse.Amount.ToString();
        Des.text = itemUse.Desciption;
        artwork.sprite = itemUse.ImageName;
    }
}
