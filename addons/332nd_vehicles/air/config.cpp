#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(air_vehicles)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(vehicles)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};