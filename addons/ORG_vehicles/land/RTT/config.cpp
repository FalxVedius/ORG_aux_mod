#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(RTT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            //MACRO_NEW_VEHICLE(Land,RTT,Transport),
			//MACRO_NEW_VEHICLE(Land,RTT,Supply),
        };
		weapons[] = {};
	};
};
class CfgVehicles
 {
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};

	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class APC_Tracked_01_base_F : Tank_F
	{
		class Sounds;
		class ViewOptics : ViewOptics
		{
		};
		class Wheels
		{
			class L2;
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};

	class 3as_RTT_Base : APC_Tracked_01_base_F
	{
		class Hitpoints;

		class Turrets : Turrets
		{
			class CargoTurret_01 : NewTurret
			{

			};
			class CargoTurret_02 : CargoTurret_01
			{

			};
			class CargoTurret_03 : CargoTurret_02
			{

			};
			class CargoTurret_04 : CargoTurret_03
			{

			};

		};
	};

	class 3as_RTT : 3as_RTT_Base
	{
		class Hitpoints : Hitpoints
		{
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLTrack;
			class HitRTrack;
		};

		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};

		};
	};

	
    /*class MACRO_NEW_VEHICLE(Land, RTT, Transport) : 3as_RTT
    {
        displayName = "RTT Transport";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		armor = 200;
		armorStructural = 4;

		transportSoldier = 10;

		accelAidForceYOffset = -1;
		antiRollbarForceCoef = 48;
		antiRollbarForceLimit = 106;
		antiRollbarSpeedMax = 160;
		antiRollbarSpeedMin = 0;
		brakeDistance = 10;
		brakeIdleSpeed = 1.78;
		brakeTorque = 6000;
		clutchStrength = 55;
		centreBias = 1.3;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 1;
		damperDamping = 1;
		damperForce = 1;
		dampersBumpCoef = 6;
		damperSize = 0.1;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		dampingRateZeroThrottleClutchEngaged = 2;
		enginePower = 200;
		peakTorque = 1450;
		engineStartSpeed = 1.5;
		epeImpulseDamageCoef = 15;
		frontBias = 1.3;
		frontRearSplit = 0.5;
		impactEffectSpeedLimit = 8;
		limitedSpeedCoef = 0.5;
		longStiff = 15000;
		maxGForce = 3;
		maxSpeed = 60;
		maxOmega = 320;
		maxFordingDepth = 0.5;
		normalSpeedForwardCoef = 0.85;
		numberPhysicalWheels = 6;
		rearBias = 1.3;
		slowSpeedForwardCoef = 0.3;
		steerAheadPlan = 0.35;
		steerAheadSimul = 0.5;
		tracksSpeed = 0;
		thrustDelay = 0.5;
		turnCoef = 4;



		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{

			};
			class HitRTrack : HitRTrack
			{

			};
		};

		
	};

	class MACRO_NEW_VEHICLE(Land,RTT,Supply) : 3as_RTT
	{
		displayName = "RTT Supply";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		armor = 200;
		armorStructural = 4;

		transportSoldier = 0;
		attendant = true;
		ace_rearm_defaultSupply = 300000;
		ace_refuel_fuelCargo = 3000;
		ace_repair_canRepair = 1;
		ace_refuel_fuelCapacity = 1400;
		ace_refuel_flowRate = 4;
		ace_refuel_canReceive = 1;

		accelAidForceYOffset = -1;
		antiRollbarForceCoef = 48;
		antiRollbarForceLimit = 106;
		antiRollbarSpeedMax = 160;
		antiRollbarSpeedMin = 0;
		brakeDistance = 10;
		brakeIdleSpeed = 1.78;
		brakeTorque = 6000;
		clutchStrength = 55;
		centreBias = 1.3;
		coefInside = 2;
		coefInsideHeur = 2;
		coefSpeedInside = 1;
		damperDamping = 1;
		damperForce = 1;
		dampersBumpCoef = 6;
		damperSize = 0.1;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		dampingRateZeroThrottleClutchEngaged = 2;
		enginePower = 200;
		peakTorque = 1450;
		engineStartSpeed = 1.5;
		epeImpulseDamageCoef = 15;
		frontBias = 1.3;
		frontRearSplit = 0.5;
		idleRpm = 600;
		impactEffectSpeedLimit = 8;
		limitedSpeedCoef = 0.5;
		longStiff = 15000;
		maxGForce = 3;
		maxSpeed = 60;
		maxOmega = 320;
		maxFordingDepth = 0.5;
		normalSpeedForwardCoef = 0.85;
		numberPhysicalWheels = 6;
		redRpm = 3000;
		rearBias = 1.3;
		slowSpeedForwardCoef = 0.3;
		steerAheadPlan = 0.35;
		steerAheadSimul = 0.5;
		tracksSpeed = 0;
		thrustDelay = 0.5;
		turnCoef = 4;


		class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{

			};
			class HitRTrack : HitRTrack
			{

			};
		};
	};
	*/
};