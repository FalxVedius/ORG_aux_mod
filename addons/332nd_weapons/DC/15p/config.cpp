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
	class OPTRE_SubMachineGun_Base;

	class OPTRE_M7 : OPTRE_SubMachineGun_Base
	{
		class WeaponSlotsInfo;
	};

	class MACRO_NEW_WEAPON(DC_15p): OPTRE_M7
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(*WIP* DC 15P)

		ACE_Overheating_mrbs=300000;
		recoil="DC_15s";
		recoilprone="DC_15s";
		canShootInWater=1;
		modes[] = {"Single"};
        baseWeapon=MACRO_NEW_WEAPON(DC_15p);
		cursor = "332_DOT";
		cursoraim = "332_DC15S";
		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(DC_15P_Med,40)
		};
		modelOptics = "";

		class Single: Mode_FullAuto
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
					"332nd_weapons\DC\15p\sounds\DC15p.wss",
					1.2,
					1,
					1800 
				};
				begin2[] = 
				{ 
					"332nd_weapons\DC\15p\sounds\DC15p.wss",
					1.2,
					0.9,
					1800 
				};
				begin3[] = 
				{ 
					"332nd_weapons\DC\15p\sounds\DC15p.wss",
					1.2,
					1,
					1800 
				};
				begin4[] = 
				{ 
					"332nd_weapons\DC\15p\sounds\DC15p.wss",
					1.2,
					1,
					1800 
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
			};
            reloadTime= 0.055;
			dispersion= 0.00000001;
        };

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot
			{
				compatibleitems[] = { "OPTRE_M7_Sight" };
				displayName = "Optics Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = { 0.4,0.3 };
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
			
			class MuzzleSlot
			{
				compatibleitems[] = { "" };
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPinpoint = "Center";
				iconPosition[] = { 0.1,0.4 };
				iconScale = 0.2;
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};

			class PointerSlot
			{
				access = 1;
				compatibleitems[] = { "" };
				displayName = "Pointer Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
				iconPinpoint = "Center";
				iconPosition[] = { 0.1,0.4 };
				iconScale = 0.2;
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				scope = 0;
			};
		};
	};
};