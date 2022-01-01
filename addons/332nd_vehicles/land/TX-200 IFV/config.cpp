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
		//hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat"};
		//hiddenSelectionsTextures[] = {"\332nd_vehicles\_textures\land\TX200\MainBody_co.paa","\332nd_vehicles\_textures\land\TX200\LowerBody_co.paa","\332nd_vehicles\_textures\land\TX200\MainTurret_co.paa","",""};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				turretInfoType = "RscOptics_MBT_01_gunner";

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
	};
}
	
			
		
	

//TO DO
// make tracks invulnerable, texture, investigate weapons, sounds, effects