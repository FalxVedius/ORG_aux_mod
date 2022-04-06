#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_Rebel_Zamak_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\R_Zamak
class CfgPatches
{
	class MACRO_PATCH_NAME(Rebel_Zamak)
	{
		author = "Bugs";
		addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[] =
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			MACRO_NEW_VEHICLE(land,Rebel,Zamak)
		};
		weapons[]={};
	};
};

class CfgVehicles
{
	
	class C_Truck_02_covered_F;
	class MACRO_NEW_VEHICLE(land,Rebel,Zamak) : C_Truck_02_covered_F
	{
		displayName = "Rebel Zamak (Experimental)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_CARS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";
		model = "\A3\soft_f_beta\Truck_02\Truck_02_covered_F.p3d";
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
			"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa",
			"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"
		};
		
	};

	
};
