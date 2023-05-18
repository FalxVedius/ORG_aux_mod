#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Drakon)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,GAR,Drakon),
        };
		weapons[] = {};
	};
};


class CfgVehicles
{
	class UAV;
	class UAV_Drakon_Base : UAV
	{
		class Turrets;
	};
	class UAV_Drakon : UAV_Drakon_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class MACRO_NEW_VEHICLE(air,GAR,Drakon) : UAV_Drakon
	{
		displayName = "Drakon *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_PLANE";


	};
};