using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;


public class item : MonoBehaviour
{
    
    public static item instace;

    public bool doubleGold;
    public float TimeDouble;

    public bool spare;
    public float TimeSpare;

    public bool doubleDamage;
    public float TimeDamage;
    public GameObject bomb;
    public GameObject upgrade;
    public GameObject lockTarget;
    public Slider timeMode;

    public Transform pointUpgrade;

    public UILabel buffText;

    void Start()
    {
        instace = this;
        buffText.text = "";
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
        Vector3 mousePoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        if (Input.GetButtonDown("Fire1"))
            Instantiate(lockTarget, new Vector3(mousePoint.x , mousePoint.y, mousePoint.z + 90) , Quaternion.identity);
    }

    public void DragonTracker()
    {
        Instantiate(upgrade, new Vector3(pointUpgrade.position.x, pointUpgrade.position.y), Quaternion.identity); 
        buffText.text = "Bulle Follow";
        

    }
    public void Bomb()
    {

        for(int i = 0; i < 5; i++)
        {
            Instantiate(bomb, new Vector3(Random.Range(-5,6.5f), Random.Range(-3, 3)), Quaternion.identity);
        }
        UtilsClass.ShakeCamera(0.03f, .1f);

    }
    public void Spare()
    {
        spare = true;
        Instantiate(upgrade, new Vector3(pointUpgrade.position.x, pointUpgrade.position.y), Quaternion.identity);
        buffText.text = "There is a 30 percent chance of shooting for free";
    }
    public void Double()
    {
        TimeDouble = 0;
        doubleDamage = true;
        Instantiate(upgrade, new Vector3(pointUpgrade.position.x, pointUpgrade.position.y), Quaternion.identity);
        buffText.text = "Double Damage";
    }
    public void HunterBag()
    {
        doubleGold = true;
        Instantiate(upgrade, new Vector3(pointUpgrade.position.x, pointUpgrade.position.y), Quaternion.identity);
        buffText.text = "Double Gold";
    }
    public void CardCollection()
    {
        Debug.Log("+++");
    }
}
