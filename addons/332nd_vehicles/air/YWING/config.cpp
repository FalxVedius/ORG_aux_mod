#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(YWING)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,Y,WING),
        };
		weapons[] = {};
	};
};


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
	class Air;
	class Plane : Air
	{
		class NewTurret;
		class ViewPilot;
		class HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Base_F : Plane
	{
		class AnimationSources;
		class Components;
	};
	class Plane_Fighter_03_base_F : Plane_Base_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F : Plane_Fighter_03_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
		class pilotCamera;
	};

	class BTL_Base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};

	class 3AS_BTLB_Bomber : BTL_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};

	class MACRO_NEW_VEHICLE(air,Y,WING) : 3AS_BTLB_Bomber
	{
		displayName = "Y-Wing *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_PLANE";

		weapons[] = {
		  MACRO_NEW_WEAPON(YWing_30mm),
		  MACRO_NEW_WEAPON(PlasmaBomb_Pylon),
		  "CMFlareLauncher",
		  "Laserdesignator_pilotCamera"
		  };
		  magazines[] = {
		MACRO_NEW_MAG(Ywing_30mm,1200),
		MACRO_NEW_MAG(Ywing_Plasma,20),
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "Laserbatteries",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine",
		  "120Rnd_CMFlare_Chaff_Magazine" };

		crew = "332nd_aux_aviation_unit_332nd_flight_ensign";


		 acceleration = 2000;
		 //  class EjectionSystem
		 //  {
			//EjectionSeatEnabled = 0;										//enable advanced ejection system								
		 //  };
		   armor = 400;
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
		   armorStructured = 1;
		   envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
		   draconicForceXCoef = 4.5;
		   draconicForceYCoef = 3;
		   draconicForceZCoef = 6;
		   draconicTorqueXCoef = 2.0999999;
		   draconicTorqueYCoef = -0.3;
		   angleOfIndicence = 0;
		   airFriction0[] = {100, 50, 12};
		   airFriction1[] = {100, 50, 12};
		   airFriction2[] = {100, 50, 12};
		   altNoForce = 20000;
		   altFullForce = 20000;
		   //air physics
		   elevatorCoef[] = {1};
		   elevatorSensitivity = 1;
		   elevatorControlsSensitivityCoef = 4;
		   aileronCoef[] = {2};
		   aileronSensitivity = 1;
		   aileronControlsSensitivityCoef = 5;
		   rudderCoef[] = {3.5};
		   rudderInfluence = 0.9;
		   rudderControlsSensitivityCoef = 6;
		   thrustCoef[] = {2,2.17,2.15,3.14,3.13,3.12,3.1,3.07,2.99,2.2,2,2};
		   irScanRangeMin = 10;
		   irScanRangeMax = 10000;
		   irScanToEyeFactor = 8;
		   fuelCapacity = 2000;
		   wheelSteeringSensitivity = 1.5;
		   maxOmega = 2000;
		   airBrake = 1;
		   airBrakeFrictionCoef = 50;
		   flaps = 0;
		   flapsFrictionCoef = 0.32;
		   gearsUpFrictionCoef = 0.6;
		   airFrictionCoefs0[] = {0.0, 0.0, 0.0};
		   airFrictionCoefs1[] = {0.1, 0.5, 0.0066};
		   airFrictionCoefs2[] = {0.001, 0.005, 0.000068};


		class Turrets : Turrets
		{
			class RearTurret : MainTurret
			{
			    weapons[] = {
		 MACRO_NEW_WEAPON(Y_wing_Turret)
		  };
		  magazines[] = {
		MACRO_NEW_MAG(Z95_30mm,1000),
		MACRO_NEW_MAG(Z95_30mm,1000),
		MACRO_NEW_MAG(Z95_30mm,1000),
		MACRO_NEW_MAG(Z95_30mm,1000),
		MACRO_NEW_MAG(Z95_30mm,1000),
		MACRO_NEW_MAG(Z95_30mm,1000),
		MACRO_NEW_MAG(Z95_30mm,1000)
		};      
				gunnerType = "332nd_aux_aviation_unit_332nd_flight_ensign";
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
							"332_C_Pylon"
						};
						attachment="332nd_aux_magazine_Pylon_AA_Med_x3";
						priority = 10;
						maxweight = 2500;
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
						attachment = "332nd_aux_magazine_Pylon_ProtonTorpedo_x1";
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
						attachment = "332nd_aux_magazine_Pylon_ProtonTorpedo_x1";
						priority = 7;
						maxweight = 5000;
						UIposition[] = { 0.60000002,0.44999999 };
					};
					class pylons6 : pylons5
					{
						UIposition[] = { 0.050000001,0.44999999 };
						mirroredMissilePos = 5;
					};
					class pylons7 : pylons1
					{
					    hardpoints[] =
						{
							"332_B_Pylon"
						};
						attachment = "332nd_aux_magazine_Pylon_ProtonTorpedo_x1";
						priority = 9;
						maxweight = 2500;
						UIposition[] = { 0.44999999,0.40000001 };
					};
					class pylons8 : pylons7
					{
						UIposition[] = { 0.2,0.40000001 };
						mirroredMissilePos = 7;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
				};
			};
		};
	};
};