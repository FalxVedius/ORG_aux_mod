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
    class ls_blueforVest_base;

    //Troopers
    class SWLB_clone_basic_armor : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class SWLB_clone_airborne_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Airborne_CFR : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Airborne_Light : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_ARF_Vest : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Engineer_Vest_NCO : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Engineer_Vest : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_NCO : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Hazard_Vest : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Recon_Survival : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Tactical_Commander : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_airborne_nco_armor : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_assault_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_cfr_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_grenadier_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_kama_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_medic_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_recon_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_recon_nco_armor : SWLB_clone_recon_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_specialist_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class ls_gar_heavyAlt_vest : ls_blueforVest_base
    {
        class ItemInfo;
    };
    class ls_gar_heavy_vest : ls_blueforVest_base
    {
        class ItemInfo;
    };
    class lsd_gar_clone_vest : ls_blueforVest_base
    {
        class ItemInfo;
    };

    //NCO
    class SWLB_CEE_Engineer_Vest_Officer : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_Officer : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Recon_Lieutenant : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Officer_Tactical : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };
    class SWLB_Clone_lieutenant_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_officer_armor : SWLB_clone_basic_armor
    {
        class ItemInfo;
    };
    class ls_gar_airborneOfficer_vest : ls_blueforVest_base
    {
        class ItemInfo;
    };

    //Officer
    class SWLB_clone_commander_armor : SWLB_clone_officer_armor
    {
        class ItemInfo;
    };
    class SWLB_clone_commander_armor_rank : SWLB_clone_commander_armor
    {
        class ItemInfo;
    };
    class SWLB_CEE_Force_Recon_Commander : SWLB_clone_airborne_armor
    {
        class ItemInfo;
    };

    //Arc
    class SWLB_clone_arc_armor : SWLB_clone_officer_armor
    {
        class ItemInfo;
    };

    //Arc
    class MACRO_NEW_VEST(arc,base) : SWLB_clone_arc_armor
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

    //Officer
    class MACRO_NEW_VEST(officer_1,base): SWLB_clone_commander_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Officer Vest ('base')";

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

    
    class MACRO_NEW_VEST(officer_2,base): SWLB_clone_commander_armor_rank
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Officer Vest ('base')";

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


    class MACRO_NEW_VEST(officer_3,base) : SWLB_CEE_Force_Recon_Commander
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Officer Vest ('base')";

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

    //NCO
    class MACRO_NEW_VEST(nco_1,base) : SWLB_CEE_Engineer_Vest_Officer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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


    class MACRO_NEW_VEST(nco_2,base) : SWLB_CEE_Force_Recon_Officer
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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


    class MACRO_NEW_VEST(nco_3,base) : SWLB_CEE_Recon_Lieutenant
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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


    class MACRO_NEW_VEST(nco_4,base) : SWLB_CEE_Officer_Tactical
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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


    class MACRO_NEW_VEST(nco_5,base) : SWLB_Clone_lieutenant_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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


    class MACRO_NEW_VEST(nco_6,base) : SWLB_clone_officer_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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


    class MACRO_NEW_VEST(nco_7,base) : ls_gar_airborneOfficer_vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] NCO Vest ('base')";

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

    //Trooper
    class MACRO_NEW_VEST(trop_1,base) : SWLB_CEE_Airborne_CFR
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_2,base) : SWLB_CEE_Airborne_Light
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_3,base) : SWLB_CEE_ARF_Vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_4,base) : SWLB_CEE_Engineer_Vest_NCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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

    class MACRO_NEW_VEST(trop_5,base) : SWLB_CEE_Engineer_Vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_6,base) : SWLB_CEE_Force_Recon_NCO
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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

    class MACRO_NEW_VEST(trop_7,base) : SWLB_CEE_Force_Recon
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_8,base) : SWLB_CEE_Hazard_Vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_9,base) : SWLB_CEE_Recon_Survival
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_10,base) : SWLB_CEE_Tactical_Commander
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_11,base) : SWLB_clone_airborne_nco_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_12,base) : SWLB_clone_airborne_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_13,base) : SWLB_clone_assault_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_14,base) : SWLB_clone_cfr_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_15,base) : SWLB_clone_grenadier_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_16,base) : SWLB_clone_kama_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_17,base) : SWLB_clone_medic_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_18,base) : SWLB_clone_recon_nco_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_19,base) : SWLB_clone_recon_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_20,base) : SWLB_clone_specialist_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_21,base) : SWLB_clone_basic_armor
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_22,base) : ls_gar_heavyAlt_vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_23,base) : ls_gar_heavy_vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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


    class MACRO_NEW_VEST(trop_24,base) : lsd_gar_clone_vest
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[ORG] Trooper Vest ('base')";

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

    /// ---- End Construction of base Classes

    //Arc
    MACRO_NEW_ARC_VEST_ITEM(arc,Arc)

    //Officer
    MACRO_NEW_OFFICER_VEST_1_ITEM(officer_1,Officer)
    MACRO_NEW_OFFICER_VEST_2_ITEM(officer_2,Officer)
    MACRO_NEW_OFFICER_VEST_3_ITEM(officer_3,Officer)

    //NCO
    MACRO_NEW_NCO_VEST_1_ITEM(nco_1,NCO)
    MACRO_NEW_NCO_VEST_2_ITEM(nco_2,NCO)
    MACRO_NEW_NCO_VEST_3_ITEM(nco_3,NCO)
    MACRO_NEW_NCO_VEST_4_ITEM(nco_4,NCO)
    MACRO_NEW_NCO_VEST_5_ITEM(nco_5,NCO)
    MACRO_NEW_NCO_VEST_6_ITEM(nco_6,NCO)
    MACRO_NEW_NCO_VEST_7_ITEM(nco_7,NCO)

    //Trooper
    MACRO_NEW_TROOPER_VEST_1_ITEM(trop_1,Trooper)
    MACRO_NEW_TROOPER_VEST_2_ITEM(trop_2,Trooper)
    MACRO_NEW_TROOPER_VEST_3_ITEM(trop_3,Trooper)
    MACRO_NEW_TROOPER_VEST_4_ITEM(trop_4,Trooper)
    MACRO_NEW_TROOPER_VEST_5_ITEM(trop_5,Trooper)
    MACRO_NEW_TROOPER_VEST_6_ITEM(trop_6,Trooper)
    MACRO_NEW_TROOPER_VEST_7_ITEM(trop_7,Trooper)
    MACRO_NEW_TROOPER_VEST_8_ITEM(trop_8,Trooper)
    MACRO_NEW_TROOPER_VEST_9_ITEM(trop_9,Trooper)
    MACRO_NEW_TROOPER_VEST_10_ITEM(trop_10,Trooper)
    MACRO_NEW_TROOPER_VEST_11_ITEM(trop_11,Trooper)
    MACRO_NEW_TROOPER_VEST_12_ITEM(trop_12,Trooper)
    MACRO_NEW_TROOPER_VEST_13_ITEM(trop_13,Trooper)
    MACRO_NEW_TROOPER_VEST_14_ITEM(trop_14,Trooper)
    MACRO_NEW_TROOPER_VEST_15_ITEM(trop_15,Trooper)
    MACRO_NEW_TROOPER_VEST_16_ITEM(trop_16,Trooper)
    MACRO_NEW_TROOPER_VEST_17_ITEM(trop_17,Trooper)
    MACRO_NEW_TROOPER_VEST_18_ITEM(trop_18,Trooper)
    MACRO_NEW_TROOPER_VEST_19_ITEM(trop_19,Trooper)
    MACRO_NEW_TROOPER_VEST_20_ITEM(trop_20,Trooper)
    MACRO_NEW_TROOPER_VEST_21_ITEM(trop_21,Trooper)
    MACRO_NEW_TROOPER_VEST_22_ITEM(trop_22,Trooper)
    MACRO_NEW_TROOPER_VEST_23_ITEM(trop_23,Trooper)
    MACRO_NEW_TROOPER_VEST_24_ITEM(trop_24,Trooper)

}