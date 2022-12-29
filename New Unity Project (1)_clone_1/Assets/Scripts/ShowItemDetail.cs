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
    int amountItemInt;
    float amountItemfloat;
    [SerializeField] GameObject openBox;
    [SerializeField] Slider sliderOpen;
    [SerializeField] Text amount;
    void Start()
    {
        instance = this;
    }
    void HandleSliderValueChanged(float value)
    {
        amount.text = "Item : " + sliderOpen.value.ToString("0") + "/ " + sliderOpen.maxValue;
        amountItemfloat = sliderOpen.value;
        amountItemInt = Mathf.RoundToInt(amountItemfloat);
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
        sliderOpen.maxValue = GotnewItem.instance.AmountBox;
        amount.text = "Item : " + sliderOpen.value + " / " + sliderOpen.maxValue;
        sliderOpen.onValueChanged.AddListener(HandleSliderValueChanged);
    }
    public void UseItem()
    {
        openBox.SetActive(true);
    }
    public void CloseOpenBox() {

        openBox.SetActive(false);
    }
    public void OpenBox() {

        GotnewItem.instance.AmountBox -= amountItemInt;
        Amount.text = "จำนวนที่มี : " + GotnewItem.instance.AmountBox.ToString();
        openBox.SetActive(false);

    }
    public void Plus()
    {
        sliderOpen.value += 1;
        amount.text = "Item : " + sliderOpen.value.ToString("0") + "/ " + sliderOpen.maxValue;
    }
    public void Minus()
    {
        sliderOpen.value -= 1;
        amount.text = "Item : " + sliderOpen.value.ToString("0") + "/ " + sliderOpen.maxValue;
    }
}
