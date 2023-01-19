using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
using Fusion;

public class gunMode : NetworkBehaviour , IPlayerLeft 
{
    public int MoneyPlayer;
    public string mode;
    public static gunMode instance;
    public GameObject Bullet;
    public double firerate;
    public float firerateAmount;
    public float firelaser;
    public bool laserSwitch;
    public int gunNumber;

    public Transform firepoint;
    public Transform firepoint2;
    public GameObject arrowBullet;
    public GameObject shotgunBullet;
    public GameObject laserbullet;
    public GameObject normalBullet;
    public GameObject longBullet;
    public GameObject flashGun;
    public GameObject flashGun2;

    public GameObject bulletDoubleNormal;
    public GameObject bulletDoubleLong;
    public GameObject bulletDoubleShort;
    public GameObject bulletDoubleArrow;

    public float bulletForce = 20f;
    public float bulletForceSlow = 10f;
    public float bulletForceGating = 40f;
    public float bulletForceSim = 40f;
    public float spread;
    public int amountofshotgun;
    public float offset;
    public GunControl gunControl;
    public UILabel modeGun;
    public UILabel costGun;

    public GameObject normalGun;
    public GameObject longGun;
    public GameObject shotGun;
    public GameObject gatingGun;
    public GameObject balistaGun;
    public GameObject laserGun;
    public GameObject laserCollision;

    public GameObject bomb;
    public GameObject upgradeEffect;
    public GameObject doubleGold;
    public GameObject doubleDamage;
    public GameObject spareEffect;

    //public bool canfire;
    public int randomFreefire;

    public bool canPlay;

    public float TimeDouble = 10;
    public float AngleRotate;
    public Vector2 mousePos;
    [SerializeField] Text Name;
    [SerializeField] private AudioSource normalShoot;
    [SerializeField] private AudioSource enchanceShoot;
    [SerializeField] private AudioSource laserShoot;
    [SerializeField] private AudioSource coinSound;
    [SerializeField] private AudioSource selectSeat;

    [Networked(OnChanged = nameof(OnNickNameChanged))]
    public NetworkString<_16> nickName { get; set; }
    
    [SerializeField] UILabel NameText;
    [SerializeField] UILabel NameText2;
    [SerializeField] UILabel NameText3;
    [SerializeField] UILabel NameText4;

    [SerializeField] UILabel ButtonText;
    [SerializeField] UILabel ButtonText2;
    [SerializeField] UILabel ButtonText3;
    [SerializeField] UILabel ButtonText4;

    [SerializeField] UI2DSprite Fake1;
    [SerializeField] UI2DSprite Fake2;
    [SerializeField] UI2DSprite Fake3;
    [SerializeField] UI2DSprite Fake4;

    [SerializeField] UILabel FakeText1;
    [SerializeField] UILabel FakeText2;
    [SerializeField] UILabel FakeText3;
    [SerializeField] UILabel FakeText4;

    //ปุ่มเลือกที่นั่ง
    [SerializeField] UI2DSprite Button1;
    [SerializeField] UI2DSprite Button2;
    [SerializeField] UI2DSprite Button3;
    [SerializeField] UI2DSprite Button4;
    
    //ป้ายบอกชื่อสำหรับจออื่น
    [SerializeField] UI2DSprite Panel1;
    [SerializeField] UI2DSprite Panel2;
    [SerializeField] UI2DSprite Panel3;
    [SerializeField] UI2DSprite Panel4;

    [SerializeField] AnimationSelectGun animationSelectGun;

    [Networked] public string NameInput { get; set; }
    [Networked] public int NumInput { get; set; }

    public GameObject FindName;
    public GameObject FindName2;
    public GameObject FindName3;
    public GameObject FindName4;

    private Dictionary<PlayerRef, NetworkObject> _spawnedCharacter = new Dictionary<PlayerRef, NetworkObject>();
    public string NameReal;
    [SerializeField] UILabel goldtext;
    [SerializeField] UILabel costtext;
    public int Money;

