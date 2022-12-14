using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class buyGun : MonoBehaviour
{
    public GameObject button;

    public GunControl gunControl;


    public void NormalCannon()
    {
        Debug.Log("Buy");
        UiTextSpawmControl.Instance.MinusGold(0);
        gunControl.cost = 1;
        gunControl.damage = 1;
        gunControl.range = 1;
        gunMode.instance.mode = "NormalGun";
        GunControl.instance._ani.SetFloat("level", 1);

    }
    public void longRangeCannon()
    {
        Debug.Log("Buy1");
        UiTextSpawmControl.Instance.MinusGold(0);
        gunMode.instance.mode = "NormalGun";
        gunControl.cost = 2;
        gunControl.damage = 2;
        gunControl.range = 3;
        GunControl.instance._ani.SetFloat("level", 2);

    }
    public void clusterbombCannon()
    {
        Debug.Log("Buy2");
        UiTextSpawmControl.Instance.MinusGold(0);
        gunMode.instance.mode = "Shotgun";
        gunControl.cost = 5;
        gunControl.damage = 2;
        gunControl.range = 0;
        GunControl.instance._ani.SetFloat("level", 3);

    }
    public void gatlingTurret()
    {
        Debug.Log("Buy3");
        UiTextSpawmControl.Instance.MinusGold(0);
        gunControl.cost = 3;
        gunControl.damage = 3;
        gunControl.range = 3;
        gunMode.instance.mode = "Gatling";
        GunControl.instance._ani.SetFloat("level", 4);

    }
    public void balitaTurret()
    {
        Debug.Log("Buy4");
        UiTextSpawmControl.Instance.MinusGold(0);
        gunMode.instance.mode = "Balista";
        gunControl.cost = 15;
        gunControl.damage = 10;
        gunControl.range = 3;
        GunControl.instance._ani.SetFloat("level", 5);

    }
    public void highEnergyRailgun()
    {
        Debug.Log("Buy5");
        UiTextSpawmControl.Instance.MinusGold(0);
        gunMode.instance.mode = "laser";
        gunControl.cost = 25;
        gunControl.damage = 100;
        gunControl.range = 3;
        GunControl.instance._ani.SetFloat("level", 6);
    }
}
