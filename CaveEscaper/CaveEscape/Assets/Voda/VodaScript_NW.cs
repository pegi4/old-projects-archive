using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class VodaScript_NW : MonoBehaviour
{

    public timer timer;

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            FindObjectOfType<audio>().Play("Death");
            StartCoroutine(zamenjaj());
            timer.SaveScoreOnDeath();
        }
    }
    float x = 5f;
    float y = -218.6f;
    float z = 0;
    public float hitrost = 1f;
    public int kdajVoda = 5;
    public bool nar = false;
    IEnumerator vodaCakaj()
    {
        for(int i = kdajVoda; i >= 0; i--)
        {
            yield return new WaitForSeconds(1);
            Debug.Log("Voda bo začela naraščati po " + i + " sekundah.");
        }
        Debug.Log(" ");
        nar = true;
    }
    IEnumerator zamenjaj()
    {
            yield return new WaitForSeconds(1);
            SceneManager.LoadScene("EndScreen");
    }

    void Start()
    {
        StartCoroutine(vodaCakaj());
        transform.position = new Vector3(x, y, z);
    }
    void Update()
    {
        if (nar)
        {
           transform.position += new Vector3(0, 0.005f, 0) * hitrost;
        }
    }
}

