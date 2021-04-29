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
            MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base),
            // MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_lights_base),
            // MACRO_NEW_VEHICLE(air,LAAT,mk2_332nd_base),
            // MACRO_NEW_VEHICLE(air,LAAT,mk2_332nd_lights_base)
        };
		weapons[] = {};
	};
};

class CfgVehicles
{   
    #include "_inheritance.hpp"

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base):ls_laat
    {
        displayName = "[332nd] LAAT Mk1";

        weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            "3as_LAAT_Missile_AGM",
            "3as_LAAT_Missile_AA",
            "ParticleBeamCannon_F"
        };
		magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3as_LAAT_8Rnd_Missile_AGM",
            "Laser_Battery_F","Laser_Battery_F","Laser_Battery_F"
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
            MACRO_LAAT_TEXTURES\Body\body1_co.paa,"swlb_a_vehicle\laat\data\body2_co.paa",
            MACRO_LAAT_TEXTURES\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Doors\Doors2\door2_co.paa,"swlb_a_vehicle\laat\data\door3_co.paa",
            MACRO_LAAT_TEXTURES\Wings\wings_co.paa,
            "swlb_a_vehicle\laat\data\missiles_co.paa",
            MACRO_LAAT_TEXTURES\Cockpit\cockpits_co.paa,"swlb_a_vehicle\laat\data\glass_ca.paa"
        };

        class TextureSources
        {
            class base
			{
				displayName = "Transport Gunship";
				author = MACRO_AUTHOR;
                textures[] = {
                    MACRO_LAAT_TEXTURES\Body\body1_co.paa,"swlb_a_vehicle\laat\data\body2_co.paa",
                    MACRO_LAAT_TEXTURES\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Doors\Doors2\door2_co.paa,"swlb_a_vehicle\laat\data\door3_co.paa",
                    MACRO_LAAT_TEXTURES\Wings\wings_co.paa,
                    "swlb_a_vehicle\laat\data\missiles_co.paa",
                    MACRO_LAAT_TEXTURES\Cockpit\cockpits_co.paa,"swlb_a_vehicle\laat\data\glass_ca.paa"
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
            // class LeftDoorgun: LeftDoorgun
            // {
            //    weapons[] = {
            //         MACRO_AIR_COMMON_WEAPS,
            //         "ParticleBeamCannon"
            //     };
            //     magazines[] = {
            //         MACRO_AIR_COMMON_MAGS,
            //         "Laser_Battery_F","Laser_Battery_F"
            //     };
            // }
            // class RightDoorGun: RightDoorGun
            // {
            //     weapons[] = {
            //         MACRO_AIR_COMMON_WEAPS,
            //         "ParticleBeamCannon_R"
            //     };
            //     magazines[] = {
            //         MACRO_AIR_COMMON_MAGS,
            //         "Laser_Battery_F","Laser_Battery_F"
            //     };
            // }
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

    }
}