class Helicopter_Base_H;

class ls_laat_base: Helicopter_Base_H
{
    class Turrets;
    class Reflectors;
}

class ls_laat: ls_laat_base
{
    class Turrets: Turrets
    {
        class MainTurret;
    }
    
    class ACE_SelfActions;

    class Reflectors: Reflectors
    {
        class Left;
        class Right;
    }

    class HitPoints
    {
        class HitHull;
        class HitFuel;
        class HitEngine;
        class HitEngine_1;
        class HitEngine_2;
        class HitHRotor;
        class HitVRotor;
        class HitAvionics;
    };
}