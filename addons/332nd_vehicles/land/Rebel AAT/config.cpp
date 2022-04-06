#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_AAT_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\Rebel_AAT
class CfgPatches
{
	class MACRO_PATCH_NAME(AAT)
	{
		author = "Bugs+thunder";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,AAT_Rebel),
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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
					class CommanderOptics : CommanderOptics
					{

					};
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

	class MACRO_NEW_VEHICLE(Land,CIS,AAT_Rebel) : 3AS_AAT_CIS
	{
		displayName = "AAT (Rebel) (Experimental)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_TANKS";
		crew = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
		side = 2;

		

		armor = 300;
		armorStructural = 2;

		hiddenselectionstextures[] = {
		   MACRO_AAT_TEXTURES\Rebel_AAT.paa,
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
					MACRO_NEW_WEAPON(R_AAT_Cannon)
				};
				magazines[] =
				{
					MACRO_NEW_MAG(R_AAT,24)
				};
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{

					};
				};
			};
		};

	};

};