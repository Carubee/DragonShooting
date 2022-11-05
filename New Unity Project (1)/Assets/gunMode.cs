using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using CodeMonkey.Utils;
using Unity.Netcode;

public class gunMode : NetworkBehaviour
{
    public NetworkVariable<int> gunTypeValue = new NetworkVariable<int>(1);
    public NetworkVariable<int> bulletTypeValue = new NetworkVariable<int>(1);
    public NetworkVariable<bool> DoubleBullet = new NetworkVariable<bool>(false);
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

    public bool canfire;
    public int randomFreefire;
    public bool canPlay;

    public float TimeDouble = 10;

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
        if (Input.GetKeyDown("space"))
        {
            UiTextSpawmControl.Instance.PushGold(50);
        }
        if (TimeDouble < 10)
        {
            TimeDouble += Time.deltaTime;
        }
        Vector2 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
        float angle = Mathf.Atan2(mousePos.y, mousePos.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.AngleAxis(angle + offset, Vector3.forward);

        if (firerate <= 2)
            firerate += Time.deltaTime;
        if (Input.GetMouseButtonUp(0) || PlayerPrefs.GetInt("gold", 1000) < gunControl.cost && gunTypeValue.Value == 6)
        {
            LaserServerRpc(false);
        }

        if (Input.GetMouseButton(0) && PlayerPrefs.GetInt("gold", 1000) >= gunControl.cost && canfire == true && OpenOptioon.instant.openMenu == false && bulletTypeValue.Value != 4)
        {

            if (gunTypeValue.Value == 6)
            {
                LaserServerRpc(true);
            }
            if (firerate >= firerateAmount)
            {
                if (TimeDouble < 10)
                {
                    PlayerShootGunServerRpc(bulletTypeValue.Value, true);
                }
                else
                {
                    PlayerShootGunServerRpc(bulletTypeValue.Value, false);
                }
                if (item.instace.spare == false)
                {

                    if (bulletTypeValue.Value != 4)
                        PlayerShootGunServerRpc(bulletTypeValue.Value, DoubleBullet.Value);
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
                PlayerShootGunServerRpc(bulletTypeValue.Value, DoubleBullet.Value);
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
        bulletTypeValue.Value = gunValue;

    }
    [ServerRpc]
    public void PlayerShootGunServerRpc(int shootType, bool enchance)
    {
        bulletTypeValue.Value = shootType;
        DoubleBullet.Value = enchance;
        showResultClientRpc(shootType, enchance);
    }
    [ClientRpc]
    public void showResultClientRpc(int bulltetType, bool enchance2)
    {
        CheckBullet(bulltetType, enchance2);
    }
    [ServerRpc]
    public void LaserServerRpc(bool show)
    {
        LaserClientRpc(show);
    }
    [ClientRpc]
    public void LaserClientRpc(bool show)
    {
        Laser(show);
    }

    public void CheckBullet(int gunmode, bool enchance3)
    {
        if (gunmode == 1)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            Normal(enchance3);
        }
        if (gunmode == 2)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            Long(enchance3);
        }
        if (gunmode == 3)
        {
            GameObject bullet = Instantiate(flashGun, firepoint.position, firepoint.rotation);
            ShootShotgun(enchance3);
        }
        if (gunmode == 4)
        {
            GameObject bullet = Instantiate(flashGun, firepoint2.position, firepoint.rotation);
            Gatling(enchance3);
        }

        if (gunmode == 5)
        {
            ShootArrow(enchance3);
            GameObject bullet = Instantiate(flashGun2, firepoint.position, firepoint.rotation);
        }
    }


    void Normal(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(normalBullet, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleNormal, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
       
    }
    void Long(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleLong, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }

    }
    void Gatling(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet2 = Instantiate(longBullet, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet2 = Instantiate(bulletDoubleLong, firepoint.position, Quaternion.identity);
            Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }

    }
    void ShootArrow(bool enchance)
    {
        if (!enchance)
        {
            GameObject bullet = Instantiate(arrowBullet, firepoint.position, firepoint.rotation);
            Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
            rb.AddForce(firepoint.up * bulletForce, ForceMode2D.Impulse);
        }
        else
        {
            GameObject bullet = Instantiate(bulletDoubleArrow, firepoint.position, firepoint.rotation);
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
        else
        {
            laserbullet.SetActive(false);
        }

        GameObject bullet = Instantiate(laserCollision, firepoint.position, firepoint.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        rb.AddForce(firepoint.up * 60, ForceMode2D.Impulse);
    }
    public void SelectSpawn(int seatNum)
    {
        if (seatNum == 1)
        {
            this.gameObject.transform.position = new Vector3(-3.057f, -3.303f, -4.55f);
        }
        if (seatNum == 2)
        {
            this.gameObject.transform.position = new Vector3(3.351f, -3.303f, -4.55f);
        }
        if (seatNum == 3)
        {
            this.gameObject.transform.position = new Vector3(-3.04f, 3.27f, -4.55f);
        }
        if (seatNum == 4)
        {
            this.gameObject.transform.position = new Vector3(3.359f, 3.248f, -4.55f);
        }
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
    [ServerRpc(RequireOwnership = false)]
    public void BombServerRpc(float posX, float posY)
    {
        BombClientRpc(posX, posY);
    }
    [ClientRpc]
    public void BombClientRpc(float posX, float posY)
    {
        ResultBomb(posX,posY);
    }
    public void ResultBomb(float posX , float posY)
    {
        Instantiate(bomb, new Vector3(posX,posY), Quaternion.identity);
        UtilsClass.ShakeCamera(0.03f, .1f);
    }
    [ServerRpc]
    public void EffectItemServerRpc()
    {
        EffectItemClientRpc();
    }
    [ClientRpc]
    public void EffectItemClientRpc()
    {
        ResultEffectItem();
    }
    void ResultEffectItem()
    {
        Instantiate(upgradeEffect, new Vector3(this.gameObject.transform.position.x, this.gameObject.transform.position.y,-4.55f), Quaternion.identity);

    }
}