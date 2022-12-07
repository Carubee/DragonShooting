using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class itemOpen : MonoBehaviour
{
    private Vector2 movement;
    private Rigidbody2D rb;
    public float movespeed = 5;
    public GameObject player;
    public GameObject InventoryThis;
    [SerializeField] AudioSource openPop;

    void Start()
    {
        rb = this.GetComponent<Rigidbody2D>();
        player = GameObject.FindGameObjectWithTag("Player");
        InventoryThis = GameObject.FindGameObjectWithTag("Drop");
        StartCoroutine(openInventory(2));
        GotnewItem.instance.AmountBox += 1;
       

        Destroy(gameObject, 3f);
         
    }
    private void Update()
    {
        Vector3 direction = player.transform.position - transform.position;
        direction.Normalize();
        movement = direction;
        PlayerPrefs.SetInt("Box", GotnewItem.instance.AmountBox);
        PlayerPrefs.Save();
    }
    private void FixedUpdate()
    {
        moveCharacter(movement);
    }
    void moveCharacter(Vector2 direction)
    {
        rb.MovePosition((Vector2)transform.position + (direction * movespeed * Time.deltaTime));
    }
    public void openItem()
    {
        openPop.Play();
        GotnewItem.instance.Box.SetActive(true);
        gunMode.instance.canPlay = false;
    }
    IEnumerator openInventory(float starttime)
    {
        yield return new WaitForSeconds(starttime);
        openItem();
    }
}
