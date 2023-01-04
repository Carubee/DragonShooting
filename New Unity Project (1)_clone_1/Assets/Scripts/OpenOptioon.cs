using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Fusion;

public class OpenOptioon : MonoBehaviour
{
    [SerializeField] GameObject option;
    [SerializeField] GameObject shop;
    [SerializeField] GameObject inventory;
    [SerializeField] GameObject NoticeBuy;
    [SerializeField] GameObject NoticeNotEnough;
    bool DragonTracker;
    bool Bomb;
    bool SpareShot;
    bool DoubleDamage;
    bool HunterBag;

    [SerializeField] item itemUse;
    public static OpenOptioon instant;
    public bool openMenu;

    [SerializeField] AudioSource soundOpen;
    [SerializeField] AudioSource closeOpen;
    [SerializeField] AudioSource buy;

    [SerializeField] Slider sliderOpen;
    [SerializeField] Text amount;
    [SerializeField] Text amountPrice;

    int amountItemInt;
    float amountItemfloat;
    public void Start()
    {
        instant = this;
        CloseOption();
    }
    void HandleSliderValueChanged(float value)
    {
        amount.text = "Buy : " + sliderOpen.value.ToString("0") + "/ " + sliderOpen.maxValue;
        amountItemfloat = sliderOpen.value;
        amountItemInt = Mathf.RoundToInt(amountItemfloat);
        
        if (Bomb == true)
        {
            amountPrice.text = "Price : " + amountItemInt * 200;
        }
        if (SpareShot == true)
        {
            amountPrice.text = "Price : " + amountItemInt * 25;
        }
        if (DoubleDamage == true)
        {
            amountPrice.text = "Price : " + amountItemInt * 35;
        }
        if (HunterBag == true)
        {
            amountPrice.text = "Price : " + amountItemInt * 350;
        }
    }
    public void ShowDetail()
    {
        sliderOpen.maxValue = amountItemfloat;
        amount.text = "Buy : " + sliderOpen.value + " / " + sliderOpen.maxValue;
        sliderOpen.onValueChanged.AddListener(HandleSliderValueChanged);
    }
    public void Update()
    {
        if (openMenu)
        {
            gunMode.instance.canPlay = false;
        }
    }
    public void OpenIventory()
    {
        inventory.SetActive(true);
        openMenu = true;
        soundOpen.Play();
    }
    public void OpenOption()
    {
        option.SetActive(true);
        openMenu = true;
        soundOpen.Play();
    }
    public void ShopOption()
    {
        shop.SetActive(true);
        openMenu = true;
        soundOpen.Play();

    }
    public void CloseOption()
    {
        option.SetActive(false);
        shop.SetActive(false);
        NoticeBuy.SetActive(false);
        NoticeNotEnough.SetActive(false);
        openMenu = false;
        gunMode.instance.canPlay = true;
        soundOpen.Play();

    }
    public void CloseBeforeBuy()
    {
        NoticeBuy.SetActive(false);
        NoticeNotEnough.SetActive(false);
        soundOpen.Play();

    }

    public void LeaveGame()
    {
        gunMode.instance.Quit();
        SceneManager.LoadScene(0);
    }
    public void Confirm()
    {
        NoticeBuy.SetActive(true);
        NoticeNotEnough.SetActive(false);
        soundOpen.Play();
        ShowDetail();
    }
    public void NotEnough()
    {
        NoticeNotEnough.SetActive(true);
        NoticeBuy.SetActive(false);
        soundOpen.Play();

    }
    public void BuyDragonTracker()
    {
        soundOpen.Play();

        DragonTracker = true;
        Confirm();
        
    }
    public void BuyBomb()
    {
        amountItemfloat = PlayerPrefs.GetInt("gold", 1000) / 200;

        soundOpen.Play();

        Bomb = true;
        Confirm();

    }
    public void BuySpareSoht()
    {
        amountItemfloat = PlayerPrefs.GetInt("gold", 1000) / 25;

        soundOpen.Play();

        SpareShot = true;
        Confirm();

    }
    public void BuyDoubleDamage()
    {
        amountItemfloat = PlayerPrefs.GetInt("gold", 1000) / 35;

        soundOpen.Play();

        DoubleDamage = true;
        Confirm();

    }
    public void BuyHunterBag()
    {
        amountItemfloat = PlayerPrefs.GetInt("gold", 1000) / 350;

        soundOpen.Play();

        HunterBag = true;
        Confirm();

    }
    public void buyChose()
    {
        
        if (DragonTracker == true)
        {
            
                itemUse.amountDragonTracker += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            
            DragonTracker = false;

        }
        if (Bomb == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 200);
            itemUse.amountBomb += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            
            Bomb = false;

        }
        if (SpareShot == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 25);

            itemUse.amountSpare += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
           
            SpareShot = false;

        }
        if (DoubleDamage == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 35);

            itemUse.amountDoubleDamage += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            
            DoubleDamage = false;

        }
        if (HunterBag == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 350);

            itemUse.amountHunterBag += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            
            HunterBag = false;

        }
        itemUse.UpdateText();
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
