using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pcontrols : MonoBehaviour
{

    public Rigidbody2D rigidBody;
    public SpriteRenderer spriteRenderer;
    public float MocSkoka;
    public float Hitrost;
    public LayerMask tlaMask;
    public Animator animacija;
    public ParticleSystem dust;

    private bool shouldJump = false;
    private bool canJump = false;

    //Ko se v nekaj zaletimo lahko sko?imo
    /*private void OnCollisionEnter2D(Collision2D collision)
    {
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 2f, tlaMask);
        if (hit.collider != null)
        {
            canJump = true;
        }
        if (hit.collider == null)
        {
            canJump = false;
        }
    }*/

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

        //Jump
        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.UpArrow))
        {
            shouldJump = true;
            FindObjectOfType<audio>().Play("Jump");
            CreateDust();
        }
        //Left
        Vector2 movement = new Vector2(0, 0);

        if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
        {
            movement.x = movement.x - Hitrost;
            spriteRenderer.flipX = true;
            CreateDust();
        }
        //Right
        if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
        {
            movement.x = movement.x + Hitrost;
            spriteRenderer.flipX = false;
            CreateDust();
        }
        //Dodamo silo gameobjectu
        rigidBody.AddForce(movement * Time.deltaTime);
        animacija.SetFloat("hSpeed", Mathf.Abs(rigidBody.velocity.x));
        animacija.SetBool("zrak", !canJump);
    }

    void FixedUpdate()
    {
        RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.down, 2f, tlaMask);
        if (hit.collider != null)
        {
            canJump = true;
        }
        if (hit.collider == null)
        {
            canJump = false;
        }

        if (shouldJump == true && canJump == true)
        {
            rigidBody.AddForce(new Vector2(0, MocSkoka));
            shouldJump = false;
            canJump = false;
        }
        if (shouldJump == true && canJump == false)
        {
            canJump = false;
            shouldJump = false;
        }
    }

    void CreateDust()
    {
        dust.Play();
    }

}