    public float delayGun;
    public void Awake()
    {
        firerateAmount = 0.5f;
        PlayerPrefs.GetInt("gold",200);
        PlayerPrefs.Save();
    }
    public void Start()
    {
        NameReal = (PlayerPrefs.GetString("PlayerNickName"));

        Rpc_ChangeGunServer(1);
        Rpc_Laser(false);
        
        FindName = GameObject.Find("seat 1");
        FindName2 = GameObject.Find("seat 2");
        FindName3 = GameObject.Find("seat 3");
        FindName4 = GameObject.Find("seat 4");

        Fake1 = GameObject.Find("FakeNameBar 1").GetComponent<UI2DSprite>();
        FakeText1 = GameObject.Find("FakeText 1").GetComponent<UILabel>();
        Fake2 = GameObject.Find("FakeNameBar 2").GetComponent<UI2DSprite>();
        FakeText2 = GameObject.Find("FakeText 2").GetComponent<UILabel>();
        Fake3 = GameObject.Find("FakeNameBar 3").GetComponent<UI2DSprite>();
        FakeText3 = GameObject.Find("FakeText 3").GetComponent<UILabel>();
        Fake4 = GameObject.Find("FakeNameBar 4").GetComponent<UI2DSprite>();
        FakeText4 = GameObject.Find("FakeText 4").GetComponent<UILabel>();

        ButtonText = GameObject.Find("NameText (4)").GetComponent<UILabel>();
        ButtonText2 = GameObject.Find("NameText (1)").GetComponent<UILabel>();
        ButtonText3 = GameObject.Find("NameText (2)").GetComponent<UILabel>();
        ButtonText4 = GameObject.Find("NameText (3)").GetComponent<UILabel>();

        Button1 = GameObject.Find("Name Player 1").GetComponent<UI2DSprite>();
        Button2 = GameObject.Find("Name Player 2").GetComponent<UI2DSprite>();
        Button3 = GameObject.Find("Name Player 3").GetComponent<UI2DSprite>();
        Button4 = GameObject.Find("Name Player 4").GetComponent<UI2DSprite>();

        Panel1 = GameObject.Find("NameBar 1").GetComponent<UI2DSprite>();
        Panel2 = GameObject.Find("NameBar 2").GetComponent<UI2DSprite>();
        Panel3 = GameObject.Find("NameBar 3").GetComponent<UI2DSprite>();
        Panel4 = GameObject.Find("NameBar 4").GetComponent<UI2DSprite>();

        NameText = GameObject.Find("NameText1").GetComponent<UILabel>();
        NameText2 = GameObject.Find("NameText2").GetComponent<UILabel>();
        NameText3 = GameObject.Find("NameText3").GetComponent<UILabel>();
        NameText4 = GameObject.Find("NameText4").GetComponent<UILabel>();

        goldtext = GameObject.Find("GoldText").GetComponent<UILabel>();
        costtext = GameObject.Find("CostGunText").GetComponent<UILabel>();
        Runner.SetPlayerObject(Object.InputAuthority, Object);
        if (HasInputAuthority)
        {
            Money = PlayerPrefs.GetInt("coin");
            goldtext.GetComponent<UILabel>().text = Money.ToString();
            costtext.GetComponent<UILabel>().text = "1";
        }
    }
    public override void Spawned()
    {
        instance = this;
        if (Object.HasInputAuthority)
        {
            //TestButton.instancel.Change();
            Rpc_SetNickName(PlayerPrefs.GetString("PlayerNickName"));
            Rpc_ChangeGunServer(1);

            //ChangeName(NumInput, NameInput);
         

            ButtonText = GameObject.Find("NameText (4)").GetComponent<UILabel>();
            ButtonText2 = GameObject.Find("NameText (1)").GetComponent<UILabel>();
            ButtonText3 = GameObject.Find("NameText (2)").GetComponent<UILabel>();
            ButtonText4 = GameObject.Find("NameText (3)").GetComponent<UILabel>();

            
        }
        else
        {
            ChangeGunVisual(gunModel);

            Panel1 = GameObject.Find("NameBar 1").GetComponent<UI2DSprite>();
            Panel2 = GameObject.Find("NameBar 2").GetComponent<UI2DSprite>();
            Panel3 = GameObject.Find("NameBar 3").GetComponent<UI2DSprite>();
            Panel4 = GameObject.Find("NameBar 4").GetComponent<UI2DSprite>();

            NameText = GameObject.Find("NameText1").GetComponent<UILabel>();
            NameText2 = GameObject.Find("NameText2").GetComponent<UILabel>();
            NameText3 = GameObject.Find("NameText3").GetComponent<UILabel>();
            NameText4 = GameObject.Find("NameText4").GetComponent<UILabel>();

            ButtonText = GameObject.Find("NameText (4)").GetComponent<UILabel>();
            ButtonText2 = GameObject.Find("NameText (1)").GetComponent<UILabel>();
            ButtonText3 = GameObject.Find("NameText (2)").GetComponent<UILabel>();
            ButtonText4 = GameObject.Find("NameText (3)").GetComponent<UILabel>();

            Button1 = GameObject.Find("Name Player 1").GetComponent<UI2DSprite>();
            Button2 = GameObject.Find("Name Player 2").GetComponent<UI2DSprite>();
            Button3 = GameObject.Find("Name Player 3").GetComponent<UI2DSprite>();
            Button4 = GameObject.Find("Name Player 4").GetComponent<UI2DSprite>();
            switch (NumInput) {
                case 1:
                    FakeText1 = GameObject.Find("FakeText 1").GetComponent<UILabel>();
                    Fake1 = GameObject.Find("FakeNameBar 1").GetComponent<UI2DSprite>();
                    Fake1.GetComponent<UI2DSprite>().enabled = true;
                    FakeText1.GetComponent<UILabel>().enabled = true;
                    FakeText1.text = NameInput;
                    ButtonText.GetComponent<UILabel>().text = "";
                    Button1.GetComponent<UI2DSprite>().enabled = false;
                    break;
                case 2:
                    FakeText2 = GameObject.Find("FakeText 2").GetComponent<UILabel>();
                    Fake2 = GameObject.Find("FakeNameBar 2").GetComponent<UI2DSprite>();
                    Fake2.GetComponent<UI2DSprite>().enabled = true;
                    FakeText2.GetComponent<UILabel>().enabled = true;
                    FakeText2.text = NameInput;
                    ButtonText2.GetComponent<UILabel>().text = "";
                    Button2.GetComponent<UI2DSprite>().enabled = false;
                    break;
                case 3:
                    FakeText3 = GameObject.Find("FakeText 3").GetComponent<UILabel>();
                    Fake3 = GameObject.Find("FakeNameBar 3").GetComponent<UI2DSprite>();
                    Fake3.GetComponent<UI2DSprite>().enabled = true;
                    FakeText3.GetComponent<UILabel>().enabled = true;
                    FakeText3.text = NameInput;
                    ButtonText3.GetComponent<UILabel>().text = "";
                    Button3.GetComponent<UI2DSprite>().enabled = false;
                    break;
                case 4:
                    FakeText4 = GameObject.Find("FakeText 4").GetComponent<UILabel>();
                    Fake4 = GameObject.Find("FakeNameBar 4").GetComponent<UI2DSprite>();
                    Fake4.GetComponent<UI2DSprite>().enabled = true;
                    FakeText4.GetComponent<UILabel>().enabled = true;
                    FakeText4.text = NameInput;
                    ButtonText4.GetComponent<UILabel>().text = "";
                    Button4.GetComponent<UI2DSprite>().enabled = false;
                    break;
                        }
           
        }
    }
   [Networked] public TickTimer delay { get; set; }
    public override void FixedUpdateNetwork()
    {

        if (GetInput(out NetworkInputData data))
        {

            transform.up = data.direction - new Vector2(transform.position.x, transform.position.y);
            if (delay.ExpiredOrNotRunning(Runner))
            {
                {
                    if ((data.button & NetworkInputData.MOUSEBUTTON1) != 0)
                    {
                        if (!Object.HasInputAuthority) return;
                        Rpc_Bullet(gunModel, item.instace.doubleDamage);
                    }
                }
            }
            if (!Object.HasInputAuthority) return;
            switch (data.gunChange)
            {
                case 1:
                    Rpc_ChangeGunServer(1);
                    break;
                case 2:
                    Rpc_ChangeGunServer(2);
                    break;
                case 3:
                    Rpc_ChangeGunServer(3);
                    break;
                case 4:
                    Rpc_ChangeGunServer(4);
                    break;
                case 5:
                    Rpc_ChangeGunServer(5);
                    break;
                case 6:
                    Rpc_ChangeGunServer(6);
                    break;
            }
            switch (data.PosChange)
            {
                case 1:
                    Rpc_ChangePos(1);
                    Rpc_ChangeName(1, data.LastPose, NameReal);
                    canPlay = true;
                    break;
                case 2:
                    Rpc_ChangePos(2);
                    Rpc_ChangeName(2, data.LastPose, NameReal);
                    canPlay = true;
                    break;
                case 3:
                    Rpc_ChangePos(3);
                    Rpc_ChangeName(3, data.LastPose, NameReal);
                    canPlay = true;
                    break;
                case 4:
                    Rpc_ChangePos(4);
                    Rpc_ChangeName(4, data.LastPose, NameReal);
                    canPlay = true;
                    break;
            }
        }
    }
    public void Update()
    {

        //if (Runner.IsServer) return;
       
        if (Object.HasInputAuthority && Input.GetKeyDown(KeyCode.R))
        {
            RPC_SendMessage(NameInput);
        }
        if (!canPlay) return;
        if (Input.GetKeyDown("space"))
        {
            PlusGold(100);
        }
        if (TimeDouble < 10)
        {
            TimeDouble += Time.deltaTime;
        }
      
        if (firerate <= 2)
            firerate += Time.deltaTime;
        if(laserSwitch == true)
        {
            Rpc_Laser(true);
            firelaser += Time.deltaTime;
            if(firelaser > 0.5)
            {
                laserSwitch = false;
                firelaser = 0;
                Rpc_Laser(false);

            }
        }
        if (delayGun > 0)
            delayGun -= Time.deltaTime;
    }
    public Text _messages;

    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    public void RPC_SendMessage(string message, RpcInfo info = default)
    {
        if (_messages == null)
            _messages = FindObjectOfType<Text>();
        if (info.IsInvokeLocal)
            Debug.Log ( $"You said: {message}");
        else
            Debug.Log($"Some other player said: {message}\n");
        _messages.text += message;
    }
    public void dropLocal(string message , int coin,Vector3 pos)
    {
      
    } 
    
