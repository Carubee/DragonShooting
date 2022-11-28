using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Fusion;

public class NetworkManagerUI : NetworkBehaviour
{
     public static NetworkManagerUI instance;
    [SerializeField] private GameObject playerGun;
    [SerializeField] GameObject[] seatEmpty;
    [SerializeField] GameObject[] seatAlready;
    [SerializeField] UILabel[] PlayerName;
    [SerializeField] UILabel[] PlayerNameMulti;
    [SerializeField] string name;
    int seatNum;
    private void Start()
    {
        instance = this;
        for (int i = 0; i < seatEmpty.Length; i++)
        {
            PlayerName[i].text = NameInput.Instance.input;
        }
    }
    public void StartClient()
    {
        Rpc_LastSeat(gunMode.instance.lastSeat);
        seatNum = 0;
        if (Runner == null) return;
        gunMode.instance.Rpc_Spawn(1);
        gunMode.instance.canPlay = true;
        selectSeat(seatNum);
    }
    public void StartClient2()
    {
        Rpc_LastSeat(gunMode.instance.lastSeat);
        seatNum = 1;
        if (Runner == null) return;
        gunMode.instance.Rpc_Spawn(2);
        gunMode.instance.canPlay = true;
        selectSeat(seatNum);
    }
    public void StartClient3()
    {
        Rpc_LastSeat(gunMode.instance.lastSeat);
        seatNum = 2;
        if (Runner == null) return;
        gunMode.instance.Rpc_Spawn(3);
        gunMode.instance.canPlay = true;
        selectSeat(seatNum);
    }
    public void StartClient4()
    {
        Rpc_LastSeat(gunMode.instance.lastSeat);
        seatNum = 3;
        if (Runner == null) return;
        gunMode.instance.Rpc_Spawn(4);
        gunMode.instance.canPlay = true;
        selectSeat(seatNum);
    }
    public void selectSeat(int numberSeat)
    {
        for(int i = 0 ; i < seatEmpty.Length; i++)
        {
            seatAlready[i].SetActive(false);

        }
        seatEmpty[numberSeat].SetActive(false);
        seatAlready[numberSeat].SetActive(true);
    }
    [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    public void Rpc_LastSeat(int seat)
    {
        seatEmpty[seat].SetActive(true);
        PlayerNameMulti[seat].text = "select";
    }
        //สร้างชื่อตัวเองให้คนอื่นเห็น
        [Rpc(RpcSources.StateAuthority, RpcTargets.All)]
    public void Rpc_SeatDis2(int seat )
    {
        PlayerNameMulti[seat].text = gunMode.instance.nickName.ToString();
        //seatEmpty[seat].SetActive(true);

    }
    //ปิดกรอบตัวเอง
    [Rpc(RpcSources.StateAuthority, RpcTargets.Proxies)]
    public void Rpc_SeatDis(int seat)
    {
        seatEmpty[seat].SetActive(false);
    }
}
