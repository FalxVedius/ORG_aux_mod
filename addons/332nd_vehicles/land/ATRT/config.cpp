#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ATRT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,AT,RT),
        };
		weapons[] = {};
	};
};
class CfgVehicles
 {
	class CAManBase;
	class SoldierWB : CAManBase
	{
		class HeadLimits;
	};

	class 3AS_ATRT_Base : SoldierWB
	{

	};

	class 3AS_ATRT : 3AS_ATRT_Base
	{

	};
	
    class MACRO_NEW_VEHICLE(Land,AT,RT): 3AS_ATRT
    {
        displayName = "AT-RT *Test*";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		weapons[] =
			{
				MACRO_NEW_WEAPON(ATRT_cannon)
			};
        magazines[] =
			{
				MACRO_NEW_MAG(ATRT_30mm,9999)
			};
	 };
 };