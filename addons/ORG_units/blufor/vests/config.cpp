#include "../../../ORG_main/macros/main.hpp"

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
			MACRO_NEW_VEST(infantry,ORG_officer),
            MACRO_NEW_VEST(infantry,ORG_1st_lt),
            MACRO_NEW_VEST(arc,ORG_arc)
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    /// ---- Vests ----

    class V_PlateCarrier1_rgr;
    class 3AS_Katarn_Vest_Demo_Base;
    class 3AS_Katarn_Vest_Tech_Base;
    class 3AS_Katarn_Vest_Team_Leader_Base;
    class 3AS_Katarn_Vest_Sniper_Base;

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
    class JLTS_CloneVestLieutenant : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestPurge : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class 3AS_V_Katarn_Vest_Demo : 3AS_Katarn_Vest_Demo_Base
    {
        class ItemInfo;
    };
    class 3AS_V_Katarn_Vest_Tech : 3AS_Katarn_Vest_Tech_Base
    {
        class ItemInfo;
    };
    class 3AS_Katarn_Vest_Team_Leader : 3AS_Katarn_Vest_Team_Leader_Base
    {
        class ItemInfo;
    };
    class 3AS_Katarn_Vest_Sniper : 3AS_Katarn_Vest_Sniper_Base
    {
        class ItemInfo;
    };

    class MACRO_NEW_VEST(infantry,base): JLTS_CloneVestOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_INF_KAMA_ITEM(ORG_SergMaj_Vest,Sergeant Major,kama\Officer_accessories.paa)
    MACRO_NEW_INF_KAMA_ITEM(ORG_lt,Lieutenant,kama\1st_lt.paa)

    
    class MACRO_NEW_VEST(arc,base): JLTS_CloneVestARC
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Arc Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_ARC_VEST_ITEM(ORG_arc,Squad Arc,arc_vest.paa)
    MACRO_NEW_ARC_VEST_ITEM(ORG_Marshal,Marshal,Marshal_vest.paa)


    class MACRO_NEW_VEST(trooper,base) : SWLB_clone_basic_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Belt ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply200";
            vestType = "Rebreather";

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
    MACRO_NEW_TROOPER_VEST_ITEM(ORG_trooper_belt,ORG)

    class MACRO_NEW_VEST(trooperholster,base) : JLTS_CloneVestHolster
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Holster ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_TROOPERHOLSTER_VEST_ITEM(ORG_trooper_holster,ORG)


    class MACRO_NEW_VEST(vettrooper,base) : JLTS_CloneVestRecon
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_VET_VEST_ITEM(ORG_Veteran_Vest,Veteran)


    class MACRO_NEW_VEST(vettrooperalt,base) : JLTS_CloneVestSuspender
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_VET_VEST_ALT_ITEM(ORG_Veteran_Suspenders,Veteran alt.)


    class MACRO_NEW_VEST(csp,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Specialist Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_CSP_VEST_ITEM(ORG_CSP_Vest,Specialist,csp\SpecialistBase_ca.paa)
    MACRO_NEW_CSP_VEST_ITEM(ORG_CSPRTO_Vest,RTO Specialist,csp\SpecialistRTO_ca.paa)
    MACRO_NEW_CSP_VEST_ITEM(ORG_CSPMEDIC_Vest,Medic Specialist,csp\SpecialistMedic_ca.paa)


    class MACRO_NEW_VEST(corp,base) : JLTS_CloneVestKama
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_CORP_VEST_ITEM(ORG_CORP_VEST,Corporal,corp\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(corpalt,base) : JLTS_CloneVestReconNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_CORP_ALT_VEST_ITEM(ORG_CORP_alt_Vest,Corporal alt.)


    class MACRO_NEW_VEST(serg,base) : JLTS_CloneVestReconOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_SERG_VEST_ITEM(ORG_Serg_Vest,Sergeant,sgt\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(sergmaj,base) : JLTS_CloneVestOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    //MACRO_NEW_SERG_MAJ_VEST_ITEM(ORG_SergMaj_Vest,Sergeant Major,sgtmaj\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(seniorensign,base) : JLTS_CloneVestSuspender
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Flight Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_FLIGHT_SENIOR_ENSIGN_VEST_ITEM(ORG_FlightSeniorEnsign_Vest,Flight Senior Ensign)


    class MACRO_NEW_VEST(flightofficer,base) : JLTS_CloneVestKama
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Flight Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_FLIGHT_OFFICER_VEST_ITEM(ORG_FlightOfficer_Vest,Flight Officer,flightOfficer\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(flightjrlt,base) : JLTS_CloneVestReconOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Flight Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_FLIGHT_JRLT_VEST_ITEM(ORG_FlightJrLT_Vest,Flight Jr Lieutenant,flightJrLt\LeadershipKama_ca.paa)

    class MACRO_NEW_VEST(reserveofficer,base) : JLTS_CloneVestOfficer2
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Reserve Officer Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_RESERVE_OFFICER_VEST_ITEM(ORG_ReserveOfficer_Vest,Reserve Officer,reserveOfficer\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(captain,base) : JLTS_CloneVestOfficer2
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_CAPTAIN_VEST_ITEM(ORG_Captain_Vest,Captain,kama\1st_lt.paa)

    class MACRO_NEW_VEST(airborne,base) : JLTS_CloneVestAirborne
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Airborne Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply180";
            vestType = "Rebreather";

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
    MACRO_NEW_AIRBORNE_VEST_ITEM(ORG_Airborne_Vest,Trooper,airborne\NonLeadershipKama_ca.paa)


    class MACRO_NEW_VEST(airbornenco,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Airborne Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply180";
            vestType = "Rebreather";

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
    MACRO_NEW_AIRBORNE_NCO_VEST_ITEM(ORG_Airborne_NCO_Vest,NCO,airborne\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(airbornecsp,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Airborne Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply180";
            vestType = "Rebreather";

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
    MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(ORG_Airborne_CSP_Vest,Specialist,airborne\NonLeadershipKama_ca.paa,csp\SpecialistBase_ca.paa)
    MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(ORG_Airborne_CSPRTO_Vest,RTO Specialist,airborne\NonLeadershipKama_ca.paa,csp\SpecialistRTO_ca.paa)
    MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(ORG_Airborne_CSPMEDIC_Vest,Medic Specialist,airborne\NonLeadershipKama_ca.paa,csp\SpecialistMedic_ca.paa)


    class MACRO_NEW_VEST(purge,base) : JLTS_CloneVestPurge
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Infantry Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_PURGE_VEST_ITEM(ORG_Purge_Vest,Purge)


    class MACRO_NEW_VEST(purgecwo,base) : JLTS_CloneVestPurge
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] CWO Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_PURGE_CWO_VEST_ITEM(ORG_CWO5_Vest,CWO-5,cwo\LeadershipKama_ca.paa,cwo\cwo5_vest_upper.paa)
    MACRO_NEW_PURGE_CWO_VEST_ITEM(ORG_CWO4_Vest,CWO-4,cwo\LeadershipKama_ca.paa,cwo\cwo4_vest_upper.paa)


    class MACRO_NEW_VEST(assault_demo,base) : 3as_v_katarn_vest_demo
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Assault Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_ASSAULT_DEMO_VEST_ITEM(ORG_Assault_Demo_Vest,Demo *WIP*)


    class MACRO_NEW_VEST(assault_tech,base) : 3as_v_katarn_vest_tech
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Assault Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_ASSAULT_TECH_VEST_ITEM(ORG_Assault_Tech_Vest,Tech *WIP*)


    class MACRO_NEW_VEST(assault_nco,base) : 3AS_Katarn_Vest_Team_Leader
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Assault Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_ASSAULT_NCO_VEST_ITEM(ORG_Assault_NCO_Vest,NCO *WIP*)


    class MACRO_NEW_VEST(assault_ammo,base) : 3AS_Katarn_Vest_Sniper
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Assault Vest ('base')";

        class ItemInfo : ItemInfo
        {
            containerClass = "Supply210";
            vestType = "Rebreather";

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
    MACRO_NEW_ASSAULT_AMMO_VEST_ITEM(ORG_Assault_Ammo_Vest,Bandolier *WIP*)

    /// ---- End
}