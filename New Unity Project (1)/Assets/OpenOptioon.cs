using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenOptioon : MonoBehaviour
{
    [SerializeField] GameObject option;
    void Start()
    {
        
    }

    void Update()
    {
        
    }
    public void OpenOption()
    {
        option.SetActive(true);
        Debug.Log("Yee");
    }
    public void CloseOption()
    {
        option.SetActive(false);
    }
}
