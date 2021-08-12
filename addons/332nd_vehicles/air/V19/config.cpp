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
			"3as_ARC_Missile_AGM",
			"3as_ARC_Missile_AA",
			"ParticleBeamCannon_F",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonMissile_ARC_2Rnd_Missile_AA",
			"3as_PylonRack_ARC_6Rnd_Missile_AGM",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery_F",
			"Laser_Battery_F",
			"Laser_Battery_F"
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