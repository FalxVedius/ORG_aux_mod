#include "../../../ORG_main/macros/main.hpp"

class CfgPatches
{
	class  MACRO_PATCH_NAME(DC_15b)
	{
	    author = "332nd Aux Team";
		addonRootClass=MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    "A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_DC15A",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			MACRO_NEW_WEAPON(DC_15b),
			"3AS_Optic_Red_DC15A",
			"332nd_DC15b_Scope",
			"332nd_DC15b_muzzle",
			"332nd_bipod"
		};
	};
};
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
	class rifle_Base_F;
	class 3AS_DC15A_Base_F: rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class  JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_15b): 3AS_DC15A_Base_F
	{
	    displayName = MACRO_WEAPON_DISPLAYNAME(DC 15b "Barker" [Support])
	    scope=2;
		magazines[]= 
		{
			MACRO_NEW_MAG(DC_15b,60)
		};
		class 332Stun: JLTS_stun_muzzle
		{
	       magazines[]=
		   {
		  	MACRO_NEW_MAG(Stun,10)
		   };
		   magazineWell[]={};
		   cursoraim="332_Stun";
		   cursor="332_DOT"
		};
		muzzles[]=
		{
			"this",
			"332Stun"
		};

		handAnim[] = { "OFP2_ManSkeleton","\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm" };

		hiddenSelections[] = { "camo","camo1" };

		hiddenSelectionsTextures[] = { "sc_weapons_2\data\pkmp\textures\body_co.paa","" };

		model = "\sc_weapons_2\data\pkmp\pkmp.p3d";

		reloadAction = "GestureReloadSPAR_02";
		reloadMagazineSound[] = { "A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR02\SPAR02_reload",1,1,10 };

		magazineReloadSwitchPhase=0.40000001;
		cursor="332_DOT";
        cursoraim="332_DC15A";
		discreteDistanceInitIndex=0;
		recoil = "recoil_spar";
		recoilprone="recoil_spar";
		maxRecoilSway=0.0125;
		picture = "\sc_weapons_2\data\icons\icon_pkmp_ca.paa";
		swayDecaySpeed=1.25;
		modes[] = {"FullAuto"};
		inertia=0.5;
		dexterity=1.5;
		maxZeroing=1000;
		initSpeed=-1;

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
				opticsZoomMin= 0.25;
				opticsZoomMax= 1.25;
				opticsZoomInit = 0.75;
				distanceZoomMin = 100;
				distanceZoomMax = 700;
				discreteDistance[] = { 100,200,300,400,500,600,700,800 };
				discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
				memoryPointCamera="eye";
				visionMode[]={};

			};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{

				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"332nd_acog_dc15l",
					"3as_optic_reflex_dc15c"
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
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					"bipod_01_f_blk"
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="DC-15A, The Clone Wars Mod";
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=3;
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
			dispersion=0.0007;
			minRange=2;
			burst=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15b_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_15b,60): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		mass=15;
		initspeed=1500;
		displayName=MACRO_AMMO_DISPLAYNAME(DC-15b "barker",60)
		displayNameShort="Refined Medium Magazine x15";
		descriptionShort="Refined Medium Magazine x15";
		ammo=MACRO_NEW_AMMO(338_Blue);
		tracersEvery=1;
	};
};

class CfgAmmo
{
	class ls_ammo_338_blue;
	class MACRO_NEW_AMMO(338_Blue): ls_ammo_338_blue
	{
	     hit = 20;
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
		 cartridge = "";
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};
	class MACRO_NEW_AMMO(338_Blue_T): ls_ammo_338_blue
	{
	     hit = 20;
		 effectfly="332nd_aux_effects_blue_bullet";
		 cartridge = "";
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
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};
	
};