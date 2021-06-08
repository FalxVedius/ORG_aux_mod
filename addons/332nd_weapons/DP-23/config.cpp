#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Shotguns)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DP_23)
		};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;

class cfgWeapons
{
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    }
    class JLTS_DP23: arifle_MX_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {

            class PointerSlot;
        }
    }

    class MACRO_NEW_WEAPON(DP_23): JLTS_DP23
    {
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(DP-23 Shotgun)
		reloadTime=0.1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_smg_03";
		recoilprone="recoil_smg_03";
		canShootInWater=1;
		baseweapon="";
		handling="2";
		modes[]=  {
		    "Single"
		};
		
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};

		magazines[] = {
			MACRO_NEW_MAG(DP23,12)
		};
	
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
                opticsZoomMax=0.9; //1.1
                opticsZoomInit=0.600;
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
                discretefov[] = {0.125};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500};
                distanceZoomMin=100;
                distanceZoomMax=500;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };

		// magazines[]=
		// {
		// 	"332_Shotgun_blue"
		// };

        class Single: Mode_SemiAuto
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
					"\SWLW_merc_trando\scatterguns\acpa\sounds\acpa",
					2,
					0.9,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
			reloadTime=0.35;
			dispersion=0.00000000000000000000045;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=1;
			aiRateOfFireDistance=25;
		};

        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};
				
	};
}

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;

	
	class MACRO_NEW_MAG(DP23,12): 30rnd_762x39_AK12_Mag_F //DP-23
	{
		scope=2;
		displayName=MACRO_AMMO_DISPLAYNAME(DP23 Charge,12)
		ammo=MACRO_NEW_AMMO(DP23_Shell);
		count=12;
		mass=10;
		initspeed=1300;
	};
	
	
}

class CfgAmmo
{
	//ls_ammo_shotgun_blue
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;

	//Have fun reading :)
	//https://community.bistudio.com/wiki/Arma_3:_Weapon_Config_Guidelines#Ammo_changes_on_fly_and_on_hit
	class MACRO_NEW_AMMO(DP23_Shell): B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = MACRO_NEW_AMMO(DP23_Pellet);
		submunitionConeAngle = 0.8;
		submunitionConeType[] = {"poissondisc",9};

		model = "ls_weapons_core\Effects\laser_blue.p3d";
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";

		indirectHit = 0;
		indirectHitRange = 0;

		explosive = 0;
		fuseDistance = 0;
		grenadeBurningSound[] = {};
		grenadeFireSound[] = {};
		hit = 30;
		caliber = 1;

		thrust = 210;
		thrustTime = 1.5;
		timeToLive = 6;

		typicalSpeed = 900;
	}

	class MACRO_NEW_AMMO(DP23_Pellet): B_12Gauge_Pellets_Submunition_Deploy
	{
		hit = 8;
		caliber = 1;
		typicalSpeed = 360;
		effectfly = "ls_plasma_blue";
		ExplosionEffects = "ls_plasma_impact";
		model = "ls_weapons_core\Effects\laser_blue.p3d";
	}
}
