#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Proton_Cannon)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,Proton_Cannon),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class ls_120mm_red_ap;

	class MACRO_NEW_AMMO(Proton_Cannon) : ls_120mm_red_ap
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 512";
		model = "swlw_main\Effects\laser_red.p3d";
		tracerscale = 16;

		cost = 50;
		caliber = 18;
		hit = 700;
		indirectHit = 10;
		indirectHitRange = 0.5;
	};
};

class CfgMagazines
{
	class 3as_24rnd_AAT_AP;

	class MACRO_NEW_MAG(Proton_Cannon,12) : 3as_24rnd_AAT_AP
	{
		displayName = "Proton Cannon AP";
		ammo = MACRO_NEW_AMMO(Proton_Cannon)
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class 3AS_AATCannon;

	class MACRO_NEW_WEAPON(Proton_Cannon) : 3AS_AATCannon
	{
		modes[] =
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};

		reloadSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};

		class player : Mode_SemiAuto
		{
			displayName = "AAT Main Gun";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"332nd_vehicles\land\Proton Cannon\Sounds\Proton_Cannon.wss",
					db + 250,
					1,
					5000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};


			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00056999997;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class TopDown : player
		{
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.40000001;
			midRange = 400;
			midRangeProbab = 0.94999999;
			maxRange = 8000;
			maxRangeProbab = 0.94999999;
		};
		class close : player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.80000001;
			maxRange = 1000;
			maxRangeProbab = 0.85000002;
		};
		class short : close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.30000001;
			midRange = 1000;
			midRangeProbab = 0.85000002;
			maxRange = 1500;
			maxRangeProbab = 0.85000002;
		};
		class medium : close
		{
			dispersion = 0.001;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.85000002;
			maxRange = 2000;
			maxRangeProbab = 0.80000001;
		};
		class far : close
		{
			dispersion = 0.002;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.80000001;
			maxRange = 3500;
			maxRangeProbab = 0.050000001;
		};

		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Proton_Cannon,12)
		};
	};
};

class CfgVehicles
 {

	class StaticMGWeapon;

	class 3AS_FieldCannon_Base : StaticMGWeapon
	{
		class Turrets;
	};

	class 3AS_FieldCannon : 3AS_FieldCannon_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	
	class MACRO_NEW_VEHICLE(Land,CIS,Proton_Cannon) : 3AS_FieldCannon
    {
        displayName = "Proton Cannon *Test*";
        scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TURR";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";


		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = 
				{ 
					MACRO_NEW_WEAPON(Proton_Cannon)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(Proton_Cannon,12),
					MACRO_NEW_MAG(Proton_Cannon,12),
					MACRO_NEW_MAG(Proton_Cannon,12),
					MACRO_NEW_MAG(Proton_Cannon,12),
					MACRO_NEW_MAG(Proton_Cannon,12)
				};
			};
		};
	};
};