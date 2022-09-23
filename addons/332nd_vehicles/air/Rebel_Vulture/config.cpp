#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_VULTURE_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\air\Rebel_Vulture
class CfgPatches
{
	class MACRO_PATCH_NAME(R_Vulture)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,CIS,Rebel_Vulture_CAP),
			MACRO_NEW_VEHICLE(air,CIS,Rebel_Vulture_CAS),
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
	class Plane;
	class MFD
	{
	};
	class Plane_Base_F : Plane
	{
		class Components;
	};
	class 3AS_Vulture_Base_F : Plane_Base_F
	{
		class Components : Components
		{
			class pylons1;
			class pylons2;
			class pylons3;
			class pylons4;
			class pylons5;
			class pylons6;
		};
	};

	class MACRO_NEW_VEHICLE(air,CIS,Rebel_Vulture_CAP) : 3AS_Vulture_Base_F
	{
		  displayName = "Hornet Droid (Experimental)";
		  scope = 2;
		  side = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332nd_Rebel";
		  editorSubcategory = "EdSubcat_332nd_Rebel_PLANES";
		  armor = 25;
		  crew = "332nd_aux_rebel_unit_332nd_indep_rebel";
		  driverCanEject = 0;
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
					  class Pylons1 : Pylons1
					  {
				  
						  attachment = "332nd_aux_magazine_R_Pylon_AA_low_x24";
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
							  "332nd_aux_magazine_R_Pylon_AA_low_x24",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
						  };
					  };
				  };
			  };
		  };
	};

	class MACRO_NEW_VEHICLE(air,CIS,Rebel_Vulture_CAS) : 3AS_Vulture_Base_F
	{
		  displayName = "Rebel CAS Vulture Droid";
			side = 2;
		  scope = 2;
		  armor = 25;
		  scopeCurator = 2;
		  faction = "EdCat_332nd_Rebel";
		  editorSubcategory = "EdSubcat_332nd_Rebel_PLANES";
		  driverCanEject = 0;
		  crew = "332nd_aux_rebel_unit_332nd_indep_rebel";

		  weapons[] =
		  {
			  MACRO_NEW_WEAPON(R_PlasmaBomb_Pylon),
			  MACRO_NEW_WEAPON(Vulture_cannon),
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  MACRO_NEW_MAG(Pylon_PlasmaBomb,3),
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  MACRO_NEW_MAG(Vulture_30mm,1000),
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
			sound[] =
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineHighInt.wss",
					2,
					1,
					2100
				};
				frequency = 1;
				volume = "(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineHighOut
			{
			sound[] =
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineHighExt.wss",
					4,
					1,
					4000
				};
				frequency = 1;
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineLowInt
			{
			sound[] =
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
			sound[] =
				{
					"332nd_vehicles\air\sounds\Vulture\VultureEngineExt.wss",
					2,
					1,
					1000
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};

			class ForsageIn
			{
			sound[] =
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
			sound[] =
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
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1.77828,
					1,
					100
				};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] =
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
		};

		  class Components : Components
		  {
			  class TransportPylonsComponent
			  {
				  uiPicture = "a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				  class Pylons
				  {
					  class pylons1 : pylons1
					  {
						  attachment = "332nd_aux_magazine_R_Plasma_Bomb_x3";
					  };
					  class pylons2 : pylons2
					  {
						  attachment = "332nd_aux_magazine_R_Plasma_Bomb_x3";
					  };
					  class pylons3 : pylons3
					  {
						  attachment = "332nd_aux_magazine_R_Plasma_Bomb_x3";
					  };
					  class pylons4 : pylons4
					  {
						  attachment = "332nd_aux_magazine_R_Plasma_Bomb_x3";
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
							  
							  "332nd_aux_magazine_R_Plasma_Bomb_x3",
							  "332nd_aux_magazine_R_Plasma_Bomb_x3",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
							 
						  };
					  };
				  };
			  };
		  };
	};


};