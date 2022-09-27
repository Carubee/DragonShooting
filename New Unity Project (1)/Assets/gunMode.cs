using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using CodeMonkey.Utils;

public class gunMode : MonoBehaviour
{
    public string mode;
    public static gunMode instance;
    public GameObject Bullet;
    int _levelGun;
    public float firerate ;
    public float firelaser ;
    public bool laserSwitch ;

    public Transform firepoint;
    public GameObject arrowBullet;
    public GameObject shotgunBullet;
    public GameObject laserbullet;
    public GameObject normalBullet;
    public GameObject longBullet;
    public GameObject flashGun;

    public float bulletForce = 20f;
    public float bulletForceSlow = 10f;
    public float bulletForceGating = 40f;
    public float spread;
    public int amountofshotgun;
    public float offset;
    public GunControl gunControl;
    public UILabel modeGun;

    void Start()
    {
        instance = this;
        
        
    }

    void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);

            if (mode == "Balista")
            {
                ShootArrow();
            }
            if (mode == "Shotgun" && GunControl.instance.range <= 1)
            {
                ShootShotgun();
            } 
            if (mode == "laser")
            {
                laserSwitch = true;
            }
            if (mode == "NormalGun")
            {
               Normal();
            }
            if (mode == "Long-RangeGun")
            {
               Long();
            }
            
        }
        modeGun.text = mode;
        if (laserSwitch == true)
        {
            firelaser += Time.deltaTime;
            laserbullet.SetActive(true);

        }
        if (firelaser >= 1)
        {
            firelaser = 0;
            laserSwitch = false;
            laserbullet.SetActive(false);
        }
        if (laserSwitch == false)
        {
            Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
            float angle = Mathf.Atan2(mousePos.y, mousePos.x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.AngleAxis(angle + offset, Vector3.forward);
        }
       
        if (Input.GetMouseButton(0) && mode == "Gatling") 
        {
            firerate += Time.deltaTime;
            if (firerate >= 0.07)
            {
                firerate = 0;
                Gatling();
                UiTextSpawmControl.Instance.MinusGold(1);
            }
        }
        if (Input.GetKeyDown("1"))
        {
            Debug.Log("Buy");
            UiTextSpawmControl.Instance.MinusGold(0);
            gunControl.cost = 1;
            gunControl.damage = 1;
            gunControl.range = 1;
            gunMode.instance.mode = "NormalGun";
            GunControl.instance._ani.SetFloat("level", 1);
        }
        if (Input.GetKeyDown("2"))
        {
            Debug.Log("Buy1");
            UiTextSpawmControl.Instance.MinusGold(0);
            gunMode.instance.mode = "Long-RangeGun";
            gunControl.cost = 2;
            gunControl.damage = 2;
            gunControl.range = 3;
            GunControl.instance._ani.SetFloat("level", 2);
        }
        if (Input.GetKeyDown("3"))
        {
            Debug.Log("Buy2");
            UiTextSpawmControl.Instance.MinusGold(0);
            gunMode.instance.mode = "Shotgun";
            gunControl.cost = 5;
            gunControl.damage = 2;
            gunControl.range = 0;
            GunControl.instance._ani.SetFloat("level", 3);
        }
        if (Input.GetKeyDown("4"))
        {
            Debug.Log("Buy3");
            UiTextSpawmControl.Instance.MinusGold(0);
            gunControl.cost = 3;
            gunControl.damage = 3;
            gunControl.range = 3;
            gunMode.instance.mode = "Gatling";
            GunControl.instance._ani.SetFloat("level", 4);
        }
        if (Input.GetKeyDown("5"))
        {
            Debug.Log("Buy4");
            UiTextSpawmControl.Instance.MinusGold(0);
            gunMode.instance.mode = "Balista";
            gunControl.cost = 15;
            gunControl.damage = 10;
            gunControl.range = 3;
            GunControl.instance._ani.SetFloat("level", 5);
        }
        if (Input.GetKeyDown("6"))
        {
            Debug.Log("Buy5");
            UiTextSpawmControl.Instance.MinusGold(0);
            gunMode.instance.mode = "laser";
            gunControl.cost = 25;
            gunControl.damage = 100;
            gunControl.range = 3;
            GunControl.instance._ani.SetFloat("level", 6);
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
            GameObject bullet = Instantiate(shotgunBullet, firepoint.position, firepoint.rotation);
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            Vector2 dir = transform.rotation * Vector2.up;
             Vector2 pdir = Vector2.Perpendicular(dir) * UnityEngine.Random.Range(-spread, spread);
             rb.velocity = (dir + pdir) * bulletForce;

        }
    }
    
}