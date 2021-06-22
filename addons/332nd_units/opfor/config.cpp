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
        };
        weapons[] = {
            MACRO_NEW_UNIFORM(cisb1,332nd_CIS_B1),
        };
    };
};

class CfgWeapons
{
    class JLTS_DroidB1;
    class MACRO_NEW_UNIFORM(cisb1,base) : JLTS_DroidB1
    {
        class ItemInfo;
    };
    //CISB1
    MACRO_NEW_CISB1_UNIFORM_ITEM(332nd_CIS_B1,B1,332nd_CIS_B1)

};

class CfgVehicles
{
    class MACRO_NEW_UNIT(cisb1,base);

    //B1
    MACRO_NEW_CISB1_UNIT(332nd_CIS_B1,B1 Battle Droid,332nd_CIS_B1)
};