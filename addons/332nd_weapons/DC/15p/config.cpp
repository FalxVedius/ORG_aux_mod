#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15p)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    
			"A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15p),
		};
	};
};


class CowsSlot;
class PointerSlot;
class mode_SemiAuto;
class Mode_FullAuto;
class cfgWeapons
{
	class LSI_E11_base;

	class lsi_weapon_e11 : LSI_E11_base
	{
		class WeaponSlotsInfo;
	};

	class MACRO_NEW_WEAPON(DC_15p): lsi_weapon_e11
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(*WIP* DC 15P)

		ACE_Overheating_mrbs=300000;
		//recoil="recoil_m320";
		//recoilprone="recoil_m320";
		canShootInWater=1;
        baseWeapon=MACRO_NEW_WEAPON(DC_15p);
		cursor = "332_DOT";
		cursoraim = "332_DC15S";
		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(DC_15P_Low,30)
		};
		modelOptics = "";

		class FullAuto: Mode_FullAuto
        {
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = 
				{ 
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire.wss",
					1.2,
					0.95,
					1800 
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime= 0.05;
			dispersion= 0.0000004;
        };

		class Single : FullAuto
		{

		};

		class fullauto_medium : FullAuto
		{
			sounds[] =
			{
				"StandardSound"
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire.wss",
					1.2,
					0.95,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.05;
			dispersion = 0.0000004;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot
			{
				compatibleItems[] = { "lsi_acc_eSeries_Optics" };
				displayName = "Optics Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = { 0,0 };
				iconScale = 0;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			
			class MuzzleSlot
			{
				compatibleItems[] = { "lsi_acc_E11_Coils"};
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPinpoint = "Center";
				iconPosition[] = { 0,0 };
				iconScale = 0;
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
		};
	};
};