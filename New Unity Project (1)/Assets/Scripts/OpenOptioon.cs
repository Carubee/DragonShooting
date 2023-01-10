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
    [SerializeField] Image image;
    int amountItemInt;
    float amountItemfloat;
    [SerializeField] Text nameItem;
    public void Start()
    {
        instant = this;
        CloseOption();
    }
    void HandleSliderValueChanged(float value)
    {
        amountItemfloat = sliderOpen.value;
        amountItemInt = Mathf.RoundToInt(amountItemfloat);
        amount.text = "Buy : " + amountItemInt + "/ " + sliderOpen.maxValue;


        if (Bomb == true)
        {
            amountPrice.text =  (amountItemInt * 200).ToString();
        }
        if (SpareShot == true)
        {
            amountPrice.text =  (amountItemInt * 25).ToString();
        }
        if (DoubleDamage == true)
        {
            amountPrice.text = (amountItemInt * 35).ToString();
        }
        if (HunterBag == true)
        {
            amountPrice.text =  (amountItemInt * 350).ToString();
        }
    }
    public void ShowDetail()
    {
        sliderOpen.maxValue = amountItemfloat;
        amount.text = "Buy : " + amountItemInt + "/ " + sliderOpen.maxValue;
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

        if (Bomb == true)
        {
            Bomb = false;
        }
        if (SpareShot == true)
        {
            SpareShot = false;
        }
        if (DoubleDamage == true)
        {
            DoubleDamage = false;
        }
        if (HunterBag == true)
        {
            HunterBag = false;
        }
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
        if (Bomb == true)
        {
            amountPrice.text = (amountItemInt * 200).ToString();
            nameItem.text = "Bomb";
        }
        if (SpareShot == true)
        {
            amountPrice.text = (amountItemInt * 25).ToString();
            nameItem.text = "Spare Shot";

        }
        if (DoubleDamage == true)
        {
            amountPrice.text = (amountItemInt * 35).ToString();
            nameItem.text = "Double Damage";

        }
        if (HunterBag == true)
        {
            amountPrice.text = (amountItemInt * 350).ToString();
            nameItem.text = "Double Gold";

        }
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
            

        }
        if (Bomb == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 200);
            itemUse.amountBomb += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            

        }
        if (SpareShot == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 25);

            itemUse.amountSpare += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
           

        }
        if (DoubleDamage == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 35);

            itemUse.amountDoubleDamage += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            

        }
        if (HunterBag == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 350);

            itemUse.amountHunterBag += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
            

        }
        itemUse.UpdateText();
    }
    public void Plus()
    {
        if (amountItemInt < sliderOpen.maxValue)
        {
            amountItemInt += 1;
            sliderOpen.value = amountItemInt;
            amount.text = "Buy : " + amountItemInt + "/ " + sliderOpen.maxValue;
        }
    }
    public void Minus()
    {
        if (amountItemInt > 0)
        {
            amountItemInt -= 1;
            sliderOpen.value = amountItemInt;
            amount.text = "Buy : " + amountItemInt + "/ " + sliderOpen.maxValue;
        }
    }

}
