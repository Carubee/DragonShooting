using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OpenOptioon : MonoBehaviour
{
    [SerializeField] GameObject option;
    [SerializeField] GameObject shop;
    void Start()
    {
        
    }

    void Update()
    {
        
    }
    public void OpenOption()
    {
        option.SetActive(true);
    }
    public void ShopOption()
    {
        shop.SetActive(true);
    }
    public void CloseOption()
    {
        option.SetActive(false);
        shop.SetActive(false);
    }
    public void LeaveGame()
    {
        SceneManager.LoadScene(1);
    }
}
