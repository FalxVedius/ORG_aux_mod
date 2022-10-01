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
	class I_G_Offroad_01_armed_F;
	class ViewGunner;
	class ViewOptics;
	class Turrets;
	class M2_Turret;
	class I_Z6_Turret;
	class I_E5C_Turret;

	
    class MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_Z6): I_G_Offroad_01_armed_F
    {
        displayName = "Rebel Technical Z90 (Experimental)";
        scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_TANKS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";
		hiddenselections[] = {
			 "camo1"
		};
		class EventHandlers
		{
			init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
		};

		hiddenselectionstextures[] = {
		   MACRO_Rebel_Technical_TEXTURES\Base\Rebel_Offroad.paa,"soft_f\Offroaf_01\Data\Offroad_01_ext_BASE01_CO.paa",
		   MACRO_Rebel_Technical_TEXTURES\Base\Rebel_Offroad.paa,"soft_f\Offroaf_01\Data\Offroad_01_ext_BASE01_CO.paa"
		};

		class Turrets : Turrets
		{
			class I_Z6_Turret : M2_Turret
			{
				weapons[] =
				{
					"332nd_aux_weapon_R_Z90",
					
				};
				magazines[] =
				{
					"332nd_aux_magazine_R_Z90_x150",
					"332nd_aux_magazine_R_Z90_x150",
					"332nd_aux_magazine_R_Z90_x150",
					"332nd_aux_magazine_R_Z90_x150"
					
				};
			};
			   
	   };

		class Components;
		class Components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] =
						{
							"332_A_Pylon"
						};
						attachment = "332nd_aux_magazine_R_Pylon_AA_low_x12";
						priority = 5;
						maxweight = 1200;
						UIposition[] = { 0.34999999,0.15000001 };
					};
					class Pylons2 : Pylons1
					{
						maxweight = 1200;
						UIposition[] = { 0.34999999,-0.15000001 };
					};
					
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] =
						{
							"332nd_aux_magazine_R_Pylon_AA_low_x12",
							"332nd_aux_magazine_R_Pylon_AA_low_x12"
						};
					};
				};
			};
		};


	};

};	