        static void OnNickNameChanged(Changed<gunMode> changed)
    {
        changed.Behaviour.OnNickNameChanged();
    }
    public void OnNickNameChanged()
    {
        NameInput = nickName.ToString();
    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    public void Rpc_SetNickName(string nickname)
    {
        this.nickName = nickname;
    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    public void Rpc_ChangeName(int gunValue,int last, string Name)
    {
        canPlay = true;

        Debug.Log(gunValue + " = " + last);
        if (last == 1)
        {
            if (Object.HasInputAuthority)
            {
                GameObject BarPanel = GameObject.Find("GunSelect");
                BarPanel.SetActive(false);
            }
            Button1.GetComponent<UI2DSprite>().enabled = true;
            ButtonText.text = "Select";
            Fake1.GetComponent<UI2DSprite>().enabled = false;
            FakeText1.GetComponent<UILabel>().enabled = false;
            FakeText1.text = "";
            Panel1.GetComponent<UI2DSprite>().enabled = false;
            NameText.GetComponent<UILabel>().enabled = false;
            NameText.text = "";

        }

        if (last == 2)
        {
            if (Object.HasInputAuthority)
            {
                GameObject BarPanel = GameObject.Find("GunSelect2");
                BarPanel.SetActive(false);
            }
            Button2.GetComponent<UI2DSprite>().enabled = true;
            ButtonText2.text = "Select";
            Fake2.GetComponent<UI2DSprite>().enabled = false;
            FakeText2.GetComponent<UILabel>().enabled = false;
            FakeText2.text = "";
            Panel2.GetComponent<UI2DSprite>().enabled = false;
            NameText2.GetComponent<UILabel>().enabled = false;
            NameText2.text = "";
        }

        if (last == 3)
        {
            if (Object.HasInputAuthority)
            {
                GameObject BarPanel = GameObject.Find("GunSelect3");
                BarPanel.SetActive(false);
            }
            Button3.GetComponent<UI2DSprite>().enabled = true;
            ButtonText3.text = "Select";
            Fake3.GetComponent<UI2DSprite>().enabled = false;
            FakeText3.GetComponent<UILabel>().enabled = false;
            FakeText3.text = "";
            Panel3.GetComponent<UI2DSprite>().enabled = false;
            NameText3.GetComponent<UILabel>().enabled = false;
            NameText3.text = "";

        }
        if (last == 4)
        {
            if (Object.HasInputAuthority)
            {
                GameObject BarPanel = GameObject.Find("GunSelect4");
                BarPanel.SetActive(false);
            }
            Button4.GetComponent<UI2DSprite>().enabled = true;
            ButtonText4.text = "Select";
            Fake4.GetComponent<UI2DSprite>().enabled = false;
            FakeText4.GetComponent<UILabel>().enabled = false;
            FakeText4.text = "";
            Panel4.GetComponent<UI2DSprite>().enabled = false;
            NameText4.GetComponent<UILabel>().enabled = false;
            NameText4.text = "";

        }

        if (gunValue == 1)
            {
            if (Object.HasInputAuthority)
            {
                Transform[] button = FindName.transform.GetComponentsInChildren<Transform>(true);
                for (int i = 0; i < button.Length; i++)
                {
                    button[i].gameObject.SetActive(true);
                }
            }
            Panel1.GetComponent<UI2DSprite>().enabled = true;
            NumInput = gunValue;
            NameText.GetComponent<UILabel>().enabled = true;
            NameText.GetComponent<UILabel>().text = Name;
            Button1.GetComponent<UI2DSprite>().enabled = false;
            ButtonText.GetComponent<UILabel>().text = "";

        }
        if (gunValue == 2)
            {
            if (Object.HasInputAuthority)
            {
                Transform[] button = FindName2.transform.GetComponentsInChildren<Transform>(true);
                for (int i = 0; i < button.Length; i++)
                {
                    button[i].gameObject.SetActive(true);
                }
            }
            Panel2.GetComponent<UI2DSprite>().enabled = true;
            NumInput = gunValue;
            NameText2.GetComponent<UILabel>().enabled = true;
            NameText2.GetComponent<UILabel>().text = Name;
            Button2.GetComponent<UI2DSprite>().enabled = false;
            ButtonText2.GetComponent<UILabel>().text = "";
        }
        if (gunValue == 3)
        {
            if (Object.HasInputAuthority)
            {
                Transform[] button = FindName3.transform.GetComponentsInChildren<Transform>(true);
                for (int i = 0; i < button.Length; i++)
                {
                    button[i].gameObject.SetActive(true);
                }
            }
            Panel3.GetComponent<UI2DSprite>().enabled = true;
            NumInput = gunValue;
            NameText3.GetComponent<UILabel>().enabled = true;
            NameText3.GetComponent<UILabel>().text = Name;
            Button3.GetComponent<UI2DSprite>().enabled = false;
            ButtonText3.GetComponent<UILabel>().text = "";
        }
        if (gunValue == 4)
            {
            if (Object.HasInputAuthority)
            {
                Transform[] button = FindName4.transform.GetComponentsInChildren<Transform>(true);
                for (int i = 0; i < button.Length; i++)
                {
                    button[i].gameObject.SetActive(true);
                }
            }
            Panel4.GetComponent<UI2DSprite>().enabled = true;
            NumInput = gunValue;
            NameText4.GetComponent<UILabel>().enabled = true;
            NameText4.GetComponent<UILabel>().text = Name;
            Button4.GetComponent<UI2DSprite>().enabled = false;
            ButtonText4.GetComponent<UILabel>().text = "";
        } 
    }
  
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_ChangePos(int gunValue)
    {
        canPlay = true;

        selectSeat.Play();
        if (gunValue == 1)
            transform.position = new Vector3(-3.129f, -3.311f, -4.55f);
        if (gunValue == 2)
            transform.position = new Vector3(3.27f, -3.273f, -4.55f);
        if (gunValue == 3)
            transform.position = new Vector3(-3.168f, 3.25f, -4.55f);
        if (gunValue == 4)
            transform.position = new Vector3(3.222f, 3.286f, -4.55f);

    }
    [Networked] public int gunModel { get; set; }

    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    public void Rpc_ChangeGunServer(int gunValue)
    {
        if (gunValue == 4)
            firerateAmount = 0.1f;
        if (gunValue == 6)
            firerateAmount = 1.5f;
        if (gunValue != 6 && gunValue != 4) 
            firerateAmount = 0.5f;
        
        if (gunValue == 1)
        {
            normalGun.SetActive(true);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);

            gunControl.cost = 1;
            gunControl.damage = 1;
            gunModel = 1;
            
        }
        if (gunValue == 2)
        {
            normalGun.SetActive(false);
            longGun.SetActive(true);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);

            gunControl.cost = 2;
            gunControl.damage = 2;
            gunModel = 2;

        }
        if (gunValue == 3)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(true);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);

