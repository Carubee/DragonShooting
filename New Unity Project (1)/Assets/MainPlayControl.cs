using UnityEngine;
using System.Collections;

public class MainPlayControl : MonoBehaviour
{
    public Transform camera;
    public Transform objectfollow;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.LoadLevel("Home");
        }
        Vector3 dir = objectfollow.position;
        camera.position = dir;
    }
}
