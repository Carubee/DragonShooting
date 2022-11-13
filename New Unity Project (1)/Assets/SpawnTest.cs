using UnityEngine;
using System.Collections;
using Fusion;

public class SpawnTest : NetworkBehaviour
{

    public GameObject _pre;
    public float countTime;
    public float RndCountTime;
    public float StartWaitTime;


    public float _distance = 0;

    float limitHieght;
    float limitWith;

    private bool DestroyWithSpawner;
    public static SpawnTest instance;

    public void Start()
    {
        instance = this;
        //if (Runner.IsClient) return;
        limitHieght = (Screen.height) / 300;
        limitWith = (Screen.width) / 300;
        StartCoroutine(spawm(StartWaitTime));

    }
    public void FixedUpdate()
    {

    }

    IEnumerator spawm(float starttime)
    {
        yield return new WaitForSeconds(starttime);
        Debug.Log("AA");
        Vector3 Rotate;
        //int a = Random.Range(0, _pre);
        Transform _tr;
        int directionPos = Random.Range(0, 4);
        //_tr = Runner.Spawn(_pre[a], transform.position, Quaternion.LookRotation(Rotate)).transform;

        switch (directionPos)
        {
            case 0:
                float _posY0 = Random.Range(-limitHieght + 1, limitHieght - 1);
                //_tr.position = new Vector3(-limitWith - 1 - _distance, _posY0, 2);
                if (_posY0 < -limitHieght / 2)
                {
                    Rotate = new Vector3(0, 0, Random.Range(25, 65));
                     Runner.Spawn(_pre, new Vector3(-limitWith - 1 - _distance, _posY0, 2), Quaternion.LookRotation(Rotate));

                }
                else
                {
                    if (_posY0 > limitHieght / 2)
                    {
                        Rotate = new Vector3(0, 0, Random.Range(-65, -25));
                        Runner.Spawn(_pre, new Vector3(-limitWith - 1 - _distance, _posY0, 2), Quaternion.LookRotation(Rotate));

                    }
                    else
                    {
                        Rotate = new Vector3(0, 0, Random.Range(-45, 45));
                        Runner.Spawn(_pre, new Vector3(-limitWith - 1 - _distance, _posY0, 2), Quaternion.LookRotation(Rotate));

                    }
                }
                break;

            case 1:
                float _posX1 = Random.Range(-limitWith + 1, limitWith - 1);
                //_tr.position = new Vector3(_posX1, limitHieght + 1 + _distance, 1);
                if (_posX1 < -limitWith / 2)
                {
                    Rotate = new Vector3(0, 0, Random.Range(295, 335));
                    Runner.Spawn(_pre, new Vector3(_posX1, limitHieght + 1 + _distance, 1), Quaternion.LookRotation(Rotate));

                }
                else
                {
                    if (_posX1 > limitWith / 2)
                    {
                        Rotate = new Vector3(0, 0, Random.Range(-155, -115));
                        Runner.Spawn(_pre, new Vector3(_posX1, limitHieght + 1 + _distance, 1), Quaternion.LookRotation(Rotate));

                    }
                    else
                    {
                        Rotate = new Vector3(0, 0, Random.Range(-135, -35));
                        Runner.Spawn(_pre, new Vector3(_posX1, limitHieght + 1 + _distance, 1), Quaternion.LookRotation(Rotate));

                    }
                }
                break;

            case 2:

                float _posX2 = Random.Range(-limitWith + 1, limitWith - 1);
                //_tr.position = new Vector3(_posX2, -limitHieght - 1 - _distance, 3);
                if (_posX2 < -limitWith / 2)
                {
                    Rotate = new Vector3(0, 0, Random.Range(25, 65));
                    Runner.Spawn(_pre, new Vector3(_posX2, -limitHieght - 1 - _distance, 3), Quaternion.LookRotation(Rotate));

                }
                else
                {
                    if (_posX2 > limitWith / 2)
                    {
                        Rotate = new Vector3(0, 0, Random.Range(115, 155));
                        Runner.Spawn(_pre, new Vector3(_posX2, -limitHieght - 1 - _distance, 3), Quaternion.LookRotation(Rotate));

                    }
                    else
                    {
                        Rotate = new Vector3(0, 0, Random.Range(35, 145));
                        Runner.Spawn(_pre, new Vector3(_posX2, -limitHieght - 1 - _distance, 3), Quaternion.LookRotation(Rotate));

                    }
                }
                break;

            case 3:
                float _posY3 = Random.Range(-limitHieght + 1, limitHieght - 1);
                //_tr.position = new Vector3(limitWith + 1 + _distance, _posY3, 4);
                if (_posY3 < -limitHieght / 2)
                {
                    Rotate = new Vector3(0, 0, Random.Range(115, 165));
                    Runner.Spawn(_pre, new Vector3(limitWith + 1 + _distance, _posY3, 4), Quaternion.LookRotation(Rotate));

                }
                else
                {
                    if (_posY3 > limitHieght / 2)
                    {
                        Rotate = new Vector3(0, 0, Random.Range(205, 245));
                        Runner.Spawn(_pre, new Vector3(limitWith + 1 + _distance, _posY3, 4), Quaternion.LookRotation(Rotate));

                    }
                    else
                    {
                        Rotate = new Vector3(0, 0, Random.Range(135, 235));
                        Runner.Spawn(_pre, new Vector3(limitWith + 1 + _distance, _posY3, 4), Quaternion.LookRotation(Rotate));

                    }
                }
                break;
        }

        


        yield return new WaitForSeconds(countTime);
        StartCoroutine(spawm(0));

    }



}
