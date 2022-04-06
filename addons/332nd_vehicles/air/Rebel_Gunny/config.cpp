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

class GunParticles;

class CfgWeapons
{
	/*
	class autocannon_35mm;
	class gatling_20mm_VTOL_01;
	class SC_autocannon_35mm: autocannon_35mm
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles: GunParticles
		{
			class SmokeEffect1
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="MachineGun1";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="MachineGun1";
			};
		};
		class AnimationSources;
	};
	class SC_gatling_20mm_VTOL_01: gatling_20mm_VTOL_01
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles: GunParticles
		{
			class SmokeEffect1
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="MachineGun1";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="MachineGun1";
			};
		};
		class AnimationSources;
	};
	class Rocket_04_AP_Plane_CAS_01_F;
	class SC_Rocket_AP_CAS: Rocket_04_AP_Plane_CAS_01_F
	{
		magazines[]=
		{
			"SC_8Rnd_Rocket_04_AP_F"
		};
	};*/
};
class CfgMagazines
{
	/*
	class 7Rnd_Rocket_04_AP_F;
	class SC_8Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F
	{
		count=8;
	};*/
};
class CfgVehicles
{
	class SC_VTOL_X42S_AC;
	class MACRO_NEW_VEHICLE(air,Gunship,Rebel_mk1_332nd_base) :SC_VTOL_X42S_AC
	{
		displayName = "X-42/S Redroid Dropship";
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_HEIL";
		crew = MACRO_NEW_UNIT(rebel,332nd_indep_rebel);
		typicalcargo[] = { MACRO_NEW_UNIT(rebel,332nd_indep_rebel) };
		weapons[] =
		{
			"SC_gatling_20mm_VTOL_01",
			"missiles_DAGR",
			"missiles_SCALPEL",
			"missiles_ASRAAM",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"1000Rnd_20mm_shells",
			"12Rnd_PG_missiles",
			"2Rnd_LG_scalpel",
			"2Rnd_LG_scalpel",
			"2Rnd_AAA_missiles",
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
