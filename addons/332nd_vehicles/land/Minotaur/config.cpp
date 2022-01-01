#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(TX155)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,TX,155),
        };
		weapons[] = {};
	};
};

class CfgVehicles
 {
	class NewTurret;
	class Car_F;

	class SC_Saurus_Base : Car_F
	{
		class Turrets;
	};

	class SC_SaurusAPC_SE : SC_Saurus_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

    class MACRO_NEW_VEHICLE(Land,TX,155) : SC_SaurusAPC_SE
    {
        displayName = "[332nd] *WIP* TX-155 - 'Minotaur'";
        scope = 2;
		side=1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_APCS";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		class CommanderOptics : NewTurret
		{
			canEject = 1;
			commanding = 2;
			dontCreateAI = 0;
			forceHideGunner = 0;
			gunnerFireAlsoInInternalCamera = 1;
			gunnerForceOptics = 1;

			class ViewGunner
			{
				initAngleX = 5;
				initAngleY = 0;
				initFov = 0.75;
				maxAngleX = 85;
				maxAngleY = 150;
				maxFov = 1.25;
				maxMoveX = 0;
				maxMoveY = 0;
				maxMoveZ = 0;
				minAngleX = -75;
				minAngleY = -150;
				minFov = 0.25;
				minMoveX = 0;
				minMoveY = 0;
				minMoveZ = 0;
				speedZoomMaxFOV = 0;
				speedZoomMaxSpeed = 1e+010;
			};
			class ViewOptics
			{
				initAngleX = 0;
				initAngleY = 0;
				initFov = 0.3;
				maxAngleX = 30;
				maxAngleY = 100;
				maxFov = 0.35;
				maxMoveX = 0;
				maxMoveY = 0;
				maxMoveZ = 0;
				minAngleX = -30;
				minAngleY = -100;
				minFov = 0.07;
				minMoveX = 0;
				minMoveY = 0;
				minMoveZ = 0;
				speedZoomMaxFOV = 0;
				speedZoomMaxSpeed = 1e+010;
			};
		};
		

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";

				turretInfoType = "RscOptics_MBT_01_gunner";

				weapons[] =
				{
					MACRO_NEW_WEAPON(RX155_40mm),
					MACRO_NEW_WEAPON(RX200_15L)
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
					MACRO_NEW_MAG(15L,500)
				};
			};
		};
	};
}
	
			
		
	

//TO DO
// make tracks invulnerable, texture, investigate weapons, sounds, effects