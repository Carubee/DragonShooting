using UnityEngine;
using System.Collections;

public class MainPlayControl : MonoBehaviour
{
    public Transform camera;
    public Transform objectfollow;

    void Update()
    {
        Vector3 dir = objectfollow.position;
        camera.position = dir;
    }
}
