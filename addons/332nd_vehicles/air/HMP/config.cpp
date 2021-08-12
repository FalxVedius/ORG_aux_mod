#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(332_NuShuttle)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,Nu,332nd_Nu_Shuttle),
        };
		weapons[] = {};
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
			class MainTurret;
			class MainTurret2;
			class MainTurret3;
		};
	};
	class ls_cis_hmp : ls_hmp_base
	{
		class Components;
		class Turrets : Turrets
		{
			class MainTurret;
			class MainTurret2;
			class MainTurret3;
		};
	};
	class ls_cis_hmp_transport : ls_hmp_base
	{
		class Components;
		class Turrets : Turrets
		{
			class MainTurret;
			class MainTurret2;
			class MainTurret3;
		};
	};

	class MACRO_NEW_VEHICLE(air,CIS,HMP_CAS) : ls_cis_hmp
	{
		displayName = "CAS HMP";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_HELI";

		crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
			class MainTurret2 : MainTurret2
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
			class MainTurret3 : MainTurret3
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
		};

		weapons[] =
		{
			"ls_hmp_gun",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"200rnd_hmp_he_mag",
			"200rnd_hmp_he_mag",
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
						attachment = "PylonRack_1Rnd_Missile_AGM_02_F";
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
	};

	class MACRO_NEW_VEHICLE(air,CIS,HMP_AA) : ls_cis_hmp
	{
		displayName = "AA HMP";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_HELI";

		crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
			class MainTurret2 : MainTurret2
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
			class MainTurret3 : MainTurret3
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
		};

		weapons[] =
		{
			"ls_hmp_gun",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"200rnd_hmp_he_mag",
			"200rnd_hmp_he_mag",
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
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 5;
						hardpoints[] =
						{
							"SCALPEL_1RND",
							"B_ASRAAM",
							"B_AMRAAM_D_DUAL_RAIL",
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
	};

	class MACRO_NEW_VEHICLE(air,CIS,HMP_Transport) : ls_cis_hmp_transport
	{
		displayName = "HMP Transport";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_HELI";

		crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
			class MainTurret2 : MainTurret2
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
			class MainTurret3 : MainTurret3
			{
				gunnerType = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
			};
		};

		weapons[] =
		{
			"ls_hmp_gun",
			"missiles_DAR",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"200rnd_hmp_he_mag",
			"200rnd_hmp_he_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};