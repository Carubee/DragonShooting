using UnityEngine;
using System.Collections;
using System;

public class GunControl : MonoBehaviour
{
    public static GunControl Instance;
    public GameObject Bullet;
    public static int BonusCoin;
    public GameObject tenlua;
    public GameObject _effboom;
    public GameObject popUp;

    bool _checkfire;
    bool _tenlua;
    public Animator _ani;
    public int _levelGun;
    public int damage;
    public int cost;
    public static GunControl instance;
    public int range;
    public event EventHandler<OnShootEventArgs> OnShoot;

    private Transform aimGunEndPointTransform;
    private Transform aimTransform;

    public GameObject showrange;
    public GameObject showrange1;
    public GameObject showrange2;
    public class OnShootEventArgs : EventArgs
    {
        public Vector3 gunEndPointPosition;
        public Vector3 shootPosition;
    }
    void Start()
    {
        instance = this;
        _checkfire = true;
        _tenlua = false;
        Instance = this;
        _ani = GetComponent<Animator>();
        _ani.Play("Idle", 0, 0);
        _ani.SetFloat("level", 0);
        _ani.speed = 2;
        _levelGun = 1;
        BonusCoin = 1;
        damage = 1;
        range = 1;

        //aimGunEndPointTransform = aimTransform.Find("GunEndPointPosition");
    }
    public void Update()
    {
        if(range == 0)
        {
            showrange.SetActive(true);
            showrange1.SetActive(false);
            showrange2.SetActive(false);
        }
        if(range == 1)
        {
            showrange.SetActive(false);
            showrange1.SetActive(true);
            showrange2.SetActive(false);
        }
        if(range == 3)
        {
            showrange.SetActive(false);
            showrange1.SetActive(false);
            showrange2.SetActive(true);
        }
        
    }

    public void PlusGun()
    {
        /*if (!_checkfire) return;
        if (_levelGun < 9)
            _levelGun += 1;
        else
            _levelGun = 1;
        damage += 1;
        _ani.SetFloat("level", _levelGun);*/
    }

    public void MinusGun()
    {
        /*if (!_checkfire) return;
        if (_levelGun > 1)
            _levelGun -= 1;
        else
            _levelGun = 9;

        _ani.SetFloat("level", _levelGun);*/
    }

    public void Fire()
    {
        Vector3 mousePoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        if(gunMode.instance.laserSwitch == false)
        transform.up = Vector3.Normalize(mousePoint + Vector3.forward * 10 - transform.position);
        if (PlayerPrefs.GetInt("gold", 1000) < _levelGun && _tenlua == false )
            popUp.SetActive(true);
        else
        {
            if (PlayerPrefs.GetInt("gold", 1000) >= _levelGun && _checkfire && _tenlua == false && mousePoint.y < range )
            {
               /* if (gunMode.instance.mode == "NormalGun")
                {
                    //Debug.Log("Fire");
                    _ani.Play("Fire", 0, 0);
                    // AudioControl.Instance.shoot();
                    GameObject _bullet = (GameObject)Instantiate(Bullet);
                    _bullet.transform.position = transform.position + transform.up * 0.5f;
                    _bullet.GetComponent<BulletControl>().InitBullet(_levelGun, transform, new Vector3(mousePoint.x, mousePoint.y, -2.5f));
                }*/
                UiTextSpawmControl.Instance.MinusGold(cost);

                OnShoot?.Invoke(this, new OnShootEventArgs { 
                    gunEndPointPosition = aimGunEndPointTransform.position,shootPosition = mousePoint,
                });
            }
        }
        
        if (_tenlua && _checkfire)
        {
            _tenlua = false;
            tenlua.transform.up = Vector3.Normalize(mousePoint + Vector3.forward * 10 - tenlua.transform.position);
            _checkfire = false;
            LeanTween.move(tenlua, new Vector3(mousePoint.x, mousePoint.y, 0), 0.2f * (Vector2.Distance(mousePoint, tenlua.transform.position))).setOnComplete(() =>
            {
                RaycastHit2D[] fish = Physics2D.CircleCastAll(new Vector3(tenlua.transform.position.x, tenlua.transform.position.y, 0), 2, Vector3.zero);
                AudioControl.Instance.boom();
                for (int i = 0; i < fish.Length; i++)
                {
                    /*if (fish[i].collider.tag == "fish")
                        fish[i].collider.gameObject.GetComponent<FishControl>().hitDame(500, gameObject);*/
                }
                GameObject boom = (GameObject)Instantiate(_effboom, tenlua.transform.position + tenlua.transform.up * 0.5f, Quaternion.identity);
                Destroy(boom, 1.5f);
                tenlua.SetActive(false);
                GetComponent<SpriteRenderer>().enabled = true;
                transform.up = Vector3.up;
                transform.localScale = Vector3.zero;
                LeanTween.scale(gameObject, new Vector3(1, 1, 1), 0.5f).setEase(LeanTweenType.easeOutBack).setOnComplete(() =>
                {
                    _checkfire = true;
                });
            });
        }
    }

    public void ChangtoRocket()
    {
        /*_checkfire = false;
        LeanTween.scale(gameObject, Vector3.zero, 0.5f).setOnComplete(() =>
        {

            GetComponent<SpriteRenderer>().enabled = false;
            _checkfire = true;
            _tenlua = true;
        });
        tenlua.SetActive(true);
        tenlua.transform.localScale = Vector3.zero;
        tenlua.transform.position = new Vector3(transform.position.x, transform.position.y, 0);
        tenlua.transform.up = Vector3.up;
        LeanTween.scale(tenlua, new Vector3(1, 1, 1), 0.5f).setEase(LeanTweenType.easeOutBack);
        */
    }
    
}
