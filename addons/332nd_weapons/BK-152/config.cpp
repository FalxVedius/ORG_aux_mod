#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(BK_Series)
	{
		author = "332nd Aux Team";
		addonRootClass = MACRO_PATCH_NAME(weapons),"A3_Weapons_F_Exp";
		requiredAddons[] =
		{
			"A3_Weapons_F_Exp",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = 
		{ 
			MACRO_NEW_WEAPON(BK_152)
		};
	};
};

class CfgAmmo
{
	class ls_ammo_762_green;
	class MACRO_NEW_AMMO(R_BK762_green) : ls_ammo_762_green
	{
		lightcolor[] = { 0, 188, 0 };
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(BK_152,30) : 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 30;
		mass = 15;
		initspeed = 900;
		displayName = MACRO_AMMO_DISPLAYNAME(BK_152,30)
		displayNameShort = "Green 30rnd";
		descriptionShort = "332nd Green Medium Power Round";
		ammo = MACRO_NEW_AMMO(R_BK762_green);
		tracersEvery = 1;
	};
};

class mode_FullAuto;
class BaseSoundModeType;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class WeaponSlotsInfo;

class CfgWeapons
{

	class OPTRE_Commando;
	class MACRO_NEW_WEAPON(BK_152) : OPTRE_Commando
	{
		scope = 2;
		displayName = "Rebel BK - 152";
		magazines[] = {
			MACRO_NEW_MAG(BK_152,30)
		};
		canShootInWater = 1;
		recoil = "recoil_spar";
		recoilprone = "recoil_spar";
		baseWeapon = "";
		modes[] = { "Single"};
		hiddenSelectionsTextures[] =
		{
			"OPTRE_Weapons\Commando\data\commando_black_co.paa",
			"OPTRE_Weapons\Commando\data\commando2_black_co.paa"
		};
		muzzles[] =
		{
			"this"
		};

		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_DC15c_Shot_SoundSet","332_DC15a_Tail_SoundSet" };
			};
			reloadTime = 0.096000001;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			aiBurstTerminable = 1;
			dispersion = 0.0020000001;
			minRange = 2;
			aiDispersionCoefX = 2.0;
			aiDispersionCoefY = 2.0;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 50;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					"muzzle_snds_65_TI_blk_F",
					"OPTRE_MA5Suppressor"
				};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					"3as_optic_reflex_dc15c"
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] =
				{
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] =
				{
					"bipod_03_F_blk"
				};
			};

		};
	};
};


