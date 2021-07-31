#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_LAAT_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\air\LAAT
class CfgPatches
{
	class MACRO_PATCH_NAME(laat)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd),
            MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_ahegao),
            MACRO_NEW_VEHICLE(air,LAATle,LAATle_332nd),
        };
		weapons[] = {};
	};
};

class CfgFunctions
{
    class ResupplyAir
    {
        class myCategory
        {
            class AddCratesToInventory
            {
                file = "332nd_vehicles\air\LAAT\fnc_spawnResupplyCrates.sqf";
            };
        };
    };
};

class CfgVehicles
{   
    #include "_inheritance.hpp"

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base):ls_laat
    {
        displayName = "LAAT Mk1 Base";
        scope = 0;

        faction = "EdCat_332nd";
        editorSubcategory = "EdSubcat_332nd_HELI";

        weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            "ls_laat_gun","ls_laat_gun_2","missiles_DAR"
        };
		magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            "200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag",
            "12rnd_missiles","12rnd_missiles","12rnd_missiles"
        };

        hiddenselections[] = {
            "body","body_2",
            "door_1","door_2","door_3",
            "wings",
            "missiles",
            "cockpits","glass",
            "clan",
            "zasleh_l","zasleh_r","zasleh_b"
        };

		hiddenselectionstextures[] = {
            MACRO_LAAT_TEXTURES\Base\Body\body1_co.paa,"swlb_a_vehicle\laat\data\body2_co.paa",
            MACRO_LAAT_TEXTURES\Base\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Base\Doors\Doors2\door2_co.paa,"swlb_a_vehicle\laat\data\door3_co.paa",
            MACRO_LAAT_TEXTURES\Base\Wings\wings_co.paa,
            "swlb_a_vehicle\laat\data\missiles_co.paa",
            MACRO_LAAT_TEXTURES\Base\Cockpit\cockpits_co.paa,"swlb_a_vehicle\laat\data\glass_ca.paa"
        };

        crew = MACRO_NEW_UNIT(aviation,332nd_flight_cadet);
        typicalcargo[] = {MACRO_NEW_UNIT(aviation,332nd_flight_cadet)};

        class EventHandlers
        {
            init = "[_this, 'AmmoBox_332nd', 'MedicalBox_332nd'] spawn ResupplyAir_fnc_AddCratesToInventory;"
        };
        
        class TextureSources
        {
            class Ahegao
			{
				displayName = "Transport Gunship (Ahegao)";
                author = MACRO_AUTHOR;
                factions[] = {"SWLB_GAR"};
                textures[] = {
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Body1.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Body2.paa,
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Door1.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Door2.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Door3.paa,
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Wings.paa,
                    "swlb_a_vehicle\laat\data\missiles_co.paa",
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Cockpit.paa,"swlb_a_vehicle\laat\data\glass_ca.paa"
                };
			};
        }

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon"
                    
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
        }

        class UserActions
		{
			#include "../../_common/damage_report_action.hpp"
		};
		class ACE_SelfActions:ACE_SelfActions
		{		
			
			#include "../../_common/hud_color_changer_ace_action.hpp"
		};

		#include "../../_common/universal_mfd.hpp"

        #include "_lights.hpp"
    }

    class ls_heli_laatle;
    class MACRO_NEW_VEHICLE(air,LAATle,LAATle_332nd) :ls_heli_laatle
    {
        displayName = "LAAT/le Gunship";
        scope = 2;
        forceInGarage = 1;
        maximumLoad = 10000;

        faction = "EdCat_332nd";
        editorSubcategory = "EdSubcat_332nd_HELI";

        crew = MACRO_NEW_UNIT(aviation,332nd_flight_cadet);
        typicalcargo[] = { MACRO_NEW_UNIT(aviation,332nd_flight_cadet) };

        class TransportItems
        {
            class Elastics_332nd
            {
                name = "ACE_elasticBandage";
                count = 300;
            };

            class Packing_332nd
            {
                name = "ACE_packingBandage";
                count = 300;
            };

            class Quickclot_332nd
            {
                name = "ACE_quikclot";
                count = 300;
            };

            class Painkillers_332nd
            {
                name = "ACE_morphine";
                count = 40;
            };

            class Epinephrine_332nd
            {
                name = "ACE_epinephrine";
                count = 40;
            };

            class Plasma1k_332nd
            {
                name = "ACE_plasmaIV";
                count = 25;
            };

            class Plasma500_332nd
            {
                name = "ACE_plasmaIV_500";
                count = 50;
            };

            class Plasma250_332nd
            {
                name = "ACE_plasmaIV_250";
                count = 50;
            };

            class Tournys_332nd
            {
                name = "ACE_tourniquet";
                count = 30;
            };

            class PAK_332nd
            {
                name = "ACE_personalAidKit";
                count = 5;
            };
        };

        class TransportWeapons
        {
            class DC15A_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15a";
                count = 10;
            };

            class DC15S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15s";
                count = 10;
            };

            class DC15C_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15c";
                count = 10;
            };

            class DP23_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DP_23";
                count = 10;
            };

            class DW32S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DW_32S";
                count = 10;
            };

            class Valken38x_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Valken38x";
                count = 10;
            };

            class Z6_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Z6";
                count = 10;
            };

            class DC15B_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15b";
				count = 10;
			};

            class RPS1_Weps_332nd
            {
                weapon = "332nd_aux_weapon_RPS_1";
                count = 5;
            };
        };

        class TransportMagazines
        {
            class DC15A_low_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_Low_x60";
                count = 300;
            };

            class DC15A_medium_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
                count = 300;
            };

            class DC15A_High_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_High_x10";
                count = 50;
            };

            class 332_Stun_332nd
			{
				magazine = "332nd_aux_magazine_Stun_x10";
				count = 100;
			};

            class DC15A_UGLAP_332nd
            {
                magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
                count = 50;
            };

            class DC15A_UGLHE_332nd
            {
                magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
                count = 50;
            };

            class DC15s_332nd
            {
                magazine = "332nd_aux_magazine_DC_15s_x60";
                count = 300;
            };

            class DC15c_332nd
            {
                magazine = "332nd_aux_magazine_DC_15c_Medium_x45";
                count = 300;
            };

            class DC15b_332nd
			{
				magazine = "332nd_aux_magazine_DC_15b_x60";
				count = 200;
			};

            class DC17_332nd
            {
                magazine = "332nd_aux_magazine_DC_17_x15";
                count = 50;
            };

            class SA35_332nd
            {
                magazine = "332nd_aux_magazine_35sa_low_x30";
                count = 50;
            };

            class DC15L_332nd
            {
                magazine = "332nd_aux_magazine_DC_15L_x125";
                count = 100;
            };

            class DC15L_T_332nd
            {
                magazine = "332nd_aux_magazine_DC_15L_T_x125";
                count = 100;
            };

            class DC15X_HIGH_332nd
            {
                magazine = "332nd_aux_magazine_DC_15x_x10";
                count = 50;
            };

            class DC15X_LOW_332nd
            {
                magazine = "332nd_aux_magazine_DC_15x_x2";
                count = 25;
            };

            class DP_23_332nd
            {
                magazine = "332nd_aux_magazine_DP23_x12";
                count = 100;
            };

            class DP_23Wide_332nd
            {
                magazine = "332nd_aux_magazine_DP23_x12Wide";
                count = 100;
            };

            class DW_32_HIGH_332nd
            {
                magazine = "332nd_aux_magazine_DW32_High_x5";
                count = 50;
            };

            class DW_32_HIGH_T_332nd
            {
                magazine = "332nd_aux_magazine_DW32_High_T_x5";
                count = 50;
            };

            class DW_32_CONCMED_332nd
            {
                magazine = "332nd_aux_magazine_DW32_Med_x20";
                count = 100;
            };

            class DW_32_CONCMED_T_332nd
            {
                magazine = "332nd_aux_magazine_DW32_Med_T_x20";
                count = 100;
            };

            class Valken_38x_REFMED_332nd
            {
                magazine = "332nd_aux_magazine_Valken38x_x15";
                count = 100;
            };

            class Valken_38x_REFMED_T_332nd
            {
                magazine = "332nd_aux_magazine_Valken38x_T_x15";
                count = 100;
            };

            class IQA11_high_T_332nd
			{
				magazine = "332nd_aux_magazine_IQA_11_T_x8";
				count = 100;
			};

			class IQA11_high_332nd
			{
				magazine = "332nd_aux_magazine_IQA_11_x8";
				count = 100;
			};

            class Westar_m5_40rnd
			{
				magazine = "332nd_aux_magazine_Westar_M5_x40";
				count = 300;
			};

            class Z6_332nd
            {
                magazine = "332nd_aux_magazine_Z6_x200";
                count = 200;
            };

            class Z6_ALT_332nd
            {
                magazine = "332nd_aux_magazine_Z6_x125";
                count = 200;
            };

            class Flash_332nd
            {
                magazine = "332nd_aux_magazine_332_FLASH_x1";
                count = 30;
            };

            class ATCharge_332nd
            {
                magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
                count = 30;
            };

            class HEDPImpact_332nd
            {
                magazine = "332nd_aux_magazine_332_HEDP_x1";
                count = 30;
            };

            class SquadShield_332nd
            {
                magazine = "332nd_aux_magazine_332_SquadShield_x1";
                count = 5;
            };

            class ThermalDet_332nd
            {
                magazine = "332nd_aux_magazine_332_FRAG_x1";
                count = 30;
            };

            class PLXAA_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
                count = 10;
            };

            class PLXAT_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
                count = 10;
            };

            class PLXHE_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
                count = 10;
            };

            class RPS6AT_332nd
            {
                magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
                count = 20;
            };

            class RPS6AA_332nd
            {
                magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
                count = 20;
            };

            class RPS4AT_332nd
            {
                magazine = "332nd_aux_magazine_RPS4_AT_x1";
                count = 20;
            };

            class RPS4HE_332nd
            {
                magazine = "332nd_aux_magazine_RPS4_HE_x1";
                count = 20;
            };

            class DC15xATR_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x3";
				count = 20;
			};
        };

        class EventHandlers
        {
            init = "[_this, 'AmmoBox_332nd', 'MedicalBox_332nd'] spawn ResupplyAir_fnc_AddCratesToInventory;"
        };
    }

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd):MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base)
    {
        scope = 2;
        forceInGarage = 1;
        displayName = "LAAT Mk1";
        armor = 100 * 0.5;
        maximumLoad = 10000;

        class TransportItems
        {
            class Elastics_332nd
            {
                name = "ACE_elasticBandage";
                count = 300;
            };

            class Packing_332nd
            {
                name = "ACE_packingBandage";
                count = 300;
            };

            class Quickclot_332nd
            {
                name = "ACE_quikclot";
                count = 300;
            };

            class Painkillers_332nd
            {
                name = "ACE_morphine";
                count = 40;
            };

            class Epinephrine_332nd
            {
                name = "ACE_epinephrine";
                count = 40;
            };

            class Plasma1k_332nd
            {
                name = "ACE_plasmaIV";
                count = 25;
            };

            class Plasma500_332nd
            {
                name = "ACE_plasmaIV_500";
                count = 50;
            };

            class Plasma250_332nd
            {
                name = "ACE_plasmaIV_250";
                count = 50;
            };

            class Tournys_332nd
            {
                name = "ACE_tourniquet";
                count = 30;
            };

            class PAK_332nd
            {
                name = "ACE_personalAidKit";
                count = 5;
            };
        };

        class TransportWeapons
        {
            class DC15A_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15a";
                count = 10;
            };

            class DC15S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15s";
                count = 10;
            };

            class DC15C_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15c";
                count = 10;
            };

            class DP23_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DP_23";
                count = 10;
            };

            class DW32S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DW_32S";
                count = 10;
            };

            class Valken38x_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Valken38x";
                count = 10;
            };

            class Z6_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Z6";
                count = 10;
            };

            class DC15B_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15b";
				count = 10;
			};

            class RPS1_Weps_332nd
            {
                weapon = "332nd_aux_weapon_RPS_1";
                count = 5;
            };
        };

        class TransportMagazines
        {
            class DC15A_low_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_Low_x60";
                count = 300;
            };

            class DC15A_medium_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
                count = 300;
            };

            class DC15A_High_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_High_x10";
                count = 50;
            };

            class 332_Stun_332nd
			{
				magazine = "332nd_aux_magazine_Stun_x10";
				count = 100;
			};

            class DC15A_UGLAP_332nd
            {
                magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
                count = 50;
            };

            class DC15A_UGLHE_332nd
            {
                magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
                count = 50;
            };

            class DC15s_332nd
            {
                magazine = "332nd_aux_magazine_DC_15s_x60";
                count = 300;
            };

            class DC15c_332nd
            {
                magazine = "332nd_aux_magazine_DC_15c_Medium_x45";
                count = 300;
            };

            class DC15b_332nd
			{
				magazine = "332nd_aux_magazine_DC_15b_x60";
				count = 200;
			};

            class DC17_332nd
            {
                magazine = "332nd_aux_magazine_DC_17_x15";
                count = 50;
            };

            class SA35_332nd
            {
                magazine = "332nd_aux_magazine_35sa_low_x30";
                count = 50;
            };

            class DC15L_332nd
            {
                magazine = "332nd_aux_magazine_DC_15L_x125";
                count = 100;
            };

            class DC15L_T_332nd
            {
                magazine = "332nd_aux_magazine_DC_15L_T_x125";
                count = 100;
            };

            class DC15X_HIGH_332nd
            {
                magazine = "332nd_aux_magazine_DC_15x_x10";
                count = 50;
            };

            class DC15X_LOW_332nd
            {
                magazine = "332nd_aux_magazine_DC_15x_x2";
                count = 25;
            };

            class DP_23_332nd
            {
                magazine = "332nd_aux_magazine_DP23_x12";
                count = 100;
            };

            class DP_23Wide_332nd
            {
                magazine = "332nd_aux_magazine_DP23_x12Wide";
                count = 100;
            };

            class DW_32_HIGH_332nd
            {
                magazine = "332nd_aux_magazine_DW32_High_x5";
                count = 50;
            };

            class DW_32_HIGH_T_332nd
            {
                magazine = "332nd_aux_magazine_DW32_High_T_x5";
                count = 50;
            };

            class DW_32_CONCMED_332nd
            {
                magazine = "332nd_aux_magazine_DW32_Med_x20";
                count = 100;
            };

            class DW_32_CONCMED_T_332nd
            {
                magazine = "332nd_aux_magazine_DW32_Med_T_x20";
                count = 100;
            };

            class Valken_38x_REFMED_332nd
            {
                magazine = "332nd_aux_magazine_Valken38x_x15";
                count = 100;
            };

            class Valken_38x_REFMED_T_332nd
            {
                magazine = "332nd_aux_magazine_Valken38x_T_x15";
                count = 100;
            };

            class Westar_m5_40rnd
			{
				magazine = "332nd_aux_magazine_Westar_M5_x40";
				count = 300;
			};

            class Z6_332nd
            {
                magazine = "332nd_aux_magazine_Z6_x200";
                count = 200;
            };

            class Z6_ALT_332nd
            {
                magazine = "332nd_aux_magazine_Z6_x125";
                count = 200;
            };

            class Flash_332nd
            {
                magazine = "332nd_aux_magazine_332_FLASH_x1";
                count = 30;
            };

            class ATCharge_332nd
            {
                magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
                count = 30;
            };

            class HEDPImpact_332nd
            {
                magazine = "332nd_aux_magazine_332_HEDP_x1";
                count = 30;
            };

            class SquadShield_332nd
            {
                magazine = "332nd_aux_magazine_332_SquadShield_x1";
                count = 5;
            };

            class ThermalDet_332nd
            {
                magazine = "332nd_aux_magazine_332_FRAG_x1";
                count = 30;
            };

            class PLXAA_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
                count = 10;
            };

            class PLXAT_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
                count = 10;
            };

            class PLXHE_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
                count = 10;
            };

            class RPS6AT_332nd
            {
                magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
                count = 20;
            };

            class RPS6AA_332nd
            {
                magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
                count = 20;
            };

            class RPS4AT_332nd
            {
                magazine = "332nd_aux_magazine_RPS4_AT_x1";
                count = 20;
            };

            class RPS4HE_332nd
            {
                magazine = "332nd_aux_magazine_RPS4_HE_x1";
                count = 20;
            };

             class DC15xATR_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x3";
				count = 20;
			};
        };


        class HitPoints : HitPoints
        {
            class HitHull : HitHull
            {
                armor = 999;
                convexComponent = "hull_hit";
                depends = "Total";
                explosionShielding = 1;
                material = 51;
                name = "hull_hit";
                passThrough = 1;
                visual = "zbytek";
                radius = 0.01;
            };
            class HitFuel : HitFuel
            {
                convexcomponent = "fuel_hit";
                hitpoint = "fuel_hit";
                name = "fuel_hit";
                explosionShielding = 2;
                radius = 0.1;
                visual = "";
                passthrough = 0.1;
                minimalhit = 0.1;
                material = -1;
                armor = 0.6 * 5;
            };
            class HitEngine : HitEngine
            {
                armor = 0.5;
                convexComponent = "engine_hit";
                explosionShielding = 2;
                material = 51;
                name = "engine_hit";
                hitpoint = "engine_hit";
                passThrough = 1;
                visual = "";
                radius = 0.2 * 5;
            };
            class HitEngine_1 : HitEngine_1
            {
                armor = 0.5;
                passThrough = 1;
                explosionShielding = 2;
                convexComponent = "engine_hit_1";
                name = "engine_hit_1";
                hitpoint = "engine_hit_1";
            };
            class HitEngine_2 : HitEngine_2
            {
                armor = 0.5;
                passThrough = 1;
                explosionShielding = 2;
                convexComponent = "engine_hit_2";
                name = "engine_hit_2";
                hitpoint = "engine_hit_2";
            };
            class HitHRotor : HitHRotor
            {
                armor = 3 * 5;
                convexComponent = "main_rotor_hit";
                explosionShielding = 2.5;
                material = 51;
                name = "main_rotor_hit";
                passThrough = 0.1;
                visual = "";
                radius = 0.01;
            };
            class HitVRotor : HitVRotor
            {
                armor = 3 * 5;
                convexComponent = "tail_rotor_hit";
                explosionShielding = 6;
                material = 51;
                name = "tail_rotor_hit";
                passThrough = 0.3;
                visual = "";
                radius = 0.01;
            };
            class HitAvionics : HitAvionics
            {
                armor = 1 * 5;
                convexComponent = "avionics_hit";
                explosionShielding = 2;
                material = 51;
                name = "avionics_hit";
                passThrough = 1;
                visual = "";
                radius = 0.5;
            };
        };
    }

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_ahegao): MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd)
    {
        displayName = "LAAT Mk1 (Ahegao Squadron)";
        forceInGarage = 0;
        armor = 100 * 0.5;
        maximumLoad = 10000;

        class TransportItems
        {
            class Elastics_332nd
            {
                name = "ACE_elasticBandage";
                count = 300;
            };

            class Packing_332nd
            {
                name = "ACE_packingBandage";
                count = 300;
            };

            class Quickclot_332nd
            {
                name = "ACE_quikclot";
                count = 300;
            };

            class Painkillers_332nd
            {
                name = "ACE_morphine";
                count = 40;
            };

            class Epinephrine_332nd
            {
                name = "ACE_epinephrine";
                count = 40;
            };

            class Plasma1k_332nd
            {
                name = "ACE_plasmaIV";
                count = 25;
            };

            class Plasma500_332nd
            {
                name = "ACE_plasmaIV_500";
                count = 50;
            };

            class Plasma250_332nd
            {
                name = "ACE_plasmaIV_250";
                count = 50;
            };

            class Tournys_332nd
            {
                name = "ACE_tourniquet";
                count = 30;
            };

            class PAK_332nd
            {
                name = "ACE_personalAidKit";
                count = 5;
            };
        };

        class TransportWeapons
        {
            class DC15A_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15a";
                count = 10;
            };

            class DC15S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15s";
                count = 10;
            };

            class DC15C_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15c";
                count = 10;
            };

            class DP23_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DP_23";
                count = 10;
            };

            class DW32S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DW_32S";
                count = 10;
            };

            class Valken38x_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Valken38x";
                count = 10;
            };

            class Z6_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Z6";
                count = 10;
            };

            class DC15B_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15b";
				count = 10;
			};

            class RPS1_Weps_332nd
            {
                weapon = "332nd_aux_weapon_RPS_1";
                count = 5;
            };
        };

        class TransportMagazines
        {
            class DC15A_low_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_Low_x60";
                count = 300;
            };

            class DC15A_medium_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
                count = 300;
            };

            class DC15A_High_332nd
            {
                magazine = "332nd_aux_magazine_DC_15a_High_x10";
                count = 50;
            };

            class 332_Stun_332nd
			{
				magazine = "332nd_aux_magazine_Stun_x10";
				count = 100;
			};

            class DC15A_UGLAP_332nd
            {
                magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
                count = 50;
            };

            class DC15A_UGLHE_332nd
            {
                magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
                count = 50;
            };

            class DC15s_332nd
            {
                magazine = "332nd_aux_magazine_DC_15s_x60";
                count = 300;
            };

            class DC15c_332nd
            {
                magazine = "332nd_aux_magazine_DC_15c_Medium_x45";
                count = 300;
            };

            class DC15b_332nd
			{
				magazine = "332nd_aux_magazine_DC_15b_x60";
				count = 200;
			};

            class DC17_332nd
            {
                magazine = "332nd_aux_magazine_DC_17_x15";
                count = 50;
            };

            class SA35_332nd
            {
                magazine = "332nd_aux_magazine_35sa_low_x30";
                count = 50;
            };

            class DC15L_332nd
            {
                magazine = "332nd_aux_magazine_DC_15L_x125";
                count = 100;
            };

            class DC15L_T_332nd
            {
                magazine = "332nd_aux_magazine_DC_15L_T_x125";
                count = 100;
            };

            class DC15X_HIGH_332nd
            {
                magazine = "332nd_aux_magazine_DC_15x_x10";
                count = 50;
            };

            class DC15X_LOW_332nd
            {
                magazine = "332nd_aux_magazine_DC_15x_x2";
                count = 25;
            };

            class DP_23_332nd
            {
                magazine = "332nd_aux_magazine_DP23_x12";
                count = 100;
            };

            class DP_23Wide_332nd
            {
                magazine = "332nd_aux_magazine_DP23_x12Wide";
                count = 100;
            };

            class DW_32_HIGH_332nd
            {
                magazine = "332nd_aux_magazine_DW32_High_x5";
                count = 50;
            };

            class DW_32_HIGH_T_332nd
            {
                magazine = "332nd_aux_magazine_DW32_High_T_x5";
                count = 50;
            };

            class DW_32_CONCMED_332nd
            {
                magazine = "332nd_aux_magazine_DW32_Med_x20";
                count = 100;
            };

            class DW_32_CONCMED_T_332nd
            {
                magazine = "332nd_aux_magazine_DW32_Med_T_x20";
                count = 100;
            };

            class Valken_38x_REFMED_332nd
            {
                magazine = "332nd_aux_magazine_Valken38x_x15";
                count = 100;
            };

            class Valken_38x_REFMED_T_332nd
            {
                magazine = "332nd_aux_magazine_Valken38x_T_x15";
                count = 100;
            };

             class IQA11_high_T_332nd
			{
				magazine = "332nd_aux_magazine_IQA_11_T_x8";
				count = 100;
			};

			class IQA11_high_332nd
			{
				magazine = "332nd_aux_magazine_IQA_11_x8";
				count = 100;
			};

            class Westar_m5_40rnd
			{
				magazine = "332nd_aux_magazine_Westar_M5_x40";
				count = 300;
			};

            class Z6_332nd
            {
                magazine = "332nd_aux_magazine_Z6_x200";
                count = 200;
            };

            class Z6_ALT_332nd
            {
                magazine = "332nd_aux_magazine_Z6_x125";
                count = 200;
            };

            class Flash_332nd
            {
                magazine = "332nd_aux_magazine_332_FLASH_x1";
                count = 30;
            };

            class ATCharge_332nd
            {
                magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
                count = 30;
            };

            class HEDPImpact_332nd
            {
                magazine = "332nd_aux_magazine_332_HEDP_x1";
                count = 30;
            };

            class SquadShield_332nd
            {
                magazine = "332nd_aux_magazine_332_SquadShield_x1";
                count = 5;
            };

            class ThermalDet_332nd
            {
                magazine = "332nd_aux_magazine_332_FRAG_x1";
                count = 30;
            };

            class PLXAA_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
                count = 10;
            };

            class PLXAT_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
                count = 10;
            };

            class PLXHE_332nd
            {
                magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
                count = 10;
            };

            class RPS6AT_332nd
            {
                magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
                count = 20;
            };

            class RPS6AA_332nd
            {
                magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
                count = 20;
            };

            class RPS4AT_332nd
            {
                magazine = "332nd_aux_magazine_RPS4_AT_x1";
                count = 20;
            };

            class RPS4HE_332nd
            {
                magazine = "332nd_aux_magazine_RPS4_HE_x1";
                count = 20;
            };

             class DC15xATR_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x3";
				count = 20;
			};
        };

        hiddenselections[] = {
            "body","body_2",
            "door_1","door_2","door_3",
            "wings",
            "missiles",
            "cockpits","glass",
            "clan",
            "zasleh_l","zasleh_r","zasleh_b"
        };

        hiddenselectionstextures[] = {
            MACRO_LAAT_TEXTURES\Variants\Ahegao\Body1.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Body2.paa,
            MACRO_LAAT_TEXTURES\Variants\Ahegao\Door1.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Door2.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Door3.paa,
            MACRO_LAAT_TEXTURES\Variants\Ahegao\Wings.paa,
            "swlb_a_vehicle\laat\data\missiles_co.paa",
            MACRO_LAAT_TEXTURES\Variants\Ahegao\Cockpit.paa,"swlb_a_vehicle\laat\data\glass_ca.paa"
        };


        class HitPoints : HitPoints
        {
            class HitHull : HitHull
            {
                armor = 999;
                convexComponent = "hull_hit";
                depends = "Total";
                explosionShielding = 1;
                material = 51;
                name = "hull_hit";
                passThrough = 1;
                visual = "zbytek";
                radius = 0.01;
            };
            class HitFuel : HitFuel
            {
                convexcomponent = "fuel_hit";
                hitpoint = "fuel_hit";
                name = "fuel_hit";
                explosionShielding = 2;
                radius = 0.1;
                visual = "";
                passthrough = 0.1;
                minimalhit = 0.1;
                material = -1;
                armor = 0.6 * 5;
            };
            class HitEngine : HitEngine
            {
                armor = 0.5;
                convexComponent = "engine_hit";
                explosionShielding = 2;
                material = 51;
                name = "engine_hit";
                hitpoint = "engine_hit";
                passThrough = 1;
                visual = "";
                radius = 0.2 * 5;
            };
            class HitEngine_1 : HitEngine_1
            {
                armor = 0.5;
                convexComponent = "engine_hit_1";
                name = "engine_hit_1";
                hitpoint = "engine_hit_1";
            };
            class HitEngine_2 : HitEngine_2
            {
                armor = 0.5;
                convexComponent = "engine_hit_2";
                name = "engine_hit_2";
                hitpoint = "engine_hit_2";
            };
            class HitHRotor : HitHRotor
            {
                armor = 3 * 5;
                convexComponent = "main_rotor_hit";
                explosionShielding = 2.5;
                material = 51;
                name = "main_rotor_hit";
                passThrough = 0.1;
                visual = "";
                radius = 0.01;
            };
            class HitVRotor : HitVRotor
            {
                armor = 3 * 5;
                convexComponent = "tail_rotor_hit";
                explosionShielding = 6;
                material = 51;
                name = "tail_rotor_hit";
                passThrough = 0.3;
                visual = "";
                radius = 0.01;
            };
            class HitAvionics : HitAvionics
            {
                armor = 1 * 5;
                convexComponent = "avionics_hit";
                explosionShielding = 2;
                material = 51;
                name = "avionics_hit";
                passThrough = 1;
                visual = "";
                radius = 0.5;
            };
        };
    }
}