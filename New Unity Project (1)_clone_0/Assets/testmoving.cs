using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testmoving : MonoBehaviour
{
    [SerializeField] Transform firepoint;
    public float bulletForce = 20f;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        GameObject bullet2 = this.gameObject;
        Rigidbody2D rb = bullet2.GetComponent<Rigidbody2D>();
        rb.AddForce(this.transform.up * bulletForce, ForceMode2D.Impulse);
    }
}
