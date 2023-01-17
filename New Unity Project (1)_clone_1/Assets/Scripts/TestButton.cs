using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;

public class TestButton : MonoBehaviour
{
    public GameObject objectFollow;
    public GameObject[] ButtonOther;
    public GameObject[] ButtonPlayer;
    public GameObject[] GunSelect;
    public static TestButton instancel;
    public UILabel[] ButtonOtherText;
    public byte Pos;
    public byte LastPos;
    public bool Switch;
    public string Name;
    [SerializeField] GameObject Item;
    public void Start()
    {
        instancel = this;
        Name = PlayerPrefs.GetString("PlayerNickName");
        
    }
    public void Button()
    {
        LastPos = Pos;
        Pos = 1;
        ChangeButton(Pos,LastPos);
        objectFollow.transform.position = new Vector3(-3.129f, -3.311f, -4.55f);
    } 
    public void Button2()
    {
        LastPos = Pos;
        Pos = 2;
        ChangeButton(Pos,LastPos);
        objectFollow.transform.position = new Vector3(3.27f, -3.273f, -4.55f);
    }
    public void Button3()
    {
        LastPos = Pos;
        Pos = 3;
        ChangeButton(Pos,LastPos);
        objectFollow.transform.position = new Vector3(-3.168f, 3.25f, -4.55f);
    }
    public void Button4()
    {
        LastPos = Pos;
        Pos = 4;
        ChangeButton(Pos,LastPos);
        objectFollow.transform.position = new Vector3(3.222f, 3.286f, -4.55f);

    }
    public void ChangeButton(int SeatNum , int last)
    {
        
        Switch = true;
        Item.SetActive(true);
        SeatNum -= 1;
       
    }
   
}
