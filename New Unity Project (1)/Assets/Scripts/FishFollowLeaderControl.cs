using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;

public class FishFollowLeaderControl : NetworkBehaviour
{

    List<Transform> _fish;
    int countFish = 1;
    public GameObject _FishPre;
    public float Distan = 0.5f;
    Swim _swim;

    public int minCount;
    public int maxCount;
    private NetworkObject m_SpawnedNetworkObject;
    public bool DestroyWithSpawner;
    public override void OnNetworkSpawn()
    {
        enabled = IsServer;
        if(!enabled )
        {
            return;
        }
        base.OnNetworkSpawn();
    }
    public void FollowStart()
    {
        _swim = GetComponent<Swim>();
        _fish = new List<Transform>();
        countFish = Random.Range(minCount, maxCount);
        for (int i = 0; i < countFish; i++)
        {
            Transform _tr = Instantiate(_FishPre).transform;
            _tr.position = Vector3.zero;
            _tr.position = transform.position - transform.right * Distan * i;
            _tr.right = transform.right;
            _tr.GetComponent<FishFollowControl>().SetTarget(transform, Vector3.Magnitude(transform.right * Distan * i));
            _tr.GetComponent<Swim>().Speed = _swim.Speed;
            _fish.Add(_tr);
            m_SpawnedNetworkObject = _tr.GetComponent<NetworkObject>();
            m_SpawnedNetworkObject.Spawn();
        }
    }

    public void destroyOnList(Transform _trs)
    {
        _fish.Remove(_trs);

        if (_fish.Count == 0)
        {
            Destroy(gameObject);
        }
    }
    public override void OnNetworkDespawn()
    {
        if (IsServer && DestroyWithSpawner && m_SpawnedNetworkObject != null && m_SpawnedNetworkObject.IsSpawned)
        {
            m_SpawnedNetworkObject.Despawn();
        }
        base.OnNetworkDespawn();
    }
}
