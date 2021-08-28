#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ATTE)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,AT,TE),
        };
		weapons[] = {};
	};
};
class Optics_Armored;
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
		class Components;
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
			class HitFuel;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class 3as_ATTE_Base : Tank_F
	{
		class Turrets
		{
			class MainTurretTop;
			class MainTurretFront;
			class MainTurretBack;
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,AT,TE): 3as_ATTE_Base
    {
        displayName = "AT-TE *WIP*";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";
		armor = 5000;
		enginePower = 2500;
		maxSpeed = 15;
		class Turrets : Turrets
		 {
		   class MainTurretTop : MainTurretTop
		   {
		   class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			turretInfoType="RscOptics_MBT_01_gunner";
			 weapons[] =
			{
				MACRO_NEW_WEAPON(Mass_Driver)
			};
			magazines[] =
			{
				MACRO_NEW_MAG(MassDriver_AP,25),
				MACRO_NEW_MAG(MassDriver_AP,25),
				MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(MassDriver_HE,15)
			};
		   };
		   class MainTurretFront : MainTurretFront
		   {
		   weapons[] =
			{
				MACRO_NEW_WEAPON(Heavy_Hmg)
			};
		   magazines[] =
			{
				MACRO_NEW_MAG(ATTE_HMG,1000),
				MACRO_NEW_MAG(ATTE_HMG,1000),
				MACRO_NEW_MAG(ATTE_HMG,1000)
			};
		   };
		   class MainTurretBack : MainTurretBack
		   {
		   weapons[] =
			{
				MACRO_NEW_WEAPON(Heavy_Hmg)
			};
		   magazines[] =
			{
				MACRO_NEW_MAG(ATTE_HMG,1000),
				MACRO_NEW_MAG(ATTE_HMG,1000)
			};
		   };
	   };
	};
};