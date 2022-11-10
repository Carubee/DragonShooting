using UnityEngine;
using System.Collections;

public class coinEffControl : MonoBehaviour
{
    private Vector2 movement;
    private Rigidbody2D rb;
    public float movespeed = 5;
    public GameObject player;

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        player = GameObject.FindGameObjectWithTag("Player");
    }
    private void Update()
    {
        Vector3 direction = player.transform.position - transform.position;
        direction.Normalize();
        movement = direction;
    }
    private void FixedUpdate()
    {
        moveCharacter(movement);
    }
    void moveCharacter(Vector2 direction)
    {
        rb.MovePosition((Vector2)transform.position + (direction * movespeed * Time.deltaTime));

    }

}
