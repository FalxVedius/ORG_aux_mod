#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\Rebel GAT
class CfgPatches
{
	class MACRO_PATCH_NAME(GAT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_GAT),
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
	class 3AS_GAT_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_CIS_GAT_base_F : 3AS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_CIS_GAT_F : 3AS_CIS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT : 3AS_CIS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Olive : 3AS_GAT
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light_Base : 3AS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light_base_F : 3AS_GAT_Light_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light : 3AS_GAT_Light_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light_Olive : 3AS_GAT_Light
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};


	
    class MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_GAT): 3AS_GAT_Light
    {
        displayName = "Stolen Light GAT (Experimental)";
        scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_TANKS";
		crew = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
		class Turrets : Turrets
		 {
		   class MainTurret : MainTurret
		   {
			   class Turrets
			   {
			   };
			   gunnerType = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
		   };
	   };
	};

};	