#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
    class MACRO_PATCH_NAME(opfor_units)
    {
        author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(units);
        requiredAddons[] =
        {
            MACRO_PATCH_NAME(units)
        };
        requiredVersion = 0.1;
        units[] = {
            MACRO_NEW_UNIT(cisb1,332nd_CIS_B1),
            MACRO_NEW_UNIT(cisb1jumppack,332nd_CIS_B1_Jumppack),
            MACRO_NEW_UNIT(cisb1breach,332nd_CIS_B1_Breacher),
            MACRO_NEW_UNIT(cisb1ar,332nd_CIS_B1_Support),
            MACRO_NEW_UNIT(cisb1at,332nd_CIS_B1_AT),
        };
        weapons[] = {
            MACRO_NEW_UNIFORM(cisb1,332nd_CIS_B1),
            MACRO_NEW_UNIFORM(cisb1jumppack,332nd_CIS_B1_Jumppack),
        };
    };
};

class CfgWeapons
{
    class JLTS_DroidB1;
    class JLTS_DroidB1_Rocket;
    class MACRO_NEW_UNIFORM(cisb1,base) : JLTS_DroidB1
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1jumppack,base) : JLTS_DroidB1_Rocket
    {
        class ItemInfo;
    };
    //CISB1
    MACRO_NEW_CISB1_UNIFORM_ITEM(332nd_CIS_B1,B1,332nd_CIS_B1)
    MACRO_NEW_CISB1JUMPPACK_UNIFORM_ITEM(332nd_CIS_B1_Jumppack,Jumppack B1,332nd_CIS_B1_Jumppack)

};

class CfgVehicles
{
    class MACRO_NEW_UNIT(cisb1,base);
    class MACRO_NEW_UNIT(cisb1jumppack,base);
    class MACRO_NEW_UNIT(cisb1breach,base);
    class MACRO_NEW_UNIT(cisb1ar,base);
    class MACRO_NEW_UNIT(cisb1at,base);

    //B1
    MACRO_NEW_CISB1_UNIT(332nd_CIS_B1,B1 Battle Droid,332nd_CIS_B1)
    MACRO_NEW_CISB1JUMPPACK_UNIT(332nd_CIS_B1_Jumppack,B1 Jumppack Battle Droid,332nd_CIS_B1_Jumppack)
    MACRO_NEW_CISB1BREACHER_UNIT(332nd_CIS_B1_Breacher,B1 Breacher Battle Droid,332nd_CIS_B1)
    MACRO_NEW_CISB1SUPPORT_UNIT(332nd_CIS_B1_Support,B1 Support Battle Droid,332nd_CIS_B1)
    MACRO_NEW_CISB1AT_UNIT(332nd_CIS_B1_AT,B1 Anti-Tank Battle Droid,332nd_CIS_B1)
};