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

        faction = "EdCat_332nd";
        editorSubcategory = "EdSubcat_332nd_HELI";

        crew = MACRO_NEW_UNIT(aviation, 332nd_flight_cadet);
        typicalcargo[] = { MACRO_NEW_UNIT(aviation,332nd_flight_cadet) };

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

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_ahegao): MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd)
    {
        displayName = "LAAT Mk1 (Ahegao Squadron)";
        forceInGarage = 0;
        armor = 100 * 0.5;

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