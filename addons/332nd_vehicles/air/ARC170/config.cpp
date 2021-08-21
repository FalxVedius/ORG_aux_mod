#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ARC170)
	{
		author = MACRO_AUTHOR;
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,ARC,170),
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
	class NewTurret;
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F : Plane_Fighter_03_base_F
	{
		class Turrets;
	};
	class 3as_arc_170_base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets
		{
			class LaserPilot;
			class Reargun;
		};

		class Components;
	};
	class MACRO_NEW_VEHICLE(air,ARC,170) : 3as_arc_170_base
	{
		  displayName = "ARC-170 *WIP*";
		  scope = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332nd";
		  editorSubcategory = "EdSubcat_332nd_PLANE";

		  crew = "332nd_aux_aviation_unit_332nd_flight_ensign";


		  class Turrets : Turrets
		  {
			  class LaserPilot : LaserPilot
			  {

			  };
			  class Reargun : Reargun
			  {

			  };
		  };

		  class Components : Components
		  {
			  class TransportPylonsComponent
			  {
				  UIPicture = "3as\3as_arc170\data\plane_arc_pylon_ca.paa";
				  class pylons
				  {
					  class pylons1
					  {
						  hardpoints[] =
						  {
							  "332_B_Pylon",
							  "332_C_Pylon"
						  };
						  attachment = MACRO_NEW_MAG(Pylon_ProtonBomb,1)
						  priority = 10;
						  maxweight = 300;
						  UIposition[] = { 0.5,0.25 };
					  };
					  class pylons2 : pylons1
					  {
						  UIposition[] = { 0.15000001,0.25 };
						  mirroredMissilePos = 1;
					  };
					  class pylons3 : pylons1
					  {
						  hardpoints[] =
						  {
							  "332_B_Pylon"
						  };
						  attachment = MACRO_NEW_MAG(Pylon_ProtonBomb,1)
						  priority = 9;
						  maxweight = 2500;
						  UIposition[] = { 0.55000001,0.34999999 };
					  };
					  class pylons4 : pylons3
					  {
						  UIposition[] = { 0.1,0.34999999 };
						  mirroredMissilePos = 3;
					  };
					  class pylons5 : pylons1
					  {
						  hardpoints[] =
						  {
							  "332_B_Pylon"
						  };
						  attachment = MACRO_NEW_MAG(Pylon_ProtonBomb,1);
						  priority = 7;
						  maxweight = 5000;
						  UIposition[] = { 0.60000002,0.44999999 };
					  };
					  class pylons6 : pylons5
					  {
						  UIposition[] = { 0.050000001,0.44999999 };
						  mirroredMissilePos = 5;
					  };
				  };
				  //class presets
				  //{
					 // class empty
					 // {
						//  displayName = "$STR_empty";
						//  attachment[] = {};
					 // };
					 // class AA
					 // {
						//  displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
						//  attachment[] =
						//  {
						//	  "PylonRack_Missile_BIM9X_x1",
						//	  "PylonRack_Missile_BIM9X_x1",
						//	  "3as_PylonRack_ARC_6Rnd_Missile_AGM",
						//	  "3as_PylonRack_ARC_6Rnd_Missile_AGM",
						//	  "PylonRack_Missile_AMRAAM_D_x2",
						//	  "PylonRack_Missile_AMRAAM_D_x2"
						//  };
					 // };
					 // class CAS
					 // {
						//  displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						//  attachment[] =
						//  {
						//	  "PylonRack_Missile_BIM9X_x1",
						//	  "PylonRack_Missile_BIM9X_x1",
						//	  "3as_PylonRack_ARC_1Rnd_EMP",
						//	  "3as_PylonRack_ARC_1Rnd_EMP",
						//	  "3as_PylonRack_ARC_6Rnd_Missile_AGM",
						//	  "3as_PylonRack_ARC_6Rnd_Missile_AGM"
						//  };
					 // };
				  //};
			  };
		  };

		  weapons[] = {
		  MACRO_NEW_WEAPON(ARC_Low),
		  MACRO_NEW_WEAPON(ARC_High),
		  "CMFlareLauncher",
		  "Laserdesignator_pilotCamera"
		  };
		  magazines[] = {
		 MACRO_NEW_MAG(ARC170_Low,600),
		 MACRO_NEW_MAG(ARC170_Low,600),
		 MACRO_NEW_MAG(ARC170_High,16),
		 MACRO_NEW_MAG(ARC170_High,16),
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "Laserbatteries",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine" };
		 hiddenselections[] =
		 {
		 "camo1",
		 "camo2",
		 "guns"
		 };
		 hiddenselectionstextures[] =
		 {
		 "3as\3as_arc170\Data\units\Razor_Main_Frame_CO.paa",
		 "3as\3as_arc170\Data\units\Razor_Wings_Engines_CO.paa",
		 "3as\3as_arc170\Data\units\Razor_Guns_CO.paa" };
		   acceleration = 300;
		   VTOLPitchInfluence = 10;
		   VTOLRollInfluence = 10;
		   VTOLYawInfluence = 12;
		   htMin = 60;
		   htMax = 1800;
		   afMax = 200;
		   mfMax = 100;
		   mFact = 0;
		   tBody = 0;
		   radartype = 4;
		   lockdetectionsystem = "2 + 8 + 4";
		   incommingmissliedetectionsystem = 16;
		   maxSpeed = 1200;
		   landingAoa = 6 * 3.1415 / 180; // landing angle of attack in radians, for AI
		   landingSpeed = 215;			   // for AI to approach the runawy, the plane should be stable at this speed
		   stallSpeed = 190;
		   stallWarningTreshold = 0.1;
		   armor = 100;
		   armorStructured = 1;
		   envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
		   draconicForceXCoef = 4.5;
		   draconicForceYCoef = 8.5;
		   draconicForceZCoef = 8.5;
		   draconicTorqueXCoef = 2.0999999;
		   draconicTorqueYCoef = 3;
		   angleOfIndicence = 0.052359872;
		   airFriction0[] = {100, 50, 12};
		   airFriction1[] = {100, 50, 12};
		   airFriction2[] = {100, 50, 12};
		   altNoForce = 13000;
		   altFullForce = 2000;
		   //air physics
		   elevatorCoef[] = {0, 0.80000001, 0.89999998, 1, 1.1, 1.2, 1.2, 1.3, 1.3, 1.3, 1.4, 1.4, 1.4};
		   elevatorSensitivity = 1.5;
		   elevatorControlsSensitivityCoef3 = 3;
		   aileronCoef[] = {0,0.5,1,1.2,1.4,1.5,1.6};
		   aileronSensitivity = 3.8;
		   aileronControlsSensitivityCoef = 3;
		   rudderCoef[] = {0.6,1,1,0.9,0.8,1,1};
		   rudderInfluence = 0.9;
		   rudderControlsSensitivityCoef = 4;
		   thrustCoef[] = {2,1.17,1.15,1.14,1.13,1.12,1.1,1.07,0.99,0.2,0,0,0};
		   irScanRangeMin = 10;
		   irScanRangeMax = 10000;
		   irScanToEyeFactor = 8;
		   fuelCapacity = 2000;
		   wheelSteeringSensitivity = 1.5;
		   maxOmega = 2000;
		   airBrake = 1;
		   airBrakeFrictionCoef = 50;
		   flaps = 1;
		   flapsFrictionCoef = 0.32;
		   gearsUpFrictionCoef = 0.6;
		   airFrictionCoefs0[] = {0.0, 0.0, 0.0};
		   airFrictionCoefs1[] = {0.1, 0.5, 0.0066};
		   airFrictionCoefs2[] = {0.001, 0.005, 0.000068};
		   driverOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
		   memoryPointDriverOptics = "PilotCamera_pos";
	};
};