using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using CodeMonkey.Utils;

public class BalistaHitbox : MonoBehaviour
{
    public float destroy;
    public bool destroyOnHit;
    public bool allow;
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
        if (collision.gameObject.tag == "fish")
        {
            if(destroyOnHit == true)
            {
                UtilsClass.ShakeCamera(0.03f, .1f);
                Instantiate(explosion, this.gameObject.transform.position , Quaternion.identity);
                Destroy(this.gameObject);
            }
            collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
        }
    }
}
