#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15l)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    "A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_DC15L",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15l)
		};
	};
};

class cfgWeapons
{
	class 3AS_DC15L_Base_F;
	class 3AS_DC15L_F:3AS_DC15L_Base_F
	{
		class WeaponSlotsInfo;
		class FullAuto;
		class CowsSlot;
	}
	class MACRO_NEW_WEAPON(DC_15l):3AS_DC15L_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15L)
		cursor="332_DOT";
        cursoraim="332_Chevron";
		ACE_Overheating_mrbs=300000;
		canShootInWater=1;
		recoil="recoil_spar";
		recoilProne = "recoil_spar";
		modelOptics = "\A3\Weapons_f\acc\reticle_tws_mg";

		magazines[] = {
			MACRO_NEW_MAG(DC_15L,200),
			MACRO_NEW_MAG(DC_15L_T,200)
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
		}
		
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
                opticsZoomMin=0.0250;
                opticsZoomMax=0.125;
                opticsZoomInit=0.125;
                memoryPointCamera="optic_view";
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
                visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = {0, 1};
                discretefov[] = {0.125};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
                distanceZoomMin=100;
                distanceZoomMax=1800;
               
            };
        };
		
		class FullAuto: FullAuto
		{
           sounds[]=
			{
				"StandardSound" 
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					4,
					0.98,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=2;
			reloadTime=0.05;
			dispersion = 0.0007;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
			
			class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			}
		}
	}
}