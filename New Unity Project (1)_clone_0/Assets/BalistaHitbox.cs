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
    public float timeToDestroy;
    public float speed = 5f;
    public float rotateSpeed = 200f;
    public GameObject target;
    private Rigidbody2D rb;
    private string tagName = "lock";
    public void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        
        if (item.instace.tracker)
        {
            target = GameObject.FindGameObjectWithTag(tagName);
        }
            timeToDestroy += Time.deltaTime;
        if (timeToDestroy > destroy && allow == false)
        {
            Destroy(this.gameObject);
        }
        //bulletTypeValue.Value = item.instace.doubleDamage;
        if (item.instace.tracker)
        {
            
            Vector3 direction = new Vector2(target.transform.position.x, target.transform.position.y) - rb.position;
            direction.Normalize();
            float rotateAmount = Vector3.Cross(direction, transform.up).z;
            rb.angularVelocity = rotateAmount * rotateSpeed;
            rb.velocity = transform.up * speed;
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
                collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);

                UtilsClass.ShakeCamera(0.03f, .1f);
                Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);
                Destroy(this.gameObject);
            }
           
        }

    }
    

    public void CheckTypeBullet(bool bullet2)
    {
        if (bullet2 == true && bomb == false && allow == false)
        {
            enchanceDamage.SetActive(true);
            normalBullet.SetActive(false);
        }
        if (bullet2 == false && bomb == false && allow == false)
        {
            enchanceDamage.SetActive(false);
            normalBullet.SetActive(true);
        }
    }
    public void UserOwner(int ID)
    {

    }

}
