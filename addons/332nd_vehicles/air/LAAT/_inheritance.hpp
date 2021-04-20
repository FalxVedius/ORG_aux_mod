//Balls >:)
class B_Heli_Attack_01_base_F;
class 3as_laat_Base: B_Heli_Attack_01_base_F
{
    class Turrets;
}

class 3as_LAAT_Mk1: 3as_laat_Base
{
    class Turrets: Turrets
    {
        class Copilot;
        class LeftDoorgun;
        class RightDoorGun;
    }
}

//Lights
class 3as_laatFloodLight_Base: 3as_laat_Base
{
    class Turrets: Turrets
    {
        class Copilot;
    }
    class Reflectors;
}
class 3as_LAAT_Mk1Lights: 3as_laatFloodLight_Base 
{
    class Turrets: Turrets
    {
        class Copilot;
    }
    class Reflectors: Reflectors
    {
        class Left;
        class Right;
    }
};

//Mk2
class 3as_laatUnarmed_Base:3as_laat_Base
{
    class Turrets: Turrets
    {
        class Copilot;
    }
};
class 3as_LAAT_Mk2: 3as_laatUnarmed_Base
{
    class Turrets: Turrets
    {
        class Copilot;
    }
}

//Mk2 Lights
class 3as_LAAT_Mk2Lights:3as_laatFloodLight_Base
{
    class Turrets: Turrets
    {
        class Copilot;
    }
    class Reflectors: Reflectors
    {
        class Left;
        class Right;
    }
}