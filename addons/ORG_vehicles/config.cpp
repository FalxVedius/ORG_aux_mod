#include "../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(vehicles)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(vehicle_weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};