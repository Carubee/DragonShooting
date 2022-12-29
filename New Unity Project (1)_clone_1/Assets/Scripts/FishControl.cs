using UnityEngine;
using System.Collections;
using Fusion;

public class FishControl : NetworkBehaviour
{

    public string AnimationName;
    public string AnimationNameDie;
    Animator _ani;

    public int Hp;
    public int RndHp;

    public int HpMax;
    public int RndHpMax;

    Swim _swim;
    public int _hp;
    GameObject _checkCollsion;

    bool _checkInvisible;

    public delegate void CallDie();
    public CallDie _callDie;
    public int armor;
    public int _gold;
    public int _gold_min;
    public int _gold_max;
    [SerializeField] GameObject armorEffect;
    [SerializeField] GameObject healEffect;
    [SerializeField] GameObject lockEffect;
    public float resetArmor;
    public bool armorCreate;
    public float resetOnHit;
    public bool canRegen;
    public float regenTime;
    public int evade;
    public bool canEvade;

    public GameObject dieDragon;
    [SerializeField] GameObject dropItem;

    public void Start()
    {
        _checkInvisible = false;
        _ani = GetComponent<Animator>();
        //_ani.Play(AnimationName, 0, Random.Range(0f, 1f));
        _gold = Random.Range(_gold_min, _gold_max);
        _swim = GetComponent<Swim>();

        if (Random.Range(0, 2) == 1)
            _hp = Random.Range(HpMax - RndHpMax, HpMax + RndHpMax);
        else
            _hp = Random.Range(Hp - RndHp, Hp - RndHp);
    }
    private void FixedUpdate()
    {

        if (armor == 50 && armorCreate == true)
        {
            //armorEffect.SetActive(true);
        }
        if (armor < 50 && armorCreate == true && resetOnHit <= 0)
        {
            resetArmor += Time.deltaTime;
        }
        if (resetArmor > 60)
        {
            armor = 50;
            resetArmor = 0;
        }
        if (resetOnHit > 0)
        {
            resetOnHit -= Time.deltaTime;
        }
        if (canRegen == true && resetOnHit <= 0 && _hp < HpMax)
        {
            regenTime += Time.deltaTime;
            if (regenTime >= 3)
            {
                regenTime = 0;
                _hp += 1;
                GameObject bullet = Instantiate(healEffect, new Vector2(this.gameObject.transform.position.x, this.gameObject.transform.position.y), this.gameObject.transform.rotation);
            }
        }
        if (canRegen == true && _hp >= HpMax)
        {
            regenTime += Time.deltaTime;
        }
        if (Input.GetKeyDown("1"))
        {
            if (item.instace.tracker == true)
            {
                gameObject.tag = "fish";

            }
        }
        if (item.instace.tracker == false)
        {
            gameObject.tag = "fish";
        }
        if (_hp <= 0 && item.instace.tracker == true)
        {
            gameObject.tag = "fish";
        }
    }
    private void OnMouseDown()
    {
        if (item.instace.tracker == true)
        {
            gameObject.tag = "lock";
            lockEffect.SetActive(true);
        }
    }
    public void hitDame(int dame, GameObject obj)
    {
        if (armorCreate == true)
        {
            resetOnHit = 10;
        }
        if (canEvade == true)
        {
            evade = Random.Range(0, 10);
        }
        if (evade != 1)
        {
            if (_checkCollsion == null || (_checkCollsion.GetInstanceID() != obj.GetInstanceID()))
            {
                //dame = GunControl.instance.damage;

                armor -= GunControl.instance.damage;
                if (armor <= 0)
                {
                    if (item.instace.doubleDamage == true)
                    {
                        _hp -= GunControl.instance.damage * 2;
                    }

                    if (item.instace.doubleDamage == false)
                    {
                        _hp -= GunControl.instance.damage;
                    }

                    //Debug.Log(GunControl.instance.damage);
                }
                _checkCollsion = obj;

                if (_hp <= 0)
                {
                    if (_callDie != null)
                    {
                        _callDie();
                    }


                    _swim.enabled = false;
                    _ani.Play(AnimationNameDie, 0, 0);
                    GetComponent<BoxCollider2D>().enabled = false;
                    Instantiate(Resources.Load("coinEff"),new Vector3 (transform.position.x, transform.position.y , -4.55f) , Quaternion.identity);
                    //Instantiate(dieDragon,dieDragon.transform.position , dieDragon.transform.rotation);

                    if (item.instace.doubleGold == true)
                    {
                        UiTextSpawmControl.Instance.CallTextEff(transform.position + Vector3.up * 0.5f, _gold * 2);
                    }
                    else
                    {
                        if(Runner.UserId == Runner.UserId)
                        UiTextSpawmControl.Instance.CallTextEff(transform.position + Vector3.up * 0.5f, _gold);
                    }
                    int itemDrop = Random.Range(0, 21);
                    if(itemDrop == 0)
                        Instantiate(Resources.Load("Item"), new Vector3(transform.position.x, transform.position.y, -4.3f), Quaternion.identity);

                    RPC_SendMessage("Hey Mate!");
                    //gunMode.instance.MoneyPlayer += _gold;
                    //Debug.Log(gunMode.instance.NameInput);

                    Runner.Despawn(this.Object,true);
                    //FishManage.Instance._FishMange.Remove(transform);
                    
                }
            }
        }
    }

