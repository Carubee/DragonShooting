using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Fusion;

public struct NetworkInputData : INetworkInput
{
    public Vector2 direction;     
    public int  gunChange;
    public byte button;
    public const byte MOUSEBUTTON1 = 0x01;
}
