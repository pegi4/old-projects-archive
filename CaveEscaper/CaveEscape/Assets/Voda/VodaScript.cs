using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class VodaScript : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            SceneManager.LoadScene("EndScreen");
            FindObjectOfType<audio>().Play("Death");
        }
    }
    float x = 2.3931f;
    float y = -746.0988f;
    float z = 0;
    public float hitrost = 1f;
    public int kdajVoda = 5;
    void Start()
    {
        transform.position = new Vector3(x, y, z);
    }
    void Update()
    {
        transform.position += new Vector3(0, 0.001f, 0) * hitrost;
    }
}
