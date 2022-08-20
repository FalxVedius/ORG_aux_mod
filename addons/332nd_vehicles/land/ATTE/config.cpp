#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ATTE)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,AT,TE),
        };
		weapons[] = {};
	};
};
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class ACE_SelfActions;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class 3as_ATTE_Base : Tank_F
	{
		class Turrets
		{
			class MainTurretTop;
			class MainTurretFront;
			class MainTurretBack;
		};

		class ACE_SelfActions;
	};
	
    class MACRO_NEW_VEHICLE(Land,AT,TE): 3as_ATTE_Base
    {
        displayName = "AT-TE *WIP*";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		crewCrashProtection = 0.01;
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";
		armor = 5250;

		TFAR_hasIntercom = 1;
		IntercomMacro

		tas_canBlift = 1;
		tas_liftVars = "[[[[0,-3.7,-10]]], [0], [0]]";


		soundEngineOnInt[]=
		{
			"",
			0.79432797,
			1
		};
		soundEngineOffInt[]=
		{
			"",
			0.79432797,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1.99526,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"",
			1.99526,
			1,
			100
		};

		hiddenselectionstextures[] = 
		{ 
			"332nd_vehicles\_textures\land\ATTE\332nd_Vic_Test_AATE_Hull.paa",
			"3as\3as_atte\data\atte_chasis_co.paa",
			"332nd_vehicles\_textures\land\ATTE\332nd_Vic_Test_AATE_Cockpit.paa",
			"332nd_vehicles\_textures\land\ATTE\332nd_Vic_Test_AATE_Turret.paa",
			"3as\3as_atte\data\atte_underpiping_co.paa",
			"3as\3as_atte\data\atte_middleleg_co.paa"
		};

		//enginePower = 20000;
		maxSpeed = 25;
		waterSpeedFactor=1;
		thrustDelay=0.1;
		//switchTime = 0.1;
		//soundEngine[] = {"", 1, 1};
		waterLeakiness = 0;
		canFloat = 1;
		//latency = 0.1;
		//brakeIdleSpeed = 5;
		peakTorque = 40000;
		//engineMOI = 0.01;

		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = B_Parachute_02_F;
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = { "ftr_muzzle", "btl_muzzle" };
			};
		};


		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=33;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=40000;
				sprungMass=4000;
				springStrength=324000;
				springDamperRate=36000;
				dampingRate=1;
				dampingRateInAir=8000;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
		};

		class Eventhandlers
		{
			init = "_this execVM '332nd_vehicles\land\ATTE\fn_InitWalk.sqf';";
		};


		class Turrets : Turrets
		 {
		   class MainTurretTop : MainTurretTop
		   {
		   class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			turretInfoType="RscOptics_MBT_01_gunner";
			stabilizedInAxes = 3;
			 weapons[] =
			{
				MACRO_NEW_WEAPON(Mass_Driver)
			};
			magazines[] =
			{
				MACRO_NEW_MAG(MassDriver_AP,25),
				MACRO_NEW_MAG(MassDriver_AP,25),
				MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(MassDriver_HE,15)
			};
		   };
		   class MainTurretFront : MainTurretFront
		   {
		   class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
		   turretInfoType="RscOptics_MBT_01_commander";
		   stabilizedInAxes = 3;
		   weapons[] =
			{
				MACRO_NEW_WEAPON(Heavy_Hmg)
			};
		   magazines[] =
			{
				MACRO_NEW_MAG(ATTE_HMG,1000),
				MACRO_NEW_MAG(ATTE_HMG,1000),
				MACRO_NEW_MAG(ATTE_HMG,1000)
			};
		   };
		   class MainTurretBack : MainTurretBack
		   {
		   class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
		   showCrewAim=0;
		   stabilizedInAxes = 3;
		   weapons[] =
			{
				MACRO_NEW_WEAPON(Heavy_Hmg)
			};
		   magazines[] =
			{
				MACRO_NEW_MAG(ATTE_HMG,1000),
				MACRO_NEW_MAG(ATTE_HMG,1000)
			};
		   };
	   };
	};
};