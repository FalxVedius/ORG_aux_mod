#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_LAAT_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\air\LAAT
class CfgPatches
{
    class MACRO_PATCH_NAME(laat)
    {
        author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
        requiredAddons[] =
        {
            MACRO_PATCH_NAME(air_vehicles)
        };
        requiredVersion = 0.1;
        units[] = {
            MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd),
            MACRO_NEW_VEHICLE(air,LAATle,LAATle_332nd),
			MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_AB),
        };
        weapons[] = {};
    };
};

class SensorTemplatePassiveRadar;
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

class CfgFunctions
{
    class ResupplyAir
    {
        class myCategory
        {
            class AddCratesToInventory
            {
                file = "332nd_vehicles\air\LAAT\fnc_spawnResupplyCrates.sqf";
            };
        };
    };
};

class Extended_init_EventHandlers
{
	class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd)
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle; }; (_this select 0) setVariable [""lockState"", 0, true]; (_this select 0) setVariable [""ls_traumaState"", 0, true]; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor; [_this select 0,"""",[15,16,17,18,19,20]] call ls_vehicle_fnc_laatCargoTurretPhase;";
		};
	};
	class MACRO_NEW_VEHICLE(air,LAATle,LAATle_332nd)
	{
		class laat_init_eh
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [""hidedoor1"", 0, ""hidedoor4"",0], false] call bis_fnc_initVehicle; }; (_this select 0) setVariable [""lockState"", 0, true]; (_this select 0) setVariable [""ls_traumaState"", 0, true]; (_this) spawn ls_vehicle_fnc_ImpulsorMonitor; ";
		};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Items_base_F;
	class Wreck_base_F;

	class Helicopter_Base_F : Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
	};

	class Helicopter_Base_H : Helicopter_Base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
	};

    class lsd_laat_base : Helicopter_Base_H
    {
	    class Components;
		class Reflectors;
		class Turrets : Turrets
		{
			class MainTurret;
			class cargoTurret_rearl;
			class cargoTurret_rearr;
			class cargoturret_left_1;
			class cargoTurret_left_2;
			class cargoTurret_left_3;
			class cargoTurret_left_4;
			class cargoTurret_left_5;
			class cargoTurret_left_14;
			class cargoturret_right_1;
			class cargoTurret_right_2;
			class cargoTurret_right_3;
			class cargoTurret_right_4;
			class cargoTurret_right_5;
			class CargoTurret_right_13;
			class CargoTurret_right_17;
			class CargoTurret_right_18;
			class CargoTurret_right_19;
			class CargoTurret_left_20;
			class CargoTurret_left_21;
			class CargoTurret_left_22;

		};
    };

    class lsd_heli_laati : lsd_laat_base
    {
		class Components;
		class ACE_selfActions;
		class sounds;
		class SoundsExt;
		class SoundEvents;
		class Reflectors : Reflectors
		{
			class Left;
			class Right;
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
			class cargoTurret_rearl : cargoTurret_rearl
			{
				
			};
			class cargoTurret_rearr : cargoTurret_rearr
			{

			};
			class cargoturret_left_1 : cargoturret_left_1
			{

			};
			class cargoTurret_left_2 : cargoTurret_left_2
			{

			};
			class cargoTurret_left_3 : cargoTurret_left_3
			{

			};
			class cargoTurret_left_4 : cargoTurret_left_4
			{

			};
			class cargoTurret_left_5 : cargoTurret_left_5
			{

			};
			class cargoTurret_left_14 : cargoTurret_left_14
			{

			};
			class cargoturret_right_1 : cargoturret_right_1
			{

			};
			class cargoTurret_right_2 : cargoTurret_right_2
			{

			};
			class cargoTurret_right_3 : cargoTurret_right_3
			{

			};
			class cargoTurret_right_4 : cargoTurret_right_4
			{

			};
			class cargoTurret_right_5 : cargoTurret_right_5
			{

			};
			class CargoTurret_right_13 : CargoTurret_right_13
			{

			};
			class CargoTurret_right_17 : CargoTurret_right_17
			{

			};
			class CargoTurret_right_18 : CargoTurret_right_18
			{

			};
			class CargoTurret_right_19 : CargoTurret_right_19
			{

			};
			class CargoTurret_left_20 : CargoTurret_left_20
			{

			};
			class CargoTurret_left_21 : CargoTurret_left_21
			{

			};
			class CargoTurret_left_22 : CargoTurret_left_22
			{

			};
		};

		class HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitEngine_1;
			class HitEngine_2;
			class HitHRotor;
			class HitVRotor;
			class HitAvionics;
		};
    };

	class ls_laatle_base : Helicopter_Base_H
	{
		class Components;
		class Turrets : Turrets
		{
			class MainTurret;
			class cargoTurret_pos7;
			class cargoTurret_pos8;
			class cargoTurret_pos9;
			class cargotTurret_pos10;
			class cargoTurret_pos11;
			class cargoTurret_pos12;
			class cargoTurret_leftDoor_pos13;
			class cargoTurret_leftDoor_pos14;
			class cargoTurret_rightDoor_pos15;
			class cargoTurret_rightDoor_pos16;
		};
	};

	class Heli_Attack_01_base_F;

	class 3AS_Patrol_LAAT_Base : Heli_Attack_01_base_F
	{
		class Turrets;
	};

	class 3AS_Patrol_LAAT_Republic : 3AS_Patrol_LAAT_Base
	{
		class Components;

		class Turrets : Turrets
		{
			class MainTurret;
			class Copilot;
		};

	};

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base):  lsd_heli_laati
    {
        displayName = "LAAT Mk1 Base";
        scope = 0;
		crewCrashProtection=1;
        faction = "EdCat_332nd";
        editorSubcategory = "EdSubcat_332nd_HELI";

		cargoAction[] = { "passenger_flatground_leanright","passenger_flatground_leanleft","passenger_boat_holdright","passenger_boat_holdleft","passenger_boat_holdleft","passenger_boat_holdright","passenger_boat_holdleft","passenger_boat_holdright","passenger_boat_holdleft","passenger_boat_holdright","passenger_boat_holdleft","passenger_boat_holdright","passenger_boat_holdleft","passenger_boat_holdright","passenger_boat_holdleft","passenger_boat_holdright" };


		transportsoldier = 16;
		memoryPointsGetInCargo[] = { "pos cargo 5", "pos cargo 18"};
		memoryPointsGetInCargoDir[] = { "pos_cargo_dir" };
		memoryPointsGetInCargoPrecise[] = { "" };

		maximumLoad = 10000;

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
        class EventHandlers
        {
            init = "[_this, 'AmmoBox_332nd', 'MedicalBox_332nd'] spawn ResupplyAir_fnc_AddCratesToInventory;"
        };
        ls_impulsor_fuelDrain_1=0.00005;
        ls_impulsor_fuelDrain_2=0.00005;

        hiddenselections[] = {
            "body","body_2",
            "door_1","door_2","door_3",
            "wings",
            "missiles",
            "cockpits","glass",
            "clan",
            "zasleh_l","zasleh_r","zasleh_b"
        };

        hiddenselectionstextures[] = {
            MACRO_LAAT_TEXTURES\Base\Body\body1_co.paa,"lsd_vehicles_heli\laati\data\body2_co.paa",
            MACRO_LAAT_TEXTURES\Base\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Base\Doors\Doors2\door2_co.paa,"lsd_vehicles_heli\laati\data\door3_co.paa",
            MACRO_LAAT_TEXTURES\Base\Wings\wings_co.paa,
            "lsd_vehicles_heli\laati\data\missiles_co.paa",
            MACRO_LAAT_TEXTURES\Base\Cockpit\cockpits_co.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
        };

        crew = MACRO_NEW_UNIT(aviation,332nd_flight_cadet);
        typicalcargo[] = { MACRO_NEW_UNIT(aviation,332nd_flight_cadet) };

		soundengineonint[]=
		{
			"332nd_weapons\sounds\vehicles\LAAT\int_start.wss",
			1,
			1
		};
		soundengineonext[]=
		{
			"332nd_weapons\sounds\vehicles\LAAT\ext_start.wss",
			1,
			1,
			300
		};
		soundengineoffint[]=
		{
			"\332nd_weapons\sounds\vehicles\LAAT\Int_Off.wss",
			1,
			1
		};
		soundengineoffext[]=
		{
			"\332nd_weapons\sounds\vehicles\LAAT\Ext_Off.wss",
			1,
			1,
			300
		};
		//soundincommingmissile[]=
		//{
		//	"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\opfor_lock_2.ogg",
		//	0.75,
		//	1
		//};
		//rotordamageint[]=
		//{
		//	"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_rotor_int.ogg",
		//	0.75,
		//	1
		//};
		//rotordamageout[]=
		//{
		//	"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_rotor_ext.ogg",
		//	2,
		//	1,
		//	300
		//};
		//rotordamage[]=
		//{
		//	"rotordamageint",
		//	"rotordamageout"
		//};
		//taildamageint[]=
		//{
		//	"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_tail.ogg",
		//	0.75,
		//	1
		//};
		//taildamageout[]=
		//{
		//	"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\shared\heli_damage_tail.ogg",
		//	2,
		//	1,
		//	300
		//};
		//taildamage[]=
		//{
		//	"taildamageint",
		//	"taildamageout"
		//};
		
		
		class sounds
		{
			class engineext
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\tail_rotor.wss",
					1.5,
					1,
					300
				};
				frequency="rotorspeed";
				volume="campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
			};
			class rotorext
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_close.wss",
					1.6,
					1,
					300
				};
				frequency="(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
				volume="campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
			};
			class rotorswist
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\tail_rotor.wss",
					1,
					1,
					400
				};
				frequency=1;
				volume="campos * (rotorthrust factor [0.7, 0.9])";
			};
			class engineint
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Int_main.wss",
					1,
					1
				};
				frequency="rotorspeed";
				volume="1*(1-campos)*(0 max (rotorspeed-0.4))";
			};
			class rotorint
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Int_rotor.wss",
					1,
					1
				};
				frequency="(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
				volume="(1 - campos) * (rotorspeed factor [0.3, 0.7]) * (1 + rotorthrust) * 0.7";
			};
			class rotorbench
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
					0.75,
					1
				};
				frequency="(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
				volume="(playerpos factor [3.9, 4]) * (1 - campos) * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust) * 0.4";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class enginebench
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
					0.75,
					1
				};
				frequency="rotorspeed";
				volume="(playerpos factor [3.9, 4]) * (1 - campos) * (0 max (rotorspeed-0.4))";
			};
			class rotornoiseext
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
					0.5,
					1,
					200
				};
				frequency=1;
				volume="(campos*(rotorspeed factor [0.6, 0.85]))";
				cone[]={1.6,3.1400001,2,0.94999999};
			};
			class distance
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Engine_Far.wss",
					1,
					1,
					1500
				};
				frequency="rotorspeed";
				volume="2 * campos * (0 max (rotorspeed-0.4))";
			};
			class fardistance
			{
				sound[]=
				{
					"332nd_weapons\sounds\vehicles\LAAT\Rotor_Far.wss",
					1.25,
					1,
					8000
				};
				frequency="rotorspeed";
				volume="campos *3* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
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
		class SoundsExt: SoundsExt
		{
			class Sounds: Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Engine_Close.wss",
						1.5,
						1,
						300
					};
					frequency="rotorspeed";
					volume="campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
				};
				class rotorext
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						1.6,
						1,
						300
					};
					frequency="(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
					volume="campos *1.5* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
				};
				class rotorswist
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\tail_rotor.wss",
						1,
						1,
						200
					};
					frequency=1;
					volume="campos * (rotorthrust factor [0.7, 0.9])";
				};
				class engineint
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Int_main.wss",
						1,
						1
					};
					frequency="rotorspeed";
					volume="1*(1-campos)*(0 max (rotorspeed-0.4))";
				};
				class rotorint
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Int_Rotor.wss",
						1,
						1
					};
					frequency="(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
					volume="(1 - campos) * (rotorspeed factor [0.3, 0.7]) * (1 + rotorthrust) * 0.7";
				};
				class rotorbench
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						0.75,
						1
					};
					frequency="(rotorspeed factor [0.3, 0.7]) * (rotorspeed factor [0.3, 1]) * (1 - rotorthrust/4)";
					volume="(playerpos factor [3.9, 4]) * (1 - campos) * (rotorspeed factor [0.3, 1]) * (1 + rotorthrust) * 0.4";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class enginebench
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						0.75,
						1
					};
					frequency="rotorspeed";
					volume="(playerpos factor [3.9, 4]) * (1 - campos) * (0 max (rotorspeed-0.4))";
				};
				
				class rotornoiseext
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Close.wss",
						0.5,
						1,
						200
					};
					frequency=1;
					volume="(campos*(rotorspeed factor [0.6, 0.85]))";
					cone[]={1.6,3.1400001,2,0.94999999};
				};
				class distance
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Engine_Far.wss",
						1,
						1,
						2500
					};
					frequency="rotorspeed";
					volume="2 * campos * (0 max (rotorspeed-0.4))";
				};
				class fardistance
				{
					sound[]=
					{
						"332nd_weapons\sounds\vehicles\LAAT\Rotor_Far.wss",
						1.25,
						1,
						8000
					};
					frequency="rotorspeed";
					volume="campos *3* (rotorspeed factor [0.6, 1]) * (1 + rotorthrust)";
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
			//	class Presets
			//	{
			//		class Empty
			//		{
			//			displayName="Empty";
			//			attachment[]={};
			//		};
			//		class Default
			//		{
			//			displayName="Default";
			//			attachment[]=
			//			{
			//				"PylonMissile_1Rnd_AAA_missiles",
			//				"PylonMissile_1Rnd_AAA_missiles",
			//				"PylonRack_12Rnd_PG_missiles",
			//				"PylonRack_12Rnd_PG_missiles",
			//				"PylonMissile_1Rnd_AAA_missiles",
			//				"PylonMissile_1Rnd_AAA_missiles"
			//			};
			//		};
			//		class AT
			//		{
			//			displayName="AT";
			//			attachment[]=
			//			{
			//				"PylonRack_12Rnd_PG_missiles",
			//				"PylonMissile_1Rnd_LG_scalpel",
			//				"PylonRack_12Rnd_PG_missiles",
			//				"PylonRack_12Rnd_PG_missiles",
			//				"PylonMissile_1Rnd_LG_scalpel",
			//				"PylonRack_12Rnd_PG_missiles"
			//			};
			//		};
			//		class CAS
			//		{
			//			displayName="CAS";
			//			attachment[]=
			//			{
			//				"PylonRack_12Rnd_missiles",
			//				"PylonMissile_1Rnd_AAA_missiles",
			//				"PylonRack_12Rnd_missiles",
			//				"PylonRack_12Rnd_missiles",
			//				"PylonMissile_1Rnd_AAA_missiles",
			//				"PylonRack_12Rnd_missiles"
			//			};
			//		};
			//	};
			};
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				stabilizedInAxes = 3;
				weapons[] = {
					MACRO_AIR_COMMON_WEAPS,
					MACRO_NEW_WEAPON(LAAT_40mm)

				};
				magazines[] = {
					MACRO_AIR_COMMON_MAGS,
					MACRO_NEW_MAG(LAAT_40mm,600),
					MACRO_NEW_MAG(LAAT_40mm,600),
				};
			};
		};

        class UserActions
        {
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

		defaultUserMFDvalues[] = { 0,1,0,1,0 };
		//user0,1 and 2 are RGB
		//user3 is alpha
		//user4 is tailhook --not used--
		//@@@@@ Keep the comments in this MFD area please	
		//color[]={"user0","user1","user2"}; alpha = "user3"
		//by namenai :wave:
		class MFD
		{
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax = 1;//0;
				helmetMountedDisplay = 1;
				helmetPosition[] = { -0.0325,0.0325,0.1 };
				helmetRight[] = { 0.065,0.0,0.0 };
				helmetDown[] = { 0.0,-0.065,0.0 };
				font = "PuristaLight";
				class Pos10Vector
				{
					type = "vector";
					pos0[] = { 0.5,0.5 };
					pos10[] = { 1.225,1.1 };
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = { "user0","user1","user2" };//color[] = {0.082, 0.408, 0.039, 1};
				//yikes
				class Bones
				{
					class ThrustVectoringRotation
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = { 0.12,0.75 };//
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};

					class PlaneW
					{
						type = "fixed";
						pos[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class Velocity : Pos10Vector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class PlaneOrientation
					{
						type = "vector";
						source = "forward";
						pos[] = { 0.5,0.5 };
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class ThrustVectoringRotation2
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = { 0.06,0.145 };
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1.0;
						center[] = { 0,0 };
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.985402;
					};
					class MissileFlightTimeRot2 : MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3 : MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4 : MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5 : MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6 : MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7 : MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8 : MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9 : MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10 : MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11 : MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12 : MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13 : MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14 : MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15 : MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16 : MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17 : MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18 : MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19 : MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20 : MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class TargetingPodTarget
					{
						source = "pilotcameratargettoview";
						type = "vector";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class ImpactPointRelative
					{
						type = "vector";
						source = "impactpointtoviewweaponRelative";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class NormalizeBombCircle
					{
						type = "normalizedorsmaller";
						limit = 0.08;
						aspectRatio = 0.985402;
					};
					class Limit0109
					{
						type = "limit";
						limits[] = { 0.1,0.1,0.9,0.9 };
					};
					class LimitWaypoint
					{
						type = "limit";
						limits[] = { 0.2,0.1,0.8,0.1 };
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class WPPointToView : WPPoint
					{
						source = "WPPointToView";
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1ToView";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.774,0.77 };
					};
					class Airport2 : Airport1
					{
						source = "airportCorner2ToView";
					};
					class Airport3 : Airport1
					{
						source = "airportCorner3ToView";
					};
					class Airport4 : Airport1
					{
						source = "airportCorner4ToView";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = { 0.5,0.5 };
						pos3[] = { 0.5822,0.5 };
					};
					class ILS_W : ILS_H
					{
						pos3[] = { 0.5,0.581 };
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = { 0.5,0.5 };
						min = "-rad(30)";
						max = "rad(30)";
						minAngle = "180.25-30";
						maxAngle = "180.75+30";
						aspectRatio = 1;
					};
					class Level0 : Pos10Vector
					{
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.884,0.88 };
						type = "horizontoview";
						angle = 0;
					};
					class LevelP5 : Level0
					{
						angle = 5;
					};
					class LevelM5 : Level0
					{
						angle = -5;
					};
					class LevelP10 : Level0
					{
						angle = 10;
					};
					class LevelM10 : Level0
					{
						angle = -10;
					};
					class LevelP15 : Level0
					{
						angle = 15;
					};
					class LevelM15 : Level0
					{
						angle = -15;
					};
					class LevelP20 : Level0
					{
						angle = 20;
					};
					class LevelM20 : Level0
					{
						angle = -20;
					};
					class LevelP25 : Level0
					{
						angle = 25;
					};
					class LevelM25 : Level0
					{
						angle = -25;
					};
					class LevelP30 : Level0
					{
						angle = 30;
					};
					class LevelM30 : Level0
					{
						angle = -30;
					};
					class LevelP35 : Level0
					{
						angle = 35;
					};
					class LevelM35 : Level0
					{
						angle = -35;
					};
					class LevelP40 : Level0
					{
						angle = 40;
					};
					class LevelM40 : Level0
					{
						angle = -40;
					};
					class LevelP45 : Level0
					{
						angle = 45;
					};
					class LevelM45 : Level0
					{
						angle = -45;
					};
					class LevelP50 : Level0
					{
						angle = 50;
					};
					class LevelM50 : Level0
					{
						angle = -50;
					};
					class LevelP60 : Level0
					{
						angle = 60;
					};
					class LevelM60 : Level0
					{
						angle = -60;
					};
					class LevelP70 : Level0
					{
						angle = 70;
					};
					class LevelM70 : Level0
					{
						angle = -70;
					};
					class LevelP80 : Level0
					{
						angle = 80;
					};
					class LevelM80 : Level0
					{
						angle = -80;
					};
					class LevelP90 : Level0
					{
						angle = 90;
					};
					class LevelM90 : Level0
					{
						angle = -90;
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1.0;
						min = 0;
						max = 1;
						minPos[] = { 0.0,1.0 };
						maxPos[] = { 0.0,0.0 };
					};
					class LarAmmoMin : LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist : LarAmmoMax
					{
						source = "LarTargetDist";
					};
				};
				class Draw
				{
					width = 1.0;
					alpha = "user3";
					color[] = { "user0","user1","user2" };
					condition = "on";

					class ThrustVectoring
					{
						condition = "1+vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "vtolvectoring";
							sourceScale = 90;
							align = "left";
							scale = 1;
							pos[] = { {0.18,0.71},1 };
							right[] = { {"0.18+.05",0.71},1 };
							down[] = { {0.18,"0.71+.08"},1 };
						};
						class VectoringArrow
						{
							type = "line";
							width = 6.0;
							points[] = { {"ThrustVectoringRotation",{"-0.034","-0.006*4"},1},{"ThrustVectoringRotation",{"-0.044*2","0.0"},1},{"ThrustVectoringRotation",{"-0.034","0.006*4"},1},{"ThrustVectoringRotation",{"-0.034","-0.006*4"},1},{},{"ThrustVectoringRotation",{"-0.044","0.0"},1},{"ThrustVectoringRotation",{"-0.004","0.0"},1},{} };
						};


						// class ThrustVectoringText
						// {
						// 	type = "text";
						// 	source = "static";
						// 	text = "";
						// 	scale = 1;
						// 	sourceScale = 1;
						// 	align = "left";
						// 	pos[] = {{0.20,0.71},1};
						// 	right[] = {{"0.20+.05",0.71},1};
						// 	down[] = {{0.20,"0.71+.08"},1};
						// };


					};



					class ThrustVectoringAuto
					{
						condition = "-vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "AUTO";
							align = "left";
							scale = 1;
							// pos[] = {{0.103,0.14},1};
							// right[] = {{0.123,0.14},1};
							// down[] = {{0.103,0.155},1};
							pos[] = { {0.20,0.71},1 };
							right[] = { {"0.20+.05",0.71},1 };
							down[] = { {0.20,"0.71+.08"},1 };
						};
					};

					class ThrustVectoringAuto2
					{
						condition = "vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "MANUAL";
							align = "left";
							scale = 1;
							pos[] = { {0.103,0.14},1 };
							right[] = { {0.123,0.14},1 };
							down[] = { {0.103,0.155},1 };
						};
					};

					class PlaneW
					{
						clipTL[] = { 0.0,1.0 };
						clipBR[] = { 1.0,0.0 };
						type = "line";
						width = 3.0;
						points[] = { {"PlaneOrientation",{-0.04,0},1},{"PlaneOrientation",{-0.015,0},1},{"PlaneOrientation",{-0.0075,0.015},1},{"PlaneOrientation",{0.0,0},1},{"PlaneOrientation",{0.0075,0.015},1},{"PlaneOrientation",{0.015,0},1},{"PlaneOrientation",{0.04,0},1} };
					};
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 3.0;
						points[] = { {"Velocity",{0,-0.02},1},{"Velocity",{0.01,-0.01732},1},{"Velocity",{0.01732,-0.01},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.01},1},{"Velocity",{0.01,0.01732},1},{"Velocity",{0,0.02},1},{"Velocity",{-0.01,0.01732},1},{"Velocity",{-0.01732,0.01},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.01},1},{"Velocity",{-0.01,-0.01732},1},{"Velocity",{0,-0.02},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.04},1},{"Velocity",{0,-0.02},1} };
					};
					class MachineGunCrosshairGroup
					{
						type = "group";
						condition = "-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3.0;
							points[] = { {"ImpactPointRelative",{0.0,-0.0886861},1},{"ImpactPointRelative",{0.0,-0.0788321},1},{},{"ImpactPointRelative",{0.0,0.0886861},1},{"ImpactPointRelative",{0.0,0.0788321},1},{},{"ImpactPointRelative",{-0.09,0.0},1},{"ImpactPointRelative",{-0.08,0.0},1},{},{"ImpactPointRelative",{0.09,0.0},1},{"ImpactPointRelative",{0.08,0.0},1},{},{"ImpactPointRelative",{0.0,-0.0019708},1},{"ImpactPointRelative",{0.0,0.0019708},1},{},{"ImpactPointRelative",{-0.002,0.0},1},{"ImpactPointRelative",{0.002,0.0},1},{} };
						};
						class Circle
						{
							type = "line";
							width = 6.0;
							points[] = { {"ImpactPointRelative",{0,-0.0630657},1},{"ImpactPointRelative",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPointRelative",1} };
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3.0;
							points[] = { {"ImpactPointRelative",{0,-0.0788321},1},{"ImpactPointRelative",{0.013888,-0.0776339},1},{"ImpactPointRelative",{0.02736,-0.0740785},1},{"ImpactPointRelative",{0.04,-0.0682686},1},{"ImpactPointRelative",{0.051424,-0.0603854},1},{"ImpactPointRelative",{0.06128,-0.0506733},1},{"ImpactPointRelative",{0.06928,-0.0394161},1},{"ImpactPointRelative",{0.075176,-0.0269606},1},{"ImpactPointRelative",{0.078784,-0.0136853},1},{"ImpactPointRelative",{0.08,0},1},{"ImpactPointRelative",{0.078784,0.0136853},1},{"ImpactPointRelative",{0.075176,0.0269606},1},{"ImpactPointRelative",{0.06928,0.0394161},1},{"ImpactPointRelative",{0.06128,0.0506733},1},{"ImpactPointRelative",{0.051424,0.0603854},1},{"ImpactPointRelative",{0.04,0.0682686},1},{"ImpactPointRelative",{0.02736,0.0740785},1},{"ImpactPointRelative",{0.013888,0.0776339},1},{"ImpactPointRelative",{0,0.0788321},1},{"ImpactPointRelative",{-0.013888,0.0776339},1},{"ImpactPointRelative",{-0.02736,0.0740785},1},{"ImpactPointRelative",{-0.04,0.0682686},1},{"ImpactPointRelative",{-0.051424,0.0603854},1},{"ImpactPointRelative",{-0.06128,0.0506733},1},{"ImpactPointRelative",{-0.06928,0.0394161},1},{"ImpactPointRelative",{-0.075176,0.0269606},1},{"ImpactPointRelative",{-0.078784,0.0136853},1},{"ImpactPointRelative",{-0.08,0},1},{"ImpactPointRelative",{-0.078784,-0.0136853},1},{"ImpactPointRelative",{-0.075176,-0.0269606},1},{"ImpactPointRelative",{-0.06928,-0.0394161},1},{"ImpactPointRelative",{-0.06128,-0.0506733},1},{"ImpactPointRelative",{-0.051424,-0.0603854},1},{"ImpactPointRelative",{-0.04,-0.0682686},1},{"ImpactPointRelative",{-0.02736,-0.0740785},1},{"ImpactPointRelative",{-0.013888,-0.0776339},1},{"ImpactPointRelative",{0,-0.0788321},1} };
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = { "ImpactPointRelative",{-0.002,0.11},1 };
							right[] = { "ImpactPointRelative",{0.045,0.11},1 };
							down[] = { "ImpactPointRelative",{-0.002,0.15},1 };
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 4.0;
							points[] = { {"PlaneOrientation",{0,-0.24635},1},{"PlaneOrientation",{0.0434,-0.242606},1},{"PlaneOrientation",{0.0855,-0.231495},1},{"PlaneOrientation",{0.125,-0.213339},1},{"PlaneOrientation",{0.1607,-0.188704},1},{"PlaneOrientation",{0.1915,-0.158354},1},{"PlaneOrientation",{0.2165,-0.123175},1},{"PlaneOrientation",{0.234925,-0.0842518},1},{"PlaneOrientation",{0.2462,-0.0427664},1},{"PlaneOrientation",{0.25,0},1},{"PlaneOrientation",{0.2462,0.0427664},1},{"PlaneOrientation",{0.234925,0.0842518},1},{"PlaneOrientation",{0.2165,0.123175},1},{"PlaneOrientation",{0.1915,0.158354},1},{"PlaneOrientation",{0.1607,0.188704},1},{"PlaneOrientation",{0.125,0.213339},1},{"PlaneOrientation",{0.0855,0.231495},1},{"PlaneOrientation",{0.0434,0.242606},1},{"PlaneOrientation",{0,0.24635},1},{"PlaneOrientation",{-0.0434,0.242606},1},{"PlaneOrientation",{-0.0855,0.231495},1},{"PlaneOrientation",{-0.125,0.213339},1},{"PlaneOrientation",{-0.1607,0.188704},1},{"PlaneOrientation",{-0.1915,0.158354},1},{"PlaneOrientation",{-0.2165,0.123175},1},{"PlaneOrientation",{-0.234925,0.0842518},1},{"PlaneOrientation",{-0.2462,0.0427664},1},{"PlaneOrientation",{-0.25,0},1},{"PlaneOrientation",{-0.2462,-0.0427664},1},{"PlaneOrientation",{-0.234925,-0.0842518},1},{"PlaneOrientation",{-0.2165,-0.123175},1},{"PlaneOrientation",{-0.1915,-0.158354},1},{"PlaneOrientation",{-0.1607,-0.188704},1},{"PlaneOrientation",{-0.125,-0.213339},1},{"PlaneOrientation",{-0.0855,-0.231495},1},{"PlaneOrientation",{-0.0434,-0.242606},1},{"PlaneOrientation",{0,-0.24635},1} };
						};
						class Lines
						{
							type = "line";
							width = 4.0;
							points[] = { {{0.21,0.55},1},{{0.19,0.55},1},{{0.19,0.71},1},{{0.21,0.71},1},{},{{0.21,0.67},1},{{0.19,0.67},1},{},{{0.21,0.63},1},{{0.19,0.63},1},{},{{0.21,0.59},1},{{0.19,0.59},1},{},{"LarTargetDist",-0.16,{0.17,0.73},1},{"LarTargetDist",-0.16,{0.19,0.71},1},{"LarTargetDist",-0.16,{0.17,0.69},1},{} };
						};
						class Poly
						{
							type = "polygon";
							points[] = { {{"LarAmmoMin",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.208,0.71},1},{"LarAmmoMin",-0.16,{0.208,0.71},1}} };
						};
						class TopText
						{
							type = "text";
							source = "LarTop";
							sourceScale = 0.001;
							scale = 1;
							pos[] = { {0.22,0.53},1 };
							right[] = { {0.26,0.53},1 };
							down[] = { {0.22,0.57},1 };
							align = "right";
						};
						class MiddleText : TopText
						{
							source = "LarTop";
							sourcePrecision = -1;
							sourceScale = 0.0005;
							pos[] = { {0.22,0.61},1 };
							right[] = { {0.26,0.61},1 };
							down[] = { {0.22,0.65},1 };
						};
						class SpeedText : TopText
						{
							source = "LarTargetSpeed";
							align = "left";
							sourceScale = 3.6;
							pos[] = { "LarTargetDist",-0.16,{0.16,0.69},1 };
							right[] = { "LarTargetDist",-0.16,{0.2,0.69},1 };
							down[] = { "LarTargetDist",-0.16,{0.16,0.73},1 };
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 4.0;
							points[] = { {"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,-0.13},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,0.13},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,-0.13},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,0.13},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.13,-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.13,0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.13,-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.13,0.15},1} };
						};
					};
					class RocketCrosshairGroup
					{
						type = "group";
						condition = "Rocket";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3.0;
							points[] = { {"ImpactPoint",{0.0,-0.0394161},1},{"ImpactPoint",{0.0,-0.019708},1},{},{"ImpactPoint",{0.0,0.0394161},1},{"ImpactPoint",{0.0,0.019708},1},{},{"ImpactPoint",{-0.04,0.0},1},{"ImpactPoint",{-0.02,0.0},1},{},{"ImpactPoint",{0.04,0.0},1},{"ImpactPoint",{0.02,0.0},1},{},{"ImpactPoint",{0.01,-0.0394161},1},{"ImpactPoint",{-0.01,-0.0394161},1},{},{"ImpactPoint",{0.0,-0.0019708},1},{"ImpactPoint",{0.0,0.0019708},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{} };
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = { "ImpactPoint",{-0.002,0.07},1 };
							right[] = { "ImpactPoint",{0.045,0.07},1 };
							down[] = { "ImpactPoint",{-0.002,0.11},1 };
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							width = 4.0;
							type = "line";
							points[] = { {"ImpactPoint",{0.0,0.0886861},1},{"ImpactPoint",{0.0,0.0788321},1},{},{"ImpactPoint",{-0.09,0.0},1},{"ImpactPoint",{-0.08,0.0},1},{},{"ImpactPoint",{0.09,0.0},1},{"ImpactPoint",{0.08,0.0},1},{},{"ImpactPoint",{0.0,-0.0019708},1},{"ImpactPoint",{0.0,0.0019708},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{},{"ImpactPoint",{0,-0.0788321},1},{"ImpactPoint",{0.013888,-0.0776339},1},{"ImpactPoint",{0.02736,-0.0740785},1},{"ImpactPoint",{0.04,-0.0682686},1},{"ImpactPoint",{0.051424,-0.0603854},1},{"ImpactPoint",{0.06128,-0.0506733},1},{"ImpactPoint",{0.06928,-0.0394161},1},{"ImpactPoint",{0.075176,-0.0269606},1},{"ImpactPoint",{0.078784,-0.0136853},1},{"ImpactPoint",{0.08,0},1},{"ImpactPoint",{0.078784,0.0136853},1},{"ImpactPoint",{0.075176,0.0269606},1},{"ImpactPoint",{0.06928,0.0394161},1},{"ImpactPoint",{0.06128,0.0506733},1},{"ImpactPoint",{0.051424,0.0603854},1},{"ImpactPoint",{0.04,0.0682686},1},{"ImpactPoint",{0.02736,0.0740785},1},{"ImpactPoint",{0.013888,0.0776339},1},{"ImpactPoint",{0,0.0788321},1},{"ImpactPoint",{-0.013888,0.0776339},1},{"ImpactPoint",{-0.02736,0.0740785},1},{"ImpactPoint",{-0.04,0.0682686},1},{"ImpactPoint",{-0.051424,0.0603854},1},{"ImpactPoint",{-0.06128,0.0506733},1},{"ImpactPoint",{-0.06928,0.0394161},1},{"ImpactPoint",{-0.075176,0.0269606},1},{"ImpactPoint",{-0.078784,0.0136853},1},{"ImpactPoint",{-0.08,0},1},{"ImpactPoint",{-0.078784,-0.0136853},1},{"ImpactPoint",{-0.075176,-0.0269606},1},{"ImpactPoint",{-0.06928,-0.0394161},1},{"ImpactPoint",{-0.06128,-0.0506733},1},{"ImpactPoint",{-0.051424,-0.0603854},1},{"ImpactPoint",{-0.04,-0.0682686},1},{"ImpactPoint",{-0.02736,-0.0740785},1},{"ImpactPoint",{-0.013888,-0.0776339},1},{"ImpactPoint",{0,-0.0788321},1},{},{},{"ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{0.0,0.0},1},{"Velocity",1,"Limit0109",1,{0.0,0.0},1} };
						};
						class Circle
						{
							type = "line";
							width = 6.0;
							points[] = { {"ImpactPoint",{0,-0.0630657},1},{"ImpactPoint",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPoint",1} };
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = { "ImpactPoint",{-0.002,0.11},1 };
							right[] = { "ImpactPoint",{0.045,0.11},1 };
							down[] = { "ImpactPoint",{-0.002,0.15},1 };
						};
					};
					class WeaponsText
					{
						condition = "1- mgun";
						class WeaponsText
						{
							type = "text";
							source = "weapon";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = { {0.032,0.84},1 };
							right[] = { {0.087,0.84},1 };
							down[] = { {0.032,0.885},1 };
						};
					};
					class MGunText
					{
						condition = "mgun";
						class WeaponsText
						{
							type = "text";
							source = "static";
							text = "GUN";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = { {0.032,0.84},1 };
							right[] = { {0.087,0.84},1 };
							down[] = { {0.032,0.885},1 };
						};
					};
					class AmmoText
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = { {0.032,0.88},1 };
						right[] = { {0.087,0.88},1 };
						down[] = { {0.032,0.925},1 };
					};
					class Laser
					{
						condition = "laseron";
						class LaserText
						{
							type = "text";
							source = "static";
							text = "LASER";
							align = "left";
							scale = 1;
							pos[] = { {0.932,0.8},1 };
							right[] = { {0.987,0.8},1 };
							down[] = { {0.932,0.845},1 };
						};
					};
					// class Tailhook
					// {
					// 	condition = "user4";
					// 	class TailhookText
					// 	{
					// 		type = "text";
					// 		source = "static";
					// 		text = "TAILHOOK";
					// 		align = "left";
					// 		scale = 1;
					// 		pos[] = {{0.932,0.88},1};
					// 		right[] = {{0.987,0.88},1};
					// 		down[] = {{0.932,0.925},1};
					// 	};
					// };
					class Flaps
					{
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "left";
							scale = 1;
							pos[] = { {0.932,0.92},1 };
							right[] = { {0.987,0.92},1 };
							down[] = { {0.932,0.965},1 };
						};
					};
					class ILS
					{
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "left";
							scale = 1;
							pos[] = { {0.932,0.84},1 };
							right[] = { {0.987,0.84},1 };
							down[] = { {0.932,0.885},1 };
						};
						class Glideslope
						{
							clipTL[] = { 0.0,0.0 };
							clipBR[] = { 1.0,1.0 };
							// class ILS
							// {
							// 	type = "line";
							// 	width = 2.0;
							// 	points[] = {{"ILS_W",{-0.12,0},1},{"ILS_W",{0.12,0},1},{},{"ILS_W",{-0.12,-0.0118248},1},{"ILS_W",{-0.12,0.0118248},1},{},{"ILS_W",{-0.06,-0.00886861},1},{"ILS_W",{-0.06,0.00886861},1},{},{"ILS_W",{0,-0.0118248},1},{"ILS_W",{0,0.0118248},1},{},{"ILS_W",{0.06,-0.00886861},1},{"ILS_W",{0.06,0.00886861},1},{},{"ILS_W",{0.12,-0.0118248},1},{"ILS_W",{0.12,0.0118248},1},{},{"ILS_H",{0,-0.118248},1},{"ILS_H",{0,0.118248},1},{},{"ILS_H",{-0.012,-0.118248},1},{"ILS_H",{0.012,-0.118248},1},{},{"ILS_H",{-0.009,-0.0591241},1},{"ILS_H",{0.009,-0.0591241},1},{},{"ILS_H",{-0.012,0},1},{"ILS_H",{0.012,0},1},{},{"ILS_H",{-0.009,0.0591241},1},{"ILS_H",{0.009,0.0591241},1},{},{"ILS_H",{-0.012,0.118248},1},{"ILS_H",{0.012,0.118248},1}};
							// };
							class airport
							{
								type = "line";
								points[] = { {"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1} };
							};
						};
					};

					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						// pos[] = {{0.091, 0.7}, 1};
						// right[] = {{0.141, 0.7}, 1};
						// down[] = {{0.091, 0.735}, 1};
						pos[] = { {0.932,0.71},1 };
						right[] = { {"0.932+.05",0.71},1 };
						down[] = { {0.932,"0.71+.08"},1 };
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						// pos[] = {{"0.11-0.009", 0.7}, 1};
						// right[] = {{0.146, 0.7}, 1};
						// down[] = {{"0.11-0.009", 0.735}, 1};
						pos[] = { {0.952,0.71},1 };
						right[] = { {"0.952+.05",0.71},1 };
						down[] = { {0.952,"0.71+.08"},1 };
					};
					class TargetLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class shape
						{
							type = "line";
							width = 4;
							points[] = { {"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1} };
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = { {"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1} };
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = { 0.3,0.3 };
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = { {0.485,0.216788},1 };
							right[] = { {0.545,0.216788},1 };
							down[] = { {0.485,0.266058},1 };
						};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = { 1.0,0.0,0.0 };
						blinkingPattern[] = { 0.2,0.2 };
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = { {0.5,0.25},1 };
							right[] = { {0.54,0.25},1 };
							down[] = { {0.5,0.29},1 };
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3.0;
							points[] = { {"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407807},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173806},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodDir",1,{-0.0208056,-0.00407807},1},{"TargetingPodDir",1,{-0.0208056,0.00407808},1},{},{"TargetingPodDir",1,{-0.0176381,0.0116134},1},{"TargetingPodDir",1,{-0.0117854,0.0173806},1},{},{"TargetingPodDir",1,{-0.00413849,0.0205019},1},{"TargetingPodDir",1,{0.00413849,0.0205019},1},{},{"TargetingPodDir",1,{0.0117854,0.0173806},1},{"TargetingPodDir",1,{0.0176381,0.0116134},1},{},{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407808},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173807},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{} };
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3.0;
							points[] = { {"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,-0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{} };
						};
					};
					class MainCenterLine1
					{
						type = "line";
						width = 3.0;
						points[] = { {"PlaneW",{-0.49,"0 + 0.025"},1},{"PlaneW",{-0.49,0},1},{"PlaneW",{-0.45,0},1} };
					};
					class MainCenterLine2
					{
						type = "line";
						width = 3.0;
						points[] = { {"PlaneW",{-0.33,0},1},{"PlaneW",{-0.25,0},1} };
					};
					class MainCenterLine3
					{
						type = "line";
						width = 3.0;
						points[] = { {"PlaneW",{0.49,"0 + 0.025"},1},{"PlaneW",{0.49,0},1},{"PlaneW",{0.25,0},1} };
					};
					class SpeedIndicatorBox
					{
						type = "line";
						width = 3.0;
						points[] = { {"PlaneW",{-0.49,-0.25},1},{"PlaneW",{-0.49,-0.2},1},{"PlaneW",{-0.3,-0.2},1},{"PlaneW",{-0.3,-0.25},1},{"PlaneW",{-0.49,-0.25},1} };
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = { "PlaneW",{-0.4,-0.25},1 };
						right[] = { "PlaneW",{-0.3,-0.25},1 };
						down[] = { "PlaneW",{-0.4,-0.2},1 };
					};
					// class AltitudeIndicatorBox
					// {
					// 	type = "line";
					// 	width = 3.0;
					// 	points[] = {{"PlaneW",{0.49,-0.25},1},{"PlaneW",{0.49,-0.2},1},{"PlaneW",{0.3,-0.2},1},{"PlaneW",{0.3,-0.25},1},{"PlaneW",{0.49,-0.25},1}};
					// };
					class AltitudeNumberASL
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						sourceLength = 4;
						align = "center";
						scale = 1;
						pos[] = { "PlaneW",{0.4,-0.25},1 };
						right[] = { "PlaneW",{0.48,-0.25},1 };
						down[] = { "PlaneW",{0.4,-0.2},1 };
					};

					class AltitudeNumberAGL :AltitudeNumberASL
					{
						//type = "text";
						source = "altitudeAGL";
						//sourceScale = 1;
						//sourceLength = 4;
						//sourceOffset = -2;
						//align = "left";
						//scale = 1;
						pos[] = { "PlaneW",{0.4,-0.20},1 };
						right[] = { "PlaneW",{0.48,-0.20},1 };
						down[] = { "PlaneW",{0.4,-0.15},1 };
					};
					class AltitudeRadarTextASL
					{
						type = "text";
						source = "static";
						text = "ASL:";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = { "PlaneW",{0.32,-0.25},1 };
						right[] = { "PlaneW",{"+0.32 + 0.04",-0.25},1 };
						down[] = { "PlaneW",{0.32,"-0.25 + 0.05"},1 };
					};
					class AltitudeRadarTextAGL
					{
						type = "text";
						source = "static";
						text = "AGL:";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = { "PlaneW",{0.32,-0.192},1 };
						right[] = { "PlaneW",{"+0.32 + 0.04",-0.192},1 };
						down[] = { "PlaneW",{0.32,"-0.192 + 0.041"},1 };
					};

					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = { "PlaneW",{-0.39,-0.076},1 };
						right[] = { "PlaneW",{"-0.39 + 0.05",-0.076},1 };
						down[] = { "PlaneW",{-0.39,"-0.076 + 0.05"},1 };
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "P:";
						align = "left";
						scale = 1;
						pos[] = { "PlaneW",{-0.41,-0.076},1 };
						right[] = { "PlaneW",{"-0.41 + 0.04",-0.076},1 };
						down[] = { "PlaneW",{-0.41,"-0.076 + 0.05"},1 };
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = { "PlaneW",{-0.39,-0.025},1 };
						right[] = { "PlaneW",{"-0.39 + 0.05",-0.025},1 };
						down[] = { "PlaneW",{-0.39,"-0.025 + 0.05"},1 };
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "R:";
						align = "left";
						scale = 1;
						pos[] = { "PlaneW",{-0.41,-0.025},1 };
						right[] = { "PlaneW",{"-0.41 + 0.04",-0.025},1 };
						down[] = { "PlaneW",{-0.41,"-0.025 + 0.05"},1 };
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = { "PlaneW",{-0.39,0.026},1 };
						right[] = { "PlaneW",{"-0.39 + 0.05",0.026},1 };
						down[] = { "PlaneW",{-0.39,"+0.026 + 0.05"},1 };
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "C:";
						align = "left";
						scale = 1;
						pos[] = { "PlaneW",{-0.41,0.026},1 };
						right[] = { "PlaneW",{"-0.41 + 0.04",0.026},1 };
						down[] = { "PlaneW",{-0.41,"+0.026 + 0.05"},1 };
					};

					class fuelNumber
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = { "PlaneW", {-0.40, 0.1}, 1 };
						right[] = { "PlaneW", {"-0.40 + 0.04", 0.1}, 1 };
						down[] = { "PlaneW", {-0.40, "0.10 + 0.05"}, 1 };
						//right[] = {{0.14, 0.9}, 1};
						//down[] = {{0.1, 0.94}, 1};
					};
					class fuelPercent
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";

						pos[] = { "PlaneW", {-0.35, 0.1}, 1 };
						right[] = { "PlaneW", {"-0.35 + 0.04", 0.1}, 1 };
						down[] = { "PlaneW", {-0.35, "0.10 + 0.05"}, 1 };
					};
					class fuelText
					{
						type = "text";
						source = "static";
						text = "F:";
						align = "left";
						scale = 1;
						pos[] = { "PlaneW", {-0.41, 0.1}, 1 };
						right[] = { "PlaneW", {"-0.41 + 0.04", 0.1}, 1 };
						down[] = { "PlaneW", {-0.41, "0.1 + 0.05"}, 1 };

					};

					class HeadingArrow
					{
						type = "line";
						width = 3.0;
						points[] = { {"WPPoint",1,"LimitWaypoint",1,{-0.02,0.042},1},{"WPPoint",1,"LimitWaypoint",1,{0,0.022},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.042},1} };
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "right";
							scale = 1;
							pos[] = { {0.924,0.505018},1 };
							down[] = { {0.924,0.542464},1 };
							right[] = { {0.964,0.505018},1 };
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							sourceLength = 2;
							align = "right";
							scale = 1;
							pos[] = { {0.877,0.505018},1 };
							right[] = { {0.917,0.505018},1 };
							down[] = { {0.877,0.542464},1 };
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = "WP";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = { {"0.825+0.01",0.5065},1 };
							right[] = { {0.875,0.5065},1 };
							down[] = { {"0.825+0.01",0.5415},1 };
						};
						class WPKM
						{
							type = "text";
							source = "static";
							text = ":";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = { {"0.825+0.09",0.5065},1 };
							right[] = { {0.955,0.5065},1 };
							down[] = { {"0.825+0.09",0.5415},1 };
						};
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type = "text";
							source = "cameraDir";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = { {"0.80-0.302","0.082+0.065"},1 };
							right[] = { {"0.83-0.302","0.082+0.065"},1 };
							down[] = { {"0.80-0.302","0.113+0.065"},1 };
						};
						class HeadingArrow
						{
							type = "line";
							width = 3.0;
							points[] = { {{0.488,0.141},1},{{0.512,0.141},1},{{0.542,0.161},1},{{0.512,0.181},1},{{0.488,0.181},1},{{0.458,0.161},1},{{0.488,0.141},1},{} };
						};
					};
					class HeadingScale
					{
						type = "scale";
						NeverEatSeaWeed = 1;
						horizontal = 1;
						source = "heading";
						sourceScale = 1.0;
						width = 3.0;
						top = 0.1;
						center = 0.5;
						bottom = 0.9;
						lineXleft = 0.105;
						lineYright = 0.115;
						lineXleftMajor = 0.095;
						lineYrightMajor = 0.115;
						majorLineEach = 5;
						numberEach = 5;
						step = "18 / 9";
						stepSize = "(0.70 - 0.3) / 15";
						align = "center";
						scale = 1.0;
						pos[] = { 0.096,0.0546 };
						right[] = { 0.143,0.0546 };
						down[] = { 0.096,0.093 };
					};
					class HeadingIndicatorBox
					{
						type = "line";
						width = 3.0;
						points[] = { {"PlaneW",{-0.035,-0.455},1},{"PlaneW",{-0.035,-0.5},1},{"PlaneW",{0.035,-0.5},1},{"PlaneW",{0.035,-0.455},1},{"PlaneW",{-0.035,-0.455},1} };
					};
					class HeadingIndicatorArrow
					{
						type = "polygon";
						points[] = { {{"PlaneW",{-0.015,-0.455},1},{"PlaneW",{0,-0.445},1},{"PlaneW",{0.015,-0.455},1}} };
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = { "PlaneW",{0,"(-0.5			)"},1 };
						right[] = { "PlaneW",{0.03,"(-0.5			)"},1 };
						down[] = { "PlaneW",{0,"(-0.5 + 0.045	)"},1 };
					};
					class HorizonBankRot
					{
						type = "line";
						width = 2.0;
						points[] = { {"HorizonBankRot",{0,"0.39421001-0.109"},1},{"HorizonBankRot",{0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{-0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{0,"0.39421001-0.109"},1} };
					};
					class HorizonBankRotLines
					{
						type = "line";
						width = 3.0;
						points[] = { {{0.619959,0.712986},1},{{0.631439,0.744203},1},{},{{0.58291,0.739019},1},{{0.588087,0.760778},1},{},{{0.540574,0.748504},1},{{0.543184,0.770838},1},{},{{0.4975,0.740421},1},{{0.4975,0.77421},1},{},{{0.454426,0.748504},1},{{0.451816,0.770838},1},{},{{0.41209,0.739019},1},{{0.406913,0.760778},1},{},{{0.375041,0.712986},1},{{0.363561,0.744203},1} };
					};
					class Horizont
					{
						clipTL[] = { 0.2,0.2 };
						clipBR[] = { 0.8,0.8 };
						class Dimmed
						{
							class Level0
							{
								type = "line";
								width = 3.0;
								points[] = { {"Level0",{0.75,0.0},1},{"Level0",{0.065,0.0},1},{},{"Level0",{-0.065,0.0},1},{"Level0",{-0.75,0.0},1} };
							};
						};
						class HideOnTurn
						{
							condition = "on";//"5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
							class Limiter
							{
								class Level0
								{
									type = "line";
									width = 2.0;
									points[] = {};
								};
								class LevelM5 : Level0
								{
									type = "line";
									points[] = { {"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{} };
								};
								class VALM_1_5
								{
									type = "text";
									source = "static";
									text = -5;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM5",{-0.26,-0.032},1 };
									right[] = { "LevelM5",{-0.2,-0.032},1 };
									down[] = { "LevelM5",{-0.26,0.018},1 };
								};
								class VALM_1_5_R
								{
									type = "text";
									source = "static";
									text = -5;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM5",{0.26,-0.032},1 };
									right[] = { "LevelM5",{0.32,-0.032},1 };
									down[] = { "LevelM5",{0.26,0.018},1 };
								};
								class LevelP5 : Level0
								{
									type = "line";
									points[] = { {"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_5
								{
									type = "text";
									source = "static";
									text = "5";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP5",{-0.26,-0.017},1 };
									right[] = { "LevelP5",{-0.2,-0.017},1 };
									down[] = { "LevelP5",{-0.26,0.033},1 };
								};
								class VALP_1_5_R
								{
									type = "text";
									source = "static";
									text = "5";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP5",{0.26,-0.017},1 };
									right[] = { "LevelP5",{0.32,-0.017},1 };
									down[] = { "LevelP5",{0.26,0.033},1 };
								};
								class LevelM10 : Level0
								{
									type = "line";
									points[] = { {"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{} };
								};
								class VALM_1_10
								{
									type = "text";
									source = "static";
									text = -10;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM10",{-0.26,-0.032},1 };
									right[] = { "LevelM10",{-0.2,-0.032},1 };
									down[] = { "LevelM10",{-0.26,0.018},1 };
								};
								class VALM_1_10_R
								{
									type = "text";
									source = "static";
									text = -10;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM10",{0.26,-0.032},1 };
									right[] = { "LevelM10",{0.32,-0.032},1 };
									down[] = { "LevelM10",{0.26,0.018},1 };
								};
								class LevelP10 : Level0
								{
									type = "line";
									points[] = { {"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_10
								{
									type = "text";
									source = "static";
									text = "10";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP10",{-0.26,-0.017},1 };
									right[] = { "LevelP10",{-0.2,-0.017},1 };
									down[] = { "LevelP10",{-0.26,0.033},1 };
								};
								class VALP_1_10_R
								{
									type = "text";
									source = "static";
									text = "10";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP10",{0.26,-0.017},1 };
									right[] = { "LevelP10",{0.32,-0.017},1 };
									down[] = { "LevelP10",{0.26,0.033},1 };
								};
								class LevelM15 : Level0
								{
									type = "line";
									points[] = { {"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{} };
								};
								class VALM_1_15
								{
									type = "text";
									source = "static";
									text = -15;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM15",{-0.26,-0.032},1 };
									right[] = { "LevelM15",{-0.2,-0.032},1 };
									down[] = { "LevelM15",{-0.26,0.018},1 };
								};
								class VALM_1_15_R
								{
									type = "text";
									source = "static";
									text = -15;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM15",{0.26,-0.032},1 };
									right[] = { "LevelM15",{0.32,-0.032},1 };
									down[] = { "LevelM15",{0.26,0.018},1 };
								};
								class LevelP15 : Level0
								{
									type = "line";
									points[] = { {"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_15
								{
									type = "text";
									source = "static";
									text = "15";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP15",{-0.26,-0.017},1 };
									right[] = { "LevelP15",{-0.2,-0.017},1 };
									down[] = { "LevelP15",{-0.26,0.033},1 };
								};
								class VALP_1_15_R
								{
									type = "text";
									source = "static";
									text = "15";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP15",{0.26,-0.017},1 };
									right[] = { "LevelP15",{0.32,-0.017},1 };
									down[] = { "LevelP15",{0.26,0.033},1 };
								};
								class LevelM20 : Level0
								{
									type = "line";
									points[] = { {"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{} };
								};
								class VALM_1_20
								{
									type = "text";
									source = "static";
									text = -20;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM20",{-0.26,-0.032},1 };
									right[] = { "LevelM20",{-0.2,-0.032},1 };
									down[] = { "LevelM20",{-0.26,0.018},1 };
								};
								class VALM_1_20_R
								{
									type = "text";
									source = "static";
									text = -20;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM20",{0.26,-0.032},1 };
									right[] = { "LevelM20",{0.32,-0.032},1 };
									down[] = { "LevelM20",{0.26,0.018},1 };
								};
								class LevelP20 : Level0
								{
									type = "line";
									points[] = { {"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_20
								{
									type = "text";
									source = "static";
									text = "20";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP20",{-0.26,-0.017},1 };
									right[] = { "LevelP20",{-0.2,-0.017},1 };
									down[] = { "LevelP20",{-0.26,0.033},1 };
								};
								class VALP_1_20_R
								{
									type = "text";
									source = "static";
									text = "20";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP20",{0.26,-0.017},1 };
									right[] = { "LevelP20",{0.32,-0.017},1 };
									down[] = { "LevelP20",{0.26,0.033},1 };
								};
								class LevelM25 : Level0
								{
									type = "line";
									points[] = { {"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{} };
								};
								class VALM_1_25
								{
									type = "text";
									source = "static";
									text = -25;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM25",{-0.26,-0.032},1 };
									right[] = { "LevelM25",{-0.2,-0.032},1 };
									down[] = { "LevelM25",{-0.26,0.018},1 };
								};
								class VALM_1_25_R
								{
									type = "text";
									source = "static";
									text = -25;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM25",{0.26,-0.032},1 };
									right[] = { "LevelM25",{0.32,-0.032},1 };
									down[] = { "LevelM25",{0.26,0.018},1 };
								};
								class LevelP25 : Level0
								{
									type = "line";
									points[] = { {"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_25
								{
									type = "text";
									source = "static";
									text = "25";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP25",{-0.26,-0.017},1 };
									right[] = { "LevelP25",{-0.2,-0.017},1 };
									down[] = { "LevelP25",{-0.26,0.033},1 };
								};
								class VALP_1_25_R
								{
									type = "text";
									source = "static";
									text = "25";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP25",{0.26,-0.017},1 };
									right[] = { "LevelP25",{0.32,-0.017},1 };
									down[] = { "LevelP25",{0.26,0.033},1 };
								};
								class LevelM30 : Level0
								{
									type = "line";
									points[] = { {"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{} };
								};
								class VALM_1_30
								{
									type = "text";
									source = "static";
									text = -30;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM30",{-0.26,-0.032},1 };
									right[] = { "LevelM30",{-0.2,-0.032},1 };
									down[] = { "LevelM30",{-0.26,0.018},1 };
								};
								class VALM_1_30_R
								{
									type = "text";
									source = "static";
									text = -30;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM30",{0.26,-0.032},1 };
									right[] = { "LevelM30",{0.32,-0.032},1 };
									down[] = { "LevelM30",{0.26,0.018},1 };
								};
								class LevelP30 : Level0
								{
									type = "line";
									points[] = { {"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_30
								{
									type = "text";
									source = "static";
									text = "30";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP30",{-0.26,-0.017},1 };
									right[] = { "LevelP30",{-0.2,-0.017},1 };
									down[] = { "LevelP30",{-0.26,0.033},1 };
								};
								class VALP_1_30_R
								{
									type = "text";
									source = "static";
									text = "30";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP30",{0.26,-0.017},1 };
									right[] = { "LevelP30",{0.32,-0.017},1 };
									down[] = { "LevelP30",{0.26,0.033},1 };
								};
								class LevelM35 : Level0
								{
									type = "line";
									points[] = { {"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{} };
								};
								class VALM_1_35
								{
									type = "text";
									source = "static";
									text = -35;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM35",{-0.26,-0.032},1 };
									right[] = { "LevelM35",{-0.2,-0.032},1 };
									down[] = { "LevelM35",{-0.26,0.018},1 };
								};
								class VALM_1_35_R
								{
									type = "text";
									source = "static";
									text = -35;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM35",{0.26,-0.032},1 };
									right[] = { "LevelM35",{0.32,-0.032},1 };
									down[] = { "LevelM35",{0.26,0.018},1 };
								};
								class LevelP35 : Level0
								{
									type = "line";
									points[] = { {"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_35
								{
									type = "text";
									source = "static";
									text = "35";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP35",{-0.26,-0.017},1 };
									right[] = { "LevelP35",{-0.2,-0.017},1 };
									down[] = { "LevelP35",{-0.26,0.033},1 };
								};
								class VALP_1_35_R
								{
									type = "text";
									source = "static";
									text = "35";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP35",{0.26,-0.017},1 };
									right[] = { "LevelP35",{0.32,-0.017},1 };
									down[] = { "LevelP35",{0.26,0.033},1 };
								};
								class LevelM40 : Level0
								{
									type = "line";
									points[] = { {"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{} };
								};
								class VALM_1_40
								{
									type = "text";
									source = "static";
									text = -40;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM40",{-0.26,-0.032},1 };
									right[] = { "LevelM40",{-0.2,-0.032},1 };
									down[] = { "LevelM40",{-0.26,0.018},1 };
								};
								class VALM_1_40_R
								{
									type = "text";
									source = "static";
									text = -40;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM40",{0.26,-0.032},1 };
									right[] = { "LevelM40",{0.32,-0.032},1 };
									down[] = { "LevelM40",{0.26,0.018},1 };
								};
								class LevelP40 : Level0
								{
									type = "line";
									points[] = { {"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_40
								{
									type = "text";
									source = "static";
									text = "40";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP40",{-0.26,-0.017},1 };
									right[] = { "LevelP40",{-0.2,-0.017},1 };
									down[] = { "LevelP40",{-0.26,0.033},1 };
								};
								class VALP_1_40_R
								{
									type = "text";
									source = "static";
									text = "40";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP40",{0.26,-0.017},1 };
									right[] = { "LevelP40",{0.32,-0.017},1 };
									down[] = { "LevelP40",{0.26,0.033},1 };
								};
								class LevelM45 : Level0
								{
									type = "line";
									points[] = { {"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{} };
								};
								class VALM_1_45
								{
									type = "text";
									source = "static";
									text = -45;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM45",{-0.26,-0.032},1 };
									right[] = { "LevelM45",{-0.2,-0.032},1 };
									down[] = { "LevelM45",{-0.26,0.018},1 };
								};
								class VALM_1_45_R
								{
									type = "text";
									source = "static";
									text = -45;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM45",{0.26,-0.032},1 };
									right[] = { "LevelM45",{0.32,-0.032},1 };
									down[] = { "LevelM45",{0.26,0.018},1 };
								};
								class LevelP45 : Level0
								{
									type = "line";
									points[] = { {"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_45
								{
									type = "text";
									source = "static";
									text = "45";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP45",{-0.26,-0.017},1 };
									right[] = { "LevelP45",{-0.2,-0.017},1 };
									down[] = { "LevelP45",{-0.26,0.033},1 };
								};
								class VALP_1_45_R
								{
									type = "text";
									source = "static";
									text = "45";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP45",{0.26,-0.017},1 };
									right[] = { "LevelP45",{0.32,-0.017},1 };
									down[] = { "LevelP45",{0.26,0.033},1 };
								};
								class LevelM50 : Level0
								{
									type = "line";
									points[] = { {"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{} };
								};
								class VALM_1_50
								{
									type = "text";
									source = "static";
									text = -50;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM50",{-0.26,-0.032},1 };
									right[] = { "LevelM50",{-0.2,-0.032},1 };
									down[] = { "LevelM50",{-0.26,0.018},1 };
								};
								class VALM_1_50_R
								{
									type = "text";
									source = "static";
									text = -50;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM50",{0.26,-0.032},1 };
									right[] = { "LevelM50",{0.32,-0.032},1 };
									down[] = { "LevelM50",{0.26,0.018},1 };
								};
								class LevelP50 : Level0
								{
									type = "line";
									points[] = { {"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_50
								{
									type = "text";
									source = "static";
									text = "50";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP50",{-0.26,-0.017},1 };
									right[] = { "LevelP50",{-0.2,-0.017},1 };
									down[] = { "LevelP50",{-0.26,0.033},1 };
								};
								class VALP_1_50_R
								{
									type = "text";
									source = "static";
									text = "50";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP50",{0.26,-0.017},1 };
									right[] = { "LevelP50",{0.32,-0.017},1 };
									down[] = { "LevelP50",{0.26,0.033},1 };
								};
								class LevelM60 : Level0
								{
									type = "line";
									points[] = { {"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{} };
								};
								class VALM_1_60
								{
									type = "text";
									source = "static";
									text = -60;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM60",{-0.26,-0.032},1 };
									right[] = { "LevelM60",{-0.2,-0.032},1 };
									down[] = { "LevelM60",{-0.26,0.018},1 };
								};
								class VALM_1_60_R
								{
									type = "text";
									source = "static";
									text = -60;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM60",{0.26,-0.032},1 };
									right[] = { "LevelM60",{0.32,-0.032},1 };
									down[] = { "LevelM60",{0.26,0.018},1 };
								};
								class LevelP60 : Level0
								{
									type = "line";
									points[] = { {"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_60
								{
									type = "text";
									source = "static";
									text = "60";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP60",{-0.26,-0.017},1 };
									right[] = { "LevelP60",{-0.2,-0.017},1 };
									down[] = { "LevelP60",{-0.26,0.033},1 };
								};
								class VALP_1_60_R
								{
									type = "text";
									source = "static";
									text = "60";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP60",{0.26,-0.017},1 };
									right[] = { "LevelP60",{0.32,-0.017},1 };
									down[] = { "LevelP60",{0.26,0.033},1 };
								};
								class LevelM70 : Level0
								{
									type = "line";
									points[] = { {"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{} };
								};
								class VALM_1_70
								{
									type = "text";
									source = "static";
									text = -70;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM70",{-0.26,-0.032},1 };
									right[] = { "LevelM70",{-0.2,-0.032},1 };
									down[] = { "LevelM70",{-0.26,0.018},1 };
								};
								class VALM_1_70_R
								{
									type = "text";
									source = "static";
									text = -70;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM70",{0.26,-0.032},1 };
									right[] = { "LevelM70",{0.32,-0.032},1 };
									down[] = { "LevelM70",{0.26,0.018},1 };
								};
								class LevelP70 : Level0
								{
									type = "line";
									points[] = { {"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_70
								{
									type = "text";
									source = "static";
									text = "70";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP70",{-0.26,-0.017},1 };
									right[] = { "LevelP70",{-0.2,-0.017},1 };
									down[] = { "LevelP70",{-0.26,0.033},1 };
								};
								class VALP_1_70_R
								{
									type = "text";
									source = "static";
									text = "70";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP70",{0.26,-0.017},1 };
									right[] = { "LevelP70",{0.32,-0.017},1 };
									down[] = { "LevelP70",{0.26,0.033},1 };
								};
								class LevelM80 : Level0
								{
									type = "line";
									points[] = { {"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{} };
								};
								class VALM_1_80
								{
									type = "text";
									source = "static";
									text = -80;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM80",{-0.26,-0.032},1 };
									right[] = { "LevelM80",{-0.2,-0.032},1 };
									down[] = { "LevelM80",{-0.26,0.018},1 };
								};
								class VALM_1_80_R
								{
									type = "text";
									source = "static";
									text = -80;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM80",{0.26,-0.032},1 };
									right[] = { "LevelM80",{0.32,-0.032},1 };
									down[] = { "LevelM80",{0.26,0.018},1 };
								};
								class LevelP80 : Level0
								{
									type = "line";
									points[] = { {"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_80
								{
									type = "text";
									source = "static";
									text = "80";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP80",{-0.26,-0.017},1 };
									right[] = { "LevelP80",{-0.2,-0.017},1 };
									down[] = { "LevelP80",{-0.26,0.033},1 };
								};
								class VALP_1_80_R
								{
									type = "text";
									source = "static";
									text = "80";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP80",{0.26,-0.017},1 };
									right[] = { "LevelP80",{0.32,-0.017},1 };
									down[] = { "LevelP80",{0.26,0.033},1 };
								};
								class LevelM90 : Level0
								{
									type = "line";
									points[] = { {"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{} };
								};
								class VALM_1_90
								{
									type = "text";
									source = "static";
									text = -90;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM90",{-0.26,-0.032},1 };
									right[] = { "LevelM90",{-0.2,-0.032},1 };
									down[] = { "LevelM90",{-0.26,0.018},1 };
								};
								class VALM_1_90_R
								{
									type = "text";
									source = "static";
									text = -90;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelM90",{0.26,-0.032},1 };
									right[] = { "LevelM90",{0.32,-0.032},1 };
									down[] = { "LevelM90",{0.26,0.018},1 };
								};
								class LevelP90 : Level0
								{
									type = "line";
									points[] = { {"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1} };
								};
								class VALP_1_90
								{
									type = "text";
									source = "static";
									text = "90";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP90",{-0.26,-0.017},1 };
									right[] = { "LevelP90",{-0.2,-0.017},1 };
									down[] = { "LevelP90",{-0.26,0.033},1 };
								};
								class VALP_1_90_R
								{
									type = "text";
									source = "static";
									text = "90";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = { "LevelP90",{0.26,-0.017},1 };
									right[] = { "LevelP90",{0.32,-0.017},1 };
									down[] = { "LevelP90",{0.26,0.033},1 };
								};
							};
						};
						class UnhideOnTurn
						{
							condition = "on";//"abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class Cross
							{
								type = "line";
								width = 3.0;
								points[] = { {"PlaneW",{-0.02,0},1},{"PlaneW",{-0.04,0},1},{},{"PlaneW",{0.02,0},1},{"PlaneW",{0.04,0},1},{},{"PlaneW",{0,-0.019708},1},{"PlaneW",{0,-0.0394161},1},{},{"PlaneW",{0,0.019708},1},{"PlaneW",{0,0.0394161},1},{} };
							};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = { 0.5,0.5 };
						pos10[] = { 0.773,0.773 };
						width = 4;
						points[] = { {{-0.002,-0.002},1},{{0.002,-0.002},1},{{0.002,0.002},1},{{-0.002,0.002},1},{{-0.002,-0.002},1} };
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = { {"Target",1,"Limit0109",1,{0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,0.02},1} };
						};
					};

					// class ThrustVectoringRotation2
					// {
					// 	type = "rotational";
					// 	source = "vtolvectoring";
					// 	sourceScale = 100;
					// 	center[] = {0.07, 0.785};
					// 	min = 0;
					// 	max = 100;
					// 	minAngle = -180;
					// 	maxAngle = "-180+90";
					// 	aspectRatio = 0.982906;
					// };
					// class ThrustVectoring2
					// {
					// 	condition = "1+vtolvectoring";
					// 	class VectorigNumber
					// 	{
					// 		type = "text";
					// 		source = "vtolvectoring";
					// 		sourceScale = 90;
					// 		align = "left";
					// 		scale = 1;
					// 		pos[] = {{0.116, 0.744}, 1};
					// 		right[] = {{0.151, 0.744}, 1};
					// 		down[] = {{0.116, 0.769}, 1};
					// 	};
					// 	// class ThrustVectoringText
					// 	// {
					// 	// 	type = "text";
					// 	// 	source = "static";
					// 	// 	text = "°";
					// 	// 	scale = 1;
					// 	// 	sourceScale = 1;
					// 	// 	align = "left";
					// 	// 	pos[] = {{0.132, 0.745}, 1};
					// 	// 	right[] = {{0.167, 0.745}, 1};
					// 	// 	down[] = {{0.132, 0.77}, 1};
					// 	// };
					// 	class VectoringArrow
					// 	{
					// 		type = "line";
					// 		width = 3;
					// 		points[] = {{"ThrustVectoringRotation", {0.01, 0}, 1}, {"ThrustVectoringRotation", {0.04, 0}, 1}, {}, {"ThrustVectoringRotation", {0.04, 0.02}, 1}, {"ThrustVectoringRotation", {0.04, -0.02}, 1}, {}};
					// 	};
					// };

					// class ThrustVectoringAuto2
					// {
					// 	condition = "-vtolvectoring";
					// 	class VectorigNumber
					// 	{
					// 		type = "text";
					// 		source = "static";
					// 		sourceScale = 1;
					// 		text = "AUTO";
					// 		align = "left";
					// 		scale = 1;
					// 		pos[] = {{0.132, 0.74}, 1};
					// 		right[] = {{0.167, 0.74}, 1};
					// 		down[] = {{0.132, 0.765}, 1};
					// 	};
					// };
				};
			};


		};

        class Reflectors : Reflectors
        {
            class Left : Left
            {
                ambient[] = { (255 / 255) * 10000,(100 / 255) * 10000,(0 / 255) * 10000 };
                color[] = { (255 / 255) * 10000,(100 / 255) * 10000,(0 / 255) * 10000 };
                coneFadeCoef = 10;
                dayLight = 0;
                innerAngle = 5;
                intensity = 200;//50
                outerAngle = 75;
                class Attenuation
                {
                    constant = 0;
                    hardLimitEnd = 1000;
                    hardLimitStart = 700;
                    linear = 1;
                    quadratic = 0;
                    start = 0;
                };
            };
            class Right : Right
            {
                ambient[] = { (255 / 255) * 10000,(100 / 255) * 10000,(0 / 255) * 10000 };
                color[] = { (255 / 255) * 10000,(100 / 255) * 10000,(0 / 255) * 10000 };
                coneFadeCoef = 10;
                dayLight = 0;
                innerAngle = 5;
                intensity = 200;//50
                outerAngle = 75;
                class Attenuation
                {
                    constant = 0;
                    hardLimitEnd = 1000;
                    hardLimitStart = 700;
                    linear = 1;
                    quadratic = 0;
                    start = 0;
                };
            };
        };
    };
	
    class MACRO_NEW_VEHICLE(air,LAATle,LAATle_332nd): 3AS_Patrol_LAAT_Republic
    {
        displayName = "LAAT/le Gunship";
        scope = 2;
        forceInGarage = 1;
        maximumLoad = 10000;

        faction = "EdCat_332nd";
        editorSubcategory = "EdSubcat_332nd_HELI";
		weapons[]=
				{
					 MACRO_NEW_WEAPON(air_dumb_rocketpod),
					"CMFlareLauncher"
				};
				magazines[]=
				{
				   "240Rnd_CMFlare_Chaff_Magazine",
			       "240Rnd_CMFlare_Chaff_Magazine",
			       "240Rnd_CMFlare_Chaff_Magazine",
					MACRO_NEW_MAG(Air_Dumb_rocket,24),
					MACRO_NEW_MAG(Air_Dumb_rocket,24),
					MACRO_NEW_MAG(Air_Dumb_rocket,24)
				};
        radarTargetSize = 0.3;
		visualTargetSize = 0.3;
		mainBladeRadius=0.1;
		liftForceCoef=3;
		cyclicAsideForceCoef=2.8;
		backRotorForceCoef=1.8;
		cyclicForwardForceCoef=2;
		mainRotorSpeed=-1;
		backRotorSpeed=1;
        crew = MACRO_NEW_UNIT(aviation,332nd_flight_cadet);
        typicalcargo[] = { MACRO_NEW_UNIT(aviation,332nd_flight_cadet) };


		class RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[]={3.2,0,0};
			defaultCollective=0.80500001;
			retreatBladeStallWarningSpeed=83;
			maxTorque=5800;
			stressDamagePerSec=0.0099999998;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
		};


		ls_impulsor_fuelDrain_1=0.00005;
        ls_impulsor_fuelDrain_2=0.00005;
        ls_impulsor_boostSpeed_1=400;
        ls_impulsor_boostSpeed_2=600;
        ls_hasImpulse=1;

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
						attachment="332nd_aux_magazine_Pylon_AGM_Med_x3";  
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
					class PylonRight3: PylonLeft2
					{
						UIposition[]={0.58999997,0.30000001};
					};
				};
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGun[]=
				{
					"usti_hlavne_1",
					"usti_hlavne_2"
				};
				class ViewGunner
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					gunnerOpticsEffect[]={};
					stabilizedInAxes=0;
					directionStabilized=0;
					horizontallyStabilized=0;
					initFov=1;
					minFov=0.60000002;
					maxFov=0.85000002;
					initAngleX=180;
					minAngleX=90;
					maxAngleX=270;
					initAngleY=-45;
					minAngleY=-90;
					maxAngleY=-30;
					minMoveX=-0.1;
					maxMoveX=0.1;
					minMoveY=-0.025;
					maxMoveY=0.1;
					minMoveZ=-0.1;
					maxMoveZ=0.1;
					gunnerOpticsModel="";
				};
				class Viewoptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					minAngleX=0;
					maxAngleX=0;
					initAngleX=0;
					minAngleY=-15;
					maxAngleY=15;
					initAngleY=0;
					initFov=0.75;
					minFov=0.25;
					maxFov=0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						initAngleX=0;
						minAngleX=0;
						maxAngleX=0;
						initAngleY=0;
						minAngleY=-15;
						maxAngleY=15;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsEffect[]={};
						initAngleX=-10;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						gunnerOpticsModel="";
					};
				};
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				primaryObserver=0;
				primaryGunner=1;
				animationSourceBody="mainTurret";
				body="mainTurret";
				gun="mainGun";
				animationSourceGun="mainGun";
				primary=1;
				usePip=1;
				turretFollowFreeLook=0;
				gunnerCompartments="Compartment1";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				proxyindex=1;
				isCopilot=1;
				gunnerName="Co-Pilot";
				showHMD=1;
				castCargoShadow=0;
				viewCargoShadow=0;
				castDriverShadow=0;
				viewDriverShadow=0;
				CanEject=0;
				hideWeaponsGunner=1;
				memoryPointsGetInGunner="pos_gunner";
				memoryPointsGetInGunnerDir="pos_gunner_dir";
				memoryPointGunnerOutOptics="gunnerviewout";
				discreteDistanceInitIndex=5;
				gunnerAction="Driver_mid01";
				gunnerInAction="Driver_mid01";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerUsesPilotView=0;
				commanding=-1;
				startEngine=0;
				stabilizedInAxes=3;
				showAllTargets=4;
				memoryPointLRocket="RocketL";
				memoryPointRRocket="RocketR";
				memoryPointLMissile="RocketL";
				memoryPointRMissile="RocketR";
				selectionFireAnim="zasleh";
				weapons[]=
				{
					MACRO_NEW_WEAPON(LE_30mm)
				};
				magazines[]=
				{
					MACRO_NEW_MAG(LE_30mm,600),
					MACRO_NEW_MAG(LE_30mm,600),
					MACRO_NEW_MAG(LE_30mm,600)
				};
				outGunnerMayFire=1;
				castGunnerShadow=0;
				viewGunnerShadow=0;
				gunnerOpticsModel="";
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.31622776,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.31622776,
					1,
					30
				};
				minElev=-30;
				initElev=0;
				maxElev=30;
				minTurn=-60;
				initTurn=0;
				maxTurn=60;
				minCamElev=-90;
				maxCamElev=90;
				elevationMode=0;
				memoryPointGunnerOptics="gunnerview";
			};
		};

        class TransportItems
        {

            class BactaSprayx25_332nd
            {
                name = "332nd_aux_medical_BactaSpray_x25";
                count = 4;
            };

            class PlastiBandagex25_332nd
            {
                name = "332nd_aux_medical_PlastiBandage_x25";
                count = 4;
            };

            class MedPatchx25_332nd
            {
                name = "332nd_aux_medical_MedPatch_x25";
                count = 4;
            };

            class BactaSprayx10_332nd
            {
                name = "332nd_aux_medical_BactaSpray_x10";
                count = 10;
            };

            class PlastiBandagex10_332nd
            {
                name = "332nd_aux_medical_PlastiBandage_x10";
                count = 10;
            };

            class MedPatchx10_332nd
            {
                name = "332nd_aux_medical_MedPatch_x10";
                count = 10;
            };

            class BactaSprayx5_332nd
            {
                name = "332nd_aux_medical_BactaSpray_x5";
                count = 10;
            };

            class PlastiBandagex5_332nd
            {
                name = "332nd_aux_medical_PlastiBandage_x5";
                count = 10;
            };

            class MedPatchx5_332nd
            {
                name = "332nd_aux_medical_MedPatch_x5";
                count = 10;
            };

            class MediKit_332nd
            {
                name = "332nd_aux_medical_MediKit";
                count = 10;
            };

            class BactaSpray_332nd
            {
                name = "332nd_aux_medical_BactaSpray";
                count = 50;
            };

            class PlastiBandage_332nd
            {
                name = "332nd_aux_medical_PlastiBandage";
                count = 50;
            };

            class MedPatch_332nd
            {
                name = "332nd_aux_medical_MedPatch";
                count = 50;
            };

            class Painkillers_332nd
            {
                name = "332nd_aux_medical_PainKiller";
                count = 40;
            };

			class CombatStim_332nd
			{
				name = "332nd_aux_medical_Combat";
				count = 40;
			};

            class Adrenaline_332nd
            {
                name = "332nd_aux_medical_Adrenaline";
                count = 40;
            };

            class Blood_332nd
            {
                name = "332nd_aux_medical_Blood";
                count = 75;
            };

			class Bacta_332nd
			{
				name = "332nd_aux_medical_Bacta";
				count = 25;
			};

			class Kolto_332nd
			{
				name = "332nd_aux_medical_Kolto";
				count = 25;
			};

			class BactaInj_332nd
			{
				name = "332nd_aux_medical_Bacta_Inj";
				count = 25;
			};

			class KoltoInj_332nd
			{
				name = "332nd_aux_medical_Kolto_Inj";
				count = 25;
			};

			class DefibStrips_332nd
			{
				name = "332nd_aux_medical_AdhesiveDefibStrip";
				count = 100;
			};

            class PressureCuff_332nd
            {
                name = "332nd_aux_medical_PressureCuff";
                count = 30;
            };
        };

        class TransportWeapons
        {
            class DC15A_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15a";
                count = 10;
            };

            class DC15S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15s";
                count = 10;
            };

            class DC15C_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15c";
                count = 10;
            };

            class DP23_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DP_23";
                count = 10;
            };

            class DW32S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DW_32S";
                count = 10;
            };

            class Valken38x_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Valken38x";
                count = 10;
            };

            class Z6_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Z6";
                count = 10;
            };

            class DC15B_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15b";
                count = 10;
            };

            class RPS1_Weps_332nd
            {
                weapon = "332nd_aux_weapon_RPS_1";
                count = 5;
            };
        };

		class TransportMagazines
		{
			class DC15A_low_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Low_x60";
				count = 300;
			};

			class DC15A_medium_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
				count = 300;
			};

			class DC15A_High_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_High_x10";
				count = 50;
			};

			class 332_Stun_332nd
			{
				magazine = "332nd_aux_magazine_Stun_x10";
				count = 100;
			};

			class DC15A_UGLAP_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
				count = 50;
			};

			class DC15A_UGLHE_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
				count = 50;
			};

			class DC15s_332nd
			{
				magazine = "332nd_aux_magazine_DC_15s_x60";
				count = 300;
			};

			class DC15c_332nd
			{
				magazine = "332nd_aux_magazine_DC_15c_Medium_x45";
				count = 300;
			};

			class DC15b_332nd
			{
				magazine = "332nd_aux_magazine_DC_15b_x60";
				count = 200;
			};

			class DC17_332nd
			{
				magazine = "332nd_aux_magazine_DC_17_x15";
				count = 50;
			};

			class SA35_332nd
			{
				magazine = "332nd_aux_magazine_35sa_low_x30";
				count = 50;
			};

			class DC15L_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_x200";
				count = 100;
			};

			class DC15L_T_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_T_x200";
				count = 100;
			};

			class DC17M_Rifle_332nd
			{
				magazine = "332nd_aux_magazine_DC_17m_rifle_x42";
				count = 300;
			};

			class DC17M_Marks_332nd
			{
				magazine = "332nd_aux_magazine_DC_17m_marks_x10";
				count = 300;
			};

			class DC17M_Grend_332nd
			{
				magazine = "332nd_aux_magazine_DC_17m_grend_x1";
				count = 50;
			};

			class DC_44h_332nd
			{
				magazine = "332nd_aux_magazine_DC_44h_x6";
				count = 300;
			};

			class DC_15k_332nd
			{
				magazine = "332nd_aux_magazine_DC_15k_x15";
				count = 300;
			};

			class MPS_HE_332nd
			{
				magazine = "332nd_aux_magazine_MPS_HE_x1";
				count = 15;
			};

			class MPS_Smoke_332nd
			{
				magazine = "332nd_aux_magazine_MPS_Smoke_x1";
				count = 15;
			};

			class MPS_Smoke_Red_332nd
			{
				magazine = "332nd_aux_magazine_MPS_Smoke_Red_x1";
				count = 15;
			};

			class MPS_Flare_332nd
			{
				magazine = "332nd_aux_magazine_MPS_Flare_x1";
				count = 15;
			};

			class DP_23_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12";
				count = 100;
			};

			class DP_23Wide_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12Wide";
				count = 100;
			};

			class DW_32_HIGH_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_x5";
				count = 50;
			};

			class DW_32_HIGH_T_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_T_x5";
				count = 50;
			};

			class DW_32_CONCMED_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_x20";
				count = 100;
			};

			class DW_32_CONCMED_T_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_T_x20";
				count = 100;
			};

			class Valken_38x_REFMED_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Firepuncher_high_T_332nd
			{
				magazine = "332nd_aux_magazine_Firepuncher_T_x8";
				count = 100;
			};

			class Firepuncher_high_332nd
			{
				magazine = "332nd_aux_magazine_Firepuncher_x8";
				count = 100;
			};

			class Westar_m5_40rnd
			{
				magazine = "332nd_aux_magazine_Westar_M5_x40";
				count = 300;
			};

			class Z6_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x200";
				count = 200;
			};

			class Z6_Super_332nd
			{
				magazine = "332nd_aux_magazine_Z6_Supercharge_x1";
				count = 250;
			};

			class Z6_ALT_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x125";
				count = 200;
			};

			class Flash_332nd
			{
				magazine = "332nd_aux_magazine_332_FLASH_x1";
				count = 30;
			};

			class ATCharge_332nd
			{
				magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
				count = 30;
			};

			class HEDPImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_HEDP_x1";
				count = 30;
			};

			class WhiteImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_WHITE_x1";
				count = 30;
			};

			class BlueImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_BLUE_x1";
				count = 30;
			};

			class GreenImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_GREEN_x1";
				count = 30;
			};

			class RedImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_RED_x1";
				count = 30;
			};

			class PurpleImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_PURPLE_x1";
				count = 30;
			};

			class YellowImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_YELLOW_x1";
				count = 30;
			};

			class OrangeImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_ORANGE_x1";
				count = 30;
			};

			class SquadShield_332nd
			{
				magazine = "332nd_aux_magazine_332_SquadShield_x1";
				count = 5;
			};

			class ThermalDet_332nd
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 30;
			};

			class PLXAA_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
				count = 10;
			};

			class PLXAT_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
				count = 10;
			};

			class PLXHE_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
				count = 10;
			};

			class RPS6AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
				count = 20;
			};

			class RPS6AA_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
				count = 20;
			};

			class RPS4AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_AT_x1";
				count = 20;
			};

			class RPS4HE_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_HE_x1";
				count = 20;
			};

			class DC15xATR_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x2";
				count = 20;
			};

			class Dm17HeartStarter_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_HeartStarter_x1";
				count = 50;
			};

			class Dm17Bacta_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_Bacta_x1";
				count = 25;
			};

			class Dm17Kolto_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_Kolto_x1";
				count = 25;
			};

			class Dm17CombatStim_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_CombatStim_x1";
				count = 50;
			};
		};

		class EventHandlers
        {
		    //init = "(_this select 0) spawn ls_vehicle_fnc_impulseMonitor";
            init = "[_this, 'AmmoBox_332nd', 'MedicalBox_332nd'] spawn ResupplyAir_fnc_AddCratesToInventory";
        };
	};

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd) :	MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base)
    {
        scope = 2;
        forceInGarage = 1;
        displayName = "LAAT Mk1";
        armor = 100 * 0.5;
        maximumLoad = 10000;

        class TransportItems
        {

            class BactaSprayx25_332nd
            {
                name = "332nd_aux_medical_BactaSpray_x25";
                count = 4;
            };

            class PlastiBandagex25_332nd
            {
                name = "332nd_aux_medical_PlastiBandage_x25";
                count = 4;
            };

            class MedPatchx25_332nd
            {
                name = "332nd_aux_medical_MedPatch_x25";
                count = 4;
            };

            class BactaSprayx10_332nd
            {
                name = "332nd_aux_medical_BactaSpray_x10";
                count = 10;
            };

            class PlastiBandagex10_332nd
            {
                name = "332nd_aux_medical_PlastiBandage_x10";
                count = 10;
            };

            class MedPatchx10_332nd
            {
                name = "332nd_aux_medical_MedPatch_x10";
                count = 10;
            };

            class BactaSprayx5_332nd
            {
                name = "332nd_aux_medical_BactaSpray_x5";
                count = 10;
            };

            class PlastiBandagex5_332nd
            {
                name = "332nd_aux_medical_PlastiBandage_x5";
                count = 10;
            };

            class MedPatchx5_332nd
            {
                name = "332nd_aux_medical_MedPatch_x5";
                count = 10;
            };

            class MediKit_332nd
            {
                name = "332nd_aux_medical_MediKit";
                count = 10;
            };

            class BactaSpray_332nd
            {
                name = "332nd_aux_medical_BactaSpray";
                count = 50;
            };

            class PlastiBandage_332nd
            {
                name = "332nd_aux_medical_PlastiBandage";
                count = 50;
            };

            class MedPatch_332nd
            {
                name = "332nd_aux_medical_MedPatch";
                count = 50;
            };

            class Painkillers_332nd
            {
                name = "332nd_aux_medical_PainKiller";
                count = 40;
            };

			class CombatStim_332nd
			{
				name = "332nd_aux_medical_Combat";
				count = 40;
			};

            class Adrenaline_332nd
            {
                name = "332nd_aux_medical_Adrenaline";
                count = 40;
            };

            class Blood_332nd
            {
                name = "332nd_aux_medical_Blood";
                count = 75;
            };

			class Bacta_332nd
			{
				name = "332nd_aux_medical_Bacta";
				count = 25;
			};

			class Kolto_332nd
			{
				name = "332nd_aux_medical_Kolto";
				count = 25;
			};

			class BactaInj_332nd
			{
				name = "332nd_aux_medical_Bacta_Inj";
				count = 25;
			};

			class KoltoInj_332nd
			{
				name = "332nd_aux_medical_Kolto_Inj";
				count = 25;
			};

			class DefibStrips_332nd
			{
				name = "332nd_aux_medical_AdhesiveDefibStrip";
				count = 100;
			};

            class PressureCuff_332nd
            {
                name = "332nd_aux_medical_PressureCuff";
                count = 30;
            };
        };

        class TransportWeapons
        {
            class DC15A_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15a";
                count = 10;
            };

            class DC15S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15s";
                count = 10;
            };

            class DC15C_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15c";
                count = 10;
            };

            class DP23_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DP_23";
                count = 10;
            };

            class DW32S_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DW_32S";
                count = 10;
            };

            class Valken38x_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Valken38x";
                count = 10;
            };

            class Z6_Weps_332nd
            {
                weapon = "332nd_aux_weapon_Z6";
                count = 10;
            };

            class DC15B_Weps_332nd
            {
                weapon = "332nd_aux_weapon_DC_15b";
                count = 10;
            };

            class RPS1_Weps_332nd
            {
                weapon = "332nd_aux_weapon_RPS_1";
                count = 5;
            };
        };

		class TransportMagazines
		{
			class DC15A_low_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Low_x60";
				count = 300;
			};

			class DC15A_medium_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
				count = 300;
			};

			class DC15A_High_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_High_x10";
				count = 50;
			};

			class 332_Stun_332nd
			{
				magazine = "332nd_aux_magazine_Stun_x10";
				count = 100;
			};

			class DC15A_UGLAP_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
				count = 50;
			};

			class DC15A_UGLHE_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
				count = 50;
			};

			class DC15s_332nd
			{
				magazine = "332nd_aux_magazine_DC_15s_x60";
				count = 300;
			};

			class DC15c_332nd
			{
				magazine = "332nd_aux_magazine_DC_15c_Medium_x45";
				count = 300;
			};

			class DC15b_332nd
			{
				magazine = "332nd_aux_magazine_DC_15b_x60";
				count = 200;
			};

			class DC17_332nd
			{
				magazine = "332nd_aux_magazine_DC_17_x15";
				count = 50;
			};

			class SA35_332nd
			{
				magazine = "332nd_aux_magazine_35sa_low_x30";
				count = 50;
			};

			class DC15L_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_x200";
				count = 100;
			};

			class DC15L_T_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_T_x200";
				count = 100;
			};

			class DC17M_Rifle_332nd
			{
				magazine = "332nd_aux_magazine_DC_17m_rifle_x60";
				count = 300;
			};

			class DC17M_Marks_332nd
			{
				magazine = "332nd_aux_magazine_DC_17m_marks_x5";
				count = 300;
			};

			class DC17M_Grend_332nd
			{
				magazine = "332nd_aux_magazine_DC_17m_grend_x4";
				count = 50;
			};

			class DC_44h_332nd
			{
				magazine = "332nd_aux_magazine_DC_44h_x6";
				count = 300;
			};

			class DC_15k_332nd
			{
				magazine = "332nd_aux_magazine_DC_15k_x15";
				count = 300;
			};

			class MPS_HE_332nd
			{
				magazine = "332nd_aux_magazine_MPS_HE_x1";
				count = 15;
			};

			class MPS_Smoke_332nd
			{
				magazine = "332nd_aux_magazine_MPS_Smoke_x1";
				count = 15;
			};

			class MPS_Smoke_Red_332nd
			{
				magazine = "332nd_aux_magazine_MPS_Smoke_Red_x1";
				count = 15;
			};

			class MPS_Flare_332nd
			{
				magazine = "332nd_aux_magazine_MPS_Flare_x1";
				count = 15;
			};

			class DP_23_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12";
				count = 100;
			};

			class DP_23Wide_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12Wide";
				count = 100;
			};

			class DW_32_HIGH_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_x5";
				count = 50;
			};

			class DW_32_HIGH_T_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_T_x5";
				count = 50;
			};

			class DW_32_CONCMED_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_x20";
				count = 100;
			};

			class DW_32_CONCMED_T_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_T_x20";
				count = 100;
			};

			class Valken_38x_REFMED_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Valken_38x_REFMED_T_332nd
			{
				magazine = "332nd_aux_magazine_Valken38x_T_x15";
				count = 100;
			};

			class Firepuncher_high_T_332nd
			{
				magazine = "332nd_aux_magazine_Firepuncher_T_x8";
				count = 100;
			};

			class Firepuncher_high_332nd
			{
				magazine = "332nd_aux_magazine_Firepuncher_x8";
				count = 100;
			};

			class Westar_m5_40rnd
			{
				magazine = "332nd_aux_magazine_Westar_M5_x40";
				count = 300;
			};

			class Z6_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x200";
				count = 200;
			};

			class Z6_Super_332nd
			{
				magazine = "332nd_aux_magazine_Z6_Supercharge_x1";
				count = 250;
			};

			class Z6_ALT_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x125";
				count = 200;
			};

			class Flash_332nd
			{
				magazine = "332nd_aux_magazine_332_FLASH_x1";
				count = 30;
			};

			class ATCharge_332nd
			{
				magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
				count = 30;
			};

			class HEDPImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_HEDP_x1";
				count = 30;
			};

			class WhiteImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_WHITE_x1";
				count = 30;
			};

			class BlueImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_BLUE_x1";
				count = 30;
			};

			class GreenImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_GREEN_x1";
				count = 30;
			};

			class RedImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_RED_x1";
				count = 30;
			};

			class PurpleImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_PURPLE_x1";
				count = 30;
			};

			class YellowImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_YELLOW_x1";
				count = 30;
			};

			class OrangeImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_ORANGE_x1";
				count = 30;
			};

			class SquadShield_332nd
			{
				magazine = "332nd_aux_magazine_332_SquadShield_x1";
				count = 5;
			};

			class ThermalDet_332nd
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 30;
			};

			class PLXAA_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
				count = 10;
			};

			class PLXAT_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
				count = 10;
			};

			class PLXHE_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
				count = 10;
			};

			class RPS6AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
				count = 20;
			};

			class RPS6AA_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
				count = 20;
			};

			class RPS4AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_AT_x1";
				count = 20;
			};

			class RPS4HE_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_HE_x1";
				count = 20;
			};

			class DC15xATR_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x2";
				count = 20;
			};

			class Dm17HeartStarter_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_HeartStarter_x1";
				count = 50;
			};

			class Dm17Bacta_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_Bacta_x1";
				count = 25;
			};

			class Dm17Kolto_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_Kolto_x1";
				count = 25;
			};

			class Dm17CombatStim_332nd
			{
				magazine = "332nd_aux_magazine_DM_17_CombatStim_x1";
				count = 50;
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
                armor = 999;
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
            class HitEngine_1 : HitEngine_1
            {
                armor = 999;
                passThrough = 1;
                explosionShielding = 2;
                convexComponent = "engine_hit_1";
                name = "engine_hit_1";
                hitpoint = "engine_hit_1";
                minimalHit = 0.6;
            };
            class HitEngine_2 : HitEngine_2
            {
                armor = 999;
                passThrough = 1;
                explosionShielding = 2;
                convexComponent = "engine_hit_2";
                name = "engine_hit_2";
                hitpoint = "engine_hit_2";
                minimalHit = 0.6;
            };
            class HitHRotor : HitHRotor
            {
                armor = 999;
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
                armor = 999;
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
            };
        };

        class TextureSources
        {
            class Standard
            {
                displayname = "332nd Standard";
                author = "Halligan";
                textures[] =
                {
					MACRO_LAAT_TEXTURES\Base\Body\body1_co.paa,"lsd_vehicles_heli\laati\data\body2_co.paa",
					MACRO_LAAT_TEXTURES\Base\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Base\Doors\Doors2\door2_co.paa,"lsd_vehicles_heli\laati\data\door3_co.paa",
					MACRO_LAAT_TEXTURES\Base\Wings\wings_co.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					MACRO_LAAT_TEXTURES\Base\Cockpit\cockpits_co.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
                factions[] =
                {
                    "EdCat_332nd"
                };
            };
			class Test
			{
				displayname = "332nd Test";
				author = "Falx";
				textures[] =
				{
					MACRO_LAAT_TEXTURES\Variants\Test\body1.paa,MACRO_LAAT_TEXTURES\Variants\Test\body2.paa,
					MACRO_LAAT_TEXTURES\Variants\Test\door1.paa,MACRO_LAAT_TEXTURES\Variants\Test\door2.paa,MACRO_LAAT_TEXTURES\Variants\Test\door3.paa,
					MACRO_LAAT_TEXTURES\Variants\Test\wings.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					MACRO_LAAT_TEXTURES\Variants\Test\cockpit.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[] =
				{
					"EdCat_332nd"
				};
			};
            class Noseart_Verus
            {
                displayName = "332nd Verus Noseart";
                author = "Halligan";
                textures[] =
                {
                    MACRO_LAAT_TEXTURES\Variants\Verus\Verus_ca.paa,"lsd_vehicles_heli\laati\data\body2_co.paa",
                    MACRO_LAAT_TEXTURES\Base\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Base\Doors\Doors2\door2_co.paa, "lsd_vehicles_heli\laati\data\door3_co.paa",
                    MACRO_LAAT_TEXTURES\Base\Wings\wings_co.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
                    MACRO_LAAT_TEXTURES\Base\Cockpit\cockpits_co.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
                factions[] =
                {
                    "EdCat_332nd"
                };
            };
            class Noseart_Chopper
            {
                displayName = "332nd Chopper Noseart";
                author = "Halligan";
                textures[] =
                {
                    MACRO_LAAT_TEXTURES\Variants\Chopper\Chopper_co.paa,"lsd_vehicles_heli\laati\data\body2_co.paa",
                    MACRO_LAAT_TEXTURES\Base\Doors\Doors1\door1_co.paa,MACRO_LAAT_TEXTURES\Base\Doors\Doors2\door2_co.paa, "lsd_vehicles_heli\laati\data\door3_co.paa",
                    MACRO_LAAT_TEXTURES\Base\Wings\wings_co.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
                    MACRO_LAAT_TEXTURES\Base\Cockpit\cockpits_co.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
                factions[] =
                {
                    "EdCat_332nd"
                };
            };
			class Noseart_Blast
			{
				displayName = "332nd Blast Noseart";
				author = "Falx";
				textures[] =
				{
					MACRO_LAAT_TEXTURES\Variants\Blast\body1.paa,MACRO_LAAT_TEXTURES\Variants\Blast\body2.paa,
					MACRO_LAAT_TEXTURES\Variants\Blast\door1.paa,MACRO_LAAT_TEXTURES\Variants\Blast\door2.paa,MACRO_LAAT_TEXTURES\Variants\Blast\door3.paa,
					MACRO_LAAT_TEXTURES\Variants\Blast\wings.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					MACRO_LAAT_TEXTURES\Variants\Blast\cockpit.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[] =
				{
					"EdCat_332nd"
				};
			};
			class Lead_332nd
			{
				displayName = "332nd Leadership";
				author = "Falx";
				textures[] =
				{
					MACRO_LAAT_TEXTURES\Variants\Lead\body1.paa,MACRO_LAAT_TEXTURES\Variants\Lead\body2.paa,
					MACRO_LAAT_TEXTURES\Variants\Lead\door1.paa,MACRO_LAAT_TEXTURES\Variants\Lead\door2.paa,MACRO_LAAT_TEXTURES\Variants\Lead\door3.paa,
					MACRO_LAAT_TEXTURES\Variants\Lead\wings.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					MACRO_LAAT_TEXTURES\Variants\Lead\cockpit.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[] =
				{
					"EdCat_332nd"
				};
			};
			class Tech_332nd
			{
				displayName = "332nd Flight Technician";
				author = "Falx";
				textures[] =
				{
					MACRO_LAAT_TEXTURES\Variants\Tech\body1.paa,MACRO_LAAT_TEXTURES\Variants\Tech\body2.paa,
					MACRO_LAAT_TEXTURES\Variants\Tech\door1.paa,MACRO_LAAT_TEXTURES\Variants\Tech\door2.paa,MACRO_LAAT_TEXTURES\Variants\Tech\door3.paa,
					MACRO_LAAT_TEXTURES\Variants\Tech\wings.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					MACRO_LAAT_TEXTURES\Variants\Tech\cockpit.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[] =
				{
					"EdCat_332nd"
				};
			};
            class Ahegao
            {
                displayName = "Transport Gunship (Ahegao)";
                author = MACRO_AUTHOR;
                factions[] = { "EdCat_332nd" };
                textures[] = {
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Body1.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Body2.paa,
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Door1.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Door2.paa,MACRO_LAAT_TEXTURES\Variants\Ahegao\Door3.paa,
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Wings.paa,
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
                    MACRO_LAAT_TEXTURES\Variants\Ahegao\Cockpit.paa,"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
            };
        };
	};
};