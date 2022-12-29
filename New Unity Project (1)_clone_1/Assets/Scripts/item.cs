using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
using Fusion;


public class item : NetworkBehaviour
{
    public static item instace;

    public bool doubleGold;
    public float TimeDouble;

    public bool spare;
    public float TimeSpare;

    public bool tracker;
    public float Timetracker;

    public bool doubleDamage;
    public float TimeDamage;
    public GameObject bomb;
    public GameObject upgrade;
    public GameObject lockTarget;
    public Slider timeMode;

    public Transform pointUpgrade;

    public UILabel buffText;

    public UILabel itemTrackText;
    public UILabel itemBombText;
    public UILabel itemSpareText;
    public UILabel itemDoubleDamageText;
    public UILabel itemDoubleGoldText;

    public int amountDragonTracker;
    public int amountBomb;
    public int amountSpare;
    public int amountDoubleDamage;
    public int amountHunterBag;

    void Start()
    {
        instace = this;
        buffText.text = "";

        amountDragonTracker = 3;
        amountBomb = 3;
        amountSpare = 3;
        amountDoubleDamage = 3;
        amountHunterBag = 3;

        UpdateText();
    }

    void Update()
    {
        if(doubleGold == true )
        {
            
            TimeDouble += Time.deltaTime;
            timeMode.value = TimeDouble;
            if (TimeDouble >= 10)
            {
                doubleGold = false;
                closeEffect();
            }
        }
        if (doubleDamage == true )
        {
            TimeDamage += Time.deltaTime;
            timeMode.value = TimeDamage;
            if (TimeDamage >= 10)
            {
                doubleDamage = false;
                closeEffect();
            }
        }
        if (spare == true )
        {
            
            TimeSpare += Time.deltaTime;
            timeMode.value = TimeSpare;
            if (TimeSpare >= 10)
            {
                spare = false;
                closeEffect();
            }
           
        }
        if (tracker == true )
        {
            gunMode.instance.spareEffect.SetActive(false);
            Timetracker += Time.deltaTime;
            timeMode.value = Timetracker;
            if (Timetracker >= 10)
                tracker = false;
        }
        Vector3 mousePoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        //if (Input.GetButtonDown("Fire1"))
            //Instantiate(lockTarget, new Vector3(mousePoint.x , mousePoint.y, mousePoint.z + 90) , Quaternion.identity);
    }

    public void DragonTracker()
    {
        if (amountDragonTracker > 0)
        {
            amountDragonTracker -= 1;
            UpdateText();
            buffText.text = "Bullet Follow";
            tracker = true;
            Timetracker = 0;
        }
        Effect();

    }
    public void BombCilent()
    {
        if (amountBomb > 0)
        {
            amountBomb -= 1;
            gunMode.instance.BombTrigger();
            UpdateText();

        }
    }
    public void Rpc_Bomb(int amount)
    {
        for (int i = 0; i <= amount; i++)
        {
            Instantiate(bomb, new Vector3(Random.Range(-3, 3), Random.Range(-3, 3)), Quaternion.Euler(new Vector3(-90, 0, 0)));           
        }
    }
    public void Spare()
    {
        if (amountSpare > 0)
        {
            amountSpare -= 1;
            UpdateText();
            TimeSpare = 0;
            spare = true;
            buffText.text = "30 percent Shoot Free";

        }
        Effect();

    }
    public void Double()
    {
        if (amountDoubleDamage > 0)
        {
            amountDoubleDamage -= 1;
            UpdateText();
            gunMode.instance.DoubleDamage(0);
            TimeDamage = 0;
            doubleDamage = true;

            Effect();
        }
    }
    public void HunterBag()
    {
        if (amountHunterBag > 0)
        {
            amountHunterBag -= 1;
            UpdateText();
            TimeDouble = 0;
            doubleGold = true;

            buffText.text = "Double Gold";
        }
        Effect();

    }
    public void CardCollection()
    {
    }
    public void UpdateText()
    {
        itemTrackText.text = amountDragonTracker.ToString();
        itemBombText.text = amountBomb.ToString();
        itemSpareText.text = amountSpare.ToString();
        itemDoubleDamageText.text = amountDoubleDamage.ToString();
        itemDoubleGoldText.text = amountHunterBag.ToString();
    }
    public void Effect()
    {
        gunMode.instance.Rpc_effectUse();
    }
    public void closeEffect()
    {
        gunMode.instance.Rpc_effectOut();
    }
   
        
    }
    
