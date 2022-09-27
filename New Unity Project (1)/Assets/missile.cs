using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class missile : MonoBehaviour
{
    public Transform target;
    public GameObject targetObject;

    public float speed = 20f;

    private Rigidbody2D rb;

    public float rotateSpeed = 100f;

    public Vector2 movement;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void FixedUpdate()
    {
        if (item.instace.tracker == true)
        {
            targetObject = GameObject.FindGameObjectWithTag("lock");
            if (GameObject.FindGameObjectWithTag("lock") != null)
            {
                target = targetObject.transform;
                Vector2 direction = (Vector2)target.position - rb.position;
                float angle = Vector3.Cross(direction , transform.up).z;
                rb.angularVelocity = -angle * rotateSpeed;
                direction.Normalize();
                rb.velocity = transform.up * speed;
                /*movement = direction;
                moveBullet(movement);*/
            }
            
            
        }
    }
    void moveBullet(Vector2 direction)
    {
        rb.MovePosition((Vector2)transform.position + (direction * speed * Time.deltaTime));
    }
    }

