#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(BARC)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles),
			MACRO_PATCH_NAME(land_weapons)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,BARC,Single),
			MACRO_NEW_VEHICLE(Land,BARC,Sidecar),
        };
		weapons[] = {};
	};
};
class CfgVehicles
 {

	class LandVehicle;
	class Car : LandVehicle
	{
		class NewTurret;
	};
	class Car_F : Car
	{
		class Eventhandlers;
		class ViewPilot;
		class AnimationSources;
		class Turrets
		{
			class MainTurret : NewTurret
			{
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitBody;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class MainTurret;
	class ViewOptics;
	class RCWSOptics;

	class BARC_Base : Car_F
	{
		class Turrets;
	};

	class 3AS_BARC_Base : BARC_Base
	{

	};

	class 3AS_Barc_501 : 3AS_BARC_Base
	{

	};

	class 3AS_Barc : 3AS_Barc_501
	{

	};

	class 3AS_BarcSideCar : 3AS_Barc
	{
		class Turrets;
	};
	
    class MACRO_NEW_VEHICLE(Land,BARC,Single): 3AS_Barc
    {
        displayName = "BARC Speeder *WIP*";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_arfbase_unit_332nd_arfbase_trooper";
		weapons[] =
				{
				MACRO_NEW_WEAPON(BARC_40mm)
				};
				 magazines[] =
				{
				MACRO_NEW_MAG(BARC_MainCannon,300)
				};
	};

	class MACRO_NEW_VEHICLE(Land,BARC,Sidecar) : 3AS_BarcSideCar
	{
		displayName = "BARC Speeder w/ Sidecar *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_arfbase_unit_332nd_arfbase_trooper";
		weapons[] =
				{
				MACRO_NEW_WEAPON(BARC_40mm)
				};
				 magazines[] =
				{
				MACRO_NEW_MAG(BARC_MainCannon,300)
				};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			  weapons[] =
				{
				MACRO_NEW_WEAPON(Heavy_Hmg)
				};
				 magazines[] =
				{
				MACRO_NEW_MAG(Heavy_HMG,150),
				MACRO_NEW_MAG(Heavy_HMG,150),
				MACRO_NEW_MAG(Heavy_HMG,150)
				};
			};
		};
	};
};