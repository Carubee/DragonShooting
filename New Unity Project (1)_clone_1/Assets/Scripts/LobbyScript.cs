using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LobbyScript : MonoBehaviour
{
    [SerializeField] GameObject notice;
    [SerializeField] GameObject loading;
    [SerializeField] GameObject popUp;
    [SerializeField] GameObject lobbyUI;
    public  bool noticCheck;
    public bool reSet;
    [SerializeField] Text playerName;
    [SerializeField] Text coin;
    [SerializeField] AudioSource open;
    [SerializeField] AudioSource close;
    
    void Start()
    { 
        lobbyUI.SetActive(true);
        playerName.text = NameInput.Instance.input;
       coin.text = PlayerPrefs.GetInt("coin").ToString();
    }

    void Update()
    {
        if (gameObject == false) 
        {
            Close();
        }
        
    }
    private IEnumerator coroutine;

    public void lobby()
    {
        notice.SetActive(false);
        loading.SetActive(true);
        open.Play();
        SpawnNetwork.instance.JoinGame();
        coroutine = WaitAndPrint(10.0f);
        StartCoroutine(coroutine);
    }
    private IEnumerator WaitAndPrint(float waitTime)
    {
        while (true)
        {
            yield return new WaitForSeconds(waitTime);
            lobbyUI.SetActive(false);

        }
    }
    public void Close()
    {
        popUp.SetActive(false);
        close.Play();
    }
    public void Open()
    {
        popUp.SetActive(true);
        notice.SetActive(true);
        loading.SetActive(false);
        open.Play();
    }
    public void soundOpen()
    {
        open.Play();

    }
    public void soundClose()
    {
        close.Play();

    }
}
