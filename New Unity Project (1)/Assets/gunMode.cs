using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
using Unity.Netcode;

public class gunMode : NetworkBehaviour
{

    private NetworkVariable<int> randomnuber = new NetworkVariable<int>(1);
    public string mode;
    public static gunMode instance;
    public GameObject Bullet;
    public float firerate ;
    public float firerateAmount ;
    public float firelaser ;
    public bool laserSwitch ;

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
    

    void Start()
    {
        randomnuber.Value = Random.Range(0, 100);
        Debug.Log(OwnerClientId + "; randomNumber" + randomnuber.Value);
        instance = this;
        firerateAmount = 0.5f;
    }

    void Update()
    {
        if (!IsOwner) return;
        //costGun.text = gunControl.cost.ToString();
        if (Input.GetKeyDown(KeyCode.T))
        {
            TestServerRpc();
            //TestClientRpc(new ClientRpcParams { Send = new ClientRpcSendParams { TargetClientIds = new List<ulong> { 1 } } });

        }
        if (Input.GetKeyDown("space"))
        {
            UiTextSpawmControl.Instance.PushGold(50);

        }
        /*if (Input.GetButtonDown("Fire1") && PlayerPrefs.GetInt("gold", 1000) > 0)
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
        */
        //modeGun.text = mode;
        if (laserSwitch == true)
        {
            
                laserbullet.SetActive(true);
                Laser();
            
        }
        if (Input.GetMouseButtonUp(0) || PlayerPrefs.GetInt("gold", 1000) < gunControl.cost )
        {
            laserSwitch = false;
            laserbullet.SetActive(false);
        }
        
         Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
         float angle = Mathf.Atan2(mousePos.y, mousePos.x) * Mathf.Rad2Deg;
         transform.rotation = Quaternion.AngleAxis(angle + offset, Vector3.forward);
        
        if(firerate <= 2)
            firerate += Time.deltaTime;
        
        if (Input.GetMouseButton(0)  && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canfire == true && OpenOptioon.instant.openMenu == false)
        {

            if (mode == "laser")
            {
                laserSwitch = true;
            }
            if (firerate >= firerateAmount)
            {
                if (item.instace.spare == false)
                {
                    UiTextSpawmControl.Instance.MinusGold(gunControl.cost);
                }
                if (item.instace.spare == true)
                {
                    randomFreefire = UnityEngine.Random.Range(0, 3);
                    if (randomFreefire == 1 || randomFreefire == 2)
                        UiTextSpawmControl.Instance.MinusGold(gunControl.cost);
                }
                
                
                firerate = 0;
                if (mode == "NormalGun")
                {
                    Normal();
                    GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
                    bullet.GetComponent<NetworkObject>().Spawn();

                }
                if (mode == "Long-RangeGun")
                {
                    GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);

                    Long();
                }
                if (mode == "Shotgun")
                {
                    GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
                    ShootShotgun();
                }
                
                if (mode == "Balista")
                {
                    ShootArrow();
                    GameObject bullet = Instantiate(flashGun2, firepoint.position, firepoint.rotation);

                }
            }
        }

            if (Input.GetMouseButton(0) && mode == "Gatling" && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canfire == true && OpenOptioon.instant.openMenu == false) 
        {
            firerate += Time.deltaTime;
            if (firerate >= 0.1)
            {
                firerate = 0;
                Gatling();
                UiTextSpawmControl.Instance.MinusGold(1);
            }
        }
        if (Input.GetKeyDown("1"))
        {
            //Debug.Log("Buy");
            gunControl.cost = 1;
            gunControl.damage = 1;
            gunControl.range = 1;
            gunMode.instance.mode = "NormalGun";
            GunControl.instance._ani.SetFloat("level", 1);

            normalGun.SetActive(true);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (Input.GetKeyDown("2"))
        {
            //Debug.Log("Buy1");
            gunMode.instance.mode = "Long-RangeGun";
            gunControl.cost = 2;
            gunControl.damage = 2;
            gunControl.range = 3;
            GunControl.instance._ani.SetFloat("level", 2);

            normalGun.SetActive(false);
            longGun.SetActive(true);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (Input.GetKeyDown("3"))
        {
            //Debug.Log("Buy2");
            gunMode.instance.mode = "Shotgun";
            gunControl.cost = 5;
            gunControl.damage = 2;
            gunControl.range = 0;
            GunControl.instance._ani.SetFloat("level", 3);

            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(true);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (Input.GetKeyDown("4"))
        {
            //Debug.Log("Buy3");
            gunControl.cost = 3;
            gunControl.damage = 3;
            gunControl.range = 3;
            gunMode.instance.mode = "Gatling";
            GunControl.instance._ani.SetFloat("level", 4);

            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(true);
            balistaGun.SetActive(false);
            laserGun.SetActive(false);
        }
        if (Input.GetKeyDown("5"))
        {
            //Debug.Log("Buy4");
            gunMode.instance.mode = "Balista";
            gunControl.cost = 15;
            gunControl.damage = 10;
            gunControl.range = 3;
            GunControl.instance._ani.SetFloat("level", 5);

            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(true);
            laserGun.SetActive(false);
        }
        if (Input.GetKeyDown("6"))
        {
            //Debug.Log("Buy5");
            gunMode.instance.mode = "laser";
            gunControl.cost = 75;
            gunControl.damage = 10;
            gunControl.range = 3;
            GunControl.instance._ani.SetFloat("level", 6);

            normalGun.SetActive(false);
            longGun.SetActive(false);
            shotGun.SetActive(false);
            gatingGun.SetActive(false);
            balistaGun.SetActive(false);
            laserGun.SetActive(true);
        }
        
    }
    void Normal()
    {
        if (!IsOwner) return;
        GameObject bullet2 = Instantiate(normalBullet, firepoint.position, Quaternion.identity);
        bullet2.GetComponent<NetworkObject>().Spawn();
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
    [ServerRpc]
    private void TestServerRpc()
    {
        Debug.Log("TestClientRpc" + OwnerClientId ) ;
    }
    [ClientRpc]
    private void TestClientRpc(ClientRpcParams clientRpcParams)
    {
        Debug.Log("TestClientRpc");
    }
}