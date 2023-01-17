using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;

public class AnimationSelectGun : MonoBehaviour
{
    [SerializeField] UILabel cost;
    public int costValue;
    int lastpick;
    public GameObject[] GunUI;
    public int gunNumberScript;
    public static AnimationSelectGun instance;
    void Start()
    {
        instance = this;
    }

    void Update()
    {
        switch (lastpick)
        {
            case 1:
                GunUI[0].transform.localScale = new Vector2(1f, 1f);
                break;
            case 2:
                GunUI[1].transform.localScale = new Vector2(1f, 1f);
                break;
            case 3:
                GunUI[2].transform.localScale = new Vector2(1f, 1f);
                break;
            case 4:
                GunUI[3].transform.localScale = new Vector2(1f, 1f);
                break;
            case 5:
                GunUI[4].transform.localScale = new Vector2(1f, 1f);

                break;
            case 6:
                GunUI[5].transform.localScale = new Vector2(1f, 1f);
                break;
        }

        switch (gunMode.instance.gunNumber)
        {
            case 1:
                GunUI[0].transform.localScale = new Vector2(1.2f, 1.2f);
                lastpick = 1;
                Changname();
                break;
            case 2:
                GunUI[1].transform.localScale = new Vector2(1.2f, 1.2f);
                lastpick = 2;
                Changname();
                break;
            case 3:
                GunUI[2].transform.localScale = new Vector2(1.2f, 1.2f);
                lastpick = 3;
                Changname();
                break;
            case 4:
                GunUI[3].transform.localScale = new Vector2(1.2f, 1.2f);
                lastpick = 4;
                Changname();
                break;
            case 5:
                GunUI[4].transform.localScale = new Vector2(1.2f, 1.2f);
                lastpick = 5;
                Changname();
                break;
            case 6:
                GunUI[5].transform.localScale = new Vector2(1.2f, 1.2f);
                lastpick = 6;
                Changname();
                break;
        }
    }
    void Changname()
    {
        //cost.text = costValue.ToString();
    }
}
