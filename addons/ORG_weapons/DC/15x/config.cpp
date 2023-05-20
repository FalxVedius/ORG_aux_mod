#include "../../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15x)
	{
		author = "ORG Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_DC15X",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15x)
		};
	};
};

class CfgFunctions
{
	class AuxORG
	{
		class DC_15XSounds
		{
			file = "\ORG_weapons\DC\15x";
			class Fired_DC15X_Sound
			{
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class DC15X_Bolt_Sound
	{
		name = "DC15X-Bolt-Sound";
		sound[] = { "\sounds\DC-15xBolt.ogg", db + 250, 1.0, 20 };
	};
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
//class GunClouds;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{

	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class MACRO_NEW_WEAPON(DC_15x): Rifle_Base_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15x ATR [AT])
		scope = 2;
		scopeArsenal = 2;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_m320";
		recoilprone="recoil_m320";
		canShootInWater=1;
        baseWeapon=MACRO_NEW_WEAPON(DC_15x);
		cursor="ORG_DOT";
        cursoraim="ORG_Chevron";
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(DC_15x,2)
		};
		modelOptics = "\A3\Weapons_f\acc\reticle_tws";
		model="ORG_weapons\DC\15x\DC15LE.p3d";
        picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		modes[] = {"Single"};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15X\anims\DC15X_handanim.rtm"
		};
		class Single: Mode_SemiAuto
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
				begin1[]=
				{
					"ORG_weapons\DC\15X\sounds\DC-15X.wss",
					1.5,
					1,
					4500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime=2;
			dispersion=0.0000001;
        };
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};
		class OpticsModes
        {
            class Snip
			{
				useModelOptics = 1;
				opticsFlare = 1;
				opticsID = 1;
				cameraDir = "";
				discreteDistance[] = { 300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400 };
				discreteDistanceInitIndex = 0;
				discreteInitIndex = 0;
				discretefov[] =
				{
					".25/1",
					".25/4",
					".25/8",
					".25/12",
					".25/24"
				};
				distanceZoomMin = 300;
				distanceZoomMax = 2400;
				memoryPointCamera = "eye";
				modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
				opticsPPEffects[] =
				{
					"OpticsCHAbera1"
				};
				weaponInfoType = "RscWeaponZeroing";
				opticsZoomMin = ".25/24";
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				visionMode[] =
				{
					"Normal",
					"NVG"
				};
				opticsDisablePeripherialVision = 0;
			};
        };
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
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
				linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					"bipod_01_F_blk"
				};
				iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
				iconPinpoint="Bottom";
			};
		};
		class EventHandlers
		{
			fired = "[_this select 0, _this select 1, _this select 1, _this select 2] spawn AuxORG_fnc_Fired_DC15X_Sound;";
		};
	};
};

class CfgMagazines
{
	class JLTS_DC15X_mag;
	class MACRO_NEW_MAG(DC_15x,2): JLTS_DC15X_mag
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=2;
		mass=50;
		initspeed=5000;
		displayName=MACRO_AMMO_DISPLAYNAME(15x Anti-Tank Magazine,2)
		displayNameShort="2 rnd 15x AT Magazine";
		descriptionShort="2 rnd 15x AT Magazine";
		ammo=MACRO_NEW_AMMO(DC_15xATR);
		tracersEvery=1;
	};
};

class CfgAmmo
{
	class ls_ammo_127x108_green;
    class MACRO_NEW_AMMO(127x108_green_T): ls_ammo_127x108_green
	{
		 effectfly="ORG_aux_effects_green_bullet";
        soundsetsoniccrack[]=
		{
			"ORG_blaster_flyby_soundset"
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

	class MACRO_NEW_AMMO(127x108_green): ls_ammo_127x108_green
	{
        soundsetsoniccrack[]=
		{
			"ORG_blaster_flyby_soundset"
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

	class MACRO_NEW_AMMO(DC_15xATR): ls_ammo_127x108_green
	{
		effectfly="ORG_aux_effects_RPS4_green";
        soundsetsoniccrack[]=
		{
			"ORG_blaster_flyby_soundset"
		};
		caliber = 40;
		hit = 700;
		typicalSpeed=5000;
		explosionEffects = "ImpactPlasmaExpGreen";
		tracerscale = 3;
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
		airFriction = -0.000005;
			class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 0.06;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};
};