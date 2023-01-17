using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MouseHover : MonoBehaviour 
{
    public static MouseHover instace;
    [SerializeField] GameObject Bomb, spare, damage, gold;
    public int numdes;
    public bool hover;
    public float timeHover;
    public void Start()
    {
        instace = this;
    }
    public void Update()
    {
        if (hover)
        {
            timeHover += Time.deltaTime;
            if (timeHover > 0)
            {
                ShowDes(numdes);
                timeHover = 1;
            }
        }
        else
        {
            timeHover = 0;
            Close();
        }
    }
    public void ShowDes(int num)
    {
        switch (num)
        {
            case 1:
                Bomb.SetActive(true);
                break;
            case 2:
                spare.SetActive(true);
                break;
            case 3:
                damage.SetActive(true);
                break;
            case 4:
                gold.SetActive(true);
                break;
        }
    }
    public void Close()
    {
        hover = false;
        Bomb.SetActive(false);
        spare.SetActive(false);
        damage.SetActive(false);
        gold.SetActive(false);
    }
    public void OnBomb()
    {
        hover = true;
        numdes = 1;
    } 
    public void OnSpare()
    {
        hover = true;
        numdes = 2;
    }
    public void OnDamage()
    {
        hover = true;
        numdes = 3;
    }
    public void OnGold()
    {
        hover = true;
        numdes = 4;
    }
}
