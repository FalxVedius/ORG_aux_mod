#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DM_17)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DM_17)
		};
	};
};

class CfgFunctions
{
	class Aux332nd
	{
		class Weapons
		{
			file = "\332nd_weapons\DM-17";
			class onHit
			{
			};
			class onHitMedic
			{
			};
		};
	};
};

class CfgAmmo
{
	class ls_ammo_556_blue;
	class HeartStarter_Round : ls_ammo_556_blue
	{
		hit = 0.0099999998;
		aiAmmoUsageFlags = 0;
		Aux332nd_IsMedicRound = 1;
		caliber = 0.1;
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DM_17,1) : 30rnd_762x39_AK12_Mag_F
	{
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		count = 1;
		mass = 5;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(M17 HeartStarter,1)
		displayNameShort = "Heart Starter rnd";
		descriptionShort = "332nd Heart Starter Round";
		ammo = "HeartStarter_Round";
		tracersEvery = 1;
	};
};

class cfgWeapons
{
	class Pistol_Base_F;
	class optre_hgun_sas10_F :Pistol_Base_F
	{
		class Single;
	}

	class MACRO_NEW_WEAPON(DM_17) : optre_hgun_sas10_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DM 17 *WIP*)

		ACE_Overheating_mrbs = 300000;
		canShootInWater=1;
		baseweapon = (DM_17)


		magazines[] = { MACRO_NEW_MAG(DM_17,1) };
		magazineWell[] = {};
		linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";

		class Single : Single
		{
			sounds[] =
			{
				"StandardSound";
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					3,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.10;
			displayname = "SemiAuto";
			dispersion = 0.000009;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
		};
	};
};

class Extended_HitPart_EventHandlers
{
	class CAManBase
	{
		Aux332nd_MedicRound = "(_this select 0) call Aux332nd_fnc_onHit";
	};
};