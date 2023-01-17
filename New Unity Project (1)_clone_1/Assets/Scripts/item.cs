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

    [SerializeField] UILabel DoubleGold;
    [SerializeField] UILabel DoubleDamage;
    [SerializeField] UILabel SpareShot;

    [SerializeField] GameObject ButtonDoubleGold;
    [SerializeField] GameObject ButtonDoubleDamage;
    [SerializeField] GameObject ButtonSpareShot;

    [SerializeField] UILabel TextGold;
    void Start()
    {
        instace = this;
        buffText.text = "";

        amountBomb = PlayerPrefs.GetInt("Bomb", 0) ;
        amountSpare = PlayerPrefs.GetInt("Spare", 0);
        amountDoubleDamage = PlayerPrefs.GetInt("DoubleDamage", 0);
        amountHunterBag = PlayerPrefs.GetInt("DoubleGold", 0); 

        UpdateText();
    }

    void Update()
    {
        if(doubleGold == true )
        {
            TimeDouble -= Time.deltaTime;
            int TimeCount = Mathf.RoundToInt(TimeDouble);
            DoubleGold.text = TimeCount.ToString();
            ButtonDoubleGold.GetComponent<UIButton>().enabled = false;
            if (TimeDouble <= 0)
            {
                ButtonDoubleGold.GetComponent<UIButton>().enabled = true;
                doubleGold = false;
                closeEffect();
                DoubleGold.text = "";
                

            }
        }
        if (doubleDamage == true )
        {
           
            TimeDamage -= Time.deltaTime;
            int TimeCount = Mathf.RoundToInt(TimeDamage);
            DoubleDamage.text = TimeCount.ToString();
            ButtonDoubleDamage.GetComponent<UIButton>().enabled = false;
            if (TimeDamage <= 0)
            {
                ButtonDoubleDamage.GetComponent<UIButton>().enabled = true;
                doubleDamage = false;
                closeEffect();
                DoubleDamage.text = "";
                

            }
        }
        if (spare == true )
        {
            TimeSpare -= Time.deltaTime;
            int TimeCount = Mathf.RoundToInt(TimeSpare);
            SpareShot.text = TimeCount.ToString();
            ButtonSpareShot.GetComponent<UIButton>().enabled = false;

            if (TimeSpare <= 0)
            {
                ButtonSpareShot.GetComponent<UIButton>().enabled = true;
                spare = false;
                closeEffect();
                SpareShot.text = "";
                

            }

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
        if (PlayerPrefs.GetInt("Bomb", 0) > 0)
        {
            PlayerPrefs.SetInt("Bomb", PlayerPrefs.GetInt("Bomb") - 1);
            PlayerPrefs.Save();
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
        if (PlayerPrefs.GetInt("Spare", 0) > 0)
        {
            PlayerPrefs.SetInt("Spare", PlayerPrefs.GetInt("Spare") - 1);
            PlayerPrefs.Save();
            UpdateText();
            TimeSpare = 10;
            spare = true;
            buffText.text = "30 percent Shoot Free";

        }
        Effect();

    }
    public void Double()
    {
        if (PlayerPrefs.GetInt("DoubleDamage", 0) > 0)
        {
            PlayerPrefs.SetInt("DoubleDamage", PlayerPrefs.GetInt("DoubleDamage") - 1);
            PlayerPrefs.Save();
            UpdateText();
            gunMode.instance.DoubleDamage(0);
            TimeDamage = 10;
            doubleDamage = true;

            Effect();
        }
    }
    public void HunterBag()
    {
        if (PlayerPrefs.GetInt("DoubleGold", 0) > 0)
        {
            PlayerPrefs.SetInt("DoubleGold", PlayerPrefs.GetInt("DoubleGold") - 1);
            PlayerPrefs.Save();
            UpdateText();
            TimeDouble = 10;
            doubleGold = true;

            buffText.text = "Double Gold";
        }
        Effect();

    }
    
    public void UpdateText()
    {
        itemBombText.text = PlayerPrefs.GetInt("Bomb", 0).ToString();
        itemSpareText.text = PlayerPrefs.GetInt("Spare", 0).ToString();
        itemDoubleDamageText.text = PlayerPrefs.GetInt("DoubleDamage", 0).ToString();
        itemDoubleGoldText.text = PlayerPrefs.GetInt("DoubleGold", 0).ToString();
        TextGold.text = PlayerPrefs.GetInt("coin").ToString();
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
    
