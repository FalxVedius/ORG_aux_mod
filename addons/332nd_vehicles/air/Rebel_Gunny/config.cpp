#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_GUNNY_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\air\Rebel_GUNNY
class CfgPatches
{
	class MACRO_PATCH_NAME(Rebel_Dragon_Fly)
	{
		author = "332nd Aux Team";
		addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredaddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredversion=1;
		units[]=
		{
			MACRO_NEW_VEHICLE(air,Gunship,Rebel_Dragon_Fly),
			MACRO_NEW_VEHICLE(air,Gunship,Rebel_Dragon_Fly_CAP),
			MACRO_NEW_VEHICLE(air,Gunship,Rebel_Dragon_Fly_CAS)
		};
		weapons[]={};
		magazines[]={};
	};
};

class CfgVehicles
{
	class SC_VTOL_X42S_AC;
	class MACRO_NEW_VEHICLE(air,Gunship,Rebel_Dragon_Fly) :SC_VTOL_X42S_AC
	{
		displayName = "Dragon Fly (Experimental)";
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_HEIL";
		crew = MACRO_NEW_UNIT(rebel,332nd_indep_rebel);
		typicalcargo[] = { MACRO_NEW_UNIT(rebel,332nd_indep_rebel) };
		weapons[] =
		{
			 MACRO_NEW_WEAPON(Rebel_repeater),
			"CMFlareLauncher"
		};
		magazines[] =
		{
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			"120Rnd_CMFlare_Chaff_Magazine"
		};

		hiddenselections[] =
		{
			"camo1",
			"camo2",
			"CockpitGlass"
		};
		hiddenselectionstextures[] =
		{
			"\332nd_vehicles\_textures\air\Rebel_GUNNY\body_black_co.paa",
			"\332nd_vehicles\_textures\air\Rebel_GUNNY\wings_black_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};

	class MACRO_NEW_VEHICLE(air,Gunship,Rebel_Dragon_Fly_CAP) :SC_VTOL_X42S_AC
	{
		displayName = "Dragon Fly Cap (Experimental)";
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_HEIL";
		crew = MACRO_NEW_UNIT(rebel,332nd_indep_rebel);
		typicalcargo[] = { MACRO_NEW_UNIT(rebel,332nd_indep_rebel) };
		weapons[] =
		{
			 MACRO_NEW_WEAPON(Rebel_repeater),
			 MACRO_NEW_WEAPON(R_AAMed_Pylon),
			"CMFlareLauncher"
		};
		magazines[] =
		{
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(R_Pylon_AA_Med,3),
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		hiddenselections[] =
		{
			"camo1",
			"camo2",
			"CockpitGlass"
		};
		hiddenselectionstextures[] =
		{
			"\332nd_vehicles\_textures\air\Rebel_GUNNY\body_black_co.paa",
			"\332nd_vehicles\_textures\air\Rebel_GUNNY\wings_black_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};

	class MACRO_NEW_VEHICLE(air,Gunship,Rebel_Dragon_Fly_CAS) :SC_VTOL_X42S_AC
	{
		displayName = "Dragon Fly Cas (Experimental)";
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_HEIL";
		crew = MACRO_NEW_UNIT(rebel,332nd_indep_rebel);
		typicalcargo[] = { MACRO_NEW_UNIT(rebel,332nd_indep_rebel) };
		weapons[] =
		{
			MACRO_NEW_WEAPON(Rebel_repeater),
			"332nd_aux_weapon_R_ATGM_Pylon",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			MACRO_NEW_MAG(Rebel_30mm,1000),
			MACRO_NEW_MAG(Rebel_30mm,1000),
			MACRO_NEW_MAG(Rebel_30mm,1000),
			"332nd_aux_magazine_R_Pylon_ATGM_Med_x12",
			"332nd_aux_magazine_R_Pylon_ATGM_Med_x12",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		hiddenselections[] =
		{
			"camo1",
			"camo2",
			"CockpitGlass"
		};
		hiddenselectionstextures[] =
		{
			"\332nd_vehicles\_textures\air\Rebel_GUNNY\body_black_co.paa",
			"\332nd_vehicles\_textures\air\Rebel_GUNNY\wings_black_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
		
};

class CfgAmmo
{
	class ls_50mm_laat_he;
	class MACRO_NEW_AMMO(Rebel_30mm) : ls_50mm_laat_he
	{
		model = "SWLW_main\Effects\laser_green.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,500};
		flaresize = 4;
		caliber = 3;
		maxLeadSpeed = 2000;
		allowAgainstInfantry = 1;
		tracersEvery = 1;
		cost = 1;
		hit = 120;
		explosionEffects = "ATRocketExplosion";
		indirectHit = 6;
		mass = 2;
		indirectHitRange = 0.1;
		tracerscale = 2;
	}

	class M_SPG9_HEAT;
	class MACRO_NEW_AMMO(R_ATGM_Med) : M_SPG9_HEAT
	{
		soundengine[] =
		{
			"332nd_weapons\sounds\weapons\flight\homingrocket1.wss",
			1,
			1,
			750
		};
		soundfly[] =
		{
			"332nd_weapons\sounds\weapons\flight\RocketEngine.wss",
			1,
			1.5,
			200
		};
		soundsetsoniccrack[] =
		{
			"332nd_genericrocket_flyby_soundset"
		};
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		manualcontrol = 0;
		effectsMissile = "332nd_aux_effects_missile_Rocket_Dark_Green";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		caliber = 2;
		airlock = 0;
		hit = 550;
		cost = 1;
		indirectHit = 35;
		mass = 2;
		indirectHitRange = 8;
		aiAmmoUsageFlags = "64 + 128 + 512";
	};

	class M_Air_AA;
	class MACRO_NEW_AMMO(R_AA_Med) : M_Air_AA //Med
	{
		soundFly[] =
		{
			"332nd_weapons\sounds\Firefly\Firefly_fly_effect.wss",
			3,
			2,
			2000
		};
		manualcontrol = 0;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 0;
		effectsMissile = "332nd_aux_effects_missile_Rocket_Green";
		caliber = 1;
		weaponLockSystem = "1 + 2 + 4 + 16"; //Visual + Infra-red + laser_guided + Missile
		missileKeepLockedCone = 135;
		missileLockCone = 135;
		indirectHit = 35;
		hit = 600;
		cmImmunity = 0.8;
		whistleOnFire = 1;
		cost = 1;
		missileLockMaxSpeed = 7000;
		maxSpeed = 8000;
	};

};

class CfgMagazines
{
	class 1000Rnd_25mm_shells;
	class MACRO_NEW_MAG(Rebel_30mm,1000) : 1000Rnd_25mm_shells
	{
		displayName = MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort = "Dragon Fly Repeater";
		initSpeed = 850;
		displayNameShort = "Dragon Repeater";
		ammo = MACRO_NEW_AMMO(Rebel_30mm)
		tracersEvery = 1;
		count = 1000;
	}

	class 12rnd_SPG9_HEAT;
	class MACRO_NEW_MAG(R_Pylon_ATGM_Med,12) : 12rnd_SPG9_HEAT
	{
		hardpoints[] = { "332_A_Rebel_Pylon"};
		displayName = "Mosquitoe ATGM";
		count = 12;
		descriptionshort = "Air to Ground Mosquitoe Missile";
		pylonWeapon = MACRO_NEW_WEAPON(R_ATGM_Pylon);
		displayNameShort = "ATGM Mosquitoe Missiles";
		ammo = MACRO_NEW_AMMO(R_ATGM_Med)
	};

	class PylonRack_12Rnd_missiles;
	class MACRO_NEW_MAG(R_Pylon_AA_Med,3) : PylonRack_12Rnd_missiles
	{
		hardpoints[] = { "332_A_Rebel_Pylon" };
		displayName = "Wasp Missile";
		count = 3;
		descriptionshort = "Air to Air Wasp Missile";
		pylonWeapon = MACRO_NEW_WEAPON(R_AALow_Pylon);
		displayNameShort = "A2A Wasp Missiles";
		ammo = MACRO_NEW_AMMO(R_AA_Med)
		maxLeadSpeed = 800;
	};

};

class CfgWeapons
{
	class LowROF;
	class player;
	class manual;
	class Cannon_30mm_Plane_CAS_02_F;
	class MACRO_NEW_WEAPON(Rebel_repeater) : Cannon_30mm_Plane_CAS_02_F
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(Rebel_30mm,1000)
		};
		modes[] = { "manual","close","short","medium" };
		ballisticsComputer = 1;
		displayName = "Dragon Fly Repeater";
		class manual : LowROF
		{
			displayname = "Full";
			burst = 1;
			magazineReloadTime = 6;
			autoReload = 1;
			reloadTime = 0.1;
			dispersion = 0.002;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"332nd_vehicle_weapons\air\sounds\Vulture_Cannon.wss",
					1.5,
					0.95,
					6000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
		};
		class close : manual
		{
			aiDispersionCoefX = 2.0
			aiDispersionCoefY = 2.0
			burst = 50;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000001;
			midRange = 20;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			aiDispersionCoefX = 2.0
			aiDispersionCoefY = 2.0
			burst = 30;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			aiDispersionCoefX = 2.0
			aiDispersionCoefY = 2.0
			burst = 30;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 2000;
			maxRangeProbab = 0.1;
		};
	};

	class launcher_SPG9;
	class MACRO_NEW_WEAPON(R_ATGM_Pylon) : launcher_SPG9
	{
		magazineWell[] = {};
		weaponLockDelay = 0;
		magazines[] = {
			 MACRO_NEW_MAG(R_Pylon_ATGM_Med,12),
		};
		displayName = "Mosquitoe";
		reloadTime = 0.2;
	};

	class missiles_ASRAAM;
	class MACRO_NEW_WEAPON(R_AAMed_Pylon) : missiles_ASRAAM
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(R_Pylon_AA_Med,3)
		};
		lockAcquire = 1;
		displayName = "Wasp";
		weaponLockDelay = 0;
		reloadTime = 1;
	};

};


	

