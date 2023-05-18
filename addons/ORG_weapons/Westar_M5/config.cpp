#include "../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(WestarM5)
	{
		addonRootClass=MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_WestarM5",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			MACRO_NEW_WEAPON(Westar_M5),
            MACRO_NEW_WEAPON(Westar_M5_GL),
			"332nd_WestarM5_Scope"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class cfgRecoils
{
 class Westar_m5
 {              //  x     y     a     b
  muzzleOuter[]	= { 0,  0.65,  0,  0 };
  kickBack[]	= { 0.02, 0.04 };
  permanent	= 0;
  temporary	= 1;
 };
};
class CfgWeapons
{
    class BaseSoundModeType;
	class Rifle_Base_F;
	class 3AS_WestarM5_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(Westar_M5): 3AS_WestarM5_Base_F
	{
		author="Halligan";
		scope=2;
		displayName = MACRO_WEAPON_DISPLAYNAME(Westar-M5 [Rifleman])
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_F.p3d";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F"};
		magazines[]=
		{
			MACRO_NEW_MAG(Westar_M5,40)
		};
		magazineWell[] = {};
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
		reloadAction="GestureReloadMX";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="Westar_m5";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=500;
		cursor="332_DOT";
        cursoraim="332_DC15C";
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
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
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"332nd_WestarM5_Scope"
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
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="Westar-M5";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=0.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.115;
			dispersion=0.003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			textureType = "semi";
			displayName="Single";
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType 
			{
				soundSetShot[] = {"332_WestarM5_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.035;
			dispersion=0.006;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			displayName="FullAuto";
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			textureType = "fullAuto";
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType 
			{
				soundSetShot[] = {"332_WestarM5_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
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
				distanceZoomMin=50;
                distanceZoomMax=500;
                discreteDistance[]={50,100,150,200,250,300,350,400,450,500};
				opticsZoomInit=0.75;
				discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
				memoryPointCamera="eye";
				visionMode[]={};
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.122173;
				opticsZoomMax=0.122173;
				opticsZoomInit=0.122173;
			    distanceZoomMin=50;
                distanceZoomMax=500;
				discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[]={50,100,150,200,250,300,350,400,450,500};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsFlare="true";
				distanceZoomMin=50;
				distanceZoomMax=500;
				cameraDir="";
			};
		};
		class 332nd_WestarM5_GL: UGL_F
		{
			displayName="[332nd] WestarM5-GL";
			descriptionShort="GL for the WestarM5 Platform";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"3Rnd_UGL_FlareWhite_F",
				"ACE_HuntIR_M203",
                MACRO_NEW_MAG(DC_15_UGL_AP,2),
                MACRO_NEW_MAG(DC_15_UGL_HE,4),
				MACRO_NEW_MAG(332_GL_SMOKE_WHITE,1),
				MACRO_NEW_MAG(332_GL_SMOKE_RED,1),
				MACRO_NEW_MAG(332_GL_SMOKE_GREEN,1),
				MACRO_NEW_MAG(332_GL_SMOKE_YELLOW,1),
				MACRO_NEW_MAG(332_GL_SMOKE_PURPLE,1),
				MACRO_NEW_MAG(332_GL_SMOKE_BLUE,1),
				MACRO_NEW_MAG(332_GL_SMOKE_ORANGE,1),
				MACRO_NEW_MAG(332_GL3_SMOKE_WHITE,3),
				MACRO_NEW_MAG(332_GL3_SMOKE_RED,3),
				MACRO_NEW_MAG(332_GL3_SMOKE_GREEN,3),
				MACRO_NEW_MAG(332_GL3_SMOKE_YELLOW,3),
				MACRO_NEW_MAG(332_GL3_SMOKE_PURPLE,3),
				MACRO_NEW_MAG(332_GL3_SMOKE_BLUE,3),
				MACRO_NEW_MAG(332_GL3_SMOKE_ORANGE,3),
			};
			magazineWell[]={};
			cameraDir="OP_look";
			cursor="332_DOT";
			cursorAim="332_UGL";

			discreteDistance[]={25,50,100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
			    "GL_EYE",
				"OP_eye_50",
				"OP_eye_100",
				"OP_eye_200",
				"OP_eye_300",
				"OP_eye_400"
			};
			class Single: Mode_SemiAuto
		    {
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"332_UGL_Shot_SoundSet","332_Rocket_Tail_SoundSet"};
				};
				sounds[]=
				{
					"StandardSound"
				};
			    multiplier = 1;
				reloadtime=0.5;
				showtoplayer=1;
				burst=1;
				recoil="recoil_15a";
				dispersion=0.0000009;
			    displayName="UGL";
				textureType="fullAuto";
				aiRateOfFire=5;
				aiRateOfFireDistance=500;
				aiRateOfFireDispersion=2;
				minRange=10;
				minRangeProbab=0.30000001;
				midRange=40;
				midRangeProbab=0.85000002;
				maxRange=600;
				maxRangeProbab=0.85000002;
		    };
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};
	};
	class MACRO_NEW_WEAPON(Westar_M5_GL): MACRO_NEW_WEAPON(Westar_M5)
	{
		scope=2;
		displayName = MACRO_WEAPON_DISPLAYNAME(Westar-M5 UGL [Grenadier])
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this",
			"332nd_WestarM5_GL"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"332nd_WestarM5_Scope"
				};
			};
			mass=80;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class 332nd_WestarM5_Scope: ItemCore
	{
		scope=2;
		displayName="[332nd] Spotting Scope";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\WestarM5\3AS_Westar_Scope_F.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="\A3\Weapons_f\acc\reticle_tws";
			class OpticsModes
			{
				class 3AS_Scope_Optics
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0138;
					opticsZoomMax=0.0416;
					opticsZoomInit=0.0416;
					discreteDistance[]={100};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					discreteFov[]={0.0416,0.0138};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[] = {0, 1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class 3332nd_OverSight_Optic: 3AS_Scope_Optics
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
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
	class MACRO_NEW_MAG(Westar_M5,40): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=40;
		mass=10;
		initspeed=800;
		displayName=MACRO_AMMO_DISPLAYNAME(Westar M-5 Low Power,40)
		displayNameShort="Westar suppressed medium magazine";
		descriptionShort="Westar suppressed medium magazine";
		ammo=MACRO_NEW_AMMO(Medium_Westar);
		tracersEvery=1;
	}; 
};

class CfgAmmo
{
	class ls_ammo_65_blue;
	class MACRO_NEW_AMMO(Medium_Westar): ls_ammo_65_blue
	{
	   soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
       ACE_bulletMass = 3;
	   cartridge = "";
	   effectfly = "332nd_mainRound_effects";
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