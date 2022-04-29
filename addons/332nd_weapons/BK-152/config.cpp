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

class CfgWeapons
{
	
	class arifle_AK12_base_F;
	class MACRO_NEW_WEAPON(BK_152) : arifle_AK12_base_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(BK-152)
		picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		baseWeapon = "";
		scope = 2;
		displayName = "$STR_A3_CfgWeapons_arifle_AK12_base_F0";
		picture = "\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		hiddenSelectionsTextures[] =
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"
		};
		scope = 2;
		magazines[] =
		{
			MACRO_NEW_MAG(BK_152,30)
		};
		magazineWell[] =
		{
			""
		};
	};
};

class CfgMagazines
{
	class MACRO_NEW_AMMO(R_762_green);
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(BK_152,30) : 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 30;
		mass = 15;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(BK_152,30)
		displayNameShort = "Green 30rnd";
		descriptionShort = "332nd Green Medium Power Round";
		ammo = MACRO_NEW_AMMO(R_762_green);
		tracersEvery = 1;
	};
};
