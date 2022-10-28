using UnityEngine;
using System.Collections;

public class Swim : MonoBehaviour
{

    struct RotateData
    {
        public float rotateDir;
        public float angleAbs;
        public float stopRotateRadian;
        public float rotatedAngle;
        public float rotateDelta;
    }

    public delegate void Event_RotationStart(float angle);
    public Event_RotationStart EventRotate;

    public float BoundCircleRadius;

    private RotateData mCurRotateData;

    Transform _tr;
    bool acpectRotate;
    public float RotateSpeed = 90;
    public float Speed;
    public float FreezeTime;
    public bool Freeze;


    void OnEnable()
    {
        _tr = transform;
        //_tr.position = new Vector3(0, 0, 10);
    }

    public void Rotate(float angle)
    {
        if (_tr == null)
        {
            _tr = transform;
        }
        StartRotate(angle);
    }

    void StartRotate(float angle)
    {
        acpectRotate = true;
        if (EventRotate != null)
        {
            EventRotate(angle);
        }


        mCurRotateData.rotateDir = Mathf.Sign(angle);
        mCurRotateData.angleAbs = Mathf.Abs(angle);
        mCurRotateData.stopRotateRadian = mCurRotateData.angleAbs * 0.95F;
        mCurRotateData.rotatedAngle = 0F;
        mCurRotateData.rotateDelta = 0F;
    }

    void Update()
    {
        if (Freeze == true)
            FreezeTime += Time.deltaTime;

        if (FreezeTime >= 1)
        {
            Freeze = false;
            FreezeTime = 0;
        }

        if(Freeze == false)
        transform.position += _tr.right * Time.deltaTime * Speed;

        if (acpectRotate)
        {
            mCurRotateData.rotateDelta = RotateSpeed * Time.deltaTime * (1 - mCurRotateData.rotatedAngle / mCurRotateData.angleAbs);
            _tr.rotation *= Quaternion.Euler(0, 0, mCurRotateData.rotateDir * mCurRotateData.rotateDelta);
            mCurRotateData.rotatedAngle += mCurRotateData.rotateDelta;
            if (mCurRotateData.rotatedAngle > mCurRotateData.stopRotateRadian)
                acpectRotate = false;
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Arrow")
        {
            Freeze = true;
        }
    }
}
