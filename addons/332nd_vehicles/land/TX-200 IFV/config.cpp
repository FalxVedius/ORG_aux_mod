#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\TX200
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
	class Tank_F;
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets;
	};
    class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
		//class MainTurret;
		class Turrets: Turrets
		{
			class MainTurret;
		};
		// class HitPoints;
		// class Sounds: Sounds
		// {
		// 	class Engine;
		// 	class Movement;
		// };
		// class EventHandlers;
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;//: MainTurret
			//{
				//class ViewGunner;
				//class Turrets
				//{
					//class CommanderOptics;
				//};
			//};
		};
		// class AnimationSources;
		// class ViewPilot;
		// class ViewOptics;
		// class ViewCargo;
		// class HeadLimits;
		// class HitPoints : HitPoints
		// {
		// 	class HitHull;
		// 	class HitFuel;
		// 	class HitEngine;
		// 	class HitLTrack;
		// 	class HitRTrack;
		// };
	};
    class MACRO_NEW_VEHICLE(Land,TX,200):O_APC_Tracked_02_cannon_F
    {
        displayName = "[332nd] *WIP* TX-200";
        scope = 2;
		side=1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_APCS";
      hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat"};
	   hiddenSelectionsTextures[] = {"\332nd_vehicles\_textures\land\TX200\MainBody_co.paa","\332nd_vehicles\_textures\land\TX200\LowerBody_co.paa","\332nd_vehicles\_textures\land\TX200\MainTurret_co.paa","",""};
	   
	   class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					MACRO_NEW_WEAPON(RX200_40mm),
					MACRO_NEW_WEAPON(RX200_15L),
					MACRO_NEW_WEAPON(RX200_ATGM)
				};
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				magazines[]=
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
			};
		};	
	};
}
	
			
		
	

//TO DO
// make tracks invulnerable, texture, investigate weapons, sounds, effects