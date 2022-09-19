using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class item : MonoBehaviour
{
    
    public static item instace;

    public bool doubleGold;
    public float TimeDouble;

    public bool spare;
    public float TimeSpare;

    public bool doubleDamage;
    public float TimeDamage;

    public Slider timeMode;

    void Start()
    {
        instace = this;
    }

    void Update()
    {
        if(doubleGold == true)
        {
            TimeDouble += Time.deltaTime;
            timeMode.value = TimeDouble;

            if (TimeDouble >= 10)
                doubleGold = false;
        }
        if (doubleDamage == true)
        {
            TimeDamage += Time.deltaTime;
            if (TimeDamage >= 10)
                doubleDamage = false;
        }
        if (spare == true)
        {
            TimeSpare += Time.deltaTime;
            if (TimeSpare >= 10)
                spare = false;
        }
    }

    public void DragonTracker()
    {
        Debug.Log("+++"); 
    }
    public void Bomb()
    {
        Debug.Log("+++");
    }
    public void Spare()
    {
        spare = true;
        Debug.Log("+++");
    }
    public void Double()
    {
        TimeDouble = 0;
        doubleDamage = true;
        Debug.Log("+++");
    }
    public void HunterBag()
    {
        doubleGold = true;
        Debug.Log("+++");
    }
    public void CardCollection()
    {
        Debug.Log("+++");
    }
}
