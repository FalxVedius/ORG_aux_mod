#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_VULTURE_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\air\Rebel_Vulture
class CfgPatches
{
	class MACRO_PATCH_NAME(R_Vulture)
	{
		author = "Bugs+Thunder";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,CIS,Rebel_Vulture_CAP),
        };
		weapons[] = {};
	};
};

class AnimationSources;
class UserActions;
class Eventhandlers;
class HitPoints;
class HitHull;
class MarkerLights;
class Components;
class EjectionSystem;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};


class CfgVehicles
{
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class MFD
	{
	};
	class 3as_vulture_dynamicLoadout_base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components;
	};
	class 3as_Vulture_dynamicLoadout : 3as_vulture_dynamicLoadout_base
	{
		class Components;
	};

	class MACRO_NEW_VEHICLE(air,CIS,Rebel_Vulture_CAP) : 3as_Vulture_dynamicLoadout
	{
		  displayName = "Hornet Droid";
		  scope = 2;
		  side = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332nd_Rebel";
		  editorSubcategory = "EdSubcat_332nd_Rebel_PLANES";
		  armor = 25;
		  crew = "332nd_aux_rebel_unit_332nd_indep_rebel";
		  driverCanEject = 1;
		  weapons[] = 
		  {
			  MACRO_NEW_WEAPON(Vulture_cannon),
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  MACRO_NEW_MAG(Air_Dumb_rocket,24),
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
		  };

		  hiddenselections[] = {
		   "camo1"
		  };

		  hiddenselectionstextures[] = {
			 MACRO_VULTURE_TEXTURES\Base\Rebel_Vulture_Droid.paa,"3as_vulture\data\vulturedroid_color.paa"
		  };
		  class EjectionSystem
		{
			EjectionSeatEnabled = 0;										//enable advanced ejection system								
		};

		  class Sounds
		{	
			class EngineHighInt
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineHighInt.wss",
					1,
					1,
					2100
				};
				frequency = 1;
				volume = "(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineHighOut
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineHighExt.wss",
					2,
					1,
					4000
				};
				frequency = 1;
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineLowInt
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineInt.wss",
					1,
					2,
					1200
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineLowOut
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineExt.wss",
					4,
					1,
					1000
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			
			class ForsageIn
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\Vulture\VultureForsageInt.wss",
					0.5,
					1,
					2000
				};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};

			class ForsageOut
			{
			cone[] = {20,15,5,3};
			sound[]=
				{
					"332nd_vehicles\air\sounds\Vulture\VultureForsageExt.wss",
					3.5,
					0.95,
				};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
			};
			
		
			
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.77828,
					1,
					100
				};
				frequency=1;
				volume="camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * rain * (speed factor[50, 0])";
			};
		};

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
					  class Pylons3 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0.30000001 };
						  mirroredMissilePos = 2;
					  };
					  class Pylons4 : Pylons2
					  {
						  UIposition[] = { 0.34999999,-0.30000001 };
						  mirroredMissilePos = 1;
					  };
					  class Pylons5 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0 };
						  priority = 4;
						  hardpoints[] =
						  {
							  "332_A_Pylon"
						  };
						  attachment = "332nd_aux_magazine_R_Pylon_AA_low_x12";
					  };
					  class Pylons6 : Pylons5
					  {
						  hardpoints[] = 
						  {
							  "332_A_Pylon"
						  };
						  attachment = "332nd_aux_magazine_R_Pylon_AA_low_x12";
						 
						  UIposition[] = { 0.34999999,0.5 };
						  mirroredMissilePos = 5;
					  };
					  class Pylons7 : Pylons1
					  {
						  priority = 10;
						  attachment = "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells";
						  maxweight = 1200;
						  UIposition[] = { 0.1,0.27000001 };
						  hardpoints[] =
						  {
							  "3as_Vulture_AOE_Cannon"
						  };
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
							  "332nd_aux_magazine_R_Pylon_AA_low_x12",
							  "332nd_aux_magazine_R_Pylon_AA_low_x12",
							  "332nd_aux_magazine_R_Pylon_AA_low_x12",
							  "332nd_aux_magazine_R_Pylon_AA_low_x12",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
						  };
					  };
				  };
			  };
		  };
	};

};