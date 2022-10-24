using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using CodeMonkey.Utils;

public class BalistaHitbox : NetworkBehaviour
{
    public float destroy;
    public bool destroyOnHit;
    public bool allow;
    public bool bomb;
    [SerializeField] GameObject explosion;
    [SerializeField] GameObject enchanceDamage;
    [SerializeField] GameObject normalBullet;
    public float timeToDestroy;

    float rotateBomb;
    void Start()
    {
        rotateBomb = 90;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!IsOwner) return;
        timeToDestroy += Time.deltaTime;
        if (timeToDestroy > destroy || allow == false)
        {
            //this.gameObject.GetComponent<NetworkObject>().Despawn();
            Destroy(this.gameObject);

        }
        if (item.instace.doubleDamage == true && bomb == false && allow == false)
        {
            enchanceDamage.SetActive(true);
            normalBullet.SetActive(false);
        }
        if (item.instace.doubleDamage == false && bomb == false && allow == false)
        {
            enchanceDamage.SetActive(false);
            normalBullet.SetActive(true);
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {

        if (collision.gameObject.tag == "fish" && GameObject.FindGameObjectWithTag("lock") == null)
        {
            if (destroyOnHit == true)
            {
                UtilsClass.ShakeCamera(0.03f, .1f);
                GameObject bomb = Instantiate(explosion, this.gameObject.transform.position, Quaternion.Euler(new Vector3(-90, 0, 0)));
                //bomb.GetComponent<NetworkObject>().Spawn();
                //this.gameObject.GetComponent<NetworkObject>().Despawn();
                //BombServerRPC();
                Destroy(this.gameObject);
            }
            if (bomb == false)
            {
                collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
            }
            if (bomb == true)
            {
                collision.GetComponent<FishControl>().hitDame(100, gameObject);

            }
            
        }
        if (collision.gameObject.tag == "lock" && item.instace.tracker == true)
        {
            if (destroyOnHit == true)
            {
                UtilsClass.ShakeCamera(0.03f, .1f);
                Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);
                this.gameObject.GetComponent<NetworkObject>().Despawn();
                Destroy(this.gameObject);
            }
           /* if (bomb == false)
            {
                collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
            }
            if (bomb == true)
            {
                collision.GetComponent<FishControl>().hitDame(100, gameObject);
            }*/
        }

    }
    [ServerRpc(RequireOwnership = false)]
    public void BombServerRPC()
    {
        Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);
        showResultClientRpc();
    }

    [ClientRpc]
    public void showResultClientRpc()
    {
        Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);

    }

}
