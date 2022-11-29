using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;

public class NameInput : MonoBehaviour
{
    public static NameInput Instance { get; private set; }
    public string input;
    public Text NamePlayer;
    void Start()
    {
        if(Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
        input = PlayerPrefs.GetString("PlayerNickName");
        NamePlayer.text = PlayerPrefs.GetString("PlayerNickName");
        if(input == "")
        {
            NamePlayer.text = "Entername";

        }
    }

    void Update()
    {
        
    }
    public void ReadInput(string s)
    {
        input = s;
        PlayerPrefs.SetString("PlayerNickName" , input);
        PlayerPrefs.Save();
    }
}
