using UnityEngine;
using Unity.Netcode;
using System.Collections;

public class FishTypeSpawmControl : NetworkBehaviour 
{

    public GameObject[] _pre;
    public float countTime;
    public float RndCountTime;
    public float StartWaitTime;

    public static FishTypeSpawmControl _free;

    public float _distance = 0;

    float limitHieght;
    float limitWith;
    
    private NetworkObject m_SpawnedNetworkObject;
    private bool DestroyWithSpawner;

    public void Start()
    {

        limitHieght = (Screen.height) / 300;
        limitWith = (Screen.width) / 300;

        _free = this;
    }
    public override void OnNetworkSpawn()
    {
        enabled = IsServer;
        if (!enabled)
        {
            return;
        }
        StartCoroutine(spawm(StartWaitTime));

    }

    
        
    

    IEnumerator spawm(float starttime)
    {
        yield return new WaitForSeconds(starttime);

        int a = Random.Range(0, _pre.Length);
        Transform _tr = Instantiate(_pre[a]).transform;
        m_SpawnedNetworkObject = _tr.GetComponent<NetworkObject>();
        int directionPos = Random.Range(0, 4);
        switch (directionPos)
        {
            case 0:
                float _posY0 = Random.Range(-limitHieght + 1, limitHieght - 1);
                _tr.position = new Vector3(-limitWith - 1 - _distance, _posY0,2);
                if (_posY0 < -limitHieght / 2)
                {
                    _tr.eulerAngles = new Vector3(0, 0, Random.Range(25, 65));
                }
                else
                {
                    if (_posY0 > limitHieght / 2)
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(-65, -25));
                    }
                    else
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(-45, 45));
                    }
                }
                break;

            case 1:
                float _posX1 = Random.Range(-limitWith + 1, limitWith - 1);
                _tr.position = new Vector3(_posX1, limitHieght + 1 + _distance,1);
                if (_posX1 < -limitWith / 2)
                {
                    _tr.eulerAngles = new Vector3(0, 0, Random.Range(295, 335));
                }
                else
                {
                    if (_posX1 > limitWith / 2)
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(-155, -115));
                    }
                    else
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(-135, -35));
                    }
                }
                break;

            case 2:

                float _posX2 = Random.Range(-limitWith + 1, limitWith - 1);
                _tr.position = new Vector3(_posX2, -limitHieght - 1 - _distance,3);
                if (_posX2 < -limitWith / 2)
                {
                    _tr.eulerAngles = new Vector3(0, 0, Random.Range(25, 65));
                }
                else
                {
                    if (_posX2 > limitWith / 2)
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(115, 155));
                    }
                    else
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(35, 145));
                    }
                }
                break;

            case 3:
                float _posY3 = Random.Range(-limitHieght + 1, limitHieght - 1);
                _tr.position = new Vector3(limitWith + 1 + _distance, _posY3,4);
                if (_posY3 < -limitHieght / 2)
                {
                    _tr.eulerAngles = new Vector3(0, 0, Random.Range(115, 165));
                }
                else
                {
                    if (_posY3 > limitHieght / 2)
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(205, 245));
                    }
                    else
                    {
                        _tr.eulerAngles = new Vector3(0, 0, Random.Range(135, 235));
                    }
                }
                break;
        }

        switch (a)
        {
            case 2:
                _tr.GetComponent<FishFlockLeaderControl>().FlockStart();
                _tr.GetComponent<FishFlockLeaderControl>().OnNetworkSpawn();
                break;
            case 1:
                _tr.GetComponent<FishFollowLeaderControl>().FollowStart();
                break;
        }
        m_SpawnedNetworkObject.Spawn();

        yield return new WaitForSeconds(countTime);
        StartCoroutine(spawm(0));
    }

    public override void OnNetworkDespawn()
    {
        if(IsServer && DestroyWithSpawner && m_SpawnedNetworkObject != null && m_SpawnedNetworkObject.IsSpawned)
        {
            m_SpawnedNetworkObject.Despawn();
        }
        base.OnNetworkDespawn();
    }

}
