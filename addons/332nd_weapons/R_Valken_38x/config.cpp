#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(R_Valken38x)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_Valken38X",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(R_Valken38x)
		};
	};
};


class CfgFunctions
{
	class Aux332nd
	{
		class Valken_Sounds
		{
			file = "\332nd_weapons\Valken_38x";
			class Fired_Valken_Sound
			{
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class Valken_Bolt_Sound
	{
		name = "Valken-Bolt-Sound";
		sound[] = { "\sounds\ValkenBolt.ogg", db + 250, 1.0, 20 };
	};
};


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class BaseSoundModeType;
class CfgWeapons
{
	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class MACRO_NEW_WEAPON(R_Valken38x) : 3AS_Valken38X_F
	{
		
		recoil="recoil_dmr_05";
		recoilprone="recoil_prone_dmr_05";
		cursor="332_DOT";
        cursoraim="332_DMR";
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		maxZeroing=1500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"332nd_Optic_VK38X"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};

		class LinkedItems {
			class LinkedItemsOptic {
				item = "332nd_Optic_VK38X";
				slot = "CowsSlot";
			};
		};

		descriptionShort="Rebel Valken";
		modes[] =
		{
			"Single"
		};
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_Valken38x_Shot_SoundSet","332_Sniper_Tail_SoundSet" };
			};
			reloadTime = 0.7;
			dispersion = 0.000000000005;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
			scope = 2;
			displayName = "Rebel Valken 38x";
				weaponInfoType = "RscWeaponZeroing";
			magazines[] =
			{
				MACRO_NEW_MAG(R_Valken38x,15)
			};
			modelOptics = "3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
	};		
		
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};

		class EventHandlers
		{
			fired = "[_this select 0, _this select 1, _this select 1, _this select 2] spawn Aux332nd_fnc_Fired_Valken_Sound;";
		};

};

class CfgMagazines
{
	class JLTS_E5S_mag;
	class MACRO_NEW_MAG(R_Valken38x,15) : JLTS_E5S_mag
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 15;
		mass = 15;
		initspeed = 1200;
		displayName = MACRO_AMMO_DISPLAYNAME(Valken - 38x Refined Medium Magazine,15)
		displayNameShort = "Refined Medium Magazine x15";
		descriptionShort = "Refined Medium Magazine x15";
		ammo = MACRO_NEW_AMMO(338_Green_T);
		tracersEvery = 1;
	};
};

class CfgAmmo
{
	class ls_ammo_338_green;
	class  MACRO_NEW_AMMO(338_Green_T) : ls_ammo_338_green
	{
		effectfly = "332nd_aux_effects_green_bullet";
		soundFly[] = { "SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0.8,0.6,200 };
	};
};
