using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class End : MonoBehaviour
{
    public Sound sound;
    public Manager manager;
    //public GameObject timer;
    public timer timerScript;   

    IEnumerator zamenjaj()
    {
        yield return new WaitForSeconds(1);
        SceneManager.LoadScene("EndScreen");
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            timerScript.SaveScore();
            FindObjectOfType<audio>().Play("Cilj");
            StartCoroutine(zamenjaj());
            GameObject.Find("Voda").GetComponent<VodaScript_NW>().nar = false;
        }
    }

}