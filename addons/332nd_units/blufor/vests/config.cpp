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

    class V_PlateCarrier1_rgr;
    class JLTS_CloneVestOfficer : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class MACRO_NEW_VEST(infantry,base): JLTS_CloneVestOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply220";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 0;
                    PassThrough = 1;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 0;
                    passThrough = 1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    }
    MACRO_NEW_INF_KAMA_ITEM(332nd_officer,Officer,kama\Officer_accessories.paa)
    MACRO_NEW_INF_KAMA_ITEM(332nd_1st_lt,1st Lt,kama\1st_lt.paa)

    class JLTS_CloneVestARC : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class MACRO_NEW_VEST(arc,base): JLTS_CloneVestARC
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Arc Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply220";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 0;
                    PassThrough = 1;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 0;
                    passThrough = 1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    }
    MACRO_NEW_ARC_VEST_ITEM(332nd_arc,332nd,arc_vest.paa)


    
    class SWLB_clone_basic_armor : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class MACRO_NEW_VEST(trooper,base) : SWLB_clone_basic_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Trooper Belt ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply220";

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 0;
                    PassThrough = 1;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 0;
                    passThrough = 1;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    }
    MACRO_NEW_TROOPER_VEST_ITEM(332nd_trooper_belt,332nd)


    /// ---- End
}