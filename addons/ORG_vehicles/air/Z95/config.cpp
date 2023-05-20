#include "../../../ORG_main/macros/main.hpp" // my config macro lib
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
	class Plane_Base_F;
	class VTOL_Base_F : Plane_Base_F
	{
		class NewTurret;
		class ViewPilot;
		class HitPoints
		{
			class HitHull;
		};
	};
	class 3AS_Z95_VTOL_Base_F : VTOL_Base_F
	{
		class AnimationSources;
		class Components;
	};
	class 3AS_Z95_VTOL_Base : 3AS_Z95_VTOL_Base_F
	{
	  class sounds;
	};
	class 3AS_Z95_VTOL_Dynamic_Base_F : 3AS_Z95_VTOL_Base
	{
	
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};
	class 3AS_Z95_Republic : 3AS_Z95_VTOL_Dynamic_Base_F
	{
		class Components : Components
		{	
		};
		class ACE_SelfActions;
	};

	class MACRO_NEW_VEHICLE(air,Z,95) : 3AS_Z95_Republic
	{
		displayName = "Z-95";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_PLANE";
		hiddenselectionstextures[]=
		{
			"ORG_vehicles\_textures\air\Z95\ORG_body_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		crew = "ORG_aux_infantry_unit_trooper";
		class EjectionSystem
		{
			EjectionSeatEnabled = 0;										//enable advanced ejection system								
		};
		VTOLPitchInfluence = 15;
		VTOLRollInfluence = 15;
		VTOLYawInfluence = 17;
		acceleration=1000;
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=0;
		tBody=0;
		radartype=4;
		lockdetectionsystem="2 + 8 + 4";
		incommingmissliedetectionsystem=16;
		maxSpeed=1600;
		landingAoa="6 * 3.1415 / 180";
		landingSpeed=215;
		stallSpeed=190;
		stallWarningTreshold=0.1;
		armor=150;
		armorStructured=1;
		envelope[] = {0,0.01,0.2,4,6,7.6,8.4,9.2,9.4,9.6,9.7,9.8,8,1};
		draconicForceXCoef=7;
		draconicForceYCoef=4;
		draconicForceZCoef=1;
		draconicTorqueXCoef=2.0999999;
		draconicTorqueYCoef=-0.4;
		angleOfIndicence=0;
		airFriction0[]={40,20,10};
		airFriction1[]={40,20,10};
		airFriction2[]={40,20,10};
		altNoForce=20000;
		altFullForce=20000;
		elevatorCoef[]={1};
		elevatorSensitivity=2;
		elevatorControlsSensitivityCoef=6;
		aileronCoef[]={1};
		aileronSensitivity=2;
		aileronControlsSensitivityCoef=4;
		rudderCoef[]={3.6,4,5,5.9000001,4.8,4,3};
		rudderInfluence=0.89999998;
		rudderControlsSensitivityCoef=2;
		thrustCoef[] = {2.5,2.7,3.5,3.14,3.13,3.12,3.1,3.07,2.99,2.2,2,2,2};
		irScanRangeMin=10;
		irScanRangeMax=10000;
		irScanToEyeFactor=8;
		fuelCapacity=2000;
		wheelSteeringSensitivity=1.5;
		maxOmega=2000;
		airBrake=150;
		airBrakeFrictionCoef=60;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.60000002;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
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
		  soundengineonint[]=
		{
			"ORG_weapons\sounds\vehicles\Z95\Z95_engine_start_int.wss",
			1,
			1
		};
		soundengineonext[]=
		{
			"ORG_weapons\sounds\vehicles\Z95\Z95_engine_start_ext.wss",
			1,
			1,
			300
		};
		soundengineoffint[]=
		{
			"ORG_weapons\sounds\vehicles\Z95\Z95_engine_shut_ext.wss",
			1,
			1
		};
		soundengineoffext[]=
		{
			"ORG_weapons\sounds\vehicles\Z95\Z95_engine_shut_int.wss",
			1,
			1,
			300
		};
		class sounds: sounds
		{
			soundSets[]=
			{
				"ORG_Z95_EngineLowExt_SoundSet",
				"ORG_Z95_EngineHighExt_SoundSet",
				"ORG_Z95_ForsageExt_SoundSet",
				"ORG_Z95_EngineExt_Dist_Front_SoundSet",
				"ORG_Z95_EngineExt_Middle_SoundSet",
				"ORG_Z95_EngineExt_Dist_Rear_SoundSet",
				"ORG_Z95_EngineLowInt_SoundSet",
				"ORG_Z95_EngineHighInt_SoundSet",
				"ORG_Z95_ForsageInt_SoundSet",
				
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"ORG_C_Pylon"
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
							"ORG_A_Pylon"
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
							"ORG_B_Pylon"
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
							"ORG_B_Pylon"
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
		};

		class ACE_SelfActions : ACE_SelfActions
		{

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
				icon = MACRO_HUD_CHANGER_ICONS\black.paa;

			};

				class ORG_aux_Clear_HUD :ORG_aux_Red_HUD
				{
				displayName = "No HUD Color";
				statement = [1,1,1,0,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
				icon = MACRO_HUD_CHANGER_ICONS\noHud.paa;

			};
			};

			IntercomMacroAIR
		};
	};
};