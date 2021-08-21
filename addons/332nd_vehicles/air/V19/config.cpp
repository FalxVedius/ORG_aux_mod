#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(V19)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,V,19),
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
	class thingX;
	class Motorcycle;
	class Air;
	class Plane : Air
	{
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
	    class Components;
	};
	class 3as_V19_base : Plane_Fighter_03_base_F
	{
		class Components;
	};

	class MACRO_NEW_VEHICLE(air,V,19) : 3as_V19_base
	{
		displayName = "V-19 *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_PLANE";

		crew = "332nd_aux_aviation_unit_332nd_flight_ensign";

		weapons[] =
		{
			MACRO_NEW_WEAPON(V19_25mm),
			MACRO_NEW_WEAPON(AA_Pylon),
			"CMFlareLauncher"
		};
		magazines[] =
		{
			MACRO_NEW_MAG(V19_25mm,1600),
			MACRO_NEW_MAG(Pylon_AA_Med,3),
			MACRO_NEW_MAG(Pylon_AA_Med,3),
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery_F",
			"Laser_Battery_F",
			"Laser_Battery_F"
		};

		class Sounds
		{
			class TurbineOut
			{
				sound[]=
				{
					"332nd_vehicles\air\sounds\Z95\Z95TurbineExt.wss",
					1,
					0.5,
					1000
				};
				frequency = "rpm * (thrust/4 + 0.5)";
				volume = "camPos * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighInt
			{
				sound[]=
				{
					"332nd_vehicles\air\sounds\Z95\Z95TurbineHighInt.wss",
					0.1,
					1,
					2500
				};
				frequency = "1.7 * (rpm factor[-5,1])";
				volume = "0.8 * (1-camPos) * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class TurbineHighOut
			{
				sound[]=
				{
					"332nd_vehicles\air\sounds\Z95\Z95TurbineHighExt.wss",
					1,
					1,
					4000
				};
				frequency = "1.7 * (rpm factor[-5,1])";
				volume = "0.8 * camPos * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class TurbineInt
			{
				sound[]=
				{
					"332nd_vehicles\air\sounds\Z95\Z95TurbineInt.wss",
					0.1,
					1,
					2100
				};
				frequency = "rpm * (thrust/4 + 0.5)";
				volume = "(1-camPos) * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			
			class EngineHighInt
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\V19\V19EngineHighInt.wss",
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
					"332nd_vehicles\air\sounds\V19\V19EngineHighExt.wss",
					3,
					0.95,
					6000
				};
				frequency = 1;
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class EngineLowInt
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\V19\V19EngineInt.wss",
					1,
					1,
					1200
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineLowOut
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\V19\V19EngineExt.wss",
					4,
					0.9,
					6000
				};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			
			class ForsageIn
			{
			sound[]=
				{
					"332nd_vehicles\air\sounds\V19\ForsageInt.wss",
					1,
					1
				};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};

			class ForsageOut
			{
			cone[] = {20,15,3,1};
			sound[]=
				{
					"332nd_vehicles\air\sounds\V19\ForsageExt.wss",
					3,
					1
				};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.9, 2.0]))";
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
				UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="332nd_aux_magazine_Pylon_AA_Med_x3";
						priority=5;
						hardpoints[]=
						{
							"332_A_Pylon"
						};
						turret[]={};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment="332nd_aux_magazine_Pylon_Shrieker_x20";  
						priority=4;
						hardpoints[]=
						{
							"332_C_Pylon"
						};
						UIposition[]={0.079999998,0.34999999};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment="332nd_aux_magazine_Pylon_AA_Med_x3";
						priority=3;
						hardpoints[]=
						{
							"332_A_Pylon"
						};
						UIposition[]={0.1,0.30000001};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos=3;
						UIposition[]={0.58999997,0.30000001};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos=2;
						UIposition[]={0.62,0.34999999};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos=1;
						UIposition[]={0.63999999,0.40000001};
					};
				};
			  };
	
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = { 1,0,0,1 };
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = "";
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = { 1,1,0.5,0.80000001 };
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = { 0.5,1,0.5,0.5 };
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = { 0,1,1,1 };
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class LaserSensorComponent : SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = { 1,1,1,0 };
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = { 1,1,1,0 };
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+010;
						maxTrackableSpeed = 1e+010;
						minTrackableATL = -1e+010;
						maxTrackableATL = 1e+010;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,2000,4000,16000,30000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = { 8000,2000,4000,16000,30000 };
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	};
};