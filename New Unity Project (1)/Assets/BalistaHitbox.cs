using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CodeMonkey.Utils;

public class BalistaHitbox : MonoBehaviour
{
    public float destroy;
    public bool destroyOnHit;
    public bool allow;
    public bool bomb;
    [SerializeField] GameObject explosion;
    [SerializeField] GameObject enchanceDamage;
    [SerializeField] GameObject normalBullet;
    void Start()
    {
        if (allow == false)
            Destroy(this.gameObject, destroy);
    }

    // Update is called once per frame
    void Update()
    {
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
                Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);
                Destroy(this.gameObject);
            }
            if (bomb == false)
            {
                collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
            }
            if (bomb == true)
            {
                collision.GetComponent<FishControl>().hitDame(100, gameObject);
                Debug.Log("Boom");
            }
            
        }
        if (collision.gameObject.tag == "lock" && item.instace.tracker == true)
        {
            if (destroyOnHit == true)
            {
                UtilsClass.ShakeCamera(0.03f, .1f);
                Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);
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
    
}
