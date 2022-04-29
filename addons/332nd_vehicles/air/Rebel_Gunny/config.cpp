#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_GUNNY_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\air\Rebel_GUNNY
class CfgPatches
{
	class sc_vtol
	{
		author="Scion Conflict Mod Team";
		url="https://steamcommunity.com/sharedfiles/filedetails/?id=2478080991";
		requiredaddons[]=
		{
			"A3_Data_F",
			"sc_units",
			"A3_Weapons_F"
		};
		requiredversion=1;
		units[]=
		{
			MACRO_NEW_VEHICLE(air,Gunship,Rebel_mk1_332nd_base)
		};
		weapons[]={};
		magazines[]={};
	};
};

class CfgVehicles
{
	class SC_VTOL_X42S_AC;
	class MACRO_NEW_VEHICLE(air,Gunship,Rebel_mk1_332nd_base) :SC_VTOL_X42S_AC
	{
		displayName = "Dragon Fly";
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_HEIL";
		crew = MACRO_NEW_UNIT(rebel,332nd_indep_rebel);
		typicalcargo[] = { MACRO_NEW_UNIT(rebel,332nd_indep_rebel) };
		weapons[] =
		{
			 MACRO_NEW_WEAPON(Rebel_repeater),
			 MACRO_NEW_WEAPON(R_AGM_Pylon),
			"CMFlareLauncher"
		};
		magazines[] =
		{
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(Rebel_30mm,1000),
			 MACRO_NEW_MAG(R_Pylon_AGM_Med,12), //give AGM Dragonflies
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
			"sc_vtol\data\VTOL_1\Body\body_black_co.paa",
			"sc_vtol\data\VTOL_1\Wings\wings_black_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
		
};

class CfgAmmo
{
	class ls_50mm_laat_he;
	class MACRO_NEW_AMMO(Rebel_30mm) : ls_50mm_laat_he
	{

		model = "SWLW_main\Effects\laser_red.p3d";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,500};
		flaresize = 4;
		caliber = 3;
		maxLeadSpeed = 2000;
		allowAgainstInfantry = 1;
		tracersEvery = 1;
		cost = 30;
		hit = 120;
		explosionEffects = "ATRocketExplosion";
		indirectHit = 6;
		mass = 2;
		indirectHitRange = 0.1;
		tracerscale = 2;

	}

};

class CfgMagazines
{
	class 1000Rnd_25mm_shells;
	class MACRO_NEW_MAG(Rebel_30mm,1000) : 1000Rnd_25mm_shells
	{
		displayName = MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort = "Dragon Fly Repeater";
		initSpeed = 80;
		displayNameShort = "Dragon Repeater";
		ammo = MACRO_NEW_AMMO(Rebel_30mm)
		tracersEvery = 1;
		count = 1000;
	}

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

};


	

