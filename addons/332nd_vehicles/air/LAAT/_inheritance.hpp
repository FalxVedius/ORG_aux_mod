class Helicopter_Base_H;

class ls_laat_base: Helicopter_Base_H
{
    class Turrets;
}

class ls_laat: ls_laat_base
{
    class Turrets: Turrets
    {
        class MainTurret;
    }
    
    class ACE_SelfActions;
}