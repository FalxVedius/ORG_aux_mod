#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(TX200)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,TX,200),
        };
		weapons[] = {};
	};
};
class CfgVehicles
 {
	class Tank;

	class Tank_F : Tank
	{
		class Turrets;
	};

	class APC_Tracked_03_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets;
			};
		};
	};

	class OPTRE_M494 : I_APC_tracked_03_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};

    class MACRO_NEW_VEHICLE(Land,TX,200) : OPTRE_M494
    {
        displayName = "[332nd] *WIP* TX-200 - 'Verax'";
        scope = 2;
		side=1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_APCS";
		crew = "332nd_aux_infantry_unit_332nd_trooper";
		

		armor = 350;
		armorStructural = 4;

		antiRollbarForceCoef = 48;
		antiRollbarForceLimit = 106;
		antiRollbarSpeedMax = 160;

		transportSoldier = 12;

		cargoAction[] = { "passenger_apc_narrow_generic02","passenger_apc_narrow_generic03","passenger_apc_generic02","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_generic01_foldhands","passenger_generic01_leanleft","passenger_generic01_leanright", "passenger_apc_narrow_generic02","passenger_apc_narrow_generic03","passenger_apc_generic02","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_generic01_foldhands","passenger_generic01_leanleft","passenger_generic01_leanright" };

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				turretInfoType = "RscOptics_MBT_01_gunner";

				stabilizedInAxes = 3;

				weapons[] =
				{
					MACRO_NEW_WEAPON(RX200_40mm),
					MACRO_NEW_WEAPON(RX200_15L),
					MACRO_NEW_WEAPON(RX200_ATGM)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(RX200_40mmAP,50),
					MACRO_NEW_MAG(15L,500),
					MACRO_NEW_MAG(15L,500),
					MACRO_NEW_MAG(15L,500),
					MACRO_NEW_MAG(15L,500),
					MACRO_NEW_MAG(15L,500),
					MACRO_NEW_MAG(15L,500),
					MACRO_NEW_MAG(ATGM,2),
					MACRO_NEW_MAG(ATGM,2),
					MACRO_NEW_MAG(ATGM,2),
					MACRO_NEW_MAG(ATGM,2),
					MACRO_NEW_MAG(ATGM,2)
				};
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{

						turretInfoType = "RscOptics_MBT_01_commander";

						stabilizedInAxes = 3;

						weapons[] =
						{
							MACRO_NEW_WEAPON(RX200_15L)
						};

						magazines[] =
						{
							MACRO_NEW_MAG(15L,500),
							MACRO_NEW_MAG(15L,500),
							MACRO_NEW_MAG(15L,500),
							MACRO_NEW_MAG(15L,500),
							MACRO_NEW_MAG(15L,500),
							MACRO_NEW_MAG(15L,500)
						};
					};

				};
			};
		};

		class HitPoints
		{
			class HitHull
			{
				armor = 2.5;
				explosionShielding = 0.4;
				material = -1;
				minimalHit = 0.2;
				name = "telo";
				passThrough = 1;
				radius = 0.3;
				visual = "hull";
			};

			class HitLTrack
			{
				armor = 2;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.1;
				name = "pasL";
				passThrough = 0;
				radius = 0.75;
			};

			class HitRTrack
			{
				armor = 2;
				explosionShielding = 0.5;
				material = -1;
				minimalHit = 0.1;
				name = "pasP";
				passThrough = 0;
				radius = 0.75;
			};
		};
	};
};