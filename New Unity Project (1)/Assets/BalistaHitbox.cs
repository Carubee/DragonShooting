using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalistaHitbox : MonoBehaviour
{
    public float destroy;
    public bool destroyOnHit;
    public bool allow;
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
                Destroy(this.gameObject);
            }
            collision.GetComponent<FishControl>().hitDame(GunControl.instance.damage, gameObject);
        }
    }
}
