using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

enum MyButton
{
    LeftDown = 0,
    RightDown = 1,
    LeftUp = 2,
    RightUp = 3,
}
public struct NetworkInputData : INetworkInput
{
    public Vector2 direction;     
    public byte gunChange;
    public byte button;
    public byte button2;
    public const byte MOUSEBUTTON1 = 0x01;
    public const byte MOUSEBUTTON2 = 0x01;
    public byte PosChange;
    public byte LastPose;
    public bool Switch;
}
