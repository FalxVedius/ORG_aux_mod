#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(RPS_4)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons)
		requiredAddons[]=
		{
		    "A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(RPS_4)
		};
	};
};

class Mode_SemiAuto;

class CfgWeapons
{
	class launch_MRAWS_base_F; //external class reference
	
	class launch_MRAWS_olive_F: launch_MRAWS_base_F
    {
        class WeaponSlotsInfo;
    }
    class MACRO_NEW_WEAPON(RPS_4): launch_MRAWS_olive_F
    {
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(RPS-4 Recoiless Rifle)
		reloadTime=0;
		ACE_Overheating_mrbs=300000;
		canShootInWater=1;
		baseweapon="";
		handling="4";
		recoil="";
		modes[]=  {
		    "Single"
		};
        cursor="332_RPS4";
		hiddenSelectionsTextures[]=
		{
			MACRO_WEAPON_TEXTURES_PATH\RPS4_01.paa,
			MACRO_WEAPON_TEXTURES_PATH\RPS4_02.paa
		};
		

		magazines[] = {
			MACRO_NEW_MAG(RPS4_AT,1),
			MACRO_NEW_MAG(RPS4_HE,1)
		};
		magazineWell[]={};
		ace_overpressure_angle=45;
		ace_overpressure_damage=0;
		ace_overpresssure_priority=1;
		ace_overpressure_range=10;
		ace_reloadlaunchers_enabled=1;
	   class OpticsModes
        {
            class sight
            {
                opticsID=1;
                useModelOptics=1;
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
                opticsPPEffects[]=
                {
                    "OpticsCHAbera2",
                    "OpticsBlur3"
                };
                visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = {0, 1};
            };
        };

        class Single: Mode_SemiAuto
		{
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
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					2500
				};
				begin3[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					3500
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
	};
}
