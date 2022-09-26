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
    void Start()
    {
        if(allow == false)
        Destroy(this.gameObject, destroy);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "fish" && item.instace.tracker == false)
        {
            if(destroyOnHit == true)
            {
                UtilsClass.ShakeCamera(0.03f, .1f);
                Instantiate(explosion, this.gameObject.transform.position , Quaternion.identity);
                Destroy(this.gameObject);
            }
            if(bomb == false)
            collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
            if (bomb == true)
            collision.GetComponent<FishControl>().hitDame(100, gameObject);
        }
        if (collision.gameObject.tag == "lock" && item.instace.tracker == true)
        {
            if (destroyOnHit == true)
            {
                UtilsClass.ShakeCamera(0.03f, .1f);
                Instantiate(explosion, this.gameObject.transform.position, Quaternion.identity);
                collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
                Destroy(this.gameObject);
            }
            
        }
    }
}
