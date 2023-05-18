#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(RPS_6)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons)
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_RPS6",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(RPS_6)
		};
	};
};

class Mode_SemiAuto;

class CfgWeapons
{
	class launch_RPG32_F; //external class reference
	
	class JLTS_RPS6: launch_RPG32_F
    {
        class WeaponSlotsInfo;
    }
    class MACRO_NEW_WEAPON(RPS_6): JLTS_RPS6
    {
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(RPS-6 Rocket Launcher [AT])
		reloadTime=0;
		ACE_Overheating_mrbs=300000;
		canShootInWater=1;
		baseweapon="";
		weaponLockDelay = 1.5;
		weaponLockSystem = 12;
		handling="4";
		recoil="";
		modes[]=  {
		    "Single"
		};
        cursor="332_RocketLauncher";
		cursoraim="332_Locking";
		cursoraimon="332_Locked";

		magazines[] = {
			MACRO_NEW_MAG(RPS6_ATMag,1),
			MACRO_NEW_MAG(RPS6_AAMag,1)
		};
		ace_overpressure_angle=45;
		ace_overpressure_damage=0;
		ace_overpresssure_priority=1;
		ace_overpressure_range=3;
		ace_reloadlaunchers_enabled=1;
        canLock=2;
		airLock=2;
		weaponInfoType = "RscOptics_titan";
		modelOptics[] = {"\A3\Weapons_F_Beta\acc\reticle_titan.p3d"};
	   class OpticsModes
        {
            class sight
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
                visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = {0, 1};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
				discretefov[] = {0.125,0.0625,0.0310};
                distanceZoomMin=100;
                distanceZoomMax=500;
                cameraDir="";
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
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					1,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
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
