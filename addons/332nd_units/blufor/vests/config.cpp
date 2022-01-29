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
    class JLTS_CloneVestLieutenant : JLTS_CloneVestOfficer
    {
        class ItemInfo;
    };
    class JLTS_CloneVestPurge : V_PlateCarrier1_rgr
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
    MACRO_NEW_INF_KAMA_ITEM(332nd_SergMaj_Vest,Sergeant Major,kama\Officer_accessories.paa)
    MACRO_NEW_INF_KAMA_ITEM(332nd_lt,Lieutenant,kama\1st_lt.paa)

    
    class MACRO_NEW_VEST(arc,base): JLTS_CloneVestARC
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Arc Vest ('base')";

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
    MACRO_NEW_ARC_VEST_ITEM(332nd_arc,Squad Arc,arc_vest.paa)
    MACRO_NEW_ARC_VEST_ITEM(332nd_Marshal,Marshal,Marshal_vest.paa)


    class MACRO_NEW_VEST(trooper,base) : SWLB_clone_basic_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Trooper Belt ('base')";

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
    MACRO_NEW_VET_VEST_ALT_ITEM(332nd_Veteran_Suspenders,Veteran alt.)


    class MACRO_NEW_VEST(csp,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Specialist Vest ('base')";

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
    MACRO_NEW_CSP_VEST_ITEM(332nd_CSP_Vest,Specialist,csp\SpecialistBase_ca.paa)
    MACRO_NEW_CSP_VEST_ITEM(332nd_CSPRTO_Vest,RTO Specialist,csp\SpecialistRTO_ca.paa)
    MACRO_NEW_CSP_VEST_ITEM(332nd_CSPMEDIC_Vest,Medic Specialist,csp\SpecialistMedic_ca.paa)


    class MACRO_NEW_VEST(corp,base) : JLTS_CloneVestKama
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

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
    MACRO_NEW_CORP_VEST_ITEM(332nd_CORP_VEST,Corporal,corp\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(corpalt,base) : JLTS_CloneVestReconNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

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
    MACRO_NEW_SERG_VEST_ITEM(332nd_Serg_Vest,Sergeant,sgt\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(sergmaj,base) : JLTS_CloneVestOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

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
    //MACRO_NEW_SERG_MAJ_VEST_ITEM(332nd_SergMaj_Vest,Sergeant Major,sgtmaj\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(seniorensign,base) : JLTS_CloneVestSuspender
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Flight Vest ('base')";

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
    MACRO_NEW_FLIGHT_OFFICER_VEST_ITEM(332nd_FlightOfficer_Vest,Flight Officer,flightOfficer\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(flightjrlt,base) : JLTS_CloneVestReconOfficer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Flight Vest ('base')";

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
    MACRO_NEW_FLIGHT_JRLT_VEST_ITEM(332nd_FlightJrLT_Vest,Flight Jr Lieutenant,flightJrLt\LeadershipKama_ca.paa)

    class MACRO_NEW_VEST(reserveofficer,base) : JLTS_CloneVestOfficer2
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Reserve Officer Vest ('base')";

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
    MACRO_NEW_RESERVE_OFFICER_VEST_ITEM(332nd_ReserveOfficer_Vest,Reserve Officer,reserveOfficer\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(captain,base) : JLTS_CloneVestOfficer2
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

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
    MACRO_NEW_CAPTAIN_VEST_ITEM(332nd_Captain_Vest,Captain,kama\1st_lt.paa)

    class MACRO_NEW_VEST(airborne,base) : JLTS_CloneVestAirborne
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Airborne Vest ('base')";

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
    MACRO_NEW_AIRBORNE_VEST_ITEM(332nd_Airborne_Vest,Trooper,airborne\NonLeadershipKama_ca.paa)


    class MACRO_NEW_VEST(airbornenco,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Airborne Vest ('base')";

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
    MACRO_NEW_AIRBORNE_NCO_VEST_ITEM(332nd_Airborne_NCO_Vest,NCO,airborne\LeadershipKama_ca.paa)


    class MACRO_NEW_VEST(airbornecsp,base) : JLTS_CloneVestAirborneNCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Airborne Vest ('base')";

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
    MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(332nd_Airborne_CSP_Vest,Specialist,airborne\NonLeadershipKama_ca.paa,csp\SpecialistBase_ca.paa)
    MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(332nd_Airborne_CSPRTO_Vest,RTO Specialist,airborne\NonLeadershipKama_ca.paa,csp\SpecialistRTO_ca.paa)
    MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(332nd_Airborne_CSPMEDIC_Vest,Medic Specialist,airborne\NonLeadershipKama_ca.paa,csp\SpecialistMedic_ca.paa)


    //class MACRO_NEW_VEST(marshal,base) : JLTS_CloneVestLieutenant
    //{
    //    scopeArsenal = 0;
    //    scope = 0;
    //    author = MACRO_AUTHOR;
    //    displayName = "[332nd] Infantry Vest ('base')";
    //
    //    class ItemInfo : ItemInfo
    //    {
    //        containerClass = "Supply210";
    //        vestType = "Rebreather";
    //
    //        class HitpointsProtectionInfo
    //        {
    //            class Chest
    //            {
    //                HitpointName = "HitChest";
    //                armor = 0;
    //                PassThrough = 1;
    //            };
    //            class Legs
    //            {
    //                hitpointName = "HitLegs";
    //                armor = 0;
    //                passThrough = 1;
    //            };
    //            class Arms
    //            {
    //                hitpointName = "HitArms";
    //                armor = 0;
    //                passThrough = 1;
    //            };
    //        };
    //    };
    //}
    //MACRO_NEW_MARSHAL_VEST_ITEM(332nd_Marshal_Vest,Marshal)


    class MACRO_NEW_VEST(purge,base) : JLTS_CloneVestPurge
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Vest ('base')";

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
    MACRO_NEW_PURGE_VEST_ITEM(332nd_Purge_Vest,Purge)


    class MACRO_NEW_VEST(purgecwo,base) : JLTS_CloneVestPurge
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] CWO Vest ('base')";

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
    MACRO_NEW_PURGE_CWO_VEST_ITEM(332nd_CWO5_Vest,CWO-5,cwo\LeadershipKama_ca.paa,cwo\cwo5_vest_upper.paa)
    MACRO_NEW_PURGE_CWO_VEST_ITEM(332nd_CWO4_Vest,CWO-4,cwo\LeadershipKama_ca.paa,cwo\cwo4_vest_upper.paa)

    /// ---- End
}