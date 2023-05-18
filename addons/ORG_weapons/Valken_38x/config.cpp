#include "../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Valken38x)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_Valken38X",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(Valken38x),
			"332nd_Optic_VK38X"
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
class CfgWeapons
{
    class BaseSoundModeType;
	class 3AS_Valken38X_Base_F;
	class 3AS_Valken38X_F: 3AS_Valken38X_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class MACRO_NEW_WEAPON(Valken38x) : 3AS_Valken38X_F
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
		descriptionShort="Valken-38x Marksman Rifle";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_Valken38x_Shot_SoundSet","332_Sniper_Tail_SoundSet"};
			};
			reloadTime=0.7;
			dispersion=0.000000000005;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};		
		scope=2;
		displayName = MACRO_WEAPON_DISPLAYNAME(Valken 38x [Marksman])
		weaponInfoType="RscWeaponZeroing";
		magazines[]=
		{
			MACRO_NEW_MAG(Valken38x,15),
			MACRO_NEW_MAG(Valken38x_T,15)
		};
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
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



	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 332nd_Optic_VK38X : ItemCore
	{
		scope=2;
		displayName="332nd VK-38X Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="3AS\3AS_Weapons\Valken38X\3AS_VK38X_Scope_f.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
			class OpticsModes
			{
				class 332_VK38X_Optic
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.125;
					opticsZoomMax=0.04;
					opticsZoomInit=0.0625;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					discreteFov[]={0.125,0.0625};
					discreteInitIndex=0;
					modelOptics = "\A3\Weapons_F\acc\reticle_LRPS_F";
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={1,2};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class IronOnTopOfMyOptics : 332_VK38X_Optic
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
				};
			};
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(Valken38x,15): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=15;
		mass=15;
		initspeed=2000;
		displayName=MACRO_AMMO_DISPLAYNAME(Valken-38x Refined Medium Magazine,15)
		displayNameShort="Refined Medium Magazine x15";
		descriptionShort="Refined Medium Magazine x15";
		ammo=MACRO_NEW_AMMO(408_Blue);
		tracersEvery=1;
	};
	class MACRO_NEW_MAG(Valken38x_T,15): MACRO_NEW_MAG(Valken38x,15) 
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Valken-38x Refined Medium Tracer Magazine ,15)
		displayNameShort="Refined Medium Tracer Magazine x15";
		descriptionShort="Refined Medium Tracer Magazine x15";
		ammo=MACRO_NEW_AMMO(408_Blue_T);
		tracersEvery=1;
	};
}
class CfgAmmo
{
	class ls_ammo_408_blue;
	class  MACRO_NEW_AMMO(408_Blue): ls_ammo_408_blue
	{
		soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
		effectfly = "332nd_mainRound_effects";
	};
	class  MACRO_NEW_AMMO(408_Blue_T): ls_ammo_408_blue
	{
	    effectfly="332nd_aux_effects_blue_bullet";
		soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	};
};