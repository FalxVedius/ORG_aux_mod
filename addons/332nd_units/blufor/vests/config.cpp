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
    class JLTS_CloneVestOfficer2 : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestHolster : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class JLTS_CloneVestARC : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class SWLB_clone_basic_armor : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class JLTS_CloneVestRecon : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestReconNCO : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestReconOfficer : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestSuspender : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class JLTS_CloneVestKama : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestAirborne : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestAirborneNCO : JLTS_CloneVestAirborne
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
            containerClass = "Supply210";

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

    
    class MACRO_NEW_VEST(arc,base): JLTS_CloneVestARC
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Arc Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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


    class MACRO_NEW_VEST(trooper,base) : SWLB_clone_basic_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Trooper Belt ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";

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

    class MACRO_NEW_VEST(trooperholster,base) : JLTS_CloneVestHolster
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Trooper Holster ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_TROOPERHOLSTER_VEST_ITEM(332nd_trooper_holster,332nd)


    class MACRO_NEW_VEST(vettrooper,base) : JLTS_CloneVestRecon
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_VET_VEST_ITEM(332nd_Veteran_Vest,Veteran)


    class MACRO_NEW_VEST(vettrooperalt,base) : JLTS_CloneVestSuspender
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_VET_VEST_ALT_ITEM(332nd_Veteran_Suspenders,Veteran alt.)


    class MACRO_NEW_VEST(csp1,base) : JLTS_CloneVestKama
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_CSP1_VEST_ITEM(332nd_CSP1_Vest,Specialist One)


    class MACRO_NEW_VEST(csp2csp3,base) : JLTS_CloneVestAirborne
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_CSP2_CSP3_VEST_ITEM(332nd_CSP2_Vest,Specialist Two)
    MACRO_NEW_CSP2_CSP3_VEST_ITEM(332nd_CSP3_Vest,Specialist Three)


    class MACRO_NEW_VEST(csp4,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_CSP4_VEST_ITEM(332nd_CSP4_Vest,Specialist Four)


    class MACRO_NEW_VEST(corp,base) : JLTS_CloneVestKama
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_CORP_VEST_ITEM(332nd_CORP_VEST,Corporal)


    class MACRO_NEW_VEST(corpalt,base) : JLTS_CloneVestReconNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_CORP_ALT_VEST_ITEM(332nd_CORP_alt_Vest,Corporal alt.)


    class MACRO_NEW_VEST(serg,base) : JLTS_CloneVestReconOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_SERG_VEST_ITEM(332nd_Serg_Vest,Sergeant)


    class MACRO_NEW_VEST(sergmaj,base) : JLTS_CloneVestOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_SERG_MAJ_VEST_ITEM(332nd_SergMaj_Vest,Sergeant Major)


    class MACRO_NEW_VEST(seniorensign,base) : JLTS_CloneVestSuspender
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Flight Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_FLIGHT_SENIOR_ENSIGN_VEST_ITEM(332nd_FlightSeniorEnsign_Vest,Flight Senior Ensign)


    class MACRO_NEW_VEST(flightofficer,base) : JLTS_CloneVestKama
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Flight Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_FLIGHT_OFFICER_VEST_ITEM(332nd_FlightOfficer_Vest,Flight Officer)


    class MACRO_NEW_VEST(flightjrlt,base) : JLTS_CloneVestReconOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Flight Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_FLIGHT_JRLT_VEST_ITEM(332nd_FlightJrLT_Vest,Flight Jr Lieutenant)

    class MACRO_NEW_VEST(reserveofficer,base) : JLTS_CloneVestOfficer2
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Reserve Officer Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";

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
    MACRO_NEW_RESERVE_OFFICER_VEST_ITEM(332nd_ReserveOfficer_Vest,Reserve Officer)
    /// ---- End
}