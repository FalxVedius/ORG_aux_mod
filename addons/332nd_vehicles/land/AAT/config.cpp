#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\AAT
class CfgPatches
{
	class MACRO_PATCH_NAME(AAT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,AAT_CIS),
			MACRO_NEW_VEHICLE(Land,CIS,AAT_Tan),
			MACRO_NEW_VEHICLE(Land,CIS,Heavy_AAT),
        };
		weapons[] = {};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class 3AS_AAT_base_F : Tank_F
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

	class 3AS_CIS_AAT_base_F : 3AS_AAT_base_F
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

	class 3AS_CIS_AAT_F : 3AS_CIS_AAT_base_F
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

	class 3AS_AAT : 3AS_CIS_AAT_F
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

	class 3AS_AAT_CIS : 3AS_AAT
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

	class 3AS_AAT_tan : 3AS_AAT
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

	class ls_ground_aat_base : Tank_F
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

		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class ls_ground_aat : ls_ground_aat_base
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

		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class ls_ground_aat_red : ls_ground_aat
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

		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,AAT_CIS) : 3AS_AAT_CIS
	{
		displayName = "AAT (CIS)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		armor = 500;
		armorStructural = 5;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{

					};
				};
			};
		};

		class TextureSources
		{
			class Tan
			{
				displayName = "Trade Federation";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"3AS\3AS_AAT\data\Tan_AAT_CO.paa"
				};
				factions[] =
				{
					"EdCat_332ndCIS"
				};
			};
			class CIS
			{
				displayName = "CIS";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"3AS\3AS_AAT\data\CIS_AAT_CO.paa"
				};
				factions[] =
				{
					"EdCat_332ndCIS"
				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,AAT_Tan) : 3AS_AAT_tan
	{
		displayName = "AAT (Tan)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		armor = 500;
		armorStructural = 5;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{

					};
				};
			};
		};

		class TextureSources
		{
			class Tan
			{
				displayName = "Trade Federation";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"3AS\3AS_AAT\data\Tan_AAT_CO.paa"
				};
				factions[] =
				{
					"EdCat_332ndCIS"
				};
			};
			class CIS
			{
				displayName = "CIS";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"3AS\3AS_AAT\data\CIS_AAT_CO.paa"
				};
				factions[] =
				{
					"EdCat_332ndCIS"
				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,Heavy_AAT) : ls_ground_aat_red
	{
		displayName = "Heavy AAT";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		driver = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		typicalCargo[] =
		{
			"332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew"
		};

		armor = 1000;
		armorStructural = 6;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{

					};
				};
			};
		};

		class TextureSources
		{
			class Red
			{
				displayname = "CIS Red";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"ls_vehicles_ground\aat\data\red\body1_red_co.paa",
					"ls_vehicles_ground\aat\data\red\body2_red_co.paa",
					"ls_vehicles_ground\aat\data\red\gun_red_co.paa"
				};
				factions[] =
				{
					"EdCat_332ndCIS"
				};
			};
		};
	};
};