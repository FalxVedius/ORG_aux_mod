#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Z95)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,Z,95),
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
	class NewTurret;
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
	};
	class 3as_Z95_base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components : Components
		{
			
		};
	};

	class MACRO_NEW_VEHICLE(air,Z,95) : 3as_Z95_base
	{
		displayName = "Z-95 *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_PLANE";

		crew = "332nd_aux_aviation_unit_332nd_flight_ensign";

		weapons[] =
		{
			MACRO_NEW_WEAPON(Z95_30mm),
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[] =
		{
		    MACRO_NEW_MAG(Z95_30mm,1000),
			"120Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
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
					"332nd_vehicles\air\sounds\Z95\Z95EngineHighInt.wss",
					3,
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
					"332nd_vehicles\air\sounds\Z95\Z95EngineHighExt.wss",
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
					"332nd_vehicles\air\sounds\Z95\Z95EngineLowInt.wss",
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
					"332nd_vehicles\air\sounds\Z95\Z95EngineLowExt.wss",
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
					"332nd_vehicles\air\sounds\Z95\Z95ForsageInt.wss",
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
					"332nd_vehicles\air\sounds\Z95\Z95ForsageExt.wss",
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
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
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
			class TransportPylonsComponent
			{
				UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"332_C_Pylon"
						};
						attachment = MACRO_NEW_MAG(Pylon_AA_Med,3);
						priority = 10;
						maxweight = 10000;
						UIposition[] = { 0.60000002,0.44999999 };
					};
					class pylons2 : pylons1
					{
						UIposition[] = { 0.050000001,0.44999999 };
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						hardpoints[] =
						{
							"332_A_Pylon"
						};
						attachment = MACRO_NEW_MAG(Pylon_AA_Med,3);
						priority = 9;
						maxweight = 10000;
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
						attachment = MACRO_NEW_MAG(Pylon_AGM_Med,3);
						priority = 7;
						maxweight = 10000;
						UIposition[] = { 0.5,0.25 };
					};
					class pylons6 : pylons5
					{
						UIposition[] = { 0.15000001,0.25 };
						mirroredMissilePos = 5;
					};
					class Pylons7
					{
						hardpoints[] =
						{
							"332_B_Pylon"
						};
						priority = 5;
						attachment = MACRO_NEW_MAG(Pylon_AGM_Med,3);
						maxweight = 10000;
						UIposition[] = { 0.32499999,0.15000001 };
					};
				};
				//class presets
				//{
				//	class empty
				//	{
				//		displayName = "$STR_empty";
				//		attachment[] = {};
				//	};
				//	class Default
				//	{
				//		displayName = "$STR_vehicle_default";
				//		attachment[] =
				//		{
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"3as_PylonWeapon_Z95_240Rnd_Heavy_Shells"
				//		};
				//	};
				//	class AA
				//	{
				//		displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
				//		attachment[] =
				//		{
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"PylonRack_Missile_AMRAAM_D_x2",
				//			"3as_PylonWeapon_Z95_240Rnd_Heavy_Shells"
				//		};
				//	};
				//	class CAS
				//	{
				//		displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
				//		attachment[] =
				//		{
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
				//			"3as_PylonWeapon_Z95_240Rnd_Heavy_Shells"
				//		};
				//	};
				//};
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