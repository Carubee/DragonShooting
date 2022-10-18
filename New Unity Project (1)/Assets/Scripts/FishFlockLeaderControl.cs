using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;

public class FishFlockLeaderControl : NetworkBehaviour
{

    List<Transform> _fish;
    int countFish = 1;
    public GameObject _FishPre;

    public int minCount;
    public int maxCount;

    private NetworkObject m_SpawnedNetworkObject;
    public bool DestroyWithSpawner;
    public override void OnNetworkSpawn()
    {
        enabled = IsServer;
        if (!enabled)
        {
            return;
        }
        base.OnNetworkSpawn();
    }
    public void FlockStart()
    {
        _fish = new List<Transform>();
        countFish = Random.Range(minCount, maxCount);
        for (int i = 0; i < countFish; i++)
        {
            Transform _tr = Instantiate(_FishPre).transform;
            _tr.GetComponent<FishFlockControl>().SetLeader(transform);
            _tr.position = new Vector3(0, 0, 10);
            _fish.Add(_tr);
            _tr.position = new Vector2(transform.position.x, transform.position.y) + Random.insideUnitCircle * 0.8f;
            // FishManage.Instance._FishMange.Add(_tr);
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
