#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15a)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15a),
			MACRO_NEW_WEAPON(DC_15a_ugl)
		};
	};
};

class cfgWeapons
{
	class arifle_MX_Base_F;

	class JLTS_DC15A:arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
	}

	class JLTS_DC15A_plastic:JLTS_DC15A
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		}
		class EGLM;
		class Single;
		class FullAuto;
	}

	class JLTS_DC15A_ugl: JLTS_DC15A
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		}
		class EGLM;
		class Single;
		class FullAuto;
	}

	class MACRO_NEW_WEAPON(DC_15a): JLTS_DC15A_plastic
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15a)
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;

		magazines[] = {
			MACRO_NEW_MAG(DC_15a_Medium,30),
			MACRO_NEW_MAG(DC_15a_Low,60),
			MACRO_NEW_MAG(DC_15a_High,10)
		};

		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Single","FullAuto"};

		

		class OpticsModes
        {
            class sight
            {
                opticsID=2;
                useModelOptics=0;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsDisablePeripherialVision=0.67000002;
                opticsZoomMin=0.375;
                opticsZoomMax=1.1;
                opticsZoomInit=0.75;
                discreteInitIndex=0;
                distanceZoomMin=100;
                distanceZoomMax=700;
                discreteDistance[]={100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
            class scope: sight
            {
                opticsID=1;
                useModelOptics=1;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera2",
                    "OpticsBlur3"
                };
                opticsZoomMin=0.0300;
                opticsZoomMax=0.125;
                opticsZoomInit=0.125;
                memoryPointCamera="optic_view";
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
                visionMode[] = {"Normal", "NVG"};
                discretefov[] = {0.125,0.0625,0.0310};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };
	}


	class MACRO_NEW_WEAPON(DC_15a_ugl): JLTS_DC15A_ugl
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15a UGL)
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;

		magazines[] = {
			MACRO_NEW_MAG(DC_15a_Medium,30),
			MACRO_NEW_MAG(DC_15a_Low,60)
		};

		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Single","FullAuto"};

		class OpticsModes
        {
            class sight
            {
                opticsID=2;
                useModelOptics=0;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsDisablePeripherialVision=0.67000002;
                opticsZoomMin=0.375;
                opticsZoomMax=1.1;
                opticsZoomInit=0.75;
                discreteInitIndex=0;
                distanceZoomMin=100;
                distanceZoomMax=700;
                discreteDistance[]={100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
            class scope: sight
            {
                opticsID=1;
                useModelOptics=1;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera2",
                    "OpticsBlur3"
                };
                opticsZoomMin=0.0300;
                opticsZoomMax=0.125;
                opticsZoomInit=0.125;
                memoryPointCamera="optic_view";
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
                visionMode[] = {"Normal", "NVG"};
                discretefov[] = {0.125,0.0625,0.0310};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };

		class EGLM: EGLM
		{
			displayName="UGL";
			descriptionShort="$STR_JLTS_names_UGL";
			useModelOptics=0;
			useExternalOptic=0;
			reloadTime=0.5;
			showtoplayer=1;
			cameraDir="OP_look";
			discreteDistance[]={25,50,75,100,150,200,250,300,350,400,450,500};
			discreteDistanceCameraPoint[]= {
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			magazines[]= {
				"332_mag_40mm_3rnd",
				"332_mag_30mm_3rnd",
				"SWLW_DC15A_UGL_huntir_Mag",
				"SWLW_DC15A_UGL_flare_white_Mag",
				"SWLW_DC15A_UGL_flare_red_Mag",
				"SWLW_DC15A_UGL_flare_gree_Mag",
				"SWLW_DC15A_UGL_smoke_white_Mag",
				"SWLW_DC15A_UGL_smoke_red_Mag",
				"SWLW_DC15A_UGL_smoke_purple_Mag",
				"SWLW_DC15A_UGL_smoke_blue_Mag",
				"SWLW_DC15A_UGL_smoke_green_Mag",
                MACRO_NEW_MAG(DC_15_UGL_AP,2),
                MACRO_NEW_MAG(DC_15_UGL_HE,4)
			};
		};
	}
}