            gunControl.cost = 5;
            gunControl.damage = 2;
            gunModel = 3;
        }
        if (gunValue == 4)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(true);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);

            gunControl.cost = 3;
            gunControl.damage = 3;
            gunModel = 4;
        }
        if (gunValue == 5)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(true);
            laserGun.SetActive(false);

            gunControl.cost = 15;
            gunControl.damage = 10;
            gunModel = 5;
        }
        if (gunValue == 6)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(true);

            gunControl.cost = 75;
            gunControl.damage = 10;
            gunModel = 6;
        }
        if (canPlay && Object.HasInputAuthority)
        {
            gunNumber = gunValue;
            //AnimationSelectGun.instance.gunNumberScript = gunValue;
            //AnimationSelectGun.instance.costValue = gunControl.cost;
            costtext.GetComponent<UILabel>().text = gunControl.cost.ToString();

        }
    }
        public void ChangeGunVisual(int gunValue)
    {
        
        if (gunValue == 1)
        {
            normalGun.SetActive(true);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (gunValue == 2)
        {
            normalGun.SetActive(false);
            longGun.SetActive(true);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (gunValue == 3)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(true);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (gunValue == 4)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(true);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (gunValue == 5)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(true);
            laserGun.SetActive(false);
        }
        if (gunValue == 6)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(true);
        }
    }
    
   
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_Bullet(int gunmode, bool enchance3)
    {
        if (!Object.HasInputAuthority) return;

            if (Time.time - firerate < firerateAmount || PlayerPrefs.GetInt("coin") < gunControl.cost || !canPlay || delayGun > 0)
            return;
        if (HasInputAuthority)
        {
            MinusGold(gunControl.cost);
        }
        if (gunmode == 6)
        {
            laserSwitch = true;
      }
        if (gunmode == 1)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint.position, firepoint.rotation);
            RPC_Normal(enchance3);
        }
        if (gunmode == 2)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint2.position, firepoint.rotation);
            Rpc_Long(enchance3);
        }
        if (gunmode == 3)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint.position, firepoint.rotation);
            Rpc_ShootShotgun(enchance3);
        }
        if (gunmode == 4)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint2.position, firepoint.rotation);
            Rpc_Gatling(enchance3);
        }

        if (gunmode == 5)
        {
            
            Runner.Spawn(flashGun2, firepoint.position, firepoint.rotation);
            //GameObject bullet = Instantiate(flashGun2, firepoint.position, firepoint.rotation);
            Rpc_ShootArrow(enchance3);
        }
       
        firerate = Time.time;
    }

    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    void RPC_Normal(bool enchance)
    {
        if (!enchance)
        {
           
            GameObject bullet2 = Instantiate(normalBullet, firepoint.position, Quaternion.identity);
            //Runner.Spawn(, firepoint.position, Quaternion.identity);
            var player = bullet2.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
            normalShoot.Play();
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleNormal, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            var player = bullet2.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
            enchanceShoot.Play();
        }

    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]

    void Rpc_Long(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            var player = bullet2.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
            normalShoot.Play();

        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleLong, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            var player = bullet2.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
            enchanceShoot.Play();

        }

    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]

    void Rpc_Gatling(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            var player = bullet2.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            normalShoot.Play();
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleLong, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            var player = bullet2.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }

    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]

    void Rpc_ShootArrow(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet = Instantiate(arrowBullet, firepoint.position, firepoint.rotation);
            //Runner.Spawn(bullet, firepoint.position, firepoint.rotation);
            var player = bullet.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet = Instantiate(bulletDoubleArrow, firepoint.position, firepoint.rotation);
            //Runner.Spawn(bullet, firepoint.position, firepoint.rotation);
            var player = bullet.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]

    void Rpc_ShootShotgun(bool enchance)
    {
        if (!enchance)
        {
            for (int i = 0; i < amountofshotgun; i++)
            {
                GameObject bullet = Instantiate(shotgunBullet, firepoint.position, Quaternion.identity);
                //Runner.Spawn(bullet, firepoint.position, Quaternion.identity);
                var player = bullet.GetComponent<BalistaHitbox>();
                player.InputPlayerRef(Object.InputAuthority);
                normalShoot.Play();
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();                
                Vector2 dir = transform.rotation * Vector2.up;
                Vector2 pdir = Vector2.Perpendicular(dir) * UnityEngine.Random.Range(-spread, spread);
                rb.velocity = (dir + pdir) * bulletForce;
            }
        }
        else
        {
            for (int i = 0; i < amountofshotgun; i++)
            {
                GameObject bullet = Instantiate(bulletDoubleShort, firepoint.position, Quaternion.identity);
                enchanceShoot.Play();
                var player = bullet.GetComponent<BalistaHitbox>();
                player.InputPlayerRef(Object.InputAuthority);
                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                Vector2 dir = transform.rotation * Vector2.up;
                Vector2 pdir = Vector2.Perpendicular(dir) * UnityEngine.Random.Range(-spread, spread);
                rb.velocity = (dir + pdir) * bulletForce;
            }
        }
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    void Rpc_Laser(bool show)
    {
        if (show == true)
        {
            laserbullet.SetActive(true);
            GameObject bullet = Instantiate(laserCollision, firepoint.position, firepoint.rotation);
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            var player = bullet.GetComponent<BalistaHitbox>();
            player.InputPlayerRef(Object.InputAuthority);
            rb.AddForce(firepoint.up * 30, ForceMode2D.Impulse);
        }
        if (show == false)
        {
            laserbullet.SetActive(false);

        }
        
    }
    
    public int lastSeat;
   
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    public void Rpc_Spawn(int seatNum)
    {
        selectSeat.Play();
        if (seatNum == 1)
        {
            transform.position = new Vector3(-3.129f, -3.311f, -4.55f);
        }
        if (seatNum == 2)
        {
            transform.position = new Vector3(3.27f, -3.273f, -4.55f);
        }
        if (seatNum == 3)
        {
            transform.position = new Vector3(-3.168f, 3.25f, -4.55f);

        }
        if (seatNum == 4)
        {
            transform.position = new Vector3(3.222f, 3.286f, -4.55f);
        }
        lastSeat = seatNum - 1;
        //NetworkManagerUI.instance. Rpc_SeatDis2(seatNum - 1);
        //NetworkManagerUI.instance.Rpc_SeatDis(seatNum - 1);

    }
    public void DoubleDamage(float TimeDouble2)
    {
        TimeDouble = TimeDouble2;
    }
    public void BombTrigger()
    {
        for (int i = 0; i < 5; i++)
        {
            float positionX = Random.Range(-5, 6.5f);
            float positionY = Random.Range(-3, 3);
            BombServerRpc(positionX, positionY);
        }
    }
    public void BombServerRpc(float posX, float posY)
    {
        BombClientRpc(posX, posY);
    }
    public void BombClientRpc(float posX, float posY)
    {
        Rpc_ResultBomb(posX,posY);
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_ResultBomb(float posX , float posY)
    {
        Instantiate(bomb, new Vector3(posX, posY), Quaternion.identity);
        //Runner.Spawn(bomb, new Vector3(posX,posY), Quaternion.identity);
        if (OpenOptioon.instant.Shake)
        UtilsClass.ShakeCamera(0.03f, .1f);
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_effectUse()
    {
        if (item.instace.doubleGold == true)
        {
            doubleGold.SetActive(true);

        }
        if (item.instace.doubleDamage == true)
        {
           doubleDamage.SetActive(true);

        }
        if (item.instace.spare == true)
        {
            spareEffect.SetActive(true);

        }
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void Rpc_effectOut()
    {
        if (item.instace.doubleGold == false)
        {
            doubleGold.SetActive(false);

        }
        if (item.instace.doubleDamage == false)
        {
           doubleDamage.SetActive(false);

        }
        if (item.instace.spare == false)
        {
            spareEffect.SetActive(false);

        }
    }
    //Player left 
    public void PlayerLeft(PlayerRef player)
    {
        RPC_closeUI();
        if (player == Object.InputAuthority)
        {
            if (NumInput == 1)
            {
                Fake1.GetComponent<UI2DSprite>().enabled = false;
                FakeText1.GetComponent<UILabel>().enabled = false;
                FakeText1.text = "";

                Button1.GetComponent<UI2DSprite>().enabled = true;
                ButtonText.text = "Select";
                NameText.text = "";
            }

            if (NumInput == 2)
            {
                Fake2.GetComponent<UI2DSprite>().enabled = false;
                FakeText2.GetComponent<UILabel>().enabled = false;
                FakeText2.text = "";

                Button2.GetComponent<UI2DSprite>().enabled = true;
                ButtonText2.text = "Select";
                NameText2.text = "";
            }

            if (NumInput == 3)
            {
                Fake3.GetComponent<UI2DSprite>().enabled = false;
                FakeText3.GetComponent<UILabel>().enabled = false;
                FakeText3.text = "";

                Button3.GetComponent<UI2DSprite>().enabled = true;
                ButtonText3.text = "Select";
                NameText3.text = "";
            }
            if (NumInput == 4)
            {
                Fake4.GetComponent<UI2DSprite>().enabled = false;
                FakeText4.GetComponent<UILabel>().enabled = false;
                FakeText4.text = "";

                Button4.GetComponent<UI2DSprite>().enabled = true;
                ButtonText4.text = "Select";
                NameText4.text = "";
            }
            Runner.Despawn(Object);
        }
       
    }
    public void Quit()
    {
        Runner.Shutdown();
    }
    public void RPC_closeUI()
    {
        Debug.Log("Left");
        switch (NumInput) {
            case 1:
                Fake1.GetComponent<UI2DSprite>().enabled = false;
                FakeText1.GetComponent<UILabel>().enabled = false;
                FakeText1.text = "";

                Button1.GetComponent<UI2DSprite>().enabled = true;
                ButtonText.text = "Select";

                Panel1.GetComponent<UI2DSprite>().enabled = false;
                break;
            case 2:
                Fake2.GetComponent<UI2DSprite>().enabled = false;
                FakeText2.GetComponent<UILabel>().enabled = false;
                FakeText2.text = "";

                Button2.GetComponent<UI2DSprite>().enabled = true;
                ButtonText2.text = "Select";
                Panel2.GetComponent<UI2DSprite>().enabled = false;

                break;
            case 3:
                Fake3.GetComponent<UI2DSprite>().enabled = false;
                FakeText3.GetComponent<UILabel>().enabled = false;
                FakeText3.text = "";

                Button3.GetComponent<UI2DSprite>().enabled = true;
                ButtonText3.text = "Select";
                Panel3.GetComponent<UI2DSprite>().enabled = false;

                break;
            case 4:
                Fake4.GetComponent<UI2DSprite>().enabled = false;
                FakeText4.GetComponent<UILabel>().enabled = false;
                FakeText4.text = "";

                Button4.GetComponent<UI2DSprite>().enabled = true;
                ButtonText4.text = "Select";
                Panel4.GetComponent<UI2DSprite>().enabled = false;
                break;
        }
       
    }
    //Increase Gold
    public void PlusGold(int Gold)
    {
        PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") + Gold);
        goldtext.GetComponent<UILabel>().text = PlayerPrefs.GetInt("coin").ToString();
        PlayerPrefs.Save();
    }
    //Decrease Gold
    void MinusGold(int Gold)
    {
        PlayerPrefs.SetInt("coin", PlayerPrefs.GetInt("coin") - Gold);
        goldtext.GetComponent<UILabel>().text = PlayerPrefs.GetInt("coin").ToString();
        PlayerPrefs.Save();
    }
}