    public void CollisionWithWave()
    {
        if (_callDie != null)
        {
            _callDie();
        }
        FishManage.Instance._FishMange.Remove(transform);
        Destroy(gameObject);

    }
    [Rpc(RpcSources.Proxies, RpcTargets.Proxies)]
    public void RPC_SendMessage(string message, RpcInfo info = default)
    {
        
        if (info.IsInvokeLocal)
            Debug.Log( $"You said: {message}\n");
        else
            Debug.Log($"Some other player said: {message}\n");
    }

    void OnBecameVisible()
    {
        if (gameObject.tag == "fish")
        {
            if (_checkInvisible) return;
            _checkInvisible = true;
            FishManage.Instance._FishMange.Add(transform);
            if (gameObject.name == "Fish12FreeSign(Clone)" || gameObject.name == "Fish11FreeSign(Clone)")
            {
                FishManage.Instance._CaMapManage.Add(transform);
            }
            else
            {
                if (gameObject.name == "Fish7Follow(Clone)" || gameObject.name == "Fish7FollowBonus(Clone)" || gameObject.name == "Fish7FreeSign(Clone)" || gameObject.name == "Fish6Follow(Clone)" || gameObject.name == "Fish6FollowBonus(Clone)" || gameObject.name == "Fish6FreeSign(Clone)")
                {
                    FishManage.Instance._MucManager.Add(transform);
                }
            }
        }
    }

    void OnDestroy()
    {
        if (Runner == null) return;
        Runner.Despawn(Object);
        if (gameObject.tag == "fish")
        {
            //FishManage.Instance._FishMange.Remove(transform);
            //Runner.Despawn(Object);
            if (gameObject.name == "Fish12FreeSign(Clone)" || gameObject.name == "Fish11FreeSign(Clone)")
            {
                FishManage.Instance._CaMapManage.Remove(transform);
            }
            else
            {
                if (gameObject.name == "Fish7Follow(Clone)" || gameObject.name == "Fish7FollowBonus(Clone)" || gameObject.name == "Fish7FreeSign(Clone)" || gameObject.name == "Fish6Follow(Clone)" || gameObject.name == "Fish6FollowBonus(Clone)" || gameObject.name == "Fish6FreeSign(Clone)")
                {
                    FishManage.Instance._MucManager.Remove(transform);
                }
            }
        }
    }

    void OnBecameInvisible()
    {
        if (gameObject.tag == "fish")
        {
            FishManage.Instance._FishMange.Remove(transform);
            if (gameObject.name == "Fish12FreeSign(Clone)" || gameObject.name == "Fish11FreeSign(Clone)")
            {
                FishManage.Instance._CaMapManage.Remove(transform);
            }
            else
            {
                if (gameObject.name == "Fish7Follow(Clone)" || gameObject.name == "Fish7FollowBonus(Clone)" || gameObject.name == "Fish7FreeSign(Clone)" || gameObject.name == "Fish6Follow(Clone)" || gameObject.name == "Fish6FollowBonus(Clone)" || gameObject.name == "Fish6FreeSign(Clone)")
                {
                    FishManage.Instance._MucManager.Remove(transform);
                }
            }
        }
        Destroy(gameObject);

    }
    public void DeadServerRpc()
    {
        DeadServerRpc();
    }
    public void DeadClientRpc()
    {
        DeadClientRpc();
    }
    public void DeadResult()
    {

    }
}
