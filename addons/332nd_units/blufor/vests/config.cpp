#include "../../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(blufor_vests)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(blufor_units)
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(blufor_units)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEST(infantry,332nd_officer),
            MACRO_NEW_VEST(infantry,332nd_1st_lt),
            MACRO_NEW_VEST(arc,332nd_arc)
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    /// ---- Vests ----

    class JLTS_CloneVestOfficer;
    class MACRO_NEW_VEST(infantry,base): JLTS_CloneVestOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";
    }
    MACRO_NEW_INF_KAMA_ITEM(332nd_officer,Officer,kama\Officer_accessories.paa)
    MACRO_NEW_INF_KAMA_ITEM(332nd_1st_lt,1st Lt,kama\1st_lt.paa)

    class JLTS_CloneVestARC;
    class MACRO_NEW_VEST(arc,base): JLTS_CloneVestARC
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Arc Vest ('base')";
    }
    MACRO_NEW_ARC_VEST_ITEM(332nd_arc,332nd,arc_vest.paa)

    

    /// ---- En
}