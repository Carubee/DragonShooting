using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Fusion;
using System.Linq;

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

    [SerializeField] Slider sliderOpen;
    [SerializeField] Text amount;
    [SerializeField] Text amountPrice;
    [SerializeField] Sprite BombSprite, SpareSprite, DoubleDamageSprite, DoubleGoldSprite;
    [SerializeField] int amountItemInt;
    [SerializeField] float amountItemfloat;
    [SerializeField] Text nameItem;
    [SerializeField] UILabel TextGold;

    [SerializeField] Image iamge;
    [SerializeField] Text CostText;
    [SerializeField] Text Des;
    public bool GoldSwitch;
    public bool Shake;

    public void Start()
    {
        instant = this;
        CloseOption();

        BombSprite = Resources.Load<Sprite>("Bomb_Item");
        SpareSprite = Resources.Load<Sprite>("Spare shot_Item");
        DoubleDamageSprite = Resources.Load<Sprite>("Double Damage_Item");
        DoubleGoldSprite = Resources.Load<Sprite>("Professional Hunter Bag_Item");
    }
    void HandleSliderValueChanged(float value)
    {
        amountItemfloat = sliderOpen.value;
        amountItemInt = Mathf.RoundToInt(amountItemfloat);

        amount.text = "จำนวน : " + amountItemInt + "/ " + sliderOpen.maxValue +  " ชิ้น";


        if (Bomb == true)
        {
            amountPrice.text =  (amountItemInt * 200).ToString();
        }
        if (SpareShot == true)
        {
            amountPrice.text =  (amountItemInt * 25).ToString();
        }
        if (DoubleDamage == true)
        {
            amountPrice.text = (amountItemInt * 35).ToString();
        }
        if (HunterBag == true)
        {
            amountPrice.text =  (amountItemInt * 350).ToString();
        }
    }
    public void ShowDetail()
    {
        sliderOpen.maxValue = amountItemfloat;
        if (amountItemfloat > 1)
        {
            sliderOpen.value = 1;
            amountItemInt = 1;
            amount.text = "Buy : " + 1 + "/ " + sliderOpen.maxValue;
            if (Bomb == true)
            {
                Des.text = "ระเบิดสังหารมังกร สร้างความเสียหายจำนวน50-100 หน่วย แบบสุ่มทั่วทั้งสนาม";
                amountPrice.text = (1 * 200).ToString();
                CostText.text = "100";
            }
            if (SpareShot == true)
            {
                Des.text = "อุปกรณ์เสริมใช้ติดกับป้อมปืน ทำให้มีโอกาส 30% ที่จะยิงปืนโดยไม่เสียลูกกระสุน เป็นระยะเวลา 15 วินาที";
                amountPrice.text = (1 * 25).ToString();
                CostText.text = "35";

            }
            if (DoubleDamage == true)
            {
                Des.text = "อุปกรณ์เสริมใช้ติดกับป้อมปืน ช่วยเพิ่มพลังโจมตีเป็น 2 เท่า เป็นระยะเวลา 10 วินาที";
                amountPrice.text = (1 * 35).ToString();
                CostText.text = "55";

            }
            if (HunterBag == true)
            {
                Des.text = "กระเป่าของนักล่า ทำให้เหรียญทองที่ได้รับจากการสังหารมังกรเพิ่มขึ้น 2 เท่า เป็นระยะเวลา 10 วินาที";
                amountPrice.text = (1 * 350).ToString();
                CostText.text = "350";

            }
        }
        else
        {
            sliderOpen.value = 0;
            amount.text = "จำนวน : " + 0 + "/ " + sliderOpen.maxValue +" ชิ้น";
        }

        sliderOpen.onValueChanged.AddListener(HandleSliderValueChanged);
        
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
        gunMode.instance.delayGun = 0.2f;
        gunMode.instance.canPlay = true;
        soundOpen.Play();

    }
    public void CloseBeforeBuy()
    {
        TextGold.text  = PlayerPrefs.GetInt("coin").ToString();
        NoticeBuy.SetActive(false);
        NoticeNotEnough.SetActive(false);
        soundOpen.Play();

        if (Bomb == true)
        {
            Bomb = false;
        }
        if (SpareShot == true)
        {
            SpareShot = false;
        }
        if (DoubleDamage == true)
        {
            DoubleDamage = false;
        }
        if (HunterBag == true)
        {
            HunterBag = false;
        }
    }
    //Use in button Leave
    public void LeaveGame()
    {
        gunMode.instance.Quit();
        SceneManager.LoadScene(0);
    }
    public void Confirm()
    {
        NoticeBuy.SetActive(true);
        NoticeNotEnough.SetActive(false);
        soundOpen.Play();
        ShowDetail();
        //iamge = gameObject.GetComponent<Image>();

        if (Bomb == true)
        {
            iamge.sprite = BombSprite;
            amountPrice.text = (amountItemInt * 200).ToString();
            nameItem.text = "Bomb";
        }
        if (SpareShot == true)
        {
            iamge.sprite = SpareSprite;
            amountPrice.text = (amountItemInt * 25).ToString();
            nameItem.text = "Spare Shot";

        }
        if (DoubleDamage == true)
        {
            iamge.sprite = DoubleDamageSprite;
            amountPrice.text = (amountItemInt * 35).ToString();
            nameItem.text = "Double Damage";

        }
        if (HunterBag == true)
        {
            iamge.sprite = DoubleGoldSprite;
            amountPrice.text = (amountItemInt * 350).ToString();
            nameItem.text = "Double Gold";

        }
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
        amountItemfloat = PlayerPrefs.GetInt("coin") / 200;

        soundOpen.Play();

        Bomb = true;
        Confirm();

    }
    public void BuySpareSoht()
    {
        amountItemfloat = PlayerPrefs.GetInt("coin") / 25;

        soundOpen.Play();

        SpareShot = true;
        Confirm();

    }
    public void BuyDoubleDamage()
    {
        amountItemfloat = PlayerPrefs.GetInt("coin") / 35;

        soundOpen.Play();

        DoubleDamage = true;
        Confirm();

    }
    public void BuyHunterBag()
    {
        amountItemfloat = PlayerPrefs.GetInt("coin") / 350;

        soundOpen.Play();

        HunterBag = true;
        Confirm();

    }
    public void buyChose()
    {
        
        if (DragonTracker == true)
        {
                itemUse.amountDragonTracker += amountItemInt;
                buy.Play();
                CloseBeforeBuy();
        }
        if (Bomb == true)
        {
            UiTextSpawmControl.Instance.MinusGold(amountItemInt * 200);
            PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") - (amountItemInt * 200));
            PlayerPrefs.SetInt("Bomb", PlayerPrefs.GetInt("Bomb") + amountItemInt);
            buy.Play();
                CloseBeforeBuy();
            

        }
        if (SpareShot == true)
        {
            PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") - (amountItemInt * 25));
            PlayerPrefs.SetInt("Spare", PlayerPrefs.GetInt("Spare") + amountItemInt);
            buy.Play();
                CloseBeforeBuy();
           

        }
        if (DoubleDamage == true)
        {
            PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") - (amountItemInt * 35));
            PlayerPrefs.SetInt("DoubleDamage", PlayerPrefs.GetInt("DoubleDamage") + amountItemInt);
                buy.Play();
                CloseBeforeBuy();
            

        }
        if (HunterBag == true)
        {
            PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") - (amountItemInt * 350));
            PlayerPrefs.SetInt("DoubleGold", PlayerPrefs.GetInt("DoubleGold") + amountItemInt);
                buy.Play();
                CloseBeforeBuy();
            

        }
        PlayerPrefs.Save();
        itemUse.UpdateText();
    }
    public void Plus()
    {
        if (amountItemInt < sliderOpen.maxValue)
        {
            amountItemInt += 1;
            sliderOpen.value = amountItemInt;
            amount.text = "จำนวน : " + amountItemInt + "/ " + sliderOpen.maxValue + " ชิ้น";
        }
    }
    public void Minus()
    {
        if (amountItemInt > 0)
        {
            amountItemInt -= 1;
            sliderOpen.value = amountItemInt;
            amount.text = "จำนวน : " + amountItemInt + "/ " + sliderOpen.maxValue + " ชิ้น";
        }
    }
    public void toggle_change(bool value)
    {
        Debug.Log(value);
        GoldSwitch = (value);
    }
    public void toggle_changeShake(bool value)
    {
        Shake = (value);
    }

}
