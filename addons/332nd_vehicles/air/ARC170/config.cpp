#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ARC170)
	{
		author = "Namenai";
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
class CfgVehicles
{
 class thingX;
 class Motorcycle;
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
 class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
	class Turrets:Turrets
	{
		class MainTurret:Mainturret
		{};
 };	
 class Components: Components
	{	
	class TransportPylonsComponent
		{
			class Pylons;
			class Presets;
		};
			
	};
 };
 class CopilotTurret;
 class VTOL_01_base_F
 {
	class Turrets
	{
		class MainTurret
		{};
	};	
	class Components 
		{};
	};	
 class NewTurret;
 class 3as_arc_170_base :   Plane_Fighter_03_dynamicLoadout_base_F
	{};
 class MACRO_NEW_VEHICLE(air,ARC,170): 3as_arc_170_base
 {
       displayName = "[332nd] ARC-170*test*";
       scope = 2;
       faction = "EdCat_332nd";
       editorSubcategory = "EdSubcat_332nd_HELI";
       weapons[] = { 
	   MACRO_NEW_WEAPON(ARC_Low),
	   MACRO_NEW_WEAPON(ARC_High),
	   "CMFlareLauncher",
	   "Laserdesignator_pilotCamera"
	   }; 
       magazines[] = {
	  MACRO_NEW_MAG(ARC170_Low,600),
	 MACRO_NEW_MAG(ARC170_Low,600),
	 MACRO_NEW_MAG(ARC170_Low,600),
	  MACRO_NEW_MAG(ARC170_High,60),
	  MACRO_NEW_MAG(ARC170_High,60),
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
	    acceleration = 400;
	   	VTOLPitchInfluence=1;
		VTOLRollInfluence=10;
		VTOLYawInfluence=12;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		radartype = 4;
		lockdetectionsystem = "2 + 8 + 4";
		incommingmissliedetectionsystem = 16;
		maxSpeed = 800;
		landingAoa = 6 * 3.1415 / 180; // landing angle of attack in radians, for AI
		landingSpeed = 215;			   // for AI to approach the runawy, the plane should be stable at this speed
		stallSpeed = 190;
		stallWarningTreshold = 0.1;
		armor = 100;
		armorStructured = 1;
		envelope[] = {0};
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
		elevatorSensitivity= 1.5;
		elevatorControlsSensitivityCoef3=3;
		aileronCoef[] = {0,0.5,1,1.2,1.4,1.5,1.6};
		aileronSensitivity=3.8;
		aileronControlsSensitivityCoef= 3;
		rudderCoef[] = {0.6,1,1,0.9,0.8,1,1};
		rudderInfluence = 1.9;
		rudderControlsSensitivityCoef = 4;
		thrustCoef[] = {1.1, 1.1, 1.1, 1.3, 1.6, 1.7, 1.5, 1.5, 1.4, 1.4, 1.2, 1.2, 1, 1, 1, 1};
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
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
		memoryPointDriverOptics="PilotCamera_pos";
  };
}