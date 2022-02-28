//#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib
//class CfgPatches
//{
//	class MACRO_PATCH_NAME(MPS_5)
//	{
//		author = "332nd Aux Team";
//        addonRootClass = MACRO_PATCH_NAME(weapons)
//		requiredAddons[]=
//		{
//			"A3_Data_F",
//		    "A3_Weapons_F",
//			MACRO_PATCH_NAME(weapons)
//		};
//		requiredVersion = 0.1;
//		units[] = {
//			MACRO_NEW_UNIT(MPS_5,Deployed),
//		};
//		weapons[] = {
//			MACRO_NEW_WEAPON(MPS_5),
//			MACRO_NEW_WEAPON(MPS_5_Carry),
//		};
//	};
//};
//
//class CfgFunctions
//{
//	class Aux332nd_MPS
//	{
//		class Functions
//		{
//			file = "\332nd_weapons\Launchers\MPS-5\functions";
//			class canDeployWeapon
//			{
//			};
//			class canPickupWeapon
//			{
//			};
//			class canSelectNextMagazine
//			{
//			};
//			class doDeployWeapon
//			{
//			};
//			class doPickupWeapon
//			{
//			};
//			class doReload
//			{
//			};
//			class doSelectNextMagazine
//			{
//			};
//			class handleFired
//			{
//			};
//			class handlePlayerVehicleChanged
//			{
//			};
//			class leveltoGround
//			{
//			};
//		};
//	};
//};
//
//
//class Mode_SemiAuto;
//class CfgWeapons
//{
//	class Launcher_Base_F;
//
//	class potato_vz99_carryWeapon : Launcher_Base_F
//	{
//		class WeaponSlotsInfo;
//	};
//
//	class MACRO_NEW_WEAPON(MPS_5_Carry) : potato_vz99_carryWeapon
//	{
//		author = "Falx";
//		scope = 2;
//		displayName = "MPS-5 60mm Mortar";
//		displayNameShort = "MPS-5";
//		model = "\z\potato\addons\vz99\data\vz99_carry";
//		picture = "\z\potato\addons\vz99\ui\weaponSide_ca.paa";
//		modes[] = {};
//	};
//
//	class CannonCore;
//	class potato_vz99_mortar60mm : CannonCore
//	{
//
//	};
//	class MACRO_NEW_WEAPON(MPS_5) : potato_vz99_mortar60mm
//	{
//		class StandardSound
//		{
//			SoundSetShot[] =
//			{
//				"Mortar82mm_Shot_SoundSet",
//				"Mortar82mm_Tail_SoundSet"
//			};
//			begin1[] =
//			{
//				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
//				1.25893,
//				1,
//				250
//			};
//			begin2[] =
//			{
//				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
//				1.25893,
//				1,
//				250
//			};
//			soundBegin[] =
//			{
//				"begin1",
//				0.5,
//				"begin2",
//				0.5
//			};
//		};
//		modes[] =
//		{
//			"Trigger"
//		};
//		class Trigger : Mode_SemiAuto
//		{
//			class StandardSound
//			{
//				SoundSetShot[] =
//				{
//					"Mortar82mm_Shot_SoundSet",
//					"Mortar82mm_Tail_SoundSet"
//				};
//				begin1[] =
//				{
//					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
//					1.25893,
//					1,
//					250
//				};
//				begin2[] =
//				{
//					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
//					1.25893,
//					1,
//					250
//				};
//				soundBegin[] =
//				{
//					"begin1",
//					0.5,
//					"begin2",
//					0.5
//				};
//			};
//			sounds[] =
//			{
//				"StandardSound"
//			};
//			reloadSound[] =
//			{
//				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
//				1,
//				1,
//				20
//			};
//			soundServo[] =
//			{
//				"",
//				9.9999997e-005,
//				1
//			};
//			reloadTime = 1.8;
//			minRange = 0;
//			midRange = 0;
//			maxRange = 0;
//			displayName = "Trigger";
//			textureType = "semi";
//		};
//		scope = 1;
//		displayName = "MPS-5 60mm Mortar";
//		displayNameShort = "MPS-5";
//		nameSound = "CannonCore";
//		cursor = "mortar";
//		cursorAim = "EmptyCursor";
//		sounds[] =
//		{
//			"StandardSound"
//		};
//		reloadSound[] =
//		{
//			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
//			1,
//			1,
//			20
//		};
//		reloadMagazineSound[] =
//		{
//			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
//			1,
//			1,
//			20
//		};
//		soundServo[] =
//		{
//			"",
//			9.9999997e-005,
//			1
//		};
//		minRange = 80;
//		minRangeProbab = 0.69999999;
//		midRange = 2000;
//		midRangeProbab = 0.69999999;
//		maxRange = 4000;
//		maxRangeProbab = 0.1;
//		reloadTime = 1.8;
//		magazineReloadTime = 3.3;
//		maxLeadSpeed = 100;
//		autoReload = 1;
//		canLock = 0;
//		magazines[] =
//		{
//			MACRO_NEW_MAG(MPS_5_HE,1),
//			MACRO_NEW_MAG(MPS_5_HE_Charge0,1),
//			MACRO_NEW_MAG(MPS_5_HE_multi,1),
//			MACRO_NEW_MAG(MPS_5_HE_multi_Charge0,1),
//			"potato_vz99_HE_PRX",
//			"potato_vz99_HE_PRX_charge0",
//			"potato_vz99_smokeWhite",
//			"potato_vz99_smokeWhite_charge0",
//			"potato_vz99_smokeRed",
//			"potato_vz99_smokeRed_charge0",
//			"potato_vz99_flare",
//			"potato_vz99_flare_charge0"
//		};
//		ballisticsComputer = 0;
//		class GunParticles
//		{
//			class FirstEffect
//			{
//				effectName = "MortarFired";
//				positionName = "Usti Hlavne";
//				directionName = "Konec Hlavne";
//			};
//		};
//	};
//
//};
//
//
//class CfgVehicles
//{
//	class Man;
//	class CAManBase : Man
//	{
//		class ACE_SelfActions
//		{
//			class mps_5_deploy
//			{
//				displayName = "Deploy MPS-5";
//				condition = "_this call Aux332nd_MPS_fnc_canDeployWeapon";
//				statement = "_this call Aux332nd_MPS_fnc_doDeployWeapon";
//				exceptions[] = {};
//				icon = "\z\potato\addons\vz99\UI\action_mortar_ca.paa";
//			};
//		};
//	};
//	class LandVehicle;
//	class StaticWeapon : LandVehicle
//	{
//		class Turrets
//		{
//			class MainTurret;
//		};
//		class ACE_SelfActions;
//		class ACE_Actions
//		{
//			class ACE_MainActions;
//		};
//	};
//	class StaticMortar : StaticWeapon
//	{
//		class Turrets : Turrets
//		{
//			class MainTurret : MainTurret
//			{
//				class ViewOptics;
//			};
//		};
//	};
//	class potato_vz99_mortar : StaticMortar
//	{
//
//	};
//
//	class MACRO_NEW_UNIT(MPS_5,Deployed) : potato_vz99_mortar
//	{
//		ace_dragging_canCarry = 0;
//		ace_dragging_canDrag = 0;
//		ace_cargo_hasCargo = 0;
//		ace_cargo_canLoad = 0;
//		class ACE_Actions : ACE_Actions
//		{
//			class ACE_MainActions : ACE_MainActions
//			{
//				selection = "bubble start";
//			};
//			class mps_5_pickup
//			{
//				displayName = "Pickup Weapon";
//				selection = "Konec hlavne";
//				distance = 3;
//				condition = "_this call Aux332nd_MPS_fnc_canPickupWeapon";
//				statement = "_this call Aux332nd_MPS_fnc_doPickupWeapon";
//			};
//		};
//		class ACE_SelfActions : ACE_SelfActions
//		{
//			class Aux332nd_MPS_load_HE
//			{
//				displayName = "Load HE-Impact @ Charge 1";
//				condition = "([""332nd_aux_magazine_MPS_5_HE_1x""] call Aux332nd_MPS_fnc_canSelectNextMagazine|| {[""332nd_aux_magazine_MPS_5_HE_multi_1x""] call Aux332nd_MPS_fnc_canSelectNextMagazine})";
//				statement = "[""332nd_aux_magazine_MPS_5_HE_1x""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//				exceptions[] = {};
//				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				class Aux332nd_MPS_load_HE_charge0
//				{
//					displayName = "@ Charge 0";
//					condition = "true";
//					statement = "[""332nd_aux_magazine_MPS_5_HE_Charge0_1x""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//					icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				};
//			};
//			class Aux332nd_MPS_load_HE_PRX
//			{
//				displayName = "Load HE-Proximity @ Charge 1";
//				condition = "[""potato_vz99_HE_PRX""] call Aux332nd_MPS_fnc_canSelectNextMagazine";
//				statement = "[""potato_vz99_HE_PRX""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//				exceptions[] = {};
//				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				class Aux332nd_MPS_load_HE_charge0
//				{
//					displayName = "@ Charge 0";
//					condition = "true";
//					statement = "[""potato_vz99_HE_PRX_charge0""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//					icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				};
//			};
//			class Aux332nd_MPS_load_smokeWhite
//			{
//				displayName = "Load Smoke(White) @ Charge 1";
//				condition = "[""potato_vz99_smokeWhite""] call Aux332nd_MPS_fnc_canSelectNextMagazine";
//				statement = "[""potato_vz99_smokeWhite""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//				exceptions[] = {};
//				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				class Aux332nd_MPS_load_smokeWhite_charge0
//				{
//					displayName = "@ Charge 0";
//					condition = "true";
//					statement = "[""potato_vz99_smokeWhite_charge0""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//					icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				};
//			};
//			class Aux332nd_MPS_load_smokeRed
//			{
//				displayName = "Load Smoke(Red) @ Charge 1";
//				condition = "[""potato_vz99_smokeRed""] call Aux332nd_MPS_fnc_canSelectNextMagazine";
//				statement = "[""potato_vz99_smokeRed""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//				exceptions[] = {};
//				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				class Aux332nd_MPS_load_smokeRed_charge0
//				{
//					displayName = "@ Charge 0";
//					condition = "true";
//					statement = "[""potato_vz99_smokeRed_charge0""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//					icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				};
//			};
//			class Aux332nd_MPS_load_flare
//			{
//				displayName = "Load Flare @ Charge 1";
//				condition = "[""potato_vz99_flare""] call Aux332nd_MPS_fnc_canSelectNextMagazine";
//				statement = "[""potato_vz99_flare""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//				exceptions[] = {};
//				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				class Aux332nd_MPS_load_flare_charge0
//				{
//					displayName = "@ Charge 0";
//					condition = "true";
//					statement = "[""potato_vz99_flare_charge0""] call Aux332nd_MPS_fnc_doSelectNextMagazine";
//					icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
//				};
//			};
//		};
//		model = "\z\potato\addons\vz99\data\vz99_vehicle";
//		class AnimationSources
//		{
//			class Level
//			{
//				source = "user";
//				animPeriod = 0.5;
//				initPhase = 0;
//			};
//			class DirFix
//			{
//				source = "user";
//				animPeriod = 0.5;
//				initPhase = 0;
//			};
//		};
//		features = "";
//		author = "PabstMirror";
//		scope = 2;
//		side = 1;
//		faction = "BLU_F";
//		crew = "B_Soldier_F";
//		availableForSupportTypes[] =
//		{
//			"Artillery"
//		};
//		displayName = "MPS-5 60mm Mortar";
//		displayNameShort = "MPS-5";
//		transportSoldier = 0;
//		cargoAction[] =
//		{
//			"Mortar_Gunner"
//		};
//		getInAction = "GetInMortar";
//		getOutAction = "GetOutLow";
//		editorSubcategory = "EdSubcat_Turrets";
//		picture = "\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
//		icon = "\A3\Static_f\Mortar_01\data\UI\map_Mortar_01_CA.paa";
//		cost = 200000;
//		accuracy = 0.25;
//		threat[] = { 1,0.30000001,0.1 };
//		htMin = 1;
//		htMax = 480;
//		afMax = 0;
//		mfMax = 0;
//		mFact = 1;
//		tBody = 100;
//		class DestructionEffects
//		{
//			class Smoke
//			{
//				simulation = "particles";
//				type = "WeaponWreckSmoke";
//				position = "destructionEffect";
//				intensity = 1;
//				interval = 1;
//				lifeTime = 5;
//			};
//		};
//		artilleryScanner = 0;
//		laserScanner = 0;
//		class Turrets : Turrets
//		{
//			class MainTurret : MainTurret
//			{
//				gunnerForceOptics = 1;
//				cameraDir = "Sight";
//				animationSourceBody = "mainTurret";
//				animationSourceCamElev = "camElev";
//				animationSourceGun = "mainGun";
//				maxVerticalRotSpeed = 50;
//				maxHorizontalRotSpeed = 50;
//				memoryPointsGetInGunner = "pos gunner";
//				memoryPointsGetInGunnerDir = "pos gunner dir";
//				gunnerAction = "Mortar_Gunner";
//				gunnergetInAction = "";
//				gunnergetOutAction = "";
//				elevationMode = 0;
//				stabilizedInAxes = 0;
//				initCamElev = 0;
//				minCamElev = -35;
//				maxCamElev = 35;
//				minTurn = -180;
//				maxTurn = 180;
//				initTurn = 0;
//				discreteDistance[] = {};
//				discreteDistanceInitIndex = 0;
//				discreteDistanceCameraPoint[] = {};
//				turretInfoType = "RscOptics_Offroad_01";
//				memoryPointGunnerOptics = "eye";
//				gunnerOpticsModel = "\A3\Weapons_F\empty.p3d";
//				class ViewOptics : ViewOptics
//				{
//					initAngleX = 0;
//					minAngleX = -30;
//					maxAngleX = 30;
//					initAngleY = 0;
//					minAngleY = -100;
//					maxAngleY = 100;
//					initFov = 0.75;
//					minFov = 0.75;
//					maxFov = 0.75;
//					visionMode[] =
//					{
//						"Normal",
//						"NVG"
//					};
//				};
//				initElev = -25;
//				minelev = -45;
//				maxelev = -5;
//				magazines[] = {};
//				weapons[] =
//				{
//					MACRO_NEW_WEAPON(MPS_5)
//				};
//			};
//		};
//	};
//};
//
//
//class CfgAmmo
//{
//	class SmokeShellArty;
//	class ShotDeployBase;
//	class Sh_82mm_AMOS;
//	class Flare_82mm_AMOS_White;
//	class potato_vz99_deploy_smokeWhite : SmokeShellArty
//	{
//		smokeColor[] = { 1,1,1,1 };
//	};
//	class potato_vz99_deploy_smokeRed : SmokeShellArty
//	{
//		smokeColor[] = { 1,0,0,1 };
//	};
//	class potato_vz99_ammo_smokeWhite : ShotDeployBase
//	{
//		model = "\A3\weapons_f\ammo\shell";
//		submunitionAmmo = "potato_vz99_deploy_smokeWhite";
//	};
//	class potato_vz99_ammo_smokeRed : ShotDeployBase
//	{
//		model = "\A3\weapons_f\ammo\shell";
//		submunitionAmmo = "potato_vz99_deploy_smokeRed";
//	};
//	class potato_vz99_ammo_flare : Flare_82mm_AMOS_White
//	{
//		flareSize = 6;
//		intensity = 2000000;
//		timeToLive = 45;
//	};
//	class potato_vz99_ammo_he : Sh_82mm_AMOS
//	{
//		ace_frag_classes[] =
//		{
//			"ACE_frag_small_HD"
//		};
//		ace_frag_force = 1;
//		fuseDistance = 50;
//		hit = 100;
//		indirectHit = 10;
//		indirectHitRange = 9;
//		muzzleEffect = "";
//		class CamShakeExplode
//		{
//			power = "(82*0.2)";
//			duration = "((round (82^0.5))*0.2 max 0.2)";
//			frequency = 20;
//			distance = "((18 + 82^0.5)*8)";
//		};
//		class CamShakeHit
//		{
//			power = 82;
//			duration = "((round (82^0.25))*0.2 max 0.2)";
//			frequency = 20;
//			distance = 1;
//		};
//		class CamShakeFire
//		{
//			power = "(82^0.25)";
//			duration = "((round (82^0.5))*0.2 max 0.2)";
//			frequency = 20;
//			distance = "((82^0.5)*8)";
//		};
//		class CamShakePlayerFire
//		{
//			power = 0.0099999998;
//			duration = 0.1;
//			frequency = 20;
//			distance = 1;
//		};
//	};
//	class potato_vz99_ammo_he_airburst : potato_vz99_ammo_he
//	{
//		simulation = "shotRocket";
//		timeToLive = 0;
//	};
//};
//
//
//class CfgMagazines
//{
//	class potato_vz99_HE;
//	class MACRO_NEW_MAG(MPS_5_HE,1) : potato_vz99_HE
//	{
//		picture = "\z\potato\addons\vz99\ui\shell_ca.paa";
//		author = "Falx";
//		count = 1;
//		mass = 30;
//		Aux332nd_MPS_5_base = MACRO_NEW_MAG(MPS_5_HE,1);
//		displayName = "MPS-5 60mm HE Impact Fuze";
//		descriptionShort = "60mm HE Shell<br/>For use in the MPS-5 mortar<br/>With a basic impact fuze";
//		displayNameShort = "HE-IMP";
//		ammo = "potato_vz99_ammo_he";
//		initSpeed = 110;
//		scope = 2;
//		ace_arsenal_hide = -1;
//	};
//	class MACRO_NEW_MAG(MPS_5_HE_Charge0,1) : MACRO_NEW_MAG(MPS_5_HE,1)
//	{
//		initSpeed = 70;
//		scope = 1;
//	};
//
//	class potato_vz99_HE_multi;
//	class MACRO_NEW_MAG(MPS_5_HE_multi,1) : potato_vz99_HE_multi
//	{
//		Aux332nd_MPS_5_base = MACRO_NEW_MAG(MPS_5_HE_multi,1);
//		displayName = "vz99 60mm HE Multi Fuze";
//		descriptionShort = "60mm HE Shell<br/>For use in the vz99 mortar<br/>ith a multi-option fuze (Impact, Near Surface, Proximity)";
//		displayNameShort = "HE-IMP";
//		initSpeed = 110;
//		Aux332nd_MPS_5_fuze = "";
//	};
//	class MACRO_NEW_MAG(MPS_5_HE_multi_Charge0,1) : MACRO_NEW_MAG(MPS_5_HE_multi,1)
//	{
//		initSpeed = 70;
//		scope = 1;
//	};
//	class potato_vz99_HE_PRX : potato_vz99_HE_multi
//	{
//		potato_vz99_base = "potato_vz99_HE_multi";
//		displayNameShort = "HE-PRX";
//		initSpeed = 110;
//		potato_vz99_fuze = "prx";
//		scope = 1;
//	};
//	class potato_vz99_HE_PRX_charge0 : potato_vz99_HE_PRX
//	{
//		initSpeed = 70;
//		scope = 1;
//	};
//	class potato_vz99_smokeWhite : potato_vz99_HE
//	{
//		potato_vz99_base = "potato_vz99_smokeWhite";
//		displayName = "vz99 60mm Smoke (White)";
//		descriptionShort = "60mm HE White Smoke Shell<br/>For use in the vz99 mortar";
//		displayNameShort = "SMOKE (White)";
//		ammo = "potato_vz99_ammo_smokeWhite";
//		initSpeed = 110;
//	};
//	class potato_vz99_smokeWhite_charge0 : potato_vz99_smokeWhite
//	{
//		initSpeed = 70;
//		scope = 1;
//	};
//	class potato_vz99_smokeRed : potato_vz99_HE
//	{
//		potato_vz99_base = "potato_vz99_smokeRed";
//		displayName = "vz99 60mm Smoke (Red)";
//		descriptionShort = "60mm HE Red Smoke Shell<br/>For use in the vz99 mortar";
//		displayNameShort = "SMOKE (Red)";
//		ammo = "potato_vz99_ammo_smokeRed";
//		initSpeed = 110;
//	};
//	class potato_vz99_smokeRed_charge0 : potato_vz99_smokeRed
//	{
//		initSpeed = 70;
//		scope = 1;
//	};
//	class potato_vz99_flare : potato_vz99_HE
//	{
//		potato_vz99_base = "potato_vz99_flare";
//		displayName = "vz99 60mm Flare (White)";
//		descriptionShort = "60mm HE Flare Shell<br/>For use in the vz99 mortar";
//		displayNameShort = "FLARE";
//		ammo = "potato_vz99_ammo_flare";
//		initSpeed = 110;
//	};
//	class potato_vz99_flare_charge0 : potato_vz99_flare
//	{
//		initSpeed = 70;
//		scope = 1;
//	};
//};
//
//class Extended_PreStart_EventHandlers {
//	class 332nd_Aux_Mortar_Patches{
//		init = "call compile preprocessFileLineNumbers '332nd_weapons\Launchers\MPS-5\XEH_preStart.sqf'";
//	};
//};
//class Extended_PreInit_EventHandlers {
//	class 332nd_Aux_Mortar_Patches{
//		init = "call compile preprocessFileLineNumbers '332nd_weapons\Launchers\MPS-5\XEH_preInit.sqf'";
//	};
//};
//class Extended_PostInit_EventHandlers {
//	class 332nd_Aux_Mortar_Patches{
//		clientInit = "call compile preprocessFileLineNumbers '332nd_weapons\Launchers\MPS-5\XEH_postInit.sqf'";
//	};
//};
//
//
////Vehicle EH:
//class Extended_FiredBIS_EventHandlers {
//	class MACRO_NEW_UNIT(MPS_5,Deployed) {
//		class 332nd_Aux_Mortar_Patches {
//			firedBIS = "_this call Aux332nd_MPS_fnc_handleFired";
//		};
//	};
//};
