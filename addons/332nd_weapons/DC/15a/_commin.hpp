class Single: Single
{
    reloadTime=0.25;
    dispersion=0.00000009;
}

class FullAuto: FullAuto
{
    reloadtime=0.25;
    dispersion=0.00000009;
    showToPlayer=1;

    minRange=2;
    minRangeProbab=0.5;
    midRange=75;
    midRangeProbab=0.69999999;
    maxRange=150;
    maxRangeProbab=0.050000001;
    aiRateOfFire=2;
    aiRateOfFireDistance=200;
}

class WeaponSlotsInfo: WeaponSlotsInfo
{
    mass=30;

    class PointerSlot:PointerSlot
    {
        linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
        displayName="Pointer Slot";
        compatibleItems[]=
        {
            "acc_flashlight",
            "acc_pointer_IR"
        };
    };
}