#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class 332nd_LAAT_Cargo
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Air_F"
		};
		units[]=
		{
			MACRO_NEW_VEHICLE(air,LAAT,Cargo)
		};
		weapons[]={};
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
	class MACRO_NEW_VEHICLE(air,LAAT,Cargo)
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this select 0) setVariable [""lockState"", 0, true]; (_this select 0) setVariable [""ls_traumaState"", 0, true]; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor; [_this select 0,"""",[15,16,17,18,19,20]] call ls_vehicle_fnc_laatCargoTurretPhase;";
		};
	};
};

class CfgVehicles
{
	class Helicopter_Base_F;
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class HitPoints;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class CargoTurret;
		class ACE_selfActions;
		class Components;
		class Turrets;
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
	};

	class MACRO_NEW_VEHICLE(air,LAAT,Cargo): B_Heli_Attack_01_base_F
	{
		author="332nd Aux Team";
		_generalMacro="332_laat_C";
		scope=2;

		attendant = true;
		ace_rearm_defaultSupply = 300000;
		ace_refuel_fuelCargo = 3000;
		ace_repair_canRepair = 1;
		ace_refuel_fuelCapacity = 1400;
		ace_refuel_flowRate = 4;
		ace_refuel_canReceive = 1;


		hiddenSelections[] = 
		{ 
			"camo",
			"camo1" 
		};

		hiddenSelectionsTextures[] = 
		{ 
			"3AS\3AS_LAATC\data\Camo_0_co.paa",
			"3AS\3AS_LAATC\data\Camo_1_co.paa" 
		};

		crew = MACRO_NEW_UNIT(aviation,332nd_flight_cadet);

		availableforsupporttypes[]=
		{
			"Transport"
		};
		cost="3e+006";
		side=1;
		ls_impulsor_fuelDrain_1=0.00005;
        ls_impulsor_fuelDrain_2=0.00005;
        ls_impulsor_boostSpeed_1=400;
        ls_impulsor_boostSpeed_2=600;
        ls_hasImpulse=1;
		forceInGarage = 1;
		armor = 500 * 0.5;
		class EventHandlers
        {
	        init = "(_this select 0) spawn ls_vehicle_fnc_impulseMonitor";
        };
		faction = "EdCat_332nd";
        editorSubcategory = "EdSubcat_332nd_HELI";
		displayName="LAAT/C Mk 1";
		model="3AS\3AS_LAATC\3AS_LAAT_C.p3d";
		icon="\3AS\3as_Laat\LAATI\data\ui\Map_laat_CA.paa";
		picture="\3AS\3as_Laat\LAATI\data\ui\LAAT_Profile_ca.paa";
		editorpreview="\3AS\3as_Laat\LAATI\data\editorpreview\3as_laat.jpg";
		memoryPointTaskMarker="TaskMarker_1_pos";
		cargoaction[]=
		{
			"passenger_boat_holdleft",
			"passenger_boat_holdleft",
			"passenger_boat_holdleft"
		};
		driveOnComponent[]=
		{
			"Skids"
		};
		accuracy=0.5;
		tas_canLift=1;
		draconicForceXCoef=11;
		draconicForceYCoef=2;
		draconicForceZCoef=2;
		draconicTorqueXCoef=0.050000001;
		draconicTorqueYCoef=0;
		geardowntime=1.5;
		gearretracting=0;
		gearuptime=1.5;
		gearMinAlt=0;
		gearsUpFrictionCoef=0.001;
		nameSound="veh_helicopter_s";
		fuelCapacity=3000;
		fuelConsumptionRate=0.12;
		mainBladeRadius=0.1;
		liftForceCoef=3;
		bodyFrictionCoef=11;
		cyclicAsideForceCoef=5;
		cyclicForwardForceCoef=3;
		backRotorForceCoef=2;
		acceleration=450;
		maxSpeed=600;
		brakeDistance=400;
		mainRotorSpeed=-1;
		backRotorSpeed=2;
		maxMainRotorDive=7;
		minMainRotorDive=-7;
		neutralMainRotorDive=0;

		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[]={3.2,0,0};
			defaultCollective=0.7;
			retreatBladeStallWarningSpeed=83;
			maxTorque=5800;
			stressDamagePerSec=0.0099999998;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=8000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
		};
		startDuration=4.5;
		castDriverShadow=0;
		canFloat=1;
		waterLeakiness=0.2;
		waterResistanceCoef=0.89999998;
		waterResistance=1;
		waterLinearDampingCoefY=3;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=3;
		maxFordingDepth=110.65;
		armorStructural=1;
		altFullForce=10000;
		altNoForce=15000;
		crewCrashProtection=1;
		explosionShielding=0.33000001;
		epeImpulseDamageCoef=0;
		soundengineonint[] =
		{
			"332nd_weapons\sounds\vehicles\LAAT\int_start.wss",
			1,
			1
		};
		soundengineonext[] =
		{
			"332nd_weapons\sounds\vehicles\LAAT\ext_start.wss",
			1,
			1,
			300
		};
		soundengineoffint[] =
		{
			"\332nd_weapons\sounds\vehicles\LAAT\Int_Off.wss",
			1,
			1
		};
		soundengineoffext[] =
		{
			"\332nd_weapons\sounds\vehicles\LAAT\Ext_Off.wss",
			1,
			1,
			300
		};


		class sounds
		{
			class engineext
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\tail_rotor.wss",
					1.5,
					1,
					300
				};
				frequency = "rotorspeed";
				volume = "campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
			};
			class rotorext
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_close.wss",
					1.6,
					1,
					300
				};
				frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
				volume = "campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
			};
			class rotorswist
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\tail_rotor.wss",
					1,
					1,
					400
				};
				frequency = 1;
				volume = "campos * (rotorthrust factor [0.7, 0.9])";
			};
			class engineint
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Int_main.wss",
					1,
					1
				};
				frequency = "rotorspeed";
				volume = "1*(1-campos)*(0 max (rotorspeed-0.4))";
			};
			class rotorint
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Int_rotor.wss",
					1,
					1
				};
				frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
				volume = "(1 - campos) * (rotorspeed factor [0.3, 0.7]) * (1 + rotorthrust) * 0.7";
			};
			class rotorbench
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
					0.75,
					1
				};
				frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
				volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust) * 0.4";
				cone[] = { 1.6,3.1400001,1.6,0.94999999 };
			};
			class enginebench
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
					0.75,
					1
				};
				frequency = "rotorspeed";
				volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (0 max (rotorspeed-0.4))";
			};
			class rotornoiseext
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
					0.5,
					1,
					200
				};
				frequency = 1;
				volume = "(campos*(rotorspeed factor [0.6, 0.85]))";
				cone[] = { 1.6,3.1400001,2,0.94999999 };
			};
			class distance
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Engine_Far.wss",
					1,
					1,
					1500
				};
				frequency = "rotorspeed";
				volume = "2 * campos * (0 max (rotorspeed-0.4))";
			};
			class fardistance
			{
				sound[] =
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Far.wss",
					1.25,
					1,
					8000
				};
				frequency = "rotorspeed";
				volume = "campos *3* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
			};
			//class damagealarmint
			//{
			//	sound[]=
			//	{
			//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",
			//		0.75,
			//		1
			//	};
			//	frequency=1;
			//	volume="engineon * (1 - campos) * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0.0, 0.001])";
			//};
			//class damagealarmext
			//{
			//	sound[]=
			//	{
			//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",
			//		1,
			//		1,
			//		100
			//	};
			//	frequency=1;
			//	volume="engineon * campos * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0, 0.001])";
			//};
			//class rotorlowalarmint
			//{
			//	sound[]=
			//	{
			//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",
			//		0.75,
			//		1
			//	};
			//	frequency=1;
			//	volume="engineon * (1 - campos) * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			//};
			//class rotorlowalarmext
			//{
			//	sound[]=
			//	{
			//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",
			//		1,
			//		1,
			//		75
			//	};
			//	frequency=1;
			//	volume="engineon * campos * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			//};

		};
		class SoundsExt
		{
			class Sounds : Sounds
			{
				class EngineExt
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Engine_Close.wss",
						1.5,
						1,
						300
					};
					frequency = "rotorspeed";
					volume = "campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
				};
				class rotorext
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						1.6,
						1,
						300
					};
					frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
					volume = "campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
				};
				class rotorswist
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\tail_rotor.wss",
						1,
						1,
						200
					};
					frequency = 1;
					volume = "campos * (rotorthrust factor [0.7, 0.9])";
				};
				class engineint
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Int_main.wss",
						1,
						1
					};
					frequency = "rotorspeed";
					volume = "1*(1-campos)*(0 max (rotorspeed-0.4))";
				};
				class rotorint
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Int_Rotor.wss",
						1,
						1
					};
					frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
					volume = "(1 - campos) * (rotorspeed factor [0.3, 0.7]) * (1 + rotorthrust) * 0.7";
				};
				class rotorbench
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						0.75,
						1
					};
					frequency = "(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
					volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust) * 0.4";
					cone[] = { 1.6,3.1400001,1.6,0.94999999 };
				};
				class enginebench
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						0.75,
						1
					};
					frequency = "rotorspeed";
					volume = "(playerpos factor [3.9, 4]) * (1 - campos) * (0 max (rotorspeed-0.4))";
				};

				class rotornoiseext
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						0.5,
						1,
						200
					};
					frequency = 1;
					volume = "(campos*(rotorspeed factor [0.6, 0.85]))";
					cone[] = { 1.6,3.1400001,2,0.94999999 };
				};
				class distance
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Engine_Far.wss",
						1,
						1,
						2500
					};
					frequency = "rotorspeed";
					volume = "2 * campos * (0 max (rotorspeed-0.4))";
				};
				class fardistance
				{
					sound[] =
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Far.wss",
						1.25,
						1,
						8000
					};
					frequency = "rotorspeed";
					volume = "campos *3* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
				};
				//class damagealarmint
				//{
				//	sound[]=
				//	{
				//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",
				//		0.75,
				//		1
				//	};
				//	frequency=1;
				//	volume="engineon * (1 - campos) * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0.0, 0.001])";
				//};
				//class damagealarmext
				//{
				//	sound[]=
				//	{
				//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\damagealarm.ogg",
				//		1,
				//		1,
				//		100
				//	};
				//	frequency=1;
				//	volume="engineon * campos * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0, 0.001])";
				//};
				//class rotorlowalarmint
				//{
				//	sound[]=
				//	{
				//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",
				//		0.75,
				//		1
				//	};
				//	frequency=1;
				//	volume="engineon * (1 - campos) * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				//};
				//class rotorlowalarmext
				//{
				//	sound[]=
				//	{
				//		"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\lowrotoralarmint.ogg",
				//		1,
				//		1,
				//		75
				//	};
				//	frequency=1;
				//	volume="engineon * campos * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				//};
			};
		};
		class ACE_SelfActions :ACE_SelfActions
		{

			class 332nd_aux_HUD_Changer
			{
				displayName = "Change HUD Color :)";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2.5;
				icon = MACRO_HUD_CHANGER_ICONS\colorWheel.paa;
				class 332nd_aux_Red_HUD
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

				class 332nd_aux_Orange_HUD :332nd_aux_Red_HUD
				{
					displayName = "Orange HUD Color";
					statement = [1,.05,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\orange.paa;

				};

				class 332nd_aux_Yellow_HUD :332nd_aux_Red_HUD
				{
					displayName = "Yellow HUD Color";
					statement = [1,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
					icon = MACRO_HUD_CHANGER_ICONS\yellow.paa;

				};

				class 332nd_aux_Green_HUD :332nd_aux_Red_HUD
				{
					displayName = "Green HUD Color";
				//condition = "true";
				statement = [0,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\green.paa;
				// showDisabled = 0;
				// priority = 2.5;
				};

				class 332nd_aux_Cyan_HUD :332nd_aux_Red_HUD
			 {
				displayName = "Cyan HUD Color";
				statement = [0,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\cyan.paa;

			};

			class 332nd_aux_Blue_HUD :332nd_aux_Red_HUD
			{
				displayName = "Blue HUD Color";
				statement = [0,0,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\blue.paa;

			};

			class 332nd_aux_Purple_HUD :332nd_aux_Red_HUD
			{
				displayName = "Purple HUD Color";
				statement = [.5,0,.5,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\purple.paa;

			};

			class 332nd_aux_White_HUD :332nd_aux_Red_HUD
			{
				displayName = "White HUD Color";
				statement = [1,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\white.paa;

			};

			class 332nd_aux_Black_HUD :332nd_aux_Red_HUD
			{
				displayName = "Black HUD Color";
				statement = [0,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\black.paa;

			};

			class 332nd_aux_Clear_HUD :332nd_aux_Red_HUD
			{
				displayName = "No HUD Color";
				statement = [1,1,1,0,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\noHud.paa;

			};
			};
		};
		class HitPoints : HitPoints
        {
            class HitHull : HitHull
            {
                armor = 999;
                convexComponent = "hull_hit";
                depends = "Total";
                explosionShielding = 1;
                material = 51;
                name = "hull_hit";
                passThrough = 1;
                visual = "zbytek";
                radius = 0.01;
            };
            class HitFuel : HitFuel
            {
                convexcomponent = "fuel_hit";
                hitpoint = "fuel_hit";
                name = "fuel_hit";
                explosionShielding = 2;
                radius = 0.1;
                visual = "";
                passthrough = 0.1;
                minimalhit = 0.1;
                material = -1;
                armor = 0.6 * 5;
            };
            class HitEngine : HitEngine
            {
                armor = 1;
                convexComponent = "engine_hit";
                explosionShielding = 2;
                material = 51;
                name = "engine_hit";
                hitpoint = "engine_hit";
                passThrough = 1;
                visual = "";
                radius = 0.2 * 5;
                minimalHit = 0.6;
            };
            class HitHRotor : HitHRotor
            {
                armor = 3 * 5;
                convexComponent = "main_rotor_hit";
                explosionShielding = 2.5;
                material = 51;
                name = "main_rotor_hit";
                passThrough = 0.1;
                visual = "";
                radius = 0.01;
            };
            class HitVRotor : HitVRotor
            {
                armor = 3 * 5;
                convexComponent = "tail_rotor_hit";
                explosionShielding = 6;
                material = 51;
                name = "tail_rotor_hit";
                passThrough = 0.3;
                visual = "";
                radius = 0.01;
            };
            class HitAvionics : HitAvionics
            {
                armor = 1 * 5;
                convexComponent = "avionics_hit";
                explosionShielding = 2;
                material = 51;
                name = "avionics_hit";
                passThrough = 1;
                visual = "";
                radius = 0.5;
                minimalHit = 0.6;
            };
        };
		class AnimationSources
		{
			class Clamp_Hinges
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Clamp
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="swlb_a_vehicle\laat\data\ui\laat_ui.paa";
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
						attachment="332nd_aux_magazine_Pylon_AGM_Med_x3";
						priority=3;
						hardpoints[]=
						{
							"332_B_Pylon"
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
		};
		class UserActions
		{
			class LoadCargo
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "pilotview";
				showWindow = 0;
				radius = 5;
				priority = 1;
				onlyForPlayer = 0;
				condition = "((speed this < 5) AND (player == currentPilot vehicle player))";
				statement = "0 = [this] spawn TAS_fnc_Maglift;";
			};
			class UnLoadCargo
			{
				userActionID = 7;
				displayName = "Unload Vehicles";
				displayNameDefault = "Unload Vehicles";
				textToolTip = "Unload Vehicles";
				position = "pilotview";
				showWindow = 0;
				radius = 15;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(count(this getVariable [""TAS_Loaded"",[]]) > 0)";
				statement = "0 = [this] spawn TAS_fnc_MagDrop;";
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
		class RenderTargets
		{
			class mfd
			{
				renderTarget="rendertarget0";
				class CargoView
				{
					pointPosition="Pip_Pos";
					pointDirection="Pip_Dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
				};
			};
		};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		slingLoadMaxCargoMass=5000000;
		radarType=8;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		driverAction="LAAT_Pilot";
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
		memoryPointsGetInDriverPrecise="pos_driver";
		memorypointsgetindriver="pos_driver";
		memorypointsgetindriverdir="pos_driver_dir";
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
		getInRadius=10;
		typicalCargo[]=
		{
			"B_HeliPilot_F"
		};
		memorypointlmissile="Rocket_1";
		memorypointrmissile="Rocket_2";
		memoryPointLRocket="Rocket_1";
		memoryPointRRocket="Rocket_2";
		weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            MACRO_NEW_WEAPON(LAAT_40mm), MACRO_NEW_WEAPON(air_dumb_rocketpod), 
        };
        magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            MACRO_NEW_MAG(LAAT_40mm,600),
            MACRO_NEW_MAG(Air_Dumb_rocket,24),
			MACRO_NEW_MAG(Air_Dumb_rocket,24),
        };
		memoryPointGun[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunBeg[]=
		{
			"z_gunL_muzzle",
			"z_gunR_muzzle"
		};
		gunEnd[]=
		{
			"z_gunL_chamber",
			"z_gunR_chamber"
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
		class SpeechVariants
		{
			class Default
			{
				speechplural[]=
				{
					"veh_air_gunship_p"
				};
				speechsingular[]=
				{
					"veh_air_gunship_s"
				};
			};
		};
		scopeCurator=2;
		transportsoldier=0;
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
				maxLoadMass=200000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0.15000001,0};
				exits[]=
				{
					"exit"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
		};
	};
};
