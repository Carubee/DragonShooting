using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManagerUI : MonoBehaviour
{
    
    [SerializeField] private GameObject playerGun;

    public void StartClient()
    {
        gunMode.instance.SelectSpawn(1);
        gunMode.instance.canPlay = true;
    }
    public void StartClient2()
    {
        gunMode.instance.SelectSpawn(2);
        gunMode.instance.canPlay = true;

    }
    public void StartClient3()
    {
        gunMode.instance.SelectSpawn(3);
        gunMode.instance.canPlay = true;

    }
    public void StartClient4()
    {
        gunMode.instance.SelectSpawn(4);
        gunMode.instance.canPlay = true;

    }

}
