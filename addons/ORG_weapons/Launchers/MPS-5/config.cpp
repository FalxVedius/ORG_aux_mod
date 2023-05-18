#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(MPS_5)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons)
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_UNIT(MPS_5,Deployed),
		};
		weapons[] = {
			MACRO_NEW_WEAPON(MPS_5),
			MACRO_NEW_WEAPON(MPS_5_Carry),
		};
	};
};

class CfgFunctions
{
	class Aux332nd_MPS
	{
		class Functions
		{
			file = "\332nd_weapons\Launchers\MPS-5\functions";
			class canDeployWeapon
			{
			};
			class canPickupWeapon
			{
			};
			class doDeployWeapon
			{
			};
			class doPickupWeapon
			{
			};
			class handlePlayerVehicleChanged
			{
			};
			class leveltoGround
			{
			};
			class doReload
			{
			};
			class doSelectNextMagazine
			{
			};
			class canSelectNextMagazine
			{
			};
		};
	};
};


class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher_Base_F;

	class MACRO_NEW_WEAPON(MPS_5_Carry) : Launcher_Base_F
	{
		author = "Falx";
		scope = 2;
		displayName = "[332nd] MPS-5 60mm Mortar *WIP* [Heavy Grenadier]";
		displayNameShort = "MPS-5";
		model = "\z\potato\addons\vz99\data\vz99_carry";
		picture = "\z\potato\addons\vz99\ui\weaponSide_ca.paa";
		modes[] = {};
	};

	class CannonCore;
	class MACRO_NEW_WEAPON(MPS_5) : CannonCore
	{
		class StandardSound
		{
			SoundSetShot[] =
			{
				"Mortar82mm_Shot_SoundSet",
				"Mortar82mm_Tail_SoundSet"
			};
			begin1[] =
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
				1.25893,
				1,
				250
			};
			begin2[] =
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
				1.25893,
				1,
				250
			};
			soundBegin[] =
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
		};
		modes[] =
		{
			"Trigger"
		};
		class Trigger : Mode_SemiAuto
		{
			class StandardSound
			{
				SoundSetShot[] =
				{
					"Mortar82mm_Shot_SoundSet",
					"Mortar82mm_Tail_SoundSet"
				};
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.25893,
					1,
					250
				};
				begin2[] =
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.25893,
					1,
					250
				};
				soundBegin[] =
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			sounds[] =
			{
				"StandardSound"
			};
			reloadSound[] =
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			soundServo[] =
			{
				"",
				9.9999997e-005,
				1
			};
			reloadTime = 1.8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			displayName = "Trigger";
			textureType = "semi";
		};
		scope = 1;
		displayName = "MPS-5 60mm Mortar";
		displayNameShort = "MPS-5";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] =
		{
			"StandardSound"
		};
		reloadSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
			1,
			1,
			20
		};
		soundServo[] =
		{
			"",
			9.9999997e-005,
			1
		};
		minRange = 1;
		minRangeProbab = 0.69999999;
		midRange = 750;
		midRangeProbab = 0.69999999;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		reloadTime = 1.8;
		magazineReloadTime = 3.3;
		autoReload = 1;
		magazines[] = 
		{ 
			MACRO_NEW_MAG(MPS_HE,1),
			MACRO_NEW_MAG(MPS_Smoke,1),
			MACRO_NEW_MAG(MPS_Smoke_Red,1),
			MACRO_NEW_MAG(MPS_Flare,1)
		};
		ballisticsComputer = 2;
	};

};


class CfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class mps_5_deploy
			{
				displayName = "Deploy MPS-5";
				condition = "_this call Aux332nd_MPS_fnc_canDeployWeapon";
				statement = "_this call Aux332nd_MPS_fnc_doDeployWeapon";
				exceptions[] = {};
				icon = "\z\potato\addons\vz99\UI\action_mortar_ca.paa";
			};
		};
	};

	class StaticMortar;
	class Mortar_01_base_F : StaticMortar
	{
		class Turrets;
	};
	class B_Mortar_01_F : Mortar_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class 3as_republic_mortar : B_Mortar_01_F
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
		class ACE_SelfActions;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
			};
		};
	};

	class MACRO_NEW_UNIT(MPS_5,Deployed) : 3as_republic_mortar
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
		ace_cargo_hasCargo = 0;
		ace_cargo_canLoad = 0;
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
				selection = "bubble start";
			};
			class mps_5_pickup
			{
				displayName = "Pickup Weapon";
				selection = "Konec hlavne";
				distance = 3;
				condition = "_this call Aux332nd_MPS_fnc_canPickupWeapon";
				statement = "_this call Aux332nd_MPS_fnc_doPickupWeapon";
			};
		};
		class ACE_SelfActions : ACE_SelfActions
		{
			class load_HE_332nd
			{
				displayName = "Load HE";
				condition = "['332nd_aux_magazine_MPS_HE_x1'] call Aux332nd_MPS_fnc_canSelectNextMagazine";
				statement = "['332nd_aux_magazine_MPS_HE_x1'] call Aux332nd_MPS_fnc_doSelectNextMagazine";
				exceptions[] = {};
				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
				distance = 10;
			};
			class load_Smoke_332nd
			{
				displayName = "Load Smoke";
				condition = "['332nd_aux_magazine_MPS_Smoke_x1'] call Aux332nd_MPS_fnc_canSelectNextMagazine";
				statement = "['332nd_aux_magazine_MPS_Smoke_x1'] call Aux332nd_MPS_fnc_doSelectNextMagazine";
				exceptions[] = {};
				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
				distance = 10;
			};
			class load_Smoke_Red_332nd
			{
				displayName = "Load Red Smoke";
				condition = "['332nd_aux_magazine_MPS_Smoke_Red_x1'] call Aux332nd_MPS_fnc_canSelectNextMagazine";
				statement = "['332nd_aux_magazine_MPS_Smoke_Red_x1'] call Aux332nd_MPS_fnc_doSelectNextMagazine";
				exceptions[] = {};
				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
				distance = 10;
			
			};
			class load_Flare_332nd
			{
				displayName = "Load Flare";
				condition = "['332nd_aux_magazine_MPS_Flare_x1'] call Aux332nd_MPS_fnc_canSelectNextMagazine";
				statement = "['332nd_aux_magazine_MPS_Flare_x1'] call Aux332nd_MPS_fnc_doSelectNextMagazine";
				exceptions[] = {};
				icon = "\z\potato\addons\vz99\UI\action_shell_ca.paa";
				distance = 10;
			};
		};
		
		features = "";
		author = "Falx";
		scope = 2;
		side = 1;
		faction = "EdCat_332nd";
		crew = "332nd_aux_infantry_unit_332nd_trooper";
		availableForSupportTypes[] =
		{
			"Artillery"
		};
		displayName = "MPS-5 60mm Mortar *WIP*";
		displayNameShort = "MPS-5";
		editorSubcategory = "EdSubcat_332nd_TURR";

		artilleryScanner = 1;
		cost = 200000;
		accuracy = 0.25;
		threat[] = { 1,0.30000001,0.1 };
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		minRange = 1;
		minRangeProbab = 0.69999999;
		midRange = 750;
		midRangeProbab = 0.69999999;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		reloadTime = 1.8;
		magazineReloadTime = 3.3;
		autoReload = 1;


		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
				weapons[] =
				{
					MACRO_NEW_WEAPON(MPS_5)
				};

				class ViewOptics : ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
					visionMode[] =
					{
						"Normal"
					};
				};
			};
		};
	};
};


class CfgAmmo
{
	class potato_vz99_ammo_he;
	class MACRO_NEW_AMMO(MPS_HE) : potato_vz99_ammo_he
	{
		ace_frag_force = 1;
		fuseDistance = 50;
		hit = 100;
		indirectHit = 10;
		indirectHitRange = 9;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = "(82*0.2)";
			duration = "((round (82^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((18 + 82^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 82;
			duration = "((round (82^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(82^0.25)";
			duration = "((round (82^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((82^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.0099999998;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};

	class SmokeShellArty;
	class ShotDeployBase;
	class MACRO_NEW_AMMO(MPS_Smoke_Shell) : SmokeShellArty
	{
		smokeColor[] = { 1,1,1,1 };
	};
	class MACRO_NEW_AMMO(MPS_Smoke_Red_Shell) : SmokeShellArty
	{
		smokeColor[] = { 1,0,0,1 };
	};
	class MACRO_NEW_AMMO(MPS_Smoke) : ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = MACRO_NEW_AMMO(MPS_Smoke_Shell);
	};
	class MACRO_NEW_AMMO(MPS_Smoke_Red) : ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = MACRO_NEW_AMMO(MPS_Smoke_Red_Shell);
	};

	class Flare_82mm_AMOS_White;
	class MACRO_NEW_AMMO(MPS_Flare) : Flare_82mm_AMOS_White
	{
		flareSize = 6;
		intensity = 2000000;
		timeToLive = 45;
	};
};


class CfgMagazines
{
	class 8Rnd_82mm_Mo_shells;
	class MACRO_NEW_MAG(MPS_HE,1) : 8Rnd_82mm_Mo_shells
	{
		ace_arsenal_hide = -1;
		scopeArsenal = 2;
		displayName = MACRO_AMMO_DISPLAYNAME(MPS HE,1)
		descriptionShort = "60mm HE Shell<br/>For use in the MPS-5 mortar";
		displayNameShort = "HE";
		count = 1;
		mass = 20;
		initSpeed = 110;
		ammo = MACRO_NEW_AMMO(MPS_HE);
		picture = "\z\potato\addons\vz99\ui\shell_ca.paa";
	};

	class MACRO_NEW_MAG(MPS_Smoke,1) : MACRO_NEW_MAG(MPS_HE,1)
	{
		displayName = MACRO_AMMO_DISPLAYNAME(MPS Smoke,1)
		descriptionShort = "60mm White Smoke Shell<br/>For use in the MPS-5 mortar";
		displayNameShort = "SMOKE (White)";
		ammo = MACRO_NEW_AMMO(MPS_Smoke);
	};

	class MACRO_NEW_MAG(MPS_Smoke_Red,1) : MACRO_NEW_MAG(MPS_HE,1)
	{
		displayName = MACRO_AMMO_DISPLAYNAME(MPS Red Smoke,1)
		descriptionShort = "60mm Red Smoke Shell<br/>For use in the MPS-5 mortar";
		displayNameShort = "SMOKE (Red)";
		ammo = MACRO_NEW_AMMO(MPS_Smoke_Red);
	};

	class MACRO_NEW_MAG(MPS_Flare,1) : MACRO_NEW_MAG(MPS_HE,1)
	{
		displayName = MACRO_AMMO_DISPLAYNAME(MPS Flare,1)
		descriptionShort = "60mm Flare Shell<br/>For use in the MPS-5 mortar";
		displayNameShort = "FLARE (White)";
		ammo = MACRO_NEW_AMMO(MPS_Flare);
	};
};
