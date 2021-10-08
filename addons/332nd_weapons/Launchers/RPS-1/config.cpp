#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(RPS_1)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons)
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_RPS6HP",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(RPS_1)
		};
	};
};
class CBA_DisposableLaunchers
{
	MACRO_NEW_WEAPON(RPS_1_Loaded)[]=
	{
		MACRO_NEW_WEAPON(RPS_1),
		MACRO_NEW_WEAPON(RPS_1_Used)
	};
};
class Mode_SemiAuto;

class CfgWeapons
{
	class Launcher_Base_F; //external class reference
	
	class launch_RPG32_F: Launcher_Base_F
    {
        class WeaponSlotsInfo;
    }
    class MACRO_NEW_WEAPON(RPS_1): launch_RPG32_F
    {
		scope=1;
		scopeArsenal=1;
	    displayName=MACRO_WEAPON_DISPLAYNAME(RPS-1 Disposable Launcher)
		reloadTime=0;
		baseweapon="MACRO_NEW_WEAPON(RPS_1)";
		handling="4";
		recoil="";
		model="\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		modes[]=  {
		    "Single"
		};
        cursor="332_RocketLauncher";
		cursoraim="332_Locking";
		cursoraimon="332_Locked";
		magazines[] = {"CBA_FakeLauncherMagazine"};
		magazineWell[]={""};
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.50999999;
		ace_overpresssure_priority=1;
		ace_overpressure_range=10;
        canLock=0;
		magazineReloadTime = 0.1;
		airLock=0;
		picture = "\SWLW_clones\launchers\rps6\data\ui\RPS6_ui.paa";
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
		class EventHandlers {
            fired = "_this call CBA_fnc_firedDisposable"; // this weapon eventhandler is required!
        };
    };
	
	class MACRO_NEW_WEAPON(RPS_1_Loaded): MACRO_NEW_WEAPON(RPS_1)
	{
        scope = 2;
        scopeArsenal = 2;
        baseWeapon = "MACRO_NEW_WEAPON(RPS_1_Loaded";
        magazines[] = {MACRO_NEW_MAG(RPS1_ATMag,1)};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };

    class MACRO_NEW_WEAPON(RPS_1_Used): MACRO_NEW_WEAPON(RPS_1)
	{
        scope = 1;
        scopeArsenal = 1;
		displayName=MACRO_WEAPON_DISPLAYNAME(RPS-1 *USED*)
        baseWeapon = "MACRO_NEW_WEAPON(RPS_1_Used";
        magazines[] = {"CBA_FakeLauncherMagazine"};

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };
};