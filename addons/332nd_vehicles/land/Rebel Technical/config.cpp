#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_Rebel_Technical_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\Rebel Technical
class CfgPatches
{
	class MACRO_PATCH_NAME(Rebel_Technical)
	{
		author = "Bugs";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_Z6)
        };
		weapons[] = {};
	};
};
class CfgVehicles
 {
	class Offroad_01_military_base_F;

	class Offroad_01_armed_base_F : Offroad_01_military_base_F
	{
		class Turrets;
	};

	class I_G_Offroad_01_armed_F : Offroad_01_armed_base_F
	{
		class Turrets : Turrets
		{
			class M2_Turret;
		};
	};

	


	
    class MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_Z6): I_G_Offroad_01_armed_F
    {
        displayName = "Rebel Technical Z90 (Experimental)";
        scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_CARS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";

		class EventHandlers
		{
			init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
		};

		hiddenSelections[] = { "camo","camo2" };

		hiddenSelectionsTextures[] = { "\332nd_vehicles\_textures\land\Rebel_Technical\Base\Rebel_Offroad.paa", "\332nd_vehicles\_textures\land\Rebel_Technical\Base\Rebel_Offroad.paa" };

		class Turrets : Turrets
		{
			class M2_Turret : M2_Turret
			{
				weapons[] =
				{
					"332nd_aux_weapon_R_Z90",
					
				};
				magazines[] =
				{
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750"
					
				};
			};
			   
	   };
	};

};	