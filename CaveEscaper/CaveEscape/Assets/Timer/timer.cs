using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class timer : MonoBehaviour
{
    public TMP_Text text;
    float theTime;
    public float speed = 1;


    // Start is called before the first frame update
    void Start()
    {
        //PlayerPrefs.SetInt("HighScore", 500);
    }

    // Update is called once per frame
    void Update()
    {
        theTime += Time.deltaTime * speed;
        string seconds = (theTime % 60).ToString("0" + "s");
        text.text = seconds;
        
    }

    public void SaveScore ()
    {
        int sec = Mathf.RoundToInt(theTime % 60);
        PlayerPrefs.SetInt("curentScore", sec);
        int curentHighScore = PlayerPrefs.GetInt("HighScore", 500);
        if (sec < curentHighScore)
        {
            PlayerPrefs.SetInt("HighScore", sec);
        }

    }

    public void SaveScoreOnDeath()
    {
        int sec = Mathf.RoundToInt(theTime % 60);
        PlayerPrefs.SetInt("curentScore", sec);

    }

}
