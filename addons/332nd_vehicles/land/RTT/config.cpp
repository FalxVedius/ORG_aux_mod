#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(RTT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,RTT,Transport),
			MACRO_NEW_VEHICLE(Land,RTT,Supply),
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
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
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

	class APC_Tracked_01_base_F : Tank_F
	{
		class Sounds;
		class ViewOptics : ViewOptics
		{
		};
		class Wheels
		{
			class L2;
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};

	class 3as_RTT_Base : APC_Tracked_01_base_F
	{
		class Turrets : Turrets
		{
			class CargoTurret_01 : NewTurret
			{

			};
			class CargoTurret_02 : CargoTurret_01
			{

			};
			class CargoTurret_03 : CargoTurret_02
			{

			};
			class CargoTurret_04 : CargoTurret_03
			{

			};

		};
	};

	class 3as_RTT : 3as_RTT_Base
	{
		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};

		};
	};

	
    class MACRO_NEW_VEHICLE(Land,RTT,Transport): 3as_RTT
    {
        displayName = "RTT Transport";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		transportSoldier = 10;

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\RTT\RTT_Body_co.paa"
		};

		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,RTT,Supply) : 3as_RTT
	{
		displayName = "RTT Supply";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		transportSoldier = 0;
		attendant = true;
		transportAmmo = 300000;
		transportFuel = 3000;
		transportRepair = 200000000;

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\RTT\RTT_Body_co.paa"
		};

		

		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	
};