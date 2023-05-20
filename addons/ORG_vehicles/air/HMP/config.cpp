#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(HMP)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,CIS,HMP_CAS),
			MACRO_NEW_VEHICLE(air,CIS,HMP_AA),
			MACRO_NEW_VEHICLE(air,CIS,HMP_Transport),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class ls_50mm_hmp_he;

	class MACRO_NEW_AMMO(HMP_Cannon_Round) : ls_50mm_hmp_he
	{
		model = "SWLW_main\Effects\laser_red.p3d";
		soundFly[] = { "SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0,1,1 };
		flaresize = 4;
		caliber = 3;
		maxLeadSpeed = 2000;
		allowAgainstInfantry = 1;
		tracersEvery = 1;
		cost = 5;
		hit = 120;
		explosionEffects = "ATRocketExplosion";
		indirectHit = 6;
		mass = 2;
		indirectHitRange = 0.1;
		tracerscale = 2;
	};
};

class CfgMagazines
{
	class 200rnd_hmp_he_mag;

	class MACRO_NEW_MAG(HMP_Cannon_Mag,200) : 200rnd_hmp_he_mag
	{
		displayName = "HMP Cannon Magazine";
		ammo = MACRO_NEW_AMMO(HMP_Cannon_Round)
	};
};

class CfgWeapons
{
	class ls_laat_gun;
	class ls_laat_gun_2;

	class ls_hmp_gun : ls_laat_gun
	{
		class manual;
		class close;
		class medium;
		class short;
		class far;
		class FullAuto;
	};
	class ls_hmp_gun_2 : ls_laat_gun_2
	{
		class manual;
		class close;
		class medium;
		class short;
		class far;
		class FullAuto;
	};
	class ls_hmp_gun_3 : ls_hmp_gun
	{
		class manual;
		class close;
		class medium;
		class short;
		class far;
		class FullAuto;
	};

	class MACRO_NEW_WEAPON(HMP_Cannon1) : ls_hmp_gun
	{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(HMP_Cannon_Mag,200)
		};

		class manual : manual
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
		class close : close
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class medium : medium
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class short : short
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class far : far
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class FullAuto : FullAuto
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
	};

	class MACRO_NEW_WEAPON(HMP_Cannon2) : ls_hmp_gun_2
	{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(HMP_Cannon_Mag,200)
		};

		class manual : manual
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
		class close : close
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class medium : medium
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class short : short
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class far : far
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class FullAuto : FullAuto
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
	};

	class MACRO_NEW_WEAPON(HMP_Cannon3) : ls_hmp_gun_3
	{
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(HMP_Cannon_Mag,200)
		};

		class manual : manual
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
		class close : close
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class medium : medium
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class short : short
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class far : far
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
		class FullAuto : FullAuto
		{
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;

			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 25;

			dispersion = 0.03;
		};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Items_base_F;
	class Wreck_base_F;
	class Helicopter_Base_F : Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
	};
	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
	};
	class ls_hmp_base : Helicopter_Base_H
	{
		class Components;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
			class MainTurret2 : MainTurret
			{

			};
			class MainTurret3 : MainTurret2
			{

			};
		};
	};
	class ls_cis_hmp : ls_hmp_base
	{
		class Components;
		class sounds;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
			class MainTurret2 : MainTurret2
			{

			};
			class MainTurret3 : MainTurret3
			{

			};
		};
	};
	class ls_cis_hmp_transport : ls_hmp_base
	{
		class Components;
		class sounds;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
			class MainTurret2 : MainTurret2
			{

			};
			class MainTurret3 : MainTurret3
			{

			};
		};
	};

	class MACRO_NEW_VEHICLE(air,CIS,HMP_CAS) : ls_cis_hmp
	{
		displayName = "CAS HMP";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HELI";

		crew = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon1),
					MACRO_NEW_WEAPON(HMP_Cannon2)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
			class MainTurret2 : MainTurret2
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon3)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
			class MainTurret3 : MainTurret3
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon3)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
		};

		weapons[] =
		{
			MACRO_NEW_WEAPON(HMP_Cannon1),
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			MACRO_NEW_MAG(HMP_Cannon_Mag,200),
			MACRO_NEW_MAG(HMP_Cannon_Mag,200),
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};

		class Components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\swlb_a_vehicle\hmp\data\ui\cis_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_Missile_AGM_02_x1";
						priority = 5;
						hardpoints[] =
						{
							"SCALPEL_1RND",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[] = {};
						UIposition[] = { 0.059999999,0.40000001 };
					};
					class PylonRight1 : PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = { 0.63999999,0.40000001 };
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] =
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
				};
			};
		};

		class sounds : sounds
		{
			class EngineExt
			{
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				sound[] = { "swlb_a_vehicle\hmp\sounds\hmp_engine_1.wss",1.25893,1,5000 };
				volume = "camPos*((rotorSpeed-0.72)*8)";
			};
		};
	};

	class MACRO_NEW_VEHICLE(air,CIS,HMP_AA) : ls_cis_hmp
	{
		displayName = "AA HMP";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HELI";

		crew = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon1),
					MACRO_NEW_WEAPON(HMP_Cannon2)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
			class MainTurret2 : MainTurret2
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon3)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
			class MainTurret3 : MainTurret3
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon3)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
		};

		weapons[] =
		{
			MACRO_NEW_WEAPON(HMP_Cannon1),
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			MACRO_NEW_MAG(HMP_Cannon_Mag,200),
			MACRO_NEW_MAG(HMP_Cannon_Mag,200),
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};

		class Components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\swlb_a_vehicle\hmp\data\ui\cis_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_Missile_BIM9X_x2";
						priority = 5;
						hardpoints[] =
						{
							"SCALPEL_1RND",
							"B_ASRAAM",
							"B_SDB_QUAD_RAIL",
							"B_GBU12",
							"B_AGM65_RAIL"
						};
						turret[] = {};
						UIposition[] = { 0.059999999,0.40000001 };
					};
					class PylonRight1 : PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = { 0.63999999,0.40000001 };
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] =
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
				};
			};
		};

		class sounds : sounds
		{
			class EngineExt
			{
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				sound[] = { "swlb_a_vehicle\hmp\sounds\hmp_engine_1.wss",1.25893,1,5000 };
				volume = "camPos*((rotorSpeed-0.72)*8)";
			};
		};
	};

	class MACRO_NEW_VEHICLE(air,CIS,HMP_Transport) : ls_cis_hmp_transport
	{
		displayName = "HMP Transport";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_HELI";

		crew = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon1),
					MACRO_NEW_WEAPON(HMP_Cannon2)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
			class MainTurret2 : MainTurret2
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon3)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
			class MainTurret3 : MainTurret3
			{
				gunnerType = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";

				weapons[] =
				{
					MACRO_NEW_WEAPON(HMP_Cannon3)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(HMP_Cannon_Mag,200),
					MACRO_NEW_MAG(HMP_Cannon_Mag,200)
				};
			};
		};

		weapons[] =
		{
			MACRO_NEW_WEAPON(HMP_Cannon1),
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			MACRO_NEW_MAG(HMP_Cannon_Mag,200),
			MACRO_NEW_MAG(HMP_Cannon_Mag,200),
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};

		class sounds : sounds
		{
			class EngineExt
			{
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				sound[] = { "swlb_a_vehicle\hmp\sounds\hmp_engine_1.wss",1.25893,1,5000 };
				volume = "camPos*((rotorSpeed-0.72)*8)";
			};
		};
	};
};