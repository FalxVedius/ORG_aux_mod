#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(CLB)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,CLB),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class OPTRE_B_20mm_HEIAP;

	class MACRO_NEW_AMMO(CLB_Laser) : OPTRE_B_20mm_HEIAP
	{
		model = "ls_weapons_core\Effects\laser_red.p3d";

		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "256 + 512";
	};
};

class CfgMagazines
{
	class OPTRE_6000Rnd_20mm_HEIAP;

	class MACRO_NEW_MAG(CLB_LaserMag,6000) : OPTRE_6000Rnd_20mm_HEIAP
	{
		displayName = "CLB Laser Magazine";
		ammo = MACRO_NEW_AMMO(CLB_Laser)
	};
};

class CfgWeapons
{
	class CannonCore;
	class OPTRE_M71;


	class MACRO_NEW_WEAPON(CLB_LaserCannon) : OPTRE_M71
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(CLB_LaserMag,6000)
		};

		class manual : CannonCore
		{
			displayName = "$STR_A3_Phalanx_weapon_name";
			autoFire = 1;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"\OPTRE_FC_Weapons\Data\sounds\Plasma_Shade_Fire.ogg",
					4,
					0.9,
					3000
				};
				begin2[] =
				{
					"\OPTRE_FC_Weapons\Data\sounds\Plasma_Shade_Fire.ogg",
					4,
					1,
					3000
				};
				begin3[] =
				{
					"\OPTRE_FC_Weapons\Data\sounds\Plasma_Shade_Fire.ogg",
					4,
					1.1,
					3000
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.045000002;
			dispersion = 0.0044999998;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			textureType = "fullAuto";
		};
		class close : manual
		{
			showToPlayer = 0;
			burst = 100;
			soundBurst = 0;
			aiBurstTerminable = 1;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 1;
			AIRateOfFireDispersion = 0;
			minRange = 0;
			minRangeProbab = 0.94999999;
			midRange = 600;
			midRangeProbab = 0.89999998;
			maxRange = 900;
			maxRangeProbab = 0.89999998;
		};
		class medium : close
		{
			burst = 50;
			burstRangeMax = 100;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 1;
			minRange = 600;
			minRangeProbab = 0.85000002;
			midRange = 900;
			midRangeProbab = 0.82999998;
			maxRange = 1500;
			maxRangeProbab = 0.5;
		};
		class far : close
		{
			burst = 30;
			burstRangeMax = 90;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 1;
			minRange = 900;
			minRangeProbab = 0.82999998;
			midRange = 1500;
			midRangeProbab = 0.80000001;
			maxRange = 3000;
			maxRangeProbab = 0.1;
		};
	};
};

class CfgVehicles
 {
	class StaticMGWeapon;

	class AAA_System_01_base_F : StaticMGWeapon
	{
		class Turrets;
	};

	class OPTRE_Scythe : AAA_System_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

    class MACRO_NEW_VEHICLE(Land,CIS,CLB): OPTRE_Scythe
    {
        displayName = "Chain Laser Battery";
        scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_TURR";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = 
				{ 
					MACRO_NEW_WEAPON(CLB_LaserCannon)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000)
				};
			};
		};
	};
};