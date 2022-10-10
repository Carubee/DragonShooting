﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OpenOptioon : MonoBehaviour
{
    [SerializeField] GameObject option;
    [SerializeField] GameObject shop;
    [SerializeField] GameObject NoticeBuy;
    [SerializeField] GameObject NoticeNotEnough;

    bool DragonTracker;
    bool Bomb;
    bool SpareShot;
    bool DoubleDamage;
    bool HunterBag;

    [SerializeField] item itemUse;
    

    public void OpenOption()
    {
        option.SetActive(true);
    }
    public void ShopOption()
    {
        shop.SetActive(true);
    }
    public void CloseOption()
    {
        option.SetActive(false);
        shop.SetActive(false);
        NoticeBuy.SetActive(false);
        NoticeNotEnough.SetActive(false);
    }
    public void CloseBeforeBuy()
    {
        NoticeBuy.SetActive(false);
    }
    public void LeaveGame()
    {
        SceneManager.LoadScene(1);
    }
    public void Confirm()
    {
        NoticeBuy.SetActive(true);
        NoticeNotEnough.SetActive(false);

    }
    public void NotEnough()
    {
        NoticeNotEnough.SetActive(true);
        NoticeBuy.SetActive(false);
    }
    public void BuyDragonTracker()
    {
        DragonTracker = true;
        Confirm();
    }
    public void BuyBomb()
    {
        Bomb = true;
        OpenOption();

    }
    public void BuySpareSoht()
    {
        SpareShot = true;
        Confirm();

    }
    public void BuyDoubleDamage()
    {
        DoubleDamage = true;
        Confirm();

    }
    public void BuyHunterBag()
    {
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
            if (PlayerPrefs.GetInt("gold", 1000) >= 45)
            {
                UiTextSpawmControl.Instance.MinusGold(45);
                itemUse.amountBomb += 1;
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
                UiTextSpawmControl.Instance.MinusGold(35);
                itemUse.amountHunterBag += 1;
                CloseBeforeBuy();
            }
            else
            {
                NotEnough();
            }
            HunterBag = false;

        }
    }
}
