#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_Rebel_Gator_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\R_Gator
class CfgPatches
{
	class sc_wheeled
	{
		author="Scion Conflict Mod Team";
		url="https://steamcommunity.com/sharedfiles/filedetails/?id=2478080991";
		requiredaddons[]=
		{
			"sc_vtol",
			"sc_units",
			"A3_Weapons_F"
		};
		requiredversion=1;
		units[]=
		{
			MACRO_NEW_VEHICLE(land,Rebel,Gator)
		};
		weapons[]={};
		magazines[]={};
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class ViewOptics;
class MGun;
class GunParticles;
class CfgVehicles
{
	class SC_Gator_TC_AC;
	class MACRO_NEW_VEHICLE(land,Rebel,Gator) : SC_Gator_TC_AC
	{
		displayName = "Rebel Gator (Experimental)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_CARS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";
		hiddenSelections[] =
		{
			"camo_body",
			"camo_doors",
			"camo_compartment"
		};
		hiddenSelectionsTextures[] =
		{
			"\sc_wheeled\data\gator\body_black_co.paa",
			"\sc_wheeled\data\gator\doors_co.paa",
			"\sc_wheeled\data\gator\compartment_co.paa"
		};
	}
};
