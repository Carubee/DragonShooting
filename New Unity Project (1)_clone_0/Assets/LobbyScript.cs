using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LobbyScript : MonoBehaviour
{
    [SerializeField] GameObject notice;
    [SerializeField] GameObject loading;
    [SerializeField] GameObject popUp;
    float timeLoad;
    public  bool loadingCheck;
    public  bool noticCheck;
    public bool reSet;
    void Start()
    {
        
    }

    void Update()
    {
        
        if(loadingCheck == true)
        {
            
            timeLoad += Time.deltaTime;
            if(timeLoad >= 3)
                SceneManager.LoadScene(2);
        }
    }
    public void lobby()
    {
        notice.SetActive(false);
        loading.SetActive(true);
        loadingCheck = true;
    }
    public void Close()
    {
        popUp.SetActive(false);
        timeLoad = 0;
    } 
    public void Open()
    {
        popUp.SetActive(true);
        notice.SetActive(true);
        loading.SetActive(false);
    }
}
