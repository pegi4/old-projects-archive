using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class BestScore : MonoBehaviour
{

    public TMP_Text Btext;
    public TMP_Text Ctext;

    void Update()
    {
        int curentHighScore = PlayerPrefs.GetInt("HighScore", 500);
        int curentScore = PlayerPrefs.GetInt("curentScore", 100);
        string bscore = "Best time: " + curentHighScore.ToString();
        string cscore = "Curent time: " + curentScore.ToString();
        Btext.text = bscore;
        Ctext.text = cscore;
    }
}
