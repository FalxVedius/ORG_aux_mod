#include "../../ORG_main/macros/main.hpp" // my config macro lib

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
	class CombatStim_Round : ls_ammo_556_blue
	{
		hit = 0.0099999998;
		aiAmmoUsageFlags = 0;
		Aux332nd_IsCombatStimRound = 1;
		caliber = 0.1;
	};
	class Bacta_Round : ls_ammo_556_blue
	{
		hit = 0.0099999998;
		aiAmmoUsageFlags = 0;
		Aux332nd_IsBactaRound = 1;
		caliber = 0.1;
	};
	class Kolto_Round : ls_ammo_556_blue
	{
		hit = 0.0099999998;
		aiAmmoUsageFlags = 0;
		Aux332nd_IsKoltoRound = 1;
		caliber = 0.1;
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DM_17_HeartStarter,1) : 30rnd_762x39_AK12_Mag_F
	{
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		count = 1;
		mass = 1;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(DM17 HeartStarter,1)
		displayNameShort = "Heart Starter rnd";
		descriptionShort = "332nd Heart Starter Round";
		ammo = "HeartStarter_Round";
		tracersEvery = 1;
	};
	class MACRO_NEW_MAG(DM_17_CombatStim,1) : 30rnd_762x39_AK12_Mag_F
	{
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		count = 1;
		mass = 1;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(DM17 CombatStim,1)
		displayNameShort = "Combat Stim rnd";
		descriptionShort = "332nd Combat Stim Round";
		ammo = "CombatStim_Round";
		tracersEvery = 1;
	};
	class MACRO_NEW_MAG(DM_17_Bacta,1) : 30rnd_762x39_AK12_Mag_F
	{
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		count = 1;
		mass = 10;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(DM17 Bacta,1)
		displayNameShort = "Bacta rnd";
		descriptionShort = "332nd Bacta Round";
		ammo = "Bacta_Round";
		tracersEvery = 1;
	};
	class MACRO_NEW_MAG(DM_17_Kolto,1) : 30rnd_762x39_AK12_Mag_F
	{
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		count = 1;
		mass = 10;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(DM17 Kolto,1)
		displayNameShort = "Kolto rnd";
		descriptionShort = "332nd Kolto Round";
		ammo = "Kolto_Round";
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
		displayName = MACRO_WEAPON_DISPLAYNAME(DM 17)

		ACE_Overheating_mrbs = 300000;
		canShootInWater=1;
		baseweapon = (DM_17)


		magazines[] = { MACRO_NEW_MAG(DM_17_HeartStarter,1), MACRO_NEW_MAG(DM_17_CombatStim,1), MACRO_NEW_MAG(DM_17_Bacta,1), MACRO_NEW_MAG(DM_17_Kolto,1) };
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