using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
using Fusion;

public class gunMode : NetworkBehaviour
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

    //public bool canfire;
    public int randomFreefire;
    public bool canPlay;

    public float TimeDouble = 10;
    public float AngleRotate;
    public Vector2 mousePos;
    [SerializeField] Text Name;
    [SerializeField] private AudioSource normalShoot;
    [SerializeField] private AudioSource enchanceShoot;
    public NetworkString<_16> nickName { get; set; }



    [Networked] public bool enchance { get; set; }
    [Networked] public int Rotation { get; set; }
    public void Awake()
    {
        firerateAmount = 0.5f;
    }
    public override void Spawned()
    {
        Rpc_SetNickName(PlayerPrefs.GetString("PlayerNickName"));
        OnNickNameChanged();
        instance = this;


    }
    public void Update()
    {

        //if (Runner.IsServer) return;
        

        if (!canPlay) return;
        if (Input.GetKeyDown("space"))
        {
            UiTextSpawmControl.Instance.PushGold(50);

        }
        if (TimeDouble < 10)
        {
            TimeDouble += Time.deltaTime;
        }
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        transform.up = mousePos - new Vector2(transform.position.x, transform.position.y);
        Rpc_RotateCilent(mousePos);


        if (firerate <= 2)
            firerate += Time.deltaTime;
        if (Input.GetMouseButtonUp(0) || PlayerPrefs.GetInt("gold", 1000) < gunControl.cost && gunModel == 6)
        {
            LaserServerRpc(false);
        }

        if (Input.GetMouseButton(0) && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canPlay == true && OpenOptioon.instant.openMenu == false && gunModel != 4)
        {

            if (gunModel == 6)
            {
                LaserServerRpc(true);
            }
            if (firerate >= firerateAmount)
            {
                if (TimeDouble < 10)
                {
                    //PlayerShootGunServerRpc(bulletTypeValue.Value, true);
                    Rpc_Shoot(gunModel, true);
                    enchanceShoot.Play();
                }
                else
                {
                    //PlayerShootGunServerRpc(bulletTypeValue.Value, false);
                    Rpc_Shoot(gunModel, false);
                    normalShoot.Play();

                }
                if (item.instace.spare == false)
                {

                    //if (bulletTypeValue.Value != 4)
                    //    PlayerShootGunServerRpc(bulletTypeValue.Value, DoubleBullet.Value);
                    UiTextSpawmControl.Instance.MinusGold(gunControl.cost);

                }
                if (item.instace.spare == true)
                {
                    randomFreefire = UnityEngine.Random.Range(0, 3);
                    if (randomFreefire == 1 || randomFreefire == 2)
                        UiTextSpawmControl.Instance.MinusGold(gunControl.cost);
                }
                firerate = 0;
            }

        }
        if (Input.GetMouseButton(0) && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canPlay == true && OpenOptioon.instant.openMenu == false && gunModel == 4)
        {
            if (firerate >= 0.1)
            {

                if (TimeDouble < 10)
                {
                    Rpc_Shoot(gunModel, true);
                    enchanceShoot.Play();
                }
                else
                {
                    Rpc_Shoot(gunModel, false);
                    normalShoot.Play();

                }
                firerate = 0;
                UiTextSpawmControl.Instance.MinusGold(3);
            }

        }
        if (Input.GetKeyDown("1"))
        {
            //Debug.Log("Buy");

            Rpc_ChangeGunCilent(1);
        }
        if (Input.GetKeyDown("2"))
        {
            //Debug.Log("Buy1");

            Rpc_ChangeGunCilent(2);

        }
        if (Input.GetKeyDown("3"))
        {
            //Debug.Log("Buy2");
            gunControl.cost = 5;
            gunControl.damage = 2;
            gunModel = 3;
            Rpc_ChangeGunCilent(3);

        }
        if (Input.GetKeyDown("4"))
        {
            //Debug.Log("Buy3");
            gunControl.cost = 3;
            gunControl.damage = 3;
            gunModel = 4;
            Rpc_ChangeGunCilent(4);

        }
        if (Input.GetKeyDown("5"))
        {
            //Debug.Log("Buy4");
            gunControl.cost = 15;
            gunControl.damage = 10;
            gunModel = 5;
            Rpc_ChangeGunCilent(5);

        }
        if (Input.GetKeyDown("6"))
        {
            //Debug.Log("Buy5");
            gunControl.cost = 75;
            gunControl.damage = 10;
            gunModel = 6;
            Rpc_ChangeGunCilent(6);

        }
    }

    [Networked] public int gunModel { get; set; }
    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    private void Rpc_ChangeGunCilent(int gunValue)
    {
        gunModel = gunValue;
        Rpc_ChangeGunServer(gunValue);

    }

    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    public void Rpc_ChangeGunServer(int gunValue)
    {

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
    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.StateAuthority)]
    public void Rpc_Shoot(int shootType, bool enchanceTo)
    {
        gunModel = shootType;
        enchance = enchanceTo;
        showResultClientRpc(shootType, enchanceTo);
    }
    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    public void showResultClientRpc(int bulltetType, bool enchance2)
    {
        Rpc_Bullet(bulltetType, enchance2);
    }
    public void LaserServerRpc(bool show)
    {
        LaserClientRpc(show);
    }
    [Rpc(RpcSources.InputAuthority,RpcTargets.All)]
    public void LaserClientRpc(bool show)
    {
        Laser(show);
    }
    public void Rpc_Bullet(int gunmode, bool enchance3)
    {
        if (gunmode == 1)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint.position, firepoint.rotation);
            Normal(enchance3);
        }
        if (gunmode == 2)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint2.position, firepoint.rotation);
            Long(enchance3);
        }
        if (gunmode == 3)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint.position, firepoint.rotation);
            ShootShotgun(enchance3);
        }
        if (gunmode == 4)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            //Runner.Spawn(flashGun, firepoint2.position, firepoint.rotation);
            Gatling(enchance3);
        }

        if (gunmode == 5)
        {
            
            Runner.Spawn(flashGun2, firepoint.position, firepoint.rotation);
            //GameObject bullet = Instantiate(flashGun2, firepoint.position, firepoint.rotation);
            ShootArrow(enchance3);
        }
    }


    void Normal(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(normalBullet, firepoint.position, Quaternion.identity);
            //Runner.Spawn(, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);

        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleNormal, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
       
    }
    void Long(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleLong, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }

    }
    void Gatling(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);

            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleLong, firepoint.position, Quaternion.identity);
            //Runner.Spawn(bullet2, firepoint.position, Quaternion.identity);

            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }

    }
    void ShootArrow(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet = Instantiate(arrowBullet, firepoint.position, firepoint.rotation);
            //Runner.Spawn(bullet, firepoint.position, firepoint.rotation);

            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet = Instantiate(bulletDoubleArrow, firepoint.position, firepoint.rotation);
            //Runner.Spawn(bullet, firepoint.position, firepoint.rotation);

            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
    }
    void ShootShotgun(bool enchance)
    {
        if (!enchance)
        {
            for (int i = 0; i < amountofshotgun; i++)
            {
                GameObject bullet = Instantiate(shotgunBullet, firepoint.position, Quaternion.identity);
                //Runner.Spawn(bullet, firepoint.position, Quaternion.identity);

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
                //Runner.Spawn(bullet, firepoint.position, Quaternion.identity);

                Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
                Vector2 dir = transform.rotation * Vector2.up;
                Vector2 pdir = Vector2.Perpendicular(dir) * UnityEngine.Random.Range(-spread, spread);
                rb.velocity = (dir + pdir) * bulletForce;
            }
        }
    }
    void Laser(bool show)
    {
        if (show == true)
        {
            laserbullet.SetActive(true);
        }
        if (show == false)
        {
            laserbullet.SetActive(false);
            
        }

        /*GameObject bullet = Instantiate(laserCollision, firepoint.position, firepoint.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * 60, ForceMode2D.Impulse);*/
    }
    public int lastSeat;
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    public void Rpc_Spawn(int seatNum)
    {

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
        NetworkManagerUI.instance.Rpc_SeatDis2(seatNum - 1);
        NetworkManagerUI.instance.Rpc_SeatDis(seatNum - 1);

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
        UtilsClass.ShakeCamera(0.03f, .1f);
    }
    public void EffectItemServerRpc()
    {
        EffectItemClientRpc();
    }
    public void EffectItemClientRpc()
    {
        ResultEffectItem();
    }
    void ResultEffectItem()
    {
        Instantiate(upgradeEffect, new Vector3(this.gameObject.transform.position.x, this.gameObject.transform.position.y,-4.55f), Quaternion.identity);

    }
    [Rpc(RpcSources.InputAuthority, RpcTargets.All)]
    public void Rpc_RotateCilent(Vector2 angle)
    {
        transform.up = angle - new Vector2(transform.position.x, transform.position.y);

    }
    
    private void OnNickNameChanged()
    {
        Name.text = nickName.ToString();
    } 
    [Rpc(RpcSources.InputAuthority,RpcTargets.StateAuthority)]
    public void Rpc_SetNickName(string nickname)
    {
        this.nickName = nickname;
        Debug.Log(nickname);
    }

}