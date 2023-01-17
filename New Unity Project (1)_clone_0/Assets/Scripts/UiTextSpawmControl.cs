using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Fusion;

public class UiTextSpawmControl : MonoBehaviour
{

    public GameObject _UiRoot;
    public GameObject _TextChil;
    public GameObject coin;
    public UILabel TextGold;
    public UILabel TextCostGun;

    public UISprite EXPbar;
    public UILabel TextLevel;
    public Image RocketImg;

    public static UiTextSpawmControl Instance;

    public GameObject damageText;
    public GameObject damageIcon;
    void Start()
    {
        Instance = this;
        
        
        EXPbar.fillAmount = PlayerPrefs.GetFloat("EXP") / (450 + 500 * PlayerPrefs.GetInt("level", 1));
        TextLevel.text = PlayerPrefs.GetInt("level", 1) + "";
    }

    public void CallTextEff(Vector3 _pos, int gold)
    {
        

        if (OpenOptioon.instant.GoldSwitch)
        {
            GameObject obj = NGUITools.AddChild(_UiRoot, _TextChil);
            obj.GetComponent<effScoreTextControl>().InitEffScore(_pos, gold);

            GameObject obj2 = NGUITools.AddChild(_UiRoot, coin);
            obj2.GetComponent<effScoreTextControl>().InitEffCoin(new Vector3(_pos.x - 0.3f, _pos.y));
        }
        else
        {
            GameObject obj = NGUITools.AddChild(_UiRoot, damageText);
            obj.GetComponent<effScoreTextControl>().InitEffScore(_pos, gold);

            GameObject obj2 = NGUITools.AddChild(_UiRoot, damageIcon);
            obj2.GetComponent<effScoreTextControl>().InitEffCoin(new Vector3(_pos.x + 0.2f, _pos.y));
        }

        //PushGold(gold);
        //PlayerPrefs.SetFloat("EXP", PlayerPrefs.GetFloat("EXP") + gold);
        //EXPbar.fillAmount = PlayerPrefs.GetFloat("EXP") / (450 + 500 * PlayerPrefs.GetInt("level", 1));
        //RocketImg.fillAmount += (float)((float)gold / 1000);
        //if (RocketImg.fillAmount == 1)
        //{
        //    //GunControl.Instance.ChangtoRocket();
        //    RocketImg.fillAmount = 0;
        //}

        //if (EXPbar.fillAmount == 1)
        //{
        //    PlayerPrefs.SetInt("level", PlayerPrefs.GetInt("level", 1) + 1);
        //    PlayerPrefs.SetFloat("EXP", 0);
        //    TextLevel.text = PlayerPrefs.GetInt("level", 1) + "";
        //    FishManage.Instance.ChangeToBonus();
        //}
    }

    public void PushGold(int gold)
    {
        PlayerPrefs.SetInt("gold", PlayerPrefs.GetInt("gold",200) + gold);
        
        
        PlayerPrefs.Save();

    }

    public void MinusGold(int gold)
    {

        PlayerPrefs.SetInt("gold", PlayerPrefs.GetInt("gold", 200) - gold);
        
        
        PlayerPrefs.Save();

    }
    public void costText(int cost)
    {
       
        
    }
}
