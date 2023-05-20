#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Nu_Shuttle)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,Nu,attack_Shuttle_base)
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
	class components
	{
		class MinimapDisplay;
	};
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components
	{
		class MinimapDisplay;
	};
};

class Extended_init_EventHandlers
{
	class MACRO_NEW_VEHICLE(air,Nu,attack_Shuttle_base)
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this select 0) setVariable [""lockState"", 0, true]; (_this select 0) setVariable [""ls_traumaState"", 0, true]; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor; [_this select 0,"""",[15,16,17,18,19,20]] call ls_vehicle_fnc_laatCargoTurretPhase;";
		};
	};
};

class CfgVehicles
{
    class NewTurret;
	//class Helicopter;
	class Helicopter_Base_F
	{
		class Turrets;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class CargoTurret;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class Components;
		class RotorLibHelicopterProperties;
		class ACE_SelfActions: ACE_SelfActions
		{
		};
	};
    class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class Turrets : Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class CargoTurret;
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class Components;
		class RotorLibHelicopterProperties;
		class ACE_SelfActions : ACE_SelfActions
		{
		};
	};
	class MACRO_NEW_VEHICLE(air,Nu,attack_Shuttle_base): B_Heli_Attack_01_base_F
	{
		author="Halligan";
		_generalMacro="";
		scope=2;
		forceInGarage=1;
		scopeCurator=2;
		displayName= "Nu-Class Attack Shuttle *Test*";
		model="3as\3as_nu\model\TCW_Nuaclass.p3d";
		icon="\3AS\3as_Laat\LAATI\data\ui\Map_laat_CA.paa";
		picture="3AS\3as_Laat\LAATI\data\ui\LAAT_Profile_ca.paa";
		editorpreview="\3AS\3as_Laat\LAATI\data\editorpreview\3as_laat.jpg";
		faction = "EdCat_ORG";
        editorSubcategory = "EdSubcat_ORG_HELI";

		crew = "ORG_aux_infantry_unit_trooper";

		memoryPointSupply="doplnovani";
		memoryPointTaskMarker="TaskMarker_1_pos";
		cargoaction[]=
		{
			"Nu_Cargo"
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
		side=1;
		ls_impulsor_fuelDrain_1=0.00005;
        ls_impulsor_fuelDrain_2=0.00005;
        ls_impulsor_boostSpeed_1=400;
        ls_impulsor_boostSpeed_2=600;
        ls_hasImpulse=1;
		soundEngineOnInt[]=
		{
			"\lsd_sounds\vehicles\laatc\engine_start_int.wss",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"\lsd_sounds\vehicles\laatc\engine_start_ext.wss",
			4,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"\lsd_sounds\vehicles\laatc\engine_end_int.wss",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"\lsd_sounds\vehicles\laatc\engine_end_ext.wss",
			4,
			1,
			600
		};
		class Sounds
		{
			class EngineInt
			{
				sound[]=
				{
					"lsd_sounds\vehicles\laatc\engine_int.wss",
					2,
					1
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class EngineExt
			{
				sound[]=
				{
					"lsd_sounds\vehicles\laatc\engine_ext.wss",
					8,
					1,
					600
				};
				frequency="rotorSpeed*(1+rotorThrust/6)*0.8";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorInt
			{
				sound[]=
				{
					"lsd_sounds\vehicles\laatc\rotor_ext.wss",
					2,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9";
			};
			class RotorExt
			{
				sound[]=
				{
					"lsd_sounds\vehicles\laatc\rotor_ext.wss",
					8,
					1,
					3000
				};
				frequency="rotorSpeed * (1-rotorThrust/5) * 1.2";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"lsd_sounds\vehicles\laatc\rotor_swist",
					8,
					1,
					1500
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
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
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.25893,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.707946,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					1.12202,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[40,80])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.316228,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.22387201,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.316228,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387201,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
		};
        class EventHandlers
        {
	        init = "(_this select 0) spawn ls_vehicle_fnc_impulseMonitor";
        };
		class HitPoints //nu
		{
			class HitHull
			{
				armor=3000;
				convexComponent="hull_hit";
				depends="Total";
				explosionShielding=1;
				material=55;
				name="hull_hit";
				passThrough=1;
				visual="zbytek";
				radius=0.0099999998;
			};
			class HitFuel
			{
				convexcomponent="engine_hit";
				hitpoint="engine_hit";
				name="engine_hit";
				explosionShielding=2;
				radius=0.1;
				visual="";
				passthrough=0.1;
				minimalhit=0.1;
				material=-1;
				armor=0.60000002;
			};
			class HitEngine
			{
				armor=50;
				convexComponent="engine_hit";
				explosionShielding=2;
				material=51;
				name="engine_hit";
				hitpoint="engine_hit";
				passThrough=1;
				visual="";
				radius=0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent="engine_hit_1";
				name="engine_hit_1";
				hitpoint="engine_hit_1";
				armor = 9999;
				minimalHit = 9999;
			};
			class HitEngine_2: HitEngine
			{
				convexComponent="engine_hit_2";
				name="engine_hit_2";
				hitpoint="engine_hit_2";
				armor = 9999;
				minimalHit = 9999;
			};
			class HitAvionics
			{
				armor=50;
				convexComponent="avionics_hit";
				explosionShielding=2;
				material=51;
				name="avionics_hit";
				passThrough=1;
				visual="";
				radius=0.5;
			};
		};
		driveOnComponent[]=
		{
			"Skids"
		};
		accuracy=5;
		geardowntime=1.5;
		gearretracting=1;
		gearuptime=1.5;
		gearMinAlt=0;
		gearsUpFrictionCoef=0.001;
		nameSound="veh_helicopter_s";
		fuelCapacity=700;
		fuelConsumptionRate=0.2;
		mainBladeRadius=7;
		liftForceCoef=2;
		bodyFrictionCoef=1;
		cyclicAsideForceCoef=0.75;
		backRotorForceCoef=0.8;
		cyclicForwardForceCoef=0.8;
		acceleration=450;
		maxSpeed=600;
		brakeDistance=200;
		mainRotorSpeed=2.5;
		backRotorSpeed=1.5;
		hasterminal=1;
		maxMainRotorDive=15;
		minMainRotorDive=-5;
		neutralMainRotorDive=-10;
		class RotorLibHelicopterProperties //nu 
		{
			RTDconfig="A3\Air_F_Heli\Heli_Transport_03\RTD_Heli_Transport_03.xml";
			autoHoverCorrection[]={6.5,0,0};
			defaultCollective=0.60500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=5048;
			stressDamagePerSec=0.0033333ORG;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=350000;
			maxTailRotorStress=350000;
		};
		startDuration=4.5;
		castDriverShadow=0;
		canFloat=1;
		waterLeakiness=0;
		waterResistanceCoef=0.89999998;
		waterResistance=1;
		waterLinearDampingCoefY=3;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=3;
		maxFordingDepth=0.55000001;
		armor=200;
		armorStructural=1;
		altFullForce=10000;
		altNoForce=16000;
		crewCrashProtection=0.1;
		explosionShielding=0.33000001;
		epeImpulseDamageCoef=0;
		soundEngineOnInt[]=
		{
			"3as\3as_laat\sounds\LAAT_Start.ogg",
			"1/2",
			1
		};
		soundEngineOnExt[]=
		{
			"3as\3as_laat\sounds\LAAT_Start.ogg",
			"1*1.5",
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"3as\3as_laat\sounds\LAAT_End.ogg",
			"1/2",
			1
		};
		soundEngineOffExt[]=
		{
			"3as\3as_laat\sounds\LAAT_End.ogg",
			"1*1.5",
			1,
			300
		};

		hiddenSelections[] = { "camo1","camo2","camo3","camo4" };
		hiddenSelectionsTextures[] = 
		{ 
			"3AS\3as_nu\data\exterior_CO.paa",
			"3AS\3as_nu\data\wings_CO.paa",
			"3as\3as_Nu\data\interior_co.paa",
			"3as\3as_Nu\data\cockpit_doors_co.paa"
		};

		class UserActions //nu
		{
		    class lock_doors
			{
				displayName="Lock Doors";
				position="pilotview";
				priority=108;
				radius=5;
				onlyforplayer=0;
				condition="ace_player == currentPilot this and this getVariable [""lockState"", 0] == 0;";
				statement="this setVariable[""lockState"", 1, true];";
			};
		     class Damage_Report
            {
                displayName = "<t color='#00FF00'>Damage Report :) </t>";
                displayNameDefault = "<t color='#00FF00'>Damage Report</t>";
                textToolTip = "<t color='#00FF00'>Damage Report</t>";
                position = "pilotview";
                radius = 10;
                priority = 21;
                onlyForPlayer = 1;
                condition = "(alive this)";
                statement = this call MACRO_FNC_NAME(show_damage_report);
            };
		    class activateTraumaCenter: lock_doors
			{
				displayName="Activate Trauma Center";
				priority=107;
				condition="ace_player == currentPilot this and (typeof this == ""ls_laat_medevac"") and this getVariable [""ls_traumaState"", 0] == 0;";
				statement="this setVariable[""ls_traumaState"", 1, true];";
			};
			class deactivateTraumaCenter: activateTraumaCenter
			{
				displayName="Deactivate Trauma Center";
				condition="ace_player == currentPilot this and (typeof this == ""ls_laat_medevac"") and this getVariable [""ls_traumaState"", 0] == 1";
				statement="this setVariable[""ls_traumaState"", 0, true];";
			};
			class recieveTreatment: activateTraumaCenter
			{
				displayName="Dispense Bacta";
				condition="ace_player != currentPilot this and this getVariable [""ls_traumaState"", 0] == 1 and typeof this == ""ls_laat_medevac"" and ace_player call ACE_medical_ai_fnc_isInjured;";
				statement="[ace_player, this] call ls_vehicle_fnc_Medevac;";
			};
			class rampOpen
			{
				displayName="Cargo Ramp Open";
				position="cargoaction";
				radius=12;
				condition="(this animationSourcePhase 'ramp' ==0 AND (alive this))";
				statement="this animateSource ['ramp',1]";
				onlyforplayer=0;
				role=0;
			};
			class rampClose: rampOpen
			{
				displayName="Cargo Ramp Close";
				position="cargoaction";
				radius=12;
				condition="(this animationSourcePhase 'ramp' ==1 AND (alive this))";
				statement="this animateSource ['ramp',0]";
				onlyforplayer=0;
			};
			class frontrampOpen
			{
				role=0;
				displayName="Ramp Open";
				position="frontaction";
				radius=12;
				condition="(this animationSourcePhase 'rampfront' ==0 AND (alive this))";
				statement="this animateSource ['rampfront',1]";
				onlyforplayer=0;
			};
			class frontrampClose: frontrampOpen
			{
				displayName="Ramp Close";
				position="frontaction";
				radius=12;
				condition="(this animationSourcePhase 'rampfront' ==1 AND (alive this))";
				statement="this animateSource ['rampfront',0]";
				onlyforplayer=0;
			};
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1.7782794,
					1,
					800
				};
				frequency="rotorSpeed";
				volume="2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1.4125376,
					0.80000001,
					2000
				};
				frequency="rotorSpeed*1.1";
				volume="camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 0)/ 900),(((-150) max 500)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 500)/ 900),(((-200) max 500)/ 900)])) / 3";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorSwistExt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Impulse.ogg",
					2,
					1,
					2000
				};
				frequency=1;
				volume="2 * camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
				cone[]={1,1.4,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\\LAAT_Impulse.ogg",
					0.79432821,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"3as\3as_laat\sounds\LAAT_Idle.ogg",
					1,
					0.80000001
				};
				frequency="rotorSpeed*1.1";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
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
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.33095738,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
					1.1220185,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					1,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[50,80])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1.7782794,
						1,
						800
					};
					frequency="rotorSpeed";
					volume="2 * camPos * (0 max (rotorSpeed-0.4))";
				};
				class RotorExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1.4125376,
						0.80000001,
						2000
					};
					frequency="rotorSpeed*1.1";
					volume="camPos**(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorSwistExt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Impulse.ogg",
						1,
						1,
						2000
					};
					frequency=1;
					volume="2 * camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
					cone[]={1,1.4,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						0.79432821,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"3as\3as_laat\sounds\LAAT_Idle.ogg",
						1,
						0.80000001
					};
					frequency="rotorSpeed*1.1";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"",
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
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
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.33095738,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2c",
						1.1220185,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						1,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[50,80])";
				};
			};
		};
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{1.5,1,-3.5},
			{1.5,2.5,-3.5},
			{1.5,-1,-3.5},
			{-1.5,1,-3.5},
			{-1.5,2.5,-3.5},
			{-1.5,-1,-3.5}
		};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_cargo_space=40;
		ace_cargo_hasCargo=1;
		slingLoadMaxCargoMass=5000000;
		slingLoadMemoryPoint="sling";
		radarType=8;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		driverAction="Nu_Pilot";
		getInAction="ChopperLight_L_In_H";
		getOutAction="GetOutLow";
		memoryPointsGetInCargo[]=
		{
			"pos_cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos_cargo_dir"
		};
		usePreciseGetInAction=0;
		memoryPointsGetInDriverPrecise="";
		memorypointsgetindriver="getindriver";
		memorypointsgetindriverdir="getindriver_dir";
		memoryPointsGetInCargoPrecise[]=
		{
			"GetIn_Cargo",
			"GetIn_Cargo2"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		getInRadius=3;
		typicalCargo[]=
		{
			"B_HeliPilot_F"
		};
		memorypointlmissile="Rocket_1";
		memorypointrmissile="Rocket_2";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		weapons[]=
		{
			MACRO_NEW_WEAPON(Nu_75mm),
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery_F",
			MACRO_NEW_MAG(Nu_75mm,80),
			MACRO_NEW_MAG(Nu_75mm,80),
            MACRO_NEW_MAG(Nu_75mm,80),
            MACRO_NEW_MAG(Nu_75mm,80),
			"Laser_Battery_F",
			"Laser_Battery_F"
		};
		memoryPointGun[]=
		{
			"z_gunL_muzzle_3",
			"z_gunR_muzzle_3"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle_3",
			"z_gunR_muzzle_3"
		};
		gunEnd[]=
		{
			"z_gunL_chamber_3",
			"z_gunR_chamber_3"
		};
		memoryPointDriverOptics="PilotCamera";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-120;
			maxTurn=120;
			initTurn=0;
			minElev=-120;
			maxElev=10;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		maximumLoad=25000;
		class Components : Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=0;
							maxRange=0;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=0;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=0;
							maxRange=0;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=0;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						maxTrackableSpeed=70;
						animDirection="mainGun";
						angleRangeHorizontal=46;
						angleRangeVertical=34;
						aimdown=-0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=4000;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableSpeed=125;
						angleRangeHorizontal=180;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						aimDown=30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components: components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,16000,8000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "swlb_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "ORG_aux_magazine_Pylon_AGM_Med_x3";
						priority = 5;
						hardpoints[] =
						{
							"ORG_B_Pylon"
						};
						turret[] = {};
						UIposition[] = { 0.059999999,0.40000001 };
					};
					class PylonLeft2 : PylonLeft1
					{
						attachment = "ORG_aux_magazine_Pylon_AGM_Med_x3";
						priority = 4;
						hardpoints[] =
						{
							"ORG_B_Pylon"
						};
						UIposition[] = { 0.079999998,0.34999999 };
					};
					class PylonRight2 : PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = { 0.62,0.34999999 };
					};
					class PylonRight1 : PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = { 0.63999999,0.40000001 };
					};
				};
			};
		};
		scopeCurator=2;
		transportsoldier=24;
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
		class AnimationSources //nu
		{
			class rampfront
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ramp
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class Turrets: Turrets
		{
			class Copilot: MainTurret
			{
				gunBeg="z_gunr_muzzle";
				gunEnd="z_gunr_chamber";
				viewGunnerShadow=0;
				castGunnerShadow=0;
				caneject=0;
				proxyindex=1;
				commanding=-1;
				gunnerforceoptics=0;
				gunnername="CoPilot";
				gunnergetinaction="Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction="Heli_Attack_01_Gunner_Exit";
				gunnerinaction="Nu_CoPilot";
				gunneraction="Nu_CoPilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				initelev=0;
				initturn=-15;
				iscopilot=1;
				maxelev=50;
				maxturn=15;
				minelev=-40;
				minturn=-120;
				memorypointgunneroptics="gunnerview1";
				memorypointsgetingunner="getindriver";
				memorypointsgetingunnerdir="getindriver_dir";
				LodTurnedin=1100;
				LodOpticsin=1100;
				startengine=0;
				animationSourceBody="mainturret";
				animationsourcegun="maingun";
				body="mainturret";
				gun="maingun";
				turretinfotype="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					 MACRO_NEW_WEAPON(Nu_20mm)
				};
				magazines[]=
				{
				    MACRO_NEW_MAG(Nu_20mm,2400),
                    MACRO_NEW_MAG(Nu_20mm,2400),
					"Laser_Battery_F",
					"Laser_Battery_F"
				};
				defaultUserMFDvalues[]={0,1,0,1,0};
				class MFD
				{
					class B_Plane_Fighter_01_static_HUD
					{
						enableParallax=1;
						helmetMountedDisplay=1;
						helmetPosition[]={-0.032499999,0.022500001,0.1};
						helmetRight[]={0.064999998,0,0};
						helmetDown[]={0,-0.064999998,0};
						font="PuristaLight";
						class Pos10Vector
						{
							type="vector";
							pos0[]={0.5,0.5};
							pos10[]={1.225,1.1};
						};
						topLeft="HUD LH";
						topRight="HUD PH";
						bottomLeft="HUD LD";
						borderLeft=0;
						borderRight=0;
						borderTop=0;
						borderBottom=0;
						color[]=
						{
							"user0",
							"user1",
							"user2"
						};
						class Bones
						{
							class PlaneW
							{
								type="fixed";
								pos[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class Velocity: Pos10Vector
							{
								type="vector";
								source="velocityToView";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class PlaneOrientation
							{
								type="vector";
								source="forward";
								pos[]={0.5,0.5};
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class WeaponAim
							{
								type="vector";
								source="weaponToView";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class MissileFlightTimeRot1
							{
								type="rotational";
								source="MissileFlightTime";
								sourceScale=1;
								center[]={0,0};
								min=0;
								max=0.5;
								minAngle=0;
								maxAngle=18;
								aspectRatio=0.98540199;
							};
							class MissileFlightTimeRot2: MissileFlightTimeRot1
							{
								maxAngle=36;
								max=1;
							};
							class MissileFlightTimeRot3: MissileFlightTimeRot1
							{
								maxAngle=54;
								max=1.5;
							};
							class MissileFlightTimeRot4: MissileFlightTimeRot1
							{
								maxAngle=72;
								max=2;
							};
							class MissileFlightTimeRot5: MissileFlightTimeRot1
							{
								maxAngle=90;
								max=2.5;
							};
							class MissileFlightTimeRot6: MissileFlightTimeRot1
							{
								maxAngle=108;
								max=3;
							};
							class MissileFlightTimeRot7: MissileFlightTimeRot1
							{
								maxAngle=126;
								max=3.5;
							};
							class MissileFlightTimeRot8: MissileFlightTimeRot1
							{
								maxAngle=144;
								max=4;
							};
							class MissileFlightTimeRot9: MissileFlightTimeRot1
							{
								maxAngle=162;
								max=4.5;
							};
							class MissileFlightTimeRot10: MissileFlightTimeRot1
							{
								maxAngle=180;
								max=5;
							};
							class MissileFlightTimeRot11: MissileFlightTimeRot1
							{
								maxAngle=198;
								max=5.5;
							};
							class MissileFlightTimeRot12: MissileFlightTimeRot1
							{
								maxAngle=216;
								max=6;
							};
							class MissileFlightTimeRot13: MissileFlightTimeRot1
							{
								maxAngle=234;
								max=6.5;
							};
							class MissileFlightTimeRot14: MissileFlightTimeRot1
							{
								maxAngle=252;
								max=7;
							};
							class MissileFlightTimeRot15: MissileFlightTimeRot1
							{
								maxAngle=270;
								max=7.5;
							};
							class MissileFlightTimeRot16: MissileFlightTimeRot1
							{
								maxAngle=288;
								max=8;
							};
							class MissileFlightTimeRot17: MissileFlightTimeRot1
							{
								maxAngle=306;
								max=8.5;
							};
							class MissileFlightTimeRot18: MissileFlightTimeRot1
							{
								maxAngle=324;
								max=9;
							};
							class MissileFlightTimeRot19: MissileFlightTimeRot1
							{
								maxAngle=342;
								max=9.5;
							};
							class MissileFlightTimeRot20: MissileFlightTimeRot1
							{
								maxAngle=360;
								max=10;
							};
							class Target
							{
								type="vector";
								source="targetToView";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class TargetingPodDir
							{
								source="pilotcameratoview";
								type="vector";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class TargetingPodTarget
							{
								source="pilotcameratargettoview";
								type="vector";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class ImpactPoint
							{
								type="vector";
								source="ImpactPointToView";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class ImpactPointRelative
							{
								type="vector";
								source="impactpointtoviewweaponRelative";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class NormalizeBombCircle
							{
								type="normalizedorsmaller";
								limit=0.079999998;
								aspectRatio=0.98540199;
							};
							class Limit0109
							{
								type="limit";
								limits[]={0.1,0.1,0.89999998,0.89999998};
							};
							class LimitWaypoint
							{
								type="limit";
								limits[]={0.2,0.1,0.80000001,0.1};
							};
							class WPPoint
							{
								type="vector";
								source="WPPoint";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class WPPointToView: WPPoint
							{
								source="WPPointToView";
							};
							class Airport1
							{
								type="vector";
								source="airportCorner1ToView";
								pos0[]={0.5,0.5};
								pos10[]={0.77399999,0.76999998};
							};
							class Airport2: Airport1
							{
								source="airportCorner2ToView";
							};
							class Airport3: Airport1
							{
								source="airportCorner3ToView";
							};
							class Airport4: Airport1
							{
								source="airportCorner4ToView";
							};
							class ILS_H
							{
								type="ils";
								pos0[]={0.5,0.5};
								pos3[]={0.58219999,0.5};
							};
							class ILS_W: ILS_H
							{
								pos3[]={0.5,0.58099997};
							};
							class HorizonBankRot
							{
								type="rotational";
								source="horizonBank";
								center[]={0.5,0.5};
								min="-rad(30)";
								max="rad(30)";
								minAngle="180.25-30";
								maxAngle="180.75+30";
								aspectRatio=1;
							};
							class Level0: Pos10Vector
							{
								pos0[]={0.5,0.5};
								pos10[]={0.884,0.88};
								type="horizontoview";
								angle=0;
							};
							class LevelP5: Level0
							{
								angle=5;
							};
							class LevelM5: Level0
							{
								angle=-5;
							};
							class LevelP10: Level0
							{
								angle=10;
							};
							class LevelM10: Level0
							{
								angle=-10;
							};
							class LevelP15: Level0
							{
								angle=15;
							};
							class LevelM15: Level0
							{
								angle=-15;
							};
							class LevelP20: Level0
							{
								angle=20;
							};
							class LevelM20: Level0
							{
								angle=-20;
							};
							class LevelP25: Level0
							{
								angle=25;
							};
							class LevelM25: Level0
							{
								angle=-25;
							};
							class LevelP30: Level0
							{
								angle=30;
							};
							class LevelM30: Level0
							{
								angle=-30;
							};
							class LevelP35: Level0
							{
								angle=35;
							};
							class LevelM35: Level0
							{
								angle=-35;
							};
							class LevelP40: Level0
							{
								angle=40;
							};
							class LevelM40: Level0
							{
								angle=-40;
							};
							class LevelP45: Level0
							{
								angle=45;
							};
							class LevelM45: Level0
							{
								angle=-45;
							};
							class LevelP50: Level0
							{
								angle=50;
							};
							class LevelM50: Level0
							{
								angle=-50;
							};
							class LevelP60: Level0
							{
								angle=60;
							};
							class LevelM60: Level0
							{
								angle=-60;
							};
							class LevelP70: Level0
							{
								angle=70;
							};
							class LevelM70: Level0
							{
								angle=-70;
							};
							class LevelP80: Level0
							{
								angle=80;
							};
							class LevelM80: Level0
							{
								angle=-80;
							};
							class LevelP90: Level0
							{
								angle=90;
							};
							class LevelM90: Level0
							{
								angle=-90;
							};
							class LarAmmoMax
							{
								type="linear";
								source="LarAmmoMax";
								sourceScale=1;
								min=0;
								max=1;
								minPos[]={0,1};
								maxPos[]={0,0};
							};
							class LarAmmoMin: LarAmmoMax
							{
								source="LarAmmoMin";
							};
							class LarTargetDist: LarAmmoMax
							{
								source="LarTargetDist";
							};
						};
						class Draw
						{
							width=1;
							alpha="user3";
							color[]=
							{
								"user0",
								"user1",
								"user2"
							};
							condition="on";
							class PlaneW
							{
								clipTL[]={0,1};
								clipBR[]={1,0};
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneOrientation",
										{-0.039999999,0},
										1
									},
									
									{
										"PlaneOrientation",
										{-0.015,0},
										1
									},
									
									{
										"PlaneOrientation",
										{-0.0074999998,0.015},
										1
									},
									
									{
										"PlaneOrientation",
										{0,0},
										1
									},
									
									{
										"PlaneOrientation",
										{0.0074999998,0.015},
										1
									},
									
									{
										"PlaneOrientation",
										{0.015,0},
										1
									},
									
									{
										"PlaneOrientation",
										{0.039999999,0},
										1
									}
								};
							};
							class PlaneMovementCrosshair
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Velocity",
										{0,-0.02},
										1
									},
									
									{
										"Velocity",
										{0.0099999998,-0.01732},
										1
									},
									
									{
										"Velocity",
										{0.01732,-0.0099999998},
										1
									},
									
									{
										"Velocity",
										{0.02,0},
										1
									},
									
									{
										"Velocity",
										{0.01732,0.0099999998},
										1
									},
									
									{
										"Velocity",
										{0.0099999998,0.01732},
										1
									},
									
									{
										"Velocity",
										{0,0.02},
										1
									},
									
									{
										"Velocity",
										{-0.0099999998,0.01732},
										1
									},
									
									{
										"Velocity",
										{-0.01732,0.0099999998},
										1
									},
									
									{
										"Velocity",
										{-0.02,0},
										1
									},
									
									{
										"Velocity",
										{-0.01732,-0.0099999998},
										1
									},
									
									{
										"Velocity",
										{-0.0099999998,-0.01732},
										1
									},
									
									{
										"Velocity",
										{0,-0.02},
										1
									},
									{},
									
									{
										"Velocity",
										{0.039999999,0},
										1
									},
									
									{
										"Velocity",
										{0.02,0},
										1
									},
									{},
									
									{
										"Velocity",
										{-0.039999999,0},
										1
									},
									
									{
										"Velocity",
										{-0.02,0},
										1
									},
									{},
									
									{
										"Velocity",
										{0,-0.039999999},
										1
									},
									
									{
										"Velocity",
										{0,-0.02},
										1
									}
								};
							};
							class MachineGunCrosshairGroup
							{
								type="group";
								condition="-2+(mgun+rocket)*ImpactDistance";
								class MachineGunCrosshair
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"ImpactPointRelative",
											{0,-0.088686101},
											1
										},
										
										{
											"ImpactPointRelative",
											{0,-0.078832097},
											1
										},
										{},
										
										{
											"ImpactPointRelative",
											{0,0.088686101},
											1
										},
										
										{
											"ImpactPointRelative",
											{0,0.078832097},
											1
										},
										{},
										
										{
											"ImpactPointRelative",
											{-0.090000004,0},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"ImpactPointRelative",
											{0.090000004,0},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.079999998,0},
											1
										},
										{},
										
										{
											"ImpactPointRelative",
											{0,-0.0019708001},
											1
										},
										
										{
											"ImpactPointRelative",
											{0,0.0019708001},
											1
										},
										{},
										
										{
											"ImpactPointRelative",
											{-0.0020000001,0},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.0020000001,0},
											1
										},
										{}
									};
								};
								class Circle
								{
									type="line";
									width=6;
									points[]=
									{
										
										{
											"ImpactPointRelative",
											{0,-0.0630657},
											1
										},
										
										{
											"ImpactPointRelative",
											{0,-0.078832097},
											1
										},
										
										{
											"MissileFlightTimeRot1",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot2",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot3",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot4",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot5",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot6",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot7",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot8",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot9",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot10",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot11",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot12",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot13",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot14",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot15",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot16",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot17",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot18",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot19",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot20",
											{0,0.079999998},
											1,
											"ImpactPointRelative",
											1
										},
										
										{
											"MissileFlightTimeRot20",
											{0,0.064000003},
											1,
											"ImpactPointRelative",
											1
										}
									};
								};
								class Circle_Min_Range
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"ImpactPointRelative",
											{0,-0.078832097},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.013888,-0.077633902},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.02736,-0.0740785},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.039999999,-0.068268597},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.051424,-0.060385399},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.061280001,-0.050673299},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.069279999,-0.039416101},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.075176001,-0.0269606},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.078783996,-0.0136853},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.079999998,0},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.078783996,0.0136853},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.075176001,0.0269606},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.069279999,0.039416101},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.061280001,0.050673299},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.051424,0.060385399},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.039999999,0.068268597},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.02736,0.0740785},
											1
										},
										
										{
											"ImpactPointRelative",
											{0.013888,0.077633902},
											1
										},
										
										{
											"ImpactPointRelative",
											{0,0.078832097},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.013888,0.077633902},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.02736,0.0740785},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.039999999,0.068268597},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.051424,0.060385399},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.061280001,0.050673299},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.069279999,0.039416101},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.075176001,0.0269606},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.078783996,0.0136853},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.079999998,0},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.078783996,-0.0136853},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.075176001,-0.0269606},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.069279999,-0.039416101},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.061280001,-0.050673299},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.051424,-0.060385399},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.039999999,-0.068268597},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.02736,-0.0740785},
											1
										},
										
										{
											"ImpactPointRelative",
											{-0.013888,-0.077633902},
											1
										},
										
										{
											"ImpactPointRelative",
											{0,-0.078832097},
											1
										}
									};
								};
								class Distance
								{
									type="text";
									source="ImpactDistance";
									sourceScale=0.001;
									sourcePrecision=1;
									max=15;
									align="center";
									scale=1;
									pos[]=
									{
										"ImpactPointRelative",
										{-0.0020000001,0.11},
										1
									};
									right[]=
									{
										"ImpactPointRelative",
										{0.045000002,0.11},
										1
									};
									down[]=
									{
										"ImpactPointRelative",
										{-0.0020000001,0.15000001},
										1
									};
								};
							};
							class AAMissileCrosshairGroup
							{
								type="group";
								condition="AAmissile";
								class AAMissileCrosshair
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"PlaneOrientation",
											{0,-0.24635001},
											1
										},
										
										{
											"PlaneOrientation",
											{0.043400001,-0.242606},
											1
										},
										
										{
											"PlaneOrientation",
											{0.085500002,-0.23149499},
											1
										},
										
										{
											"PlaneOrientation",
											{0.125,-0.213339},
											1
										},
										
										{
											"PlaneOrientation",
											{0.16069999,-0.188704},
											1
										},
										
										{
											"PlaneOrientation",
											{0.19149999,-0.158354},
											1
										},
										
										{
											"PlaneOrientation",
											{0.2165,-0.123175},
											1
										},
										
										{
											"PlaneOrientation",
											{0.234925,-0.084251799},
											1
										},
										
										{
											"PlaneOrientation",
											{0.2462,-0.0427664},
											1
										},
										
										{
											"PlaneOrientation",
											{0.25,0},
											1
										},
										
										{
											"PlaneOrientation",
											{0.2462,0.0427664},
											1
										},
										
										{
											"PlaneOrientation",
											{0.234925,0.084251799},
											1
										},
										
										{
											"PlaneOrientation",
											{0.2165,0.123175},
											1
										},
										
										{
											"PlaneOrientation",
											{0.19149999,0.158354},
											1
										},
										
										{
											"PlaneOrientation",
											{0.16069999,0.188704},
											1
										},
										
										{
											"PlaneOrientation",
											{0.125,0.213339},
											1
										},
										
										{
											"PlaneOrientation",
											{0.085500002,0.23149499},
											1
										},
										
										{
											"PlaneOrientation",
											{0.043400001,0.242606},
											1
										},
										
										{
											"PlaneOrientation",
											{0,0.24635001},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.043400001,0.242606},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.085500002,0.23149499},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.125,0.213339},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.16069999,0.188704},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.19149999,0.158354},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.2165,0.123175},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.234925,0.084251799},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.2462,0.0427664},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.25,0},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.2462,-0.0427664},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.234925,-0.084251799},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.2165,-0.123175},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.19149999,-0.158354},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.16069999,-0.188704},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.125,-0.213339},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.085500002,-0.23149499},
											1
										},
										
										{
											"PlaneOrientation",
											{-0.043400001,-0.242606},
											1
										},
										
										{
											"PlaneOrientation",
											{0,-0.24635001},
											1
										}
									};
								};
								class Lines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0.20999999,0.55000001},
											1
										},
										
										{
											{0.19,0.55000001},
											1
										},
										
										{
											{0.19,0.70999998},
											1
										},
										
										{
											{0.20999999,0.70999998},
											1
										},
										{},
										
										{
											{0.20999999,0.67000002},
											1
										},
										
										{
											{0.19,0.67000002},
											1
										},
										{},
										
										{
											{0.20999999,0.63},
											1
										},
										
										{
											{0.19,0.63},
											1
										},
										{},
										
										{
											{0.20999999,0.58999997},
											1
										},
										
										{
											{0.19,0.58999997},
											1
										},
										{},
										
										{
											"LarTargetDist",
											-0.16,
											{0.17,0.73000002},
											1
										},
										
										{
											"LarTargetDist",
											-0.16,
											{0.19,0.70999998},
											1
										},
										
										{
											"LarTargetDist",
											-0.16,
											{0.17,0.69},
											1
										},
										{}
									};
								};
								class Poly
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												"LarAmmoMin",
												-0.16,
												{0.191,0.70999998},
												1
											},
											
											{
												"LarAmmoMax",
												-0.16,
												{0.191,0.70999998},
												1
											},
											
											{
												"LarAmmoMax",
												-0.16,
												{0.208,0.70999998},
												1
											},
											
											{
												"LarAmmoMin",
												-0.16,
												{0.208,0.70999998},
												1
											}
										}
									};
								};
								class TopText
								{
									type="text";
									source="LarTop";
									sourceScale=0.001;
									scale=1;
									pos[]=
									{
										{0.22,0.52999997},
										1
									};
									right[]=
									{
										{0.25999999,0.52999997},
										1
									};
									down[]=
									{
										{0.22,0.56999999},
										1
									};
									align="right";
								};
								class MiddleText: TopText
								{
									source="LarTop";
									sourcePrecision=-1;
									sourceScale=0.00050000002;
									pos[]=
									{
										{0.22,0.61000001},
										1
									};
									right[]=
									{
										{0.25999999,0.61000001},
										1
									};
									down[]=
									{
										{0.22,0.64999998},
										1
									};
								};
								class SpeedText: TopText
								{
									source="LarTargetSpeed";
									align="left";
									sourceScale=3.5999999;
									pos[]=
									{
										"LarTargetDist",
										-0.16,
										{0.16,0.69},
										1
									};
									right[]=
									{
										"LarTargetDist",
										-0.16,
										{0.2,0.69},
										1
									};
									down[]=
									{
										"LarTargetDist",
										-0.16,
										{0.16,0.73000002},
										1
									};
								};
							};
							class ATMissileCrosshairGroup
							{
								condition="ATmissile";
								type="group";
								class ATMissileCrosshair
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"WeaponAim",
											{-0.15000001,-0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{-0.15000001,-0.13},
											1
										},
										{},
										
										{
											"WeaponAim",
											{-0.15000001,0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{-0.15000001,0.13},
											1
										},
										{},
										
										{
											"WeaponAim",
											{0.15000001,-0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{0.15000001,-0.13},
											1
										},
										{},
										
										{
											"WeaponAim",
											{0.15000001,0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{0.15000001,0.13},
											1
										},
										{},
										
										{
											"WeaponAim",
											{-0.15000001,-0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{-0.13,-0.15000001},
											1
										},
										{},
										
										{
											"WeaponAim",
											{-0.15000001,0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{-0.13,0.15000001},
											1
										},
										{},
										
										{
											"WeaponAim",
											{0.15000001,-0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{0.13,-0.15000001},
											1
										},
										{},
										
										{
											"WeaponAim",
											{0.15000001,0.15000001},
											1
										},
										
										{
											"WeaponAim",
											{0.13,0.15000001},
											1
										}
									};
								};
							};
							class RocketCrosshairGroup
							{
								type="group";
								condition="Rocket";
								class MachineGunCrosshair
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"ImpactPoint",
											{0,-0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.019708},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.019708},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{-0.039999999,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.02,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0.039999999,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.02,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0.0099999998,-0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{-0.0099999998,-0.039416101},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0019708001},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0019708001},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{-0.0020000001,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.0020000001,0},
											1
										},
										{}
									};
								};
								class Distance
								{
									type="text";
									source="ImpactDistance";
									sourceScale=0.001;
									sourcePrecision=1;
									max=15;
									align="center";
									scale=1;
									pos[]=
									{
										"ImpactPoint",
										{-0.0020000001,0.07},
										1
									};
									right[]=
									{
										"ImpactPoint",
										{0.045000002,0.07},
										1
									};
									down[]=
									{
										"ImpactPoint",
										{-0.0020000001,0.11},
										1
									};
								};
							};
							class BombCrosshairGroup
							{
								type="group";
								condition="bomb";
								class BombCrosshair
								{
									width=4;
									type="line";
									points[]=
									{
										
										{
											"ImpactPoint",
											{0,0.088686101},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.078832097},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{-0.090000004,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.079999998,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0.090000004,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.079999998,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.0019708001},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.0019708001},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{-0.0020000001,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.0020000001,0},
											1
										},
										{},
										
										{
											"ImpactPoint",
											{0,-0.078832097},
											1
										},
										
										{
											"ImpactPoint",
											{0.013888,-0.077633902},
											1
										},
										
										{
											"ImpactPoint",
											{0.02736,-0.0740785},
											1
										},
										
										{
											"ImpactPoint",
											{0.039999999,-0.068268597},
											1
										},
										
										{
											"ImpactPoint",
											{0.051424,-0.060385399},
											1
										},
										
										{
											"ImpactPoint",
											{0.061280001,-0.050673299},
											1
										},
										
										{
											"ImpactPoint",
											{0.069279999,-0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{0.075176001,-0.0269606},
											1
										},
										
										{
											"ImpactPoint",
											{0.078783996,-0.0136853},
											1
										},
										
										{
											"ImpactPoint",
											{0.079999998,0},
											1
										},
										
										{
											"ImpactPoint",
											{0.078783996,0.0136853},
											1
										},
										
										{
											"ImpactPoint",
											{0.075176001,0.0269606},
											1
										},
										
										{
											"ImpactPoint",
											{0.069279999,0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{0.061280001,0.050673299},
											1
										},
										
										{
											"ImpactPoint",
											{0.051424,0.060385399},
											1
										},
										
										{
											"ImpactPoint",
											{0.039999999,0.068268597},
											1
										},
										
										{
											"ImpactPoint",
											{0.02736,0.0740785},
											1
										},
										
										{
											"ImpactPoint",
											{0.013888,0.077633902},
											1
										},
										
										{
											"ImpactPoint",
											{0,0.078832097},
											1
										},
										
										{
											"ImpactPoint",
											{-0.013888,0.077633902},
											1
										},
										
										{
											"ImpactPoint",
											{-0.02736,0.0740785},
											1
										},
										
										{
											"ImpactPoint",
											{-0.039999999,0.068268597},
											1
										},
										
										{
											"ImpactPoint",
											{-0.051424,0.060385399},
											1
										},
										
										{
											"ImpactPoint",
											{-0.061280001,0.050673299},
											1
										},
										
										{
											"ImpactPoint",
											{-0.069279999,0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{-0.075176001,0.0269606},
											1
										},
										
										{
											"ImpactPoint",
											{-0.078783996,0.0136853},
											1
										},
										
										{
											"ImpactPoint",
											{-0.079999998,0},
											1
										},
										
										{
											"ImpactPoint",
											{-0.078783996,-0.0136853},
											1
										},
										
										{
											"ImpactPoint",
											{-0.075176001,-0.0269606},
											1
										},
										
										{
											"ImpactPoint",
											{-0.069279999,-0.039416101},
											1
										},
										
										{
											"ImpactPoint",
											{-0.061280001,-0.050673299},
											1
										},
										
										{
											"ImpactPoint",
											{-0.051424,-0.060385399},
											1
										},
										
										{
											"ImpactPoint",
											{-0.039999999,-0.068268597},
											1
										},
										
										{
											"ImpactPoint",
											{-0.02736,-0.0740785},
											1
										},
										
										{
											"ImpactPoint",
											{-0.013888,-0.077633902},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.078832097},
											1
										},
										{},
										{},
										
										{
											"ImpactPoint",
											-1,
											"Velocity",
											1,
											"NormalizeBombCircle",
											1,
											"ImpactPoint",
											1,
											{0,0},
											1
										},
										
										{
											"Velocity",
											1,
											"Limit0109",
											1,
											{0,0},
											1
										}
									};
								};
								class Circle
								{
									type="line";
									width=6;
									points[]=
									{
										
										{
											"ImpactPoint",
											{0,-0.0630657},
											1
										},
										
										{
											"ImpactPoint",
											{0,-0.078832097},
											1
										},
										
										{
											"MissileFlightTimeRot1",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot2",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot3",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot4",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot5",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot6",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot7",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot8",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot9",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot10",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot11",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot12",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot13",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot14",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot15",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot16",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot17",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot18",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot19",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot20",
											{0,0.079999998},
											1,
											"ImpactPoint",
											1
										},
										
										{
											"MissileFlightTimeRot20",
											{0,0.064000003},
											1,
											"ImpactPoint",
											1
										}
									};
								};
								class Distance
								{
									type="text";
									source="ImpactDistance";
									sourceScale=0.001;
									sourcePrecision=1;
									max=15;
									align="center";
									scale=1;
									pos[]=
									{
										"ImpactPoint",
										{-0.0020000001,0.11},
										1
									};
									right[]=
									{
										"ImpactPoint",
										{0.045000002,0.11},
										1
									};
									down[]=
									{
										"ImpactPoint",
										{-0.0020000001,0.15000001},
										1
									};
								};
							};
							class WeaponsText
							{
								condition="1- mgun";
								class WeaponsText
								{
									type="text";
									source="weapon";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.032000002,0.83999997},
										1
									};
									right[]=
									{
										{0.086999997,0.83999997},
										1
									};
									down[]=
									{
										{0.032000002,0.88499999},
										1
									};
								};
							};
							class MGunText
							{
								condition="mgun";
								class WeaponsText
								{
									type="text";
									source="static";
									text="GUN";
									sourceScale=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.032000002,0.83999997},
										1
									};
									right[]=
									{
										{0.086999997,0.83999997},
										1
									};
									down[]=
									{
										{0.032000002,0.88499999},
										1
									};
								};
							};
							class AmmoText
							{
								type="text";
								source="ammo";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									{0.032000002,0.88},
									1
								};
								right[]=
								{
									{0.086999997,0.88},
									1
								};
								down[]=
								{
									{0.032000002,0.92500001},
									1
								};
							};
							class Laser
							{
								condition="laseron";
								class LaserText
								{
									type="text";
									source="static";
									text="LASER";
									align="left";
									scale=1;
									pos[]=
									{
										{0.93199998,0.80000001},
										1
									};
									right[]=
									{
										{0.98699999,0.80000001},
										1
									};
									down[]=
									{
										{0.93199998,0.84500003},
										1
									};
								};
							};
							class Flaps
							{
								condition="flaps";
								class FlapsText
								{
									type="text";
									source="static";
									text="FLAPS";
									align="left";
									scale=1;
									pos[]=
									{
										{0.93199998,0.92000002},
										1
									};
									right[]=
									{
										{0.98699999,0.92000002},
										1
									};
									down[]=
									{
										{0.93199998,0.96499997},
										1
									};
								};
							};
							class ILS
							{
								condition="ils";
								class GearText
								{
									type="text";
									source="static";
									text="GEAR";
									align="left";
									scale=1;
									pos[]=
									{
										{0.93199998,0.83999997},
										1
									};
									right[]=
									{
										{0.98699999,0.83999997},
										1
									};
									down[]=
									{
										{0.93199998,0.88499999},
										1
									};
								};
								class Glideslope
								{
									clipTL[]={0,0};
									clipBR[]={1,1};
									class airport
									{
										type="line";
										points[]=
										{
											
											{
												"airport1",
												1
											},
											
											{
												"airport2",
												1
											},
											
											{
												"airport4",
												1
											},
											
											{
												"airport3",
												1
											},
											
											{
												"airport1",
												1
											}
										};
									};
								};
							};
							class TargetLocking
							{
								condition="missilelocking";
								blinkingPattern[]={0.2,0.2};
								blinkingStartsOn=1;
								class shape
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.029562},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.029999999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.029562},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.029999999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.029562},
											1
										}
									};
								};
							};
							class TargetLocked
							{
								condition="missilelocked";
								class shape
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.029562},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.029999999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,0.029562},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.029999999,0},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0,-0.029562},
											1
										}
									};
								};
							};
							class IncomingMissile
							{
								condition="incomingmissile";
								blinkingPattern[]={0.30000001,0.30000001};
								blinkingStartsOn=1;
								class Text
								{
									type="text";
									source="static";
									text="!INCOMING MISSILE!";
									align="center";
									scale=1;
									pos[]=
									{
										{0.48500001,0.21678799},
										1
									};
									right[]=
									{
										{0.54500002,0.21678799},
										1
									};
									down[]=
									{
										{0.48500001,0.266058},
										1
									};
								};
							};
							class StallGroup
							{
								type="group";
								condition="stall";
								color[]={1,0,0};
								blinkingPattern[]={0.2,0.2};
								blinkingStartsOn=1;
								class StallText
								{
									type="text";
									source="static";
									text="STALL";
									align="center";
									scale=1;
									pos[]=
									{
										{0.5,0.25},
										1
									};
									right[]=
									{
										{0.54000002,0.25},
										1
									};
									down[]=
									{
										{0.5,0.28999999},
										1
									};
								};
							};
							class TargetingPodGroup
							{
								condition="1-pilotcameralock";
								class TargetingPodDir
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"TargetingPodDir",
											1,
											{0.020805599,0.0040780702},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{0.020805599,-0.0040780702},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{0.0176381,-0.0116134},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{0.0117854,-0.017380601},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{0.0041384902,-0.0205019},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{-0.0041384902,-0.0205019},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{-0.0117854,-0.017380601},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{-0.0176381,-0.0116134},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{-0.020805599,-0.0040780702},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{-0.020805599,0.0040780799},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{-0.0176381,0.0116134},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{-0.0117854,0.017380601},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{-0.0041384902,0.0205019},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{0.0041384902,0.0205019},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{0.0117854,0.017380601},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{0.0176381,0.0116134},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{0.020805599,0.0040780702},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{0.020805599,-0.0040780799},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{0.0176381,-0.0116134},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{0.0117854,-0.0173807},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{0.0041384902,-0.0205019},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{-0.0041385,-0.0205019},
											1
										},
										{},
										
										{
											"TargetingPodDir",
											1,
											{-0.0117854,-0.017380601},
											1
										},
										
										{
											"TargetingPodDir",
											1,
											{-0.0176381,-0.0116134},
											1
										},
										{},
										{}
									};
								};
							};
							class TargetingPodGroupOn
							{
								condition="pilotcameralock";
								class TargetingPodDir
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.020805599,0.0040780702},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.020805599,-0.0040780702},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0176381,-0.0116134},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0117854,-0.017380601},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0041384902,-0.0205019},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0041384902,-0.0205019},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0117854,-0.017380601},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0176381,-0.0116134},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.020805599,-0.0040780702},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.020805599,0.0040780799},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0176381,0.0116134},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0117854,0.017380601},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0041384902,0.0205019},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0041384902,0.0205019},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0117854,0.017380601},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0176381,0.0116134},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.020805599,0.0040780702},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.020805599,-0.0040780799},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0176381,-0.0116134},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0117854,-0.0173807},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{0.0041384902,-0.0205019},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0041385,-0.0205019},
											1
										},
										{},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0117854,-0.017380601},
											1
										},
										
										{
											"TargetingPodTarget",
											1,
											"Limit0109",
											1,
											{-0.0176381,-0.0116134},
											1
										},
										{},
										{}
									};
								};
							};
							class MainCenterLine1
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										
										{
											-0.49000001,
											"0 + 0.025"
										},
										1
									},
									
									{
										"PlaneW",
										{-0.49000001,0},
										1
									},
									
									{
										"PlaneW",
										{-0.44999999,0},
										1
									}
								};
							};
							class MainCenterLine2
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.33000001,0},
										1
									},
									
									{
										"PlaneW",
										{-0.25,0},
										1
									}
								};
							};
							class MainCenterLine3
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										
										{
											0.49000001,
											"0 + 0.025"
										},
										1
									},
									
									{
										"PlaneW",
										{0.49000001,0},
										1
									},
									
									{
										"PlaneW",
										{0.25,0},
										1
									}
								};
							};
							class SpeedIndicatorBox
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.49000001,-0.25},
										1
									},
									
									{
										"PlaneW",
										{-0.49000001,-0.2},
										1
									},
									
									{
										"PlaneW",
										{-0.30000001,-0.2},
										1
									},
									
									{
										"PlaneW",
										{-0.30000001,-0.25},
										1
									},
									
									{
										"PlaneW",
										{-0.49000001,-0.25},
										1
									}
								};
							};
							class SpeedNumber
							{
								type="text";
								source="speed";
								sourceScale=3.5999999;
								align="center";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.40000001,-0.25},
									1
								};
								right[]=
								{
									"PlaneW",
									{-0.30000001,-0.25},
									1
								};
								down[]=
								{
									"PlaneW",
									{-0.40000001,-0.2},
									1
								};
							};
							class AltitudeIndicatorBox
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{0.49000001,-0.25},
										1
									},
									
									{
										"PlaneW",
										{0.49000001,-0.2},
										1
									},
									
									{
										"PlaneW",
										{0.30000001,-0.2},
										1
									},
									
									{
										"PlaneW",
										{0.30000001,-0.25},
										1
									},
									
									{
										"PlaneW",
										{0.49000001,-0.25},
										1
									}
								};
							};
							class AltitudeNumberASL
							{
								type="text";
								source="altitudeASL";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{0.40000001,-0.25},
									1
								};
								right[]=
								{
									"PlaneW",
									{0.47999999,-0.25},
									1
								};
								down[]=
								{
									"PlaneW",
									{0.40000001,-0.2},
									1
								};
							};
							class AltitudeRadarText
							{
								type="text";
								source="static";
								text="AGL->";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"PlaneW",
									{0.31999999,-0.192},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"+0.32 + 0.04",
										-0.192
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										0.31999999,
										"-0.192 + 0.041"
									},
									1
								};
							};
							class AltitudeNumberAGL
							{
								type="text";
								source="altitudeAGL";
								sourceScale=1;
								sourceLength=4;
								sourceOffset=-2;
								align="left";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{0.47999999,-0.19},
									1
								};
								right[]=
								{
									"PlaneW",
									{0.54000002,-0.19},
									1
								};
								down[]=
								{
									"PlaneW",
									{0.47999999,-0.15000001},
									1
								};
							};
							class PitchNumber
							{
								type="text";
								source="horizonDive";
								sourceScale=57.295799;
								align="right";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.38999999,-0.075999998},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.39 + 0.05",
										-0.075999998
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.38999999,
										"-0.076 + 0.05"
									},
									1
								};
							};
							class PitchText
							{
								type="text";
								source="static";
								text="P:";
								align="left";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.41,-0.075999998},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.41 + 0.04",
										-0.075999998
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.41,
										"-0.076 + 0.05"
									},
									1
								};
							};
							class RollNumber
							{
								type="text";
								source="horizonBank";
								sourceScale=57.295799;
								align="right";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.38999999,-0.025},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.39 + 0.05",
										-0.025
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.38999999,
										"-0.025 + 0.05"
									},
									1
								};
							};
							class RollText
							{
								type="text";
								source="static";
								text="R:";
								align="left";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.41,-0.025},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.41 + 0.04",
										-0.025
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.41,
										"-0.025 + 0.05"
									},
									1
								};
							};
							class ClimbNumber
							{
								type="text";
								source="vspeed";
								sourceScale=1;
								align="right";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.38999999,0.026000001},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.39 + 0.05",
										0.026000001
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.38999999,
										"+0.026 + 0.05"
									},
									1
								};
							};
							class ClimbText
							{
								type="text";
								source="static";
								text="C:";
								align="left";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.41,0.026000001},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.41 + 0.04",
										0.026000001
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.41,
										"+0.026 + 0.05"
									},
									1
								};
							};
							class fuelNumber
							{
								type="text";
								source="fuel";
								sourceScale=100;
								align="right";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.40000001,0.07},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.40 + 0.08",
										0.07
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.40000001,
										"0.07 + 0.08"
									},
									1
								};
							};
							class fuelText
							{
								type="text";
								source="static";
								text="F:";
								align="left";
								scale=1;
								pos[]=
								{
									"PlaneW",
									{-0.41,0.079999998},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										"-0.41 + 0.04",
										0.079999998
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										-0.41,
										"0.08 + 0.05"
									},
									1
								};
							};
							class HeadingArrow
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"WPPoint",
										1,
										"LimitWaypoint",
										1,
										{-0.02,0.041999999},
										1
									},
									
									{
										"WPPoint",
										1,
										"LimitWaypoint",
										1,
										{0,0.022},
										1
									},
									
									{
										"WPPoint",
										1,
										"LimitWaypoint",
										1,
										{0.02,0.041999999},
										1
									}
								};
							};
							class WP
							{
								condition="wpvalid";
								class WPdist
								{
									type="text";
									source="wpdist";
									sourceScale=0.001;
									sourcePrecision=1;
									align="right";
									scale=1;
									pos[]=
									{
										{0.92400002,0.505018},
										1
									};
									down[]=
									{
										{0.92400002,0.54246402},
										1
									};
									right[]=
									{
										{0.96399999,0.505018},
										1
									};
								};
								class WPIndex
								{
									type="text";
									source="wpIndex";
									sourceScale=1;
									sourceLength=2;
									align="right";
									scale=1;
									pos[]=
									{
										{0.87699997,0.505018},
										1
									};
									right[]=
									{
										{0.917,0.505018},
										1
									};
									down[]=
									{
										{0.87699997,0.54246402},
										1
									};
								};
								class WPstatic
								{
									type="text";
									source="static";
									text="WP";
									scale=1;
									sourceScale=1;
									align="right";
									pos[]=
									{
										
										{
											"0.825+0.01",
											0.50650001
										},
										1
									};
									right[]=
									{
										{0.875,0.50650001},
										1
									};
									down[]=
									{
										
										{
											"0.825+0.01",
											0.54149997
										},
										1
									};
								};
								class WPKM
								{
									type="text";
									source="static";
									text=":";
									scale=1;
									sourceScale=1;
									align="left";
									pos[]=
									{
										
										{
											"0.825+0.09",
											0.50650001
										},
										1
									};
									right[]=
									{
										{0.95499998,0.50650001},
										1
									};
									down[]=
									{
										
										{
											"0.825+0.09",
											0.54149997
										},
										1
									};
								};
							};
							class HeadingRotation
							{
								condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
								class HeadingHeadNumber
								{
									type="text";
									source="cameraDir";
									sourceScale=1;
									align="center";
									scale=1;
									pos[]=
									{
										
										{
											"0.80-0.302",
											"0.082+0.065"
										},
										1
									};
									right[]=
									{
										
										{
											"0.83-0.302",
											"0.082+0.065"
										},
										1
									};
									down[]=
									{
										
										{
											"0.80-0.302",
											"0.113+0.065"
										},
										1
									};
								};
								class HeadingArrow
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0.48800001,0.141},
											1
										},
										
										{
											{0.51200002,0.141},
											1
										},
										
										{
											{0.542,0.161},
											1
										},
										
										{
											{0.51200002,0.18099999},
											1
										},
										
										{
											{0.48800001,0.18099999},
											1
										},
										
										{
											{0.458,0.161},
											1
										},
										
										{
											{0.48800001,0.141},
											1
										},
										{}
									};
								};
							};
							class HeadingScale
							{
								type="scale";
								NeverEatSeaWeed=1;
								horizontal=1;
								source="heading";
								sourceScale=1;
								width=3;
								top=0.1;
								center=0.5;
								bottom=0.89999998;
								lineXleft=0.105;
								lineYright=0.115;
								lineXleftMajor=0.094999999;
								lineYrightMajor=0.115;
								majorLineEach=5;
								numberEach=5;
								step="18 / 9";
								stepSize="(0.70 - 0.3) / 15";
								align="center";
								scale=1;
								pos[]={0.096000001,0.0546};
								right[]={0.14300001,0.0546};
								down[]={0.096000001,0.093000002};
							};
							class HeadingIndicatorBox
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.035,-0.45500001},
										1
									},
									
									{
										"PlaneW",
										{-0.035,-0.5},
										1
									},
									
									{
										"PlaneW",
										{0.035,-0.5},
										1
									},
									
									{
										"PlaneW",
										{0.035,-0.45500001},
										1
									},
									
									{
										"PlaneW",
										{-0.035,-0.45500001},
										1
									}
								};
							};
							class HeadingIndicatorArrow
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"PlaneW",
											{-0.015,-0.45500001},
											1
										},
										
										{
											"PlaneW",
											{0,-0.44499999},
											1
										},
										
										{
											"PlaneW",
											{0.015,-0.45500001},
											1
										}
									}
								};
							};
							class HeadingNumber
							{
								type="text";
								source="heading";
								sourceScale=1;
								align="center";
								scale=1;
								pos[]=
								{
									"PlaneW",
									
									{
										0,
										"(-0.5   )"
									},
									1
								};
								right[]=
								{
									"PlaneW",
									
									{
										0.029999999,
										"(-0.5   )"
									},
									1
								};
								down[]=
								{
									"PlaneW",
									
									{
										0,
										"(-0.5 + 0.045 )"
									},
									1
								};
							};
							class HorizonBankRot
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"HorizonBankRot",
										
										{
											0,
											"0.39421001-0.109"
										},
										1
									},
									
									{
										"HorizonBankRot",
										
										{
											0.0099999998,
											"0.41673699-0.109"
										},
										1
									},
									
									{
										"HorizonBankRot",
										
										{
											-0.0099999998,
											"0.41673699-0.109"
										},
										1
									},
									
									{
										"HorizonBankRot",
										
										{
											0,
											"0.39421001-0.109"
										},
										1
									}
								};
							};
							class HorizonBankRotLines
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										{0.619959,0.71298599},
										1
									},
									
									{
										{0.63143897,0.74420297},
										1
									},
									{},
									
									{
										{0.58291,0.73901898},
										1
									},
									
									{
										{0.58808702,0.76077801},
										1
									},
									{},
									
									{
										{0.54057401,0.74850398},
										1
									},
									
									{
										{0.54318398,0.77083802},
										1
									},
									{},
									
									{
										{0.4975,0.740421},
										1
									},
									
									{
										{0.4975,0.77420998},
										1
									},
									{},
									
									{
										{0.45442599,0.74850398},
										1
									},
									
									{
										{0.45181599,0.77083802},
										1
									},
									{},
									
									{
										{0.41209,0.73901898},
										1
									},
									
									{
										{0.40691301,0.76077801},
										1
									},
									{},
									
									{
										{0.37504101,0.71298599},
										1
									},
									
									{
										{0.363561,0.74420297},
										1
									}
								};
							};
							class Horizont
							{
								clipTL[]={0.2,0.2};
								clipBR[]={0.80000001,0.80000001};
								class Dimmed
								{
									class Level0
									{
										type="line";
										width=3;
										points[]=
										{
											
											{
												"Level0",
												{0.75,0},
												1
											},
											
											{
												"Level0",
												{0.064999998,0},
												1
											},
											{},
											
											{
												"Level0",
												{-0.064999998,0},
												1
											},
											
											{
												"Level0",
												{-0.75,0},
												1
											}
										};
									};
								};
								class HideOnTurn
								{
									condition="on";
									class Limiter
									{
										class Level0
										{
											type="line";
											width=2;
											points[]={};
										};
										class LevelM5: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM5",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM5",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{-0.22,0},
													1
												},
												
												{
													"LevelM5",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{-0.19,0},
													1
												},
												
												{
													"LevelM5",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{-0.16,0},
													1
												},
												
												{
													"LevelM5",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{-0.13,0},
													1
												},
												
												{
													"LevelM5",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{-0.1,0},
													1
												},
												
												{
													"LevelM5",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{-0.07,0},
													1
												},
												
												{
													"LevelM5",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM5",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM5",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.22,0},
													1
												},
												
												{
													"LevelM5",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.19,0},
													1
												},
												
												{
													"LevelM5",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.16,0},
													1
												},
												
												{
													"LevelM5",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.13,0},
													1
												},
												
												{
													"LevelM5",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.1,0},
													1
												},
												
												{
													"LevelM5",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM5",
													{0.07,0},
													1
												},
												
												{
													"LevelM5",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_5
										{
											type="text";
											source="static";
											text=-5;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM5",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM5",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM5",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_5_R
										{
											type="text";
											source="static";
											text=-5;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM5",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM5",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM5",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP5: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP5",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP5",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP5",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP5",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP5",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP5",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_5
										{
											type="text";
											source="static";
											text="5";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP5",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP5",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP5",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_5_R
										{
											type="text";
											source="static";
											text="5";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP5",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP5",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP5",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM10: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM10",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM10",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{-0.22,0},
													1
												},
												
												{
													"LevelM10",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{-0.19,0},
													1
												},
												
												{
													"LevelM10",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{-0.16,0},
													1
												},
												
												{
													"LevelM10",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{-0.13,0},
													1
												},
												
												{
													"LevelM10",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{-0.1,0},
													1
												},
												
												{
													"LevelM10",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{-0.07,0},
													1
												},
												
												{
													"LevelM10",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM10",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM10",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.22,0},
													1
												},
												
												{
													"LevelM10",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.19,0},
													1
												},
												
												{
													"LevelM10",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.16,0},
													1
												},
												
												{
													"LevelM10",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.13,0},
													1
												},
												
												{
													"LevelM10",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.1,0},
													1
												},
												
												{
													"LevelM10",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM10",
													{0.07,0},
													1
												},
												
												{
													"LevelM10",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_10
										{
											type="text";
											source="static";
											text=-10;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM10",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM10",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM10",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_10_R
										{
											type="text";
											source="static";
											text=-10;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM10",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM10",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM10",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP10: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP10",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP10",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP10",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP10",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP10",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP10",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_10
										{
											type="text";
											source="static";
											text="10";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP10",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP10",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP10",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_10_R
										{
											type="text";
											source="static";
											text="10";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP10",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP10",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP10",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM15: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM15",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM15",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{-0.22,0},
													1
												},
												
												{
													"LevelM15",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{-0.19,0},
													1
												},
												
												{
													"LevelM15",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{-0.16,0},
													1
												},
												
												{
													"LevelM15",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{-0.13,0},
													1
												},
												
												{
													"LevelM15",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{-0.1,0},
													1
												},
												
												{
													"LevelM15",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{-0.07,0},
													1
												},
												
												{
													"LevelM15",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM15",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM15",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.22,0},
													1
												},
												
												{
													"LevelM15",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.19,0},
													1
												},
												
												{
													"LevelM15",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.16,0},
													1
												},
												
												{
													"LevelM15",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.13,0},
													1
												},
												
												{
													"LevelM15",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.1,0},
													1
												},
												
												{
													"LevelM15",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM15",
													{0.07,0},
													1
												},
												
												{
													"LevelM15",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_15
										{
											type="text";
											source="static";
											text=-15;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM15",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM15",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM15",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_15_R
										{
											type="text";
											source="static";
											text=-15;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM15",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM15",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM15",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP15: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP15",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP15",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP15",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP15",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP15",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP15",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_15
										{
											type="text";
											source="static";
											text="15";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP15",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP15",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP15",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_15_R
										{
											type="text";
											source="static";
											text="15";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP15",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP15",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP15",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM20: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM20",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM20",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{-0.22,0},
													1
												},
												
												{
													"LevelM20",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{-0.19,0},
													1
												},
												
												{
													"LevelM20",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{-0.16,0},
													1
												},
												
												{
													"LevelM20",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{-0.13,0},
													1
												},
												
												{
													"LevelM20",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{-0.1,0},
													1
												},
												
												{
													"LevelM20",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{-0.07,0},
													1
												},
												
												{
													"LevelM20",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM20",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM20",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.22,0},
													1
												},
												
												{
													"LevelM20",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.19,0},
													1
												},
												
												{
													"LevelM20",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.16,0},
													1
												},
												
												{
													"LevelM20",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.13,0},
													1
												},
												
												{
													"LevelM20",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.1,0},
													1
												},
												
												{
													"LevelM20",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM20",
													{0.07,0},
													1
												},
												
												{
													"LevelM20",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_20
										{
											type="text";
											source="static";
											text=-20;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM20",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM20",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM20",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_20_R
										{
											type="text";
											source="static";
											text=-20;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM20",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM20",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM20",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP20: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP20",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP20",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP20",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP20",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP20",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP20",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_20
										{
											type="text";
											source="static";
											text="20";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP20",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP20",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP20",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_20_R
										{
											type="text";
											source="static";
											text="20";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP20",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP20",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP20",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM25: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM25",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM25",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{-0.22,0},
													1
												},
												
												{
													"LevelM25",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{-0.19,0},
													1
												},
												
												{
													"LevelM25",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{-0.16,0},
													1
												},
												
												{
													"LevelM25",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{-0.13,0},
													1
												},
												
												{
													"LevelM25",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{-0.1,0},
													1
												},
												
												{
													"LevelM25",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{-0.07,0},
													1
												},
												
												{
													"LevelM25",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM25",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM25",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.22,0},
													1
												},
												
												{
													"LevelM25",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.19,0},
													1
												},
												
												{
													"LevelM25",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.16,0},
													1
												},
												
												{
													"LevelM25",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.13,0},
													1
												},
												
												{
													"LevelM25",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.1,0},
													1
												},
												
												{
													"LevelM25",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM25",
													{0.07,0},
													1
												},
												
												{
													"LevelM25",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_25
										{
											type="text";
											source="static";
											text=-25;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM25",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM25",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM25",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_25_R
										{
											type="text";
											source="static";
											text=-25;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM25",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM25",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM25",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP25: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP25",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP25",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP25",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP25",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP25",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP25",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_25
										{
											type="text";
											source="static";
											text="25";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP25",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP25",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP25",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_25_R
										{
											type="text";
											source="static";
											text="25";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP25",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP25",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP25",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM30: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM30",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM30",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{-0.22,0},
													1
												},
												
												{
													"LevelM30",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{-0.19,0},
													1
												},
												
												{
													"LevelM30",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{-0.16,0},
													1
												},
												
												{
													"LevelM30",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{-0.13,0},
													1
												},
												
												{
													"LevelM30",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{-0.1,0},
													1
												},
												
												{
													"LevelM30",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{-0.07,0},
													1
												},
												
												{
													"LevelM30",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM30",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM30",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.22,0},
													1
												},
												
												{
													"LevelM30",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.19,0},
													1
												},
												
												{
													"LevelM30",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.16,0},
													1
												},
												
												{
													"LevelM30",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.13,0},
													1
												},
												
												{
													"LevelM30",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.1,0},
													1
												},
												
												{
													"LevelM30",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM30",
													{0.07,0},
													1
												},
												
												{
													"LevelM30",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_30
										{
											type="text";
											source="static";
											text=-30;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM30",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM30",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM30",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_30_R
										{
											type="text";
											source="static";
											text=-30;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM30",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM30",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM30",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP30: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP30",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP30",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP30",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP30",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP30",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP30",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_30
										{
											type="text";
											source="static";
											text="30";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP30",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP30",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP30",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_30_R
										{
											type="text";
											source="static";
											text="30";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP30",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP30",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP30",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM35: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM35",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM35",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{-0.22,0},
													1
												},
												
												{
													"LevelM35",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{-0.19,0},
													1
												},
												
												{
													"LevelM35",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{-0.16,0},
													1
												},
												
												{
													"LevelM35",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{-0.13,0},
													1
												},
												
												{
													"LevelM35",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{-0.1,0},
													1
												},
												
												{
													"LevelM35",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{-0.07,0},
													1
												},
												
												{
													"LevelM35",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM35",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM35",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.22,0},
													1
												},
												
												{
													"LevelM35",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.19,0},
													1
												},
												
												{
													"LevelM35",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.16,0},
													1
												},
												
												{
													"LevelM35",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.13,0},
													1
												},
												
												{
													"LevelM35",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.1,0},
													1
												},
												
												{
													"LevelM35",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM35",
													{0.07,0},
													1
												},
												
												{
													"LevelM35",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_35
										{
											type="text";
											source="static";
											text=-35;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM35",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM35",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM35",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_35_R
										{
											type="text";
											source="static";
											text=-35;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM35",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM35",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM35",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP35: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP35",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP35",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP35",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP35",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP35",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP35",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_35
										{
											type="text";
											source="static";
											text="35";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP35",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP35",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP35",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_35_R
										{
											type="text";
											source="static";
											text="35";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP35",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP35",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP35",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM40: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM40",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM40",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{-0.22,0},
													1
												},
												
												{
													"LevelM40",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{-0.19,0},
													1
												},
												
												{
													"LevelM40",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{-0.16,0},
													1
												},
												
												{
													"LevelM40",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{-0.13,0},
													1
												},
												
												{
													"LevelM40",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{-0.1,0},
													1
												},
												
												{
													"LevelM40",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{-0.07,0},
													1
												},
												
												{
													"LevelM40",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM40",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM40",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.22,0},
													1
												},
												
												{
													"LevelM40",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.19,0},
													1
												},
												
												{
													"LevelM40",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.16,0},
													1
												},
												
												{
													"LevelM40",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.13,0},
													1
												},
												
												{
													"LevelM40",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.1,0},
													1
												},
												
												{
													"LevelM40",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM40",
													{0.07,0},
													1
												},
												
												{
													"LevelM40",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_40
										{
											type="text";
											source="static";
											text=-40;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM40",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM40",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM40",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_40_R
										{
											type="text";
											source="static";
											text=-40;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM40",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM40",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM40",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP40: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP40",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP40",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP40",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP40",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP40",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP40",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_40
										{
											type="text";
											source="static";
											text="40";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP40",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP40",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP40",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_40_R
										{
											type="text";
											source="static";
											text="40";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP40",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP40",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP40",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM45: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM45",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM45",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{-0.22,0},
													1
												},
												
												{
													"LevelM45",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{-0.19,0},
													1
												},
												
												{
													"LevelM45",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{-0.16,0},
													1
												},
												
												{
													"LevelM45",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{-0.13,0},
													1
												},
												
												{
													"LevelM45",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{-0.1,0},
													1
												},
												
												{
													"LevelM45",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{-0.07,0},
													1
												},
												
												{
													"LevelM45",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM45",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM45",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.22,0},
													1
												},
												
												{
													"LevelM45",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.19,0},
													1
												},
												
												{
													"LevelM45",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.16,0},
													1
												},
												
												{
													"LevelM45",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.13,0},
													1
												},
												
												{
													"LevelM45",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.1,0},
													1
												},
												
												{
													"LevelM45",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM45",
													{0.07,0},
													1
												},
												
												{
													"LevelM45",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_45
										{
											type="text";
											source="static";
											text=-45;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM45",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM45",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM45",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_45_R
										{
											type="text";
											source="static";
											text=-45;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM45",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM45",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM45",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP45: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP45",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP45",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP45",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP45",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP45",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP45",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_45
										{
											type="text";
											source="static";
											text="45";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP45",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP45",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP45",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_45_R
										{
											type="text";
											source="static";
											text="45";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP45",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP45",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP45",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM50: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM50",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM50",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{-0.22,0},
													1
												},
												
												{
													"LevelM50",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{-0.19,0},
													1
												},
												
												{
													"LevelM50",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{-0.16,0},
													1
												},
												
												{
													"LevelM50",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{-0.13,0},
													1
												},
												
												{
													"LevelM50",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{-0.1,0},
													1
												},
												
												{
													"LevelM50",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{-0.07,0},
													1
												},
												
												{
													"LevelM50",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM50",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM50",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.22,0},
													1
												},
												
												{
													"LevelM50",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.19,0},
													1
												},
												
												{
													"LevelM50",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.16,0},
													1
												},
												
												{
													"LevelM50",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.13,0},
													1
												},
												
												{
													"LevelM50",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.1,0},
													1
												},
												
												{
													"LevelM50",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM50",
													{0.07,0},
													1
												},
												
												{
													"LevelM50",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_50
										{
											type="text";
											source="static";
											text=-50;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM50",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM50",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM50",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_50_R
										{
											type="text";
											source="static";
											text=-50;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM50",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM50",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM50",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP50: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP50",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP50",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP50",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP50",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP50",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP50",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_50
										{
											type="text";
											source="static";
											text="50";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP50",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP50",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP50",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_50_R
										{
											type="text";
											source="static";
											text="50";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP50",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP50",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP50",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM60: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM60",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM60",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{-0.22,0},
													1
												},
												
												{
													"LevelM60",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{-0.19,0},
													1
												},
												
												{
													"LevelM60",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{-0.16,0},
													1
												},
												
												{
													"LevelM60",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{-0.13,0},
													1
												},
												
												{
													"LevelM60",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{-0.1,0},
													1
												},
												
												{
													"LevelM60",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{-0.07,0},
													1
												},
												
												{
													"LevelM60",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM60",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM60",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.22,0},
													1
												},
												
												{
													"LevelM60",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.19,0},
													1
												},
												
												{
													"LevelM60",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.16,0},
													1
												},
												
												{
													"LevelM60",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.13,0},
													1
												},
												
												{
													"LevelM60",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.1,0},
													1
												},
												
												{
													"LevelM60",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM60",
													{0.07,0},
													1
												},
												
												{
													"LevelM60",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_60
										{
											type="text";
											source="static";
											text=-60;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM60",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM60",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM60",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_60_R
										{
											type="text";
											source="static";
											text=-60;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM60",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM60",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM60",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP60: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP60",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP60",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP60",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP60",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP60",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP60",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_60
										{
											type="text";
											source="static";
											text="60";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP60",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP60",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP60",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_60_R
										{
											type="text";
											source="static";
											text="60";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP60",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP60",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP60",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM70: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM70",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM70",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{-0.22,0},
													1
												},
												
												{
													"LevelM70",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{-0.19,0},
													1
												},
												
												{
													"LevelM70",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{-0.16,0},
													1
												},
												
												{
													"LevelM70",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{-0.13,0},
													1
												},
												
												{
													"LevelM70",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{-0.1,0},
													1
												},
												
												{
													"LevelM70",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{-0.07,0},
													1
												},
												
												{
													"LevelM70",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM70",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM70",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.22,0},
													1
												},
												
												{
													"LevelM70",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.19,0},
													1
												},
												
												{
													"LevelM70",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.16,0},
													1
												},
												
												{
													"LevelM70",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.13,0},
													1
												},
												
												{
													"LevelM70",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.1,0},
													1
												},
												
												{
													"LevelM70",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM70",
													{0.07,0},
													1
												},
												
												{
													"LevelM70",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_70
										{
											type="text";
											source="static";
											text=-70;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM70",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM70",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM70",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_70_R
										{
											type="text";
											source="static";
											text=-70;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM70",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM70",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM70",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP70: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP70",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP70",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP70",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP70",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP70",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP70",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_70
										{
											type="text";
											source="static";
											text="70";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP70",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP70",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP70",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_70_R
										{
											type="text";
											source="static";
											text="70";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP70",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP70",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP70",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM80: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM80",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM80",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{-0.22,0},
													1
												},
												
												{
													"LevelM80",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{-0.19,0},
													1
												},
												
												{
													"LevelM80",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{-0.16,0},
													1
												},
												
												{
													"LevelM80",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{-0.13,0},
													1
												},
												
												{
													"LevelM80",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{-0.1,0},
													1
												},
												
												{
													"LevelM80",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{-0.07,0},
													1
												},
												
												{
													"LevelM80",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM80",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM80",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.22,0},
													1
												},
												
												{
													"LevelM80",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.19,0},
													1
												},
												
												{
													"LevelM80",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.16,0},
													1
												},
												
												{
													"LevelM80",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.13,0},
													1
												},
												
												{
													"LevelM80",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.1,0},
													1
												},
												
												{
													"LevelM80",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM80",
													{0.07,0},
													1
												},
												
												{
													"LevelM80",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_80
										{
											type="text";
											source="static";
											text=-80;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM80",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM80",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM80",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_80_R
										{
											type="text";
											source="static";
											text=-80;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM80",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM80",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM80",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP80: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP80",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP80",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP80",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP80",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP80",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP80",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_80
										{
											type="text";
											source="static";
											text="80";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP80",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP80",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP80",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_80_R
										{
											type="text";
											source="static";
											text="80";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP80",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP80",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP80",
												{0.25999999,0.033},
												1
											};
										};
										class LevelM90: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelM90",
													{-0.235,-0.02},
													1
												},
												
												{
													"LevelM90",
													{-0.235,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{-0.22,0},
													1
												},
												
												{
													"LevelM90",
													{-0.205,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{-0.19,0},
													1
												},
												
												{
													"LevelM90",
													{-0.175,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{-0.16,0},
													1
												},
												
												{
													"LevelM90",
													{-0.145,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{-0.13,0},
													1
												},
												
												{
													"LevelM90",
													{-0.115,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{-0.1,0},
													1
												},
												
												{
													"LevelM90",
													{-0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{-0.07,0},
													1
												},
												
												{
													"LevelM90",
													{-0.055,0},
													1
												},
												{},
												{},
												
												{
													"LevelM90",
													{0.235,-0.02},
													1
												},
												
												{
													"LevelM90",
													{0.235,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.22,0},
													1
												},
												
												{
													"LevelM90",
													{0.205,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.19,0},
													1
												},
												
												{
													"LevelM90",
													{0.175,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.16,0},
													1
												},
												
												{
													"LevelM90",
													{0.145,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.13,0},
													1
												},
												
												{
													"LevelM90",
													{0.115,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.1,0},
													1
												},
												
												{
													"LevelM90",
													{0.085000001,0},
													1
												},
												{},
												
												{
													"LevelM90",
													{0.07,0},
													1
												},
												
												{
													"LevelM90",
													{0.055,0},
													1
												},
												{}
											};
										};
										class VALM_1_90
										{
											type="text";
											source="static";
											text=-90;
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM90",
												{-0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM90",
												{-0.2,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM90",
												{-0.25999999,0.017999999},
												1
											};
										};
										class VALM_1_90_R
										{
											type="text";
											source="static";
											text=-90;
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelM90",
												{0.25999999,-0.032000002},
												1
											};
											right[]=
											{
												"LevelM90",
												{0.31999999,-0.032000002},
												1
											};
											down[]=
											{
												"LevelM90",
												{0.25999999,0.017999999},
												1
											};
										};
										class LevelP90: Level0
										{
											type="line";
											points[]=
											{
												
												{
													"LevelP90",
													
													{
														"-0.22-0.015",
														0.02
													},
													1
												},
												
												{
													"LevelP90",
													
													{
														"-0.22-0.015",
														0
													},
													1
												},
												
												{
													"LevelP90",
													{-0.059999999,0},
													1
												},
												{},
												
												{
													"LevelP90",
													{0.059999999,0},
													1
												},
												
												{
													"LevelP90",
													
													{
														"+0.22+0.015",
														0
													},
													1
												},
												
												{
													"LevelP90",
													
													{
														"+0.22+0.015",
														0.02
													},
													1
												}
											};
										};
										class VALP_1_90
										{
											type="text";
											source="static";
											text="90";
											align="left";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP90",
												{-0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP90",
												{-0.2,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP90",
												{-0.25999999,0.033},
												1
											};
										};
										class VALP_1_90_R
										{
											type="text";
											source="static";
											text="90";
											align="right";
											scale=1;
											sourceScale=1;
											pos[]=
											{
												"LevelP90",
												{0.25999999,-0.017000001},
												1
											};
											right[]=
											{
												"LevelP90",
												{0.31999999,-0.017000001},
												1
											};
											down[]=
											{
												"LevelP90",
												{0.25999999,0.033},
												1
											};
										};
									};
								};
								class UnhideOnTurn
								{
									condition="on";
									class Cross
									{
										type="line";
										width=3;
										points[]=
										{
											
											{
												"PlaneW",
												{-0.02,0},
												1
											},
											
											{
												"PlaneW",
												{-0.039999999,0},
												1
											},
											{},
											
											{
												"PlaneW",
												{0.02,0},
												1
											},
											
											{
												"PlaneW",
												{0.039999999,0},
												1
											},
											{},
											
											{
												"PlaneW",
												{0,-0.019708},
												1
											},
											
											{
												"PlaneW",
												{0,-0.039416101},
												1
											},
											{},
											
											{
												"PlaneW",
												{0,0.019708},
												1
											},
											
											{
												"PlaneW",
												{0,0.039416101},
												1
											},
											{}
										};
									};
								};
							};
							class RadarBoxes
							{
								type="radartoview";
								pos0[]={0.5,0.5};
								pos10[]={0.773,0.773};
								width=4;
								points[]=
								{
									
									{
										{-0.0020000001,-0.0020000001},
										1
									},
									
									{
										{0.0020000001,-0.0020000001},
										1
									},
									
									{
										{0.0020000001,0.0020000001},
										1
									},
									
									{
										{-0.0020000001,0.0020000001},
										1
									},
									
									{
										{-0.0020000001,-0.0020000001},
										1
									}
								};
							};
							class TargetDiamond
							{
								class shape
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.02,0.02},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.02,0.02},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{-0.02,-0.02},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.02,-0.02},
											1
										},
										
										{
											"Target",
											1,
											"Limit0109",
											1,
											{0.02,0.02},
											1
										}
									};
								};
							};
						};
					};
				};
			};
			class Copilot2: MainTurret
			{
				gunBeg="z_gunl_muzzle";
				gunEnd="z_gunl_chamber";
				proxyindex=2;
				commanding=-2;
				viewGunnerShadow=0;
				castGunnerShadow=0;
				gunnername="CoPilot 2";
				proxytype="CPGunner";
				gunnerforceoptics=0;
				LodTurnedin=1100;
				LodOpticsin=1100;
				gunnergetinaction="Heli_Attack_01_Gunner_Enter";
				gunnergetoutaction="Heli_Attack_01_Gunner_Exit";
				gunnerinaction="Nu_CoPilot";
				gunneraction="Nu_CoPilot";
				gunnerlefthandanimname="";
				gunnerrighthandanimname="";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				initelev=0;
				initturn=15;
				maxturn=30;
				minturn=5;
				maxelev=30;
				minelev=-30;
				memorypointgunneroptics="gunnerview2";
				animationSourceBody="mainturret2";
				animationsourcegun="maingun2";
				body="mainturret2";
				gun="maingun2";
				memorypointsgetingunner="getindriver";
				memorypointsgetingunnerdir="getindriver_dir";
				turretinfotype="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					MACRO_NEW_WEAPON(Nu_20mm)
				};
				magazines[]=
				{
					MACRO_NEW_MAG(Nu_20mm,2400),
					MACRO_NEW_MAG(Nu_20mm,2400),
					"Laser_Battery_F",
					"Laser_Battery_F"
				};
				primaryGunner=0;
				isCopilot=0;
			};
		};
		destrType="DestructDefault";
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"Limit1",
					"limit2"
				};
				disableHeightLimit=1;
				maxLoadMass=1000000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0.15000001,0};
				exits[]=
				{
					"pos_cargo_load"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
		defaultUserMFDvalues[]={0,1,0,1,0};
		class MFD //nu
		{
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax=1;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				font="PuristaLight";
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]=
				{
					"user0",
					"user1",
					"user2"
				};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPointRelative",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.92000002},
								1
							};
							right[]=
							{
								{0.98699999,0.92000002},
								1
							};
							down[]=
							{
								{0.93199998,0.96499997},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.83999997},
								1
							};
							right[]=
							{
								{0.98699999,0.83999997},
								1
							};
							down[]=
							{
								{0.93199998,0.88499999},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{-0.30000001,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{-0.40000001,-0.2},
							1
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="AGL->";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.05",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.05",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.05",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class fuelNumber
					{
						type="text";
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,0.07},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.40 + 0.08",
								0.07
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.40000001,
								"0.07 + 0.08"
							},
							1
						};
					};
					class fuelText
					{
						type="text";
						source="static";
						text="F:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.079999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.079999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"0.08 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.505018},
								1
							};
							down[]=
							{
								{0.92400002,0.54246402},
								1
							};
							right[]=
							{
								{0.96399999,0.505018},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.505018},
								1
							};
							right[]=
							{
								{0.917,0.505018},
								1
							};
							down[]=
							{
								{0.87699997,0.54246402},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.875,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.54149997
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.95499998,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.54149997
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5   )"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5   )"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045 )"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="on";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="on";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
		class Reflectors //nu
		{
			class CargoLight
			{
				ambient[]={220,10,10};
				color[]={2200,100,100};
				coneFadeCoef=15;
				dayLight=1;
				direction="cargo_light_end";
				FlareSize=1;
				hitpoint="cargo_light";
				innerAngle=135;
				intensity=1;
				outerAngle=180;
				position="cargo_light_pos";
				selection="cargo_light";
				size=1;
				useFlare=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=1;
					hardLimitEnd=7;
				};
			};
			class CargoLight_2: CargoLight
			{
				position="cargo_light_pos2";
				selection="cargo_light2";
				direction="cargo_light_end2";
			};
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R_hitpoint";
				selection="Light_R";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Left: Right
			{
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
			aggregateReflectors[]=
			{
				
				{
					"Left",
					"Right"
				}
			};
		};

		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				condition="alive _target";
				displayName="Passengers";
				insertChildren="_this call ace_interaction_fnc_addPassengersActions";
				statement="";
			};
			class ORG_aux_HUD_Changer
			{
				displayName = "Change HUD Color :)";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2.5;
				icon = MACRO_HUD_CHANGER_ICONS\colorWheel.paa;
				class ORG_aux_Red_HUD
				{
					displayName = "Red HUD Color";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = [1,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					showDisabled = 0;
					runOnHover = 1;
					priority = 2.5;
					icon = MACRO_HUD_CHANGER_ICONS\red.paa;
				};

				class ORG_aux_Orange_HUD :ORG_aux_Red_HUD
				{
					displayName = "Orange HUD Color";
					statement = [1,.05,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\orange.paa;

				};

				class ORG_aux_Yellow_HUD :ORG_aux_Red_HUD
				{
					displayName = "Yellow HUD Color";
					statement = [1,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\yellow.paa;

				};

				class ORG_aux_Green_HUD :ORG_aux_Red_HUD
				{
					displayName = "Green HUD Color";
				//condition = "true";
				statement = [0,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\green.paa;
				// showDisabled = 0;
				// priority = 2.5;
				};

			    class ORG_aux_Cyan_HUD :ORG_aux_Red_HUD
			    {
					displayName = "Cyan HUD Color";
					statement = [0,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\cyan.paa;
				};

				class ORG_aux_Blue_HUD :ORG_aux_Red_HUD
				{
					displayName = "Blue HUD Color";
					statement = [0,0,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\blue.paa;
				};

				class ORG_aux_Purple_HUD :ORG_aux_Red_HUD
				{
					displayName = "Purple HUD Color";
					statement = [.5,0,.5,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\purple.paa;
				};

				class ORG_aux_White_HUD :ORG_aux_Red_HUD
				{
					displayName = "White HUD Color";
					statement = [1,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\white.paa;
				};

				class ORG_aux_Black_HUD :ORG_aux_Red_HUD
				{
					displayName = "Black HUD Color";
					statement = [0,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\black.paa
				};

			   class ORG_aux_Clear_HUD :ORG_aux_Red_HUD
			   {
					displayName = "No HUD Color";
					statement = [1,1,1,0,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\noHud.paa
			   };
			};

			IntercomMacroAIR
		};


		class TransportItems
		{

			class BactaSprayx25_ORG
			{
				name = "ORG_aux_medical_BactaSpray_x25";
				count = 4;
			};

			class PlastiBandagex25_ORG
			{
				name = "ORG_aux_medical_PlastiBandage_x25";
				count = 4;
			};

			class MedPatchx25_ORG
			{
				name = "ORG_aux_medical_MedPatch_x25";
				count = 4;
			};

			class BactaSprayx10_ORG
			{
				name = "ORG_aux_medical_BactaSpray_x10";
				count = 10;
			};

			class PlastiBandagex10_ORG
			{
				name = "ORG_aux_medical_PlastiBandage_x10";
				count = 10;
			};

			class MedPatchx10_ORG
			{
				name = "ORG_aux_medical_MedPatch_x10";
				count = 10;
			};

			class BactaSprayx5_ORG
			{
				name = "ORG_aux_medical_BactaSpray_x5";
				count = 10;
			};

			class PlastiBandagex5_ORG
			{
				name = "ORG_aux_medical_PlastiBandage_x5";
				count = 10;
			};

			class MedPatchx5_ORG
			{
				name = "ORG_aux_medical_MedPatch_x5";
				count = 10;
			};

			class MediKit_ORG
			{
				name = "ORG_aux_medical_MediKit";
				count = 10;
			};

			class BactaSpray_ORG
			{
				name = "ORG_aux_medical_BactaSpray";
				count = 50;
			};

			class PlastiBandage_ORG
			{
				name = "ORG_aux_medical_PlastiBandage";
				count = 50;
			};

			class MedPatch_ORG
			{
				name = "ORG_aux_medical_MedPatch";
				count = 50;
			};

			class Painkillers_ORG
			{
				name = "ORG_aux_medical_PainKiller";
				count = 40;
			};

			class CombatStim_ORG
			{
				name = "ORG_aux_medical_Combat";
				count = 40;
			};

			class Adrenaline_ORG
			{
				name = "ORG_aux_medical_Adrenaline";
				count = 40;
			};

			class Blood_ORG
			{
				name = "ORG_aux_medical_Blood";
				count = 75;
			};

			class Bacta_ORG
			{
				name = "ORG_aux_medical_Bacta";
				count = 25;
			};

			class Kolto_ORG
			{
				name = "ORG_aux_medical_Kolto";
				count = 25;
			};

			class BactaInj_ORG
			{
				name = "ORG_aux_medical_Bacta_Inj";
				count = 25;
			};

			class KoltoInj_ORG
			{
				name = "ORG_aux_medical_Kolto_Inj";
				count = 25;
			};

			class DefibStrips_ORG
			{
				name = "ORG_aux_medical_AdhesiveDefibStrip";
				count = 100;
			};

			class PressureCuff_ORG
			{
				name = "ORG_aux_medical_PressureCuff";
				count = 30;
			};

			class Geltab_ORG
			{
				name = "ORG_aux_medical_Geltabs";
				count = 5;
			};
		};

		class TransportWeapons
		{
			class DC15A_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15a";
				count = 10;
			};

			class DC15S_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15s";
				count = 10;
			};

			class DC15C_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15c";
				count = 10;
			};

			class DP23_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DP_23";
				count = 10;
			};

			class DW32S_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DW_32S";
				count = 10;
			};

			class Valken38x_Weps_ORG
			{
				weapon = "ORG_aux_weapon_Valken38x";
				count = 10;
			};

			class Z6_Weps_ORG
			{
				weapon = "ORG_aux_weapon_Z6";
				count = 10;
			};

			class DC15B_Weps_ORG
			{
				weapon = "ORG_aux_weapon_DC_15b";
				count = 10;
			};

			class RPS1_Weps_ORG
			{
				weapon = "ORG_aux_weapon_RPS_1";
				count = 5;
			};
		};

		class TransportMagazines
		{
			class DC15A_low_ORG
			{
				magazine = "ORG_aux_magazine_DC_15a_Low_x60";
				count = 300;
			};

			class DC15A_medium_ORG
			{
				magazine = "ORG_aux_magazine_DC_15a_Medium_x30";
				count = 300;
			};

			class DC15A_High_ORG
			{
				magazine = "ORG_aux_magazine_DC_15a_High_x10";
				count = 50;
			};

			class ORG_Stun_ORG
			{
				magazine = "ORG_aux_magazine_Stun_x10";
				count = 100;
			};

			class DC15A_UGLAP_ORG
			{
				magazine = "ORG_aux_magazine_DC_15_UGL_AP_x2";
				count = 50;
			};

			class DC15A_UGLHE_ORG
			{
				magazine = "ORG_aux_magazine_DC_15_UGL_HE_x4";
				count = 50;
			};

			class DC15s_ORG
			{
				magazine = "ORG_aux_magazine_DC_15s_x60";
				count = 300;
			};

			class DC15c_ORG
			{
				magazine = "ORG_aux_magazine_DC_15c_Medium_x45";
				count = 300;
			};

			class DC15b_ORG
			{
				magazine = "ORG_aux_magazine_DC_15b_x60";
				count = 200;
			};

			class DC17_ORG
			{
				magazine = "ORG_aux_magazine_DC_17_x15";
				count = 50;
			};

			class SA35_ORG
			{
				magazine = "ORG_aux_magazine_35sa_low_x30";
				count = 50;
			};

			class DC15L_ORG
			{
				magazine = "ORG_aux_magazine_DC_15L_x200";
				count = 100;
			};

			class DC15L_T_ORG
			{
				magazine = "ORG_aux_magazine_DC_15L_T_x200";
				count = 100;
			};

			class DC17M_Rifle_ORG
			{
				magazine = "ORG_aux_magazine_DC_17m_rifle_x42";
				count = 300;
			};

			class DC17M_Marks_ORG
			{
				magazine = "ORG_aux_magazine_DC_17m_marks_x10";
				count = 300;
			};

			class DC17M_Grend_ORG
			{
				magazine = "ORG_aux_magazine_DC_17m_grend_x1";
				count = 50;
			};

			class DC_44h_ORG
			{
				magazine = "ORG_aux_magazine_DC_44h_x6";
				count = 300;
			};

			class DC_15k_ORG
			{
				magazine = "ORG_aux_magazine_DC_15k_x15";
				count = 300;
			};

			class MPS_HE_ORG
			{
				magazine = "ORG_aux_magazine_MPS_HE_x1";
				count = 15;
			};

			class MPS_Smoke_ORG
			{
				magazine = "ORG_aux_magazine_MPS_Smoke_x1";
				count = 15;
			};

			class MPS_Smoke_Red_ORG
			{
				magazine = "ORG_aux_magazine_MPS_Smoke_Red_x1";
				count = 15;
			};

			class MPS_Flare_ORG
			{
				magazine = "ORG_aux_magazine_MPS_Flare_x1";
				count = 15;
			};

			class DP_23_ORG
			{
				magazine = "ORG_aux_magazine_DP23_x12";
				count = 100;
			};

			class DP_23Wide_ORG
			{
				magazine = "ORG_aux_magazine_DP23_x12Wide";
				count = 100;
			};

			class DW_32_HIGH_ORG
			{
				magazine = "ORG_aux_magazine_DW32_High_x5";
				count = 50;
			};

			class DW_32_HIGH_T_ORG
			{
				magazine = "ORG_aux_magazine_DW32_High_T_x5";
				count = 50;
			};

			class DW_32_CONCMED_ORG
			{
				magazine = "ORG_aux_magazine_DW32_Med_x20";
				count = 100;
			};

			class DW_32_CONCMED_T_ORG
			{
				magazine = "ORG_aux_magazine_DW32_Med_T_x20";
				count = 100;
			};

			class Valken_38x_REFMED_ORG
			{
				magazine = "ORG_aux_magazine_Valken38x_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_ORG
			{
				magazine = "ORG_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_ORG
			{
				magazine = "ORG_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Firepuncher_high_T_ORG
			{
				magazine = "ORG_aux_magazine_Firepuncher_T_x8";
				count = 100;
			};

			class Firepuncher_high_ORG
			{
				magazine = "ORG_aux_magazine_Firepuncher_x8";
				count = 100;
			};

			class Westar_m5_40rnd
			{
				magazine = "ORG_aux_magazine_Westar_M5_x40";
				count = 300;
			};

			class Z6_ORG
			{
				magazine = "ORG_aux_magazine_Z6_x200";
				count = 200;
			};

			class Z6_Super_ORG
			{
				magazine = "ORG_aux_magazine_Z6_Supercharge_x1";
				count = 250;
			};

			class Z6_ALT_ORG
			{
				magazine = "ORG_aux_magazine_Z6_x125";
				count = 200;
			};

			class Flash_ORG
			{
				magazine = "ORG_aux_magazine_ORG_FLASH_x1";
				count = 30;
			};

			class ATCharge_ORG
			{
				magazine = "ORG_aux_magazine_ORG_INCENDIARY_x1";
				count = 30;
			};

			class HEDPImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_HEDP_x1";
				count = 30;
			};

			class WhiteImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_WHITE_x1";
				count = 30;
			};

			class BlueImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_BLUE_x1";
				count = 30;
			};

			class GreenImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_GREEN_x1";
				count = 30;
			};

			class RedImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_RED_x1";
				count = 30;
			};

			class PurpleImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_PURPLE_x1";
				count = 30;
			};

			class YellowImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_YELLOW_x1";
				count = 30;
			};

			class OrangeImpact_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SMOKE_IMPACT_ORANGE_x1";
				count = 30;
			};

			class SquadShield_ORG
			{
				magazine = "ORG_aux_magazine_ORG_SquadShield_x1";
				count = 5;
			};

			class ThermalDet_ORG
			{
				magazine = "ORG_aux_magazine_ORG_FRAG_x1";
				count = 30;
			};

			class PLXAA_ORG
			{
				magazine = "ORG_aux_magazine_PLX1_AAMag_x2";
				count = 10;
			};

			class PLXAT_ORG
			{
				magazine = "ORG_aux_magazine_PLX1_ATMag_x2";
				count = 10;
			};

			class PLXHE_ORG
			{
				magazine = "ORG_aux_magazine_PLX1_HEMag_x2";
				count = 10;
			};

			class RPS6AT_ORG
			{
				magazine = "ORG_aux_magazine_RPS6_ATMag_x1";
				count = 20;
			};

			class RPS6AA_ORG
			{
				magazine = "ORG_aux_magazine_RPS6_AAMag_x1";
				count = 20;
			};

			class RPS4AT_ORG
			{
				magazine = "ORG_aux_magazine_RPS4_AT_x1";
				count = 20;
			};

			class RPS4HE_ORG
			{
				magazine = "ORG_aux_magazine_RPS4_HE_x1";
				count = 20;
			};

			class DC15xATR_ORG
			{
				magazine = "ORG_aux_magazine_DC_15x_x2";
				count = 20;
			};

			class Dm17HeartStarter_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_HeartStarter_x1";
				count = 50;
			};

			class Dm17Bacta_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_Bacta_x1";
				count = 25;
			};

			class Dm17Kolto_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_Kolto_x1";
				count = 25;
			};

			class Dm17CombatStim_ORG
			{
				magazine = "ORG_aux_magazine_DM_17_CombatStim_x1";
				count = 50;
			};
		};
    };
};