using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
using Unity.Netcode;
using System;

public class gunMode : NetworkBehaviour
{
    public  NetworkVariable<int> gunTypeValue = new NetworkVariable<int>(1);
    public  NetworkVariable<int> bulletTypeValue = new NetworkVariable<int>(1);
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

    public bool canfire;
    public int randomFreefire;
    public bool canPlay;

    public override void OnNetworkSpawn()
    {
        instance = this;
        firerateAmount = 0.5f;
        Debug.Log(OwnerClientId);
    }

    void Update()
    {
        if (!IsOwner) return;
        if (!canPlay) return;
        if (Input.GetKeyDown(KeyCode.T))
        {
            PlayerShootGunServerRPC(bulletTypeValue.Value);
        }
        if (Input.GetKeyDown("space"))
        {
            UiTextSpawmControl.Instance.PushGold(50);
        }

        if (laserSwitch == true)
        {
            laserbullet.SetActive(true);
            Laser();

        }
        if (Input.GetMouseButtonUp(0) || PlayerPrefs.GetInt("gold", 1000) < gunControl.cost)
        {
            laserSwitch = false;
            laserbullet.SetActive(false);
        }

       
            Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            float angle = Mathf.Atan2(mousePos.y, mousePos.x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.AngleAxis(angle + offset, Vector3.forward);

        if (firerate <= 2)
            firerate += Time.deltaTime;

        if (Input.GetMouseButton(0) && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canfire == true && OpenOptioon.instant.openMenu == false)
        {

            if (mode == "laser")
            {
                laserSwitch = true;
            }
            if (firerate >= firerateAmount)
            {
                if (item.instace.spare == false)
                {
                    if(bulletTypeValue.Value != 4)
                    PlayerShootGunServerRPC(bulletTypeValue.Value);
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
        if (Input.GetMouseButton(0) && bulletTypeValue.Value == 4 && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canfire == true && OpenOptioon.instant.openMenu == false)
        {
            firerate += Time.deltaTime;
            if (firerate >= 0.1)
            {
                firerate = 0;
                PlayerShootGunServerRPC(bulletTypeValue.Value);
                UiTextSpawmControl.Instance.MinusGold(1);
            }
        }
        if (Input.GetKeyDown("1"))
        {
            //Debug.Log("Buy");
            gunControl.cost = 1;
            gunControl.damage = 1;
            OnstateChangedServerRpc(1);
        }
        if (Input.GetKeyDown("2"))
        {
            //Debug.Log("Buy1");
            gunControl.cost = 2;
            gunControl.damage = 2;
            OnstateChangedServerRpc(2);

        }
        if (Input.GetKeyDown("3"))
        {
            //Debug.Log("Buy2");
            gunControl.cost = 5;
            gunControl.damage = 2;
            OnstateChangedServerRpc(3);

        }
        if (Input.GetKeyDown("4"))
        {
            //Debug.Log("Buy3");
            gunControl.cost = 3;
            gunControl.damage = 3;
            OnstateChangedServerRpc(4);

        }
        if (Input.GetKeyDown("5"))
        {
            //Debug.Log("Buy4");
            gunControl.cost = 15;
            gunControl.damage = 10;
            OnstateChangedServerRpc(5);

        }
        if (Input.GetKeyDown("6"))
        {
            //Debug.Log("Buy5");
            gunControl.cost = 75;
            gunControl.damage = 10;
            OnstateChangedServerRpc(6);

        }

    }
    
    [ServerRpc]
    public void OnstateChangedServerRpc(int changeGun)
    {
        gunTypeValue.Value = changeGun;
        OnstateChangedClientRpc(changeGun);
    }
    [ClientRpc]
    public void OnstateChangedClientRpc(int gunType)
    {
        ResultChangeGun(gunType);
    }
    private void ResultChangeGun(int gunValue)
    {
        
        Debug.Log(gunTypeValue);
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
        if(gunValue == 3)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(true);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if(gunValue == 4)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(true);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if(gunValue == 5)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(true);
            laserGun.SetActive(false);
        }
        if(gunValue == 6)
        {
            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(true);
        }
        bulletTypeValue.Value = gunValue;

    }
    [ServerRpc]
    public void PlayerShootGunServerRPC(int shootType)
    {
        bulletTypeValue.Value = shootType;
        showResultClientRpc(shootType);
    }
    [ClientRpc]
    public void showResultClientRpc(int bulltetType)
    {
        CheckBullet(bulltetType);
    }

    public void CheckBullet(int gunmode)
    {
        if (gunmode == 1)
        {
           GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            Normal();
        }
        if (gunmode == 2)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            Long();
        }
        if (gunmode == 3)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            ShootShotgun();
        }
        if (gunmode == 4)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            Gatling();
        }

        if (gunmode == 5)
        {
            ShootArrow();
            GameObject bullet = Instantiate(flashGun2, firepoint.position, firepoint.rotation);
        }
    }

    
    void Normal()
    {
        GameObject bullet2 = Instantiate(normalBullet, firepoint.position, Quaternion.identity);
        Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
    }
    void Long()
    {
        GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
        Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);

    }
    void Gatling()
    {
        GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
        Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);

    }
    void ShootArrow()
    {
        GameObject bullet = Instantiate(arrowBullet, firepoint.position, firepoint.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
    }
    void ShootShotgun()
    {
        for(int i = 0; i < amountofshotgun; i++ )
        {
            GameObject bullet = Instantiate(shotgunBullet, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            Vector2 dir = transform.rotation * Vector2.up;
             Vector2 pdir = Vector2.Perpendicular(dir) * UnityEngine.Random.Range(-spread, spread);
             rb.velocity = (dir + pdir) * bulletForce;

        }
    }
    void Laser()
    {
        GameObject bullet = Instantiate(laserCollision, firepoint.position, firepoint.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * 60, ForceMode2D.Impulse);
    }
    public void SelectSpawn(int seatNum)
    {
        if(seatNum == 1)
        {
            this.gameObject.transform.position = new Vector3(-3.057f, -3.303f, -4.55f);
        }
        if(seatNum == 2)
        {
            this.gameObject.transform.position = new Vector3(3.3f, -3.303f, -4.55f);
        }
        if(seatNum == 3)
        {
            this.gameObject.transform.position = new Vector3(-3.057f, 3.35f, -4.55f);
        }
        if(seatNum == 4)
        {
            this.gameObject.transform.position = new Vector3(3.057f, 3.35f, -4.55f);
        }
    }
  
}