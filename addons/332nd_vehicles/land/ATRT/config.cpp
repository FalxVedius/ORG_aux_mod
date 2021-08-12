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



	//
 //   class MACRO_NEW_VEHICLE(Land,AT,RT): 3AS_GAT_Light
 //   {
 //       displayName = "AT-RT *WIP*";
 //       scope = 2;
	//	scopeCurator = 2;
	//	faction = "EdCat_332nd";
	//	editorSubcategory = "EdSubcat_332nd_TANK";
	//	crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
	//	class Turrets : Turrets
	//	 {
	//	   class MainTurret : MainTurret
	//	   {
	//		   class Turrets
	//		   {
	//		   };
	//		   gunnerType = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
	//	   };
	//   };
	//};
};