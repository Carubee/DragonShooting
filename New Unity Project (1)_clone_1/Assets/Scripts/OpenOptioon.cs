using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

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
    public void Start()
    {
        instant = this;
        CloseOption();
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
        SceneManager.LoadScene(0);
    }
    public void Confirm()
    {
        NoticeBuy.SetActive(true);
        NoticeNotEnough.SetActive(false);
        soundOpen.Play();

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
        soundOpen.Play();

        Bomb = true;
        Confirm();

    }
    public void BuySpareSoht()
    {
        soundOpen.Play();

        SpareShot = true;
        Confirm();

    }
    public void BuyDoubleDamage()
    {
        soundOpen.Play();

        DoubleDamage = true;
        Confirm();

    }
    public void BuyHunterBag()
    {
        soundOpen.Play();

        HunterBag = true;
        Confirm();

    }
    public void buyChose()
    {
        
        if (DragonTracker == true)
        {
            if (PlayerPrefs.GetInt("gold", 1000) >= 150)
            {
                UiTextSpawmControl.Instance.MinusGold(150);
                itemUse.amountDragonTracker += 1;
                buy.Play();
                CloseBeforeBuy();
            }
            else
            {
                NotEnough();
            }
            DragonTracker = false;

        }
        if (Bomb == true)
        {
            if (PlayerPrefs.GetInt("gold", 1000) >= 200)
            {
                UiTextSpawmControl.Instance.MinusGold(200);
                itemUse.amountBomb += 1;
                buy.Play();
                CloseBeforeBuy();
            }
            else
            {
                NotEnough();
            }
            Bomb = false;

        }
        if (SpareShot == true)
        {
            if (PlayerPrefs.GetInt("gold", 1000) >= 25)
            {
                UiTextSpawmControl.Instance.MinusGold(25);
                itemUse.amountSpare += 1;
                buy.Play();
                CloseBeforeBuy();
            }
            else
            {
                NotEnough();
            }
            SpareShot = false;

        }
        if (DoubleDamage == true)
        {
            if (PlayerPrefs.GetInt("gold", 1000) >= 35)
            {
                UiTextSpawmControl.Instance.MinusGold(35);
                itemUse.amountDoubleDamage += 1;
                buy.Play();
                CloseBeforeBuy();
            }
            else
            {
                NotEnough();
            }
            DoubleDamage = false;

        }
        if (HunterBag == true)
        {
            if (PlayerPrefs.GetInt("gold", 1000) >= 350)
            {
                UiTextSpawmControl.Instance.MinusGold(350);
                itemUse.amountHunterBag += 1;
                buy.Play();
                CloseBeforeBuy();
            }
            else
            {
                NotEnough();
            }
            HunterBag = false;

        }
        itemUse.UpdateText();
    }
    
}
