#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Vulture)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,CIS,Vulture_CAP),
			MACRO_NEW_VEHICLE(air,CIS,Vulture_CAS),
			MACRO_NEW_VEHICLE(air,CIS,Vulture_GUN),
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

	class MACRO_NEW_VEHICLE(air,CIS,Vulture_CAP) : 3AS_Vulture_Base_F
	{
		  displayName = "CAP Vulture Droid";
		  scope = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332ndCIS";
		  editorSubcategory = "EdSubcat_332nd_PLANE";
		  armor = 75;
		  crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
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
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
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
					  class pylons1 : pylons1
					  {
						  attachment = "3AS_PylonRack_Vulture_1Rnd_Missile_AA";
						  hardpoints[] = { "3AS_CIS_Vulture_AA","3AS_CIS_Vulture_HEAP" };
						  maxweight = 300;
						  name = "3AS_Vulture_MFD";
						  priority = 13;
						  UIposition[] = { 0.6,0.45 };
					  };
					  class pylons2 : pylons2
					  {
						  attachment = "3AS_PylonRack_Vulture_1Rnd_Missile_AA";
						  hardpoints[] = { "3AS_CIS_Vulture_AA","3AS_CIS_Vulture_HEAP" };
						  maxweight = 300;
						  mirroredMissilePos = 1;
						  name = "3AS_Vulture_MFD";
						  priority = 13;
						  UIposition[] = { 0.05,0.45 };
					  };
					  class pylons3 : pylons3
					  {
						  attachment = "3AS_PylonRack_Vulture_1Rnd_Missile_AA";
						  hardpoints[] = { "3AS_CIS_Vulture_AA","3AS_CIS_Vulture_HEAP" };
						  maxweight = 1050;
						  name = "3AS_Vulture_MFD";
						  priority = 11;
						  UIposition[] = { 0.55,0.35 };
					  };
					  class pylons4 : pylons4
					  {
						  attachment = "3AS_PylonRack_Vulture_1Rnd_Missile_AA";
						  hardpoints[] = { "3AS_CIS_Vulture_AA","3AS_CIS_Vulture_HEAP" };
						  maxweight = 1050;
						  mirroredMissilePos = 3;
						  name = "3AS_Vulture_MFD";
						  priority = 11;
						  UIposition[] = { 0.1,0.35 };
					  };
					  class pylons5 : pylons5
					  {
						  attachment = "3AS_PylonRack_Vulture_1Rnd_Missile_AA";
						  hardpoints[] = { "3AS_CIS_Vulture_AA","3AS_CIS_Vulture_HEAP" };
						  maxweight = 1200;
						  name = "3AS_Vulture_MFD";
						  priority = 9;
						  UIposition[] = { 0.5,0.25 };
					  };
					  class pylons6 : pylons6
					  {
						  attachment = "3AS_PylonRack_Vulture_1Rnd_Missile_AA";
						  hardpoints[] = { "3AS_CIS_Vulture_AA","3AS_CIS_Vulture_HEAP" };
						  maxweight = 1200;
						  mirroredMissilePos = 5;
						  name = "3AS_Vulture_MFD";
						  priority = 9;
						  UIposition[] = { 0.15,0.25 };
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
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA",
							  "3AS_PylonRack_Vulture_1Rnd_Missile_AA"
						  };
					  };
				  };
			  };
		  };
	};

	class MACRO_NEW_VEHICLE(air,CIS,Vulture_CAS) : 3AS_Vulture_Base_F
	{
		  displayName = "CAS Vulture Droid";
		  scope = 2;
		  armor = 75;
		  scopeCurator = 2;
		  faction = "EdCat_332ndCIS";
		  editorSubcategory = "EdSubcat_332nd_PLANE";
		  driverCanEject = 0;
		  crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		  weapons[] =
		  {
			  MACRO_NEW_WEAPON(Vulture_cannon),
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
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
					2,
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
					4,
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
					2,
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
					  class pylons1 : pylons1
					  {
						  attachment = "332nd_aux_magazine_Vulture_Rocket_Pylon_x12";
						  hardpoints[] = {"3AS_CIS_Vulture_HEAP" };
						  maxweight = 300;
						  name = "3AS_Vulture_MFD";
						  priority = 13;
						  UIposition[] = { 0.6,0.45 };
					  };
					  class pylons2 : pylons2
					  {
						  attachment = "332nd_aux_magazine_Vulture_Rocket_Pylon_x12";
						  hardpoints[] = {"3AS_CIS_Vulture_HEAP" };
						  maxweight = 300;
						  mirroredMissilePos = 1;
						  name = "3AS_Vulture_MFD";
						  priority = 13;
						  UIposition[] = { 0.05,0.45 };
					  };
					  class pylons3 : pylons3
					  {
						  attachment = "332nd_aux_magazine_Vulture_Rocket_Pylon_x12";
						  hardpoints[] = {"3AS_CIS_Vulture_HEAP" };
						  maxweight = 1050;
						  name = "3AS_Vulture_MFD";
						  priority = 11;
						  UIposition[] = { 0.55,0.35 };
					  };
					  class pylons4 : pylons4
					  {
						  attachment = "332nd_aux_magazine_Vulture_Rocket_Pylon_x12";
						  hardpoints[] = {"3AS_CIS_Vulture_HEAP" };
						  maxweight = 1050;
						  mirroredMissilePos = 3;
						  name = "3AS_Vulture_MFD";
						  priority = 11;
						  UIposition[] = { 0.1,0.35 };
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
							  "3as_PylonRack_Vulture_7Rnd_Missle_AGM",
							  "3as_PylonRack_Vulture_7Rnd_Missle_AGM"
						  };
					  };
				  };
			  };
		  };
	};

	class MACRO_NEW_VEHICLE(air,CIS,Vulture_GUN) : 3AS_Vulture_Base_F
	{
		  displayName = "Vulture Droid";
		  scope = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332ndCIS";
		  editorSubcategory = "EdSubcat_332nd_PLANE";
		  driverCanEject = 0;
		  armor = 75;
		  crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";
		    class EjectionSystem
		{
			EjectionSeatEnabled = 0;										//enable advanced ejection system								
		};
		  weapons[] =
		  {
			  MACRO_NEW_WEAPON(Vulture_cannon),
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  MACRO_NEW_MAG(Vulture_30mm,1000),
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
		  };

		  class Sounds
		{	
			class EngineHighInt
			{
			sound[]=
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
			sound[]=
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
					2,
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
					  class pylons1
					  {
						  hardpoints[] =
						  {
						  };
						  attachment = "";
						  priority = 13;
						  maxweight = 300;
						  UIposition[] = { 0.60000002,0.44999999 };
						  name = "3AS_Vulture_MFD";
					  };
					  class pylons2 : pylons1
					  {
						  UIposition[] = { 0.050000001,0.44999999 };
						  mirroredMissilePos = 1;
					  };
					  class pylons3
					  {
						  hardpoints[] =
						  {
						  };
						  attachment = "";
						  priority = 11;
						  maxweight = 1050;
						  UIposition[] = { 0.55000001,0.34999999 };
						  name = "3AS_Vulture_MFD";
					  };
					  class pylons4 : pylons3
					  {
						  UIposition[] = { 0.1,0.34999999 };
						  mirroredMissilePos = 3;
					  };
					  class pylons5
					  {
						  hardpoints[] =
						  {

						  };
						  attachment = "";
						  priority = 9;
						  maxweight = 1200;
						  UIposition[] = { 0.5,0.25 };
						  name = "3AS_Vulture_MFD";
					  };
					  class pylons6 : pylons5
					  {
						  UIposition[] = { 0.15000001,0.25 };
						  mirroredMissilePos = 5;
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
						  attachment[] = {};
					  };
				  };
			  };
		  };
	};
};