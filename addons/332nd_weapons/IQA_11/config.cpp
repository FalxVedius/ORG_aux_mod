#include "../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(IQA_11)
	{
		author="332nd Aux Team";
		addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		"A3_Data_F",
		"A3_Weapons_F",
		"SWLW_main",
		"SWLW_merc_mando",
		"SWLW_merc_mando_rifles",
		MACRO_PATCH_NAME(weapons)
		};
		requiredVersion=0.1;
		units[]=
		{};
		weapons[]=
		{
			MACRO_NEW_WEAPON(IQA_11),
			"332nd_IQA11_Suppressor"
		};
	};
};
class CfgAmmo
{
    class ls_ammo_127x108_blue;
	class MACRO_NEW_AMMO(Refined_high): ls_ammo_127x108_blue
	{
         soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",2,2,1000};
		 ACE_bulletMass = 2;
		 hit = 45;
		 coefGravity = 1;
		 caliber = 2;
		 airFriction = -0.00000841;
	};
	class MACRO_NEW_AMMO(Refined_high_T): ls_ammo_127x108_blue
	{
		 effectfly="332nd_aux_effects_blue_bullet";
         soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",2,2,1000};
		 ACE_bulletMass = 2;
		 coefGravity = 1;
		 hit = 45;
		 caliber = 2;
		 airFriction = -0.00000841;
	};
};

class CfgMagazines
{
	class  SWLW_sniper_Mag;
	class MACRO_NEW_MAG(IQA_11_T,8): SWLW_sniper_Mag
	{
		scope=2;
		displayname="IQA-11 Refined Tracer High mag (8rnd)";
		initspeed=2500;
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_mag_ui.paa";
		ammo=MACRO_NEW_AMMO(Refined_high_T);
		count=8;
		mass=15;
		model="SWLW_merc_mando\rifles\sniper\sniper_mag.p3d";
		modelSpecial="\SWLW_merc_mando\rifles\sniper\sniper_mag.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_merc_mando\rifles\sniper\data\sniper_mag_co.paa"
		};
	};
	class MACRO_NEW_MAG(IQA_11,8): SWLW_sniper_Mag
	{
		scope=2;
		displayname="IQA-11 Refined High mag (8rnd)";
		initspeed=2500;
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_mag_ui.paa";
		ammo=MACRO_NEW_AMMO(Refined_high);
		count=8;
		mass=15;
		model="SWLW_merc_mando\rifles\sniper\sniper_mag.p3d";
		modelSpecial="\SWLW_merc_mando\rifles\sniper\sniper_mag.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_merc_mando\rifles\sniper\data\sniper_mag_co.paa"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class CfgWeapons
{
    class muzzle_snds_338_black;
	class SWLW_sniper_scope;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class  SWLW_rifle_base;
	class SWLW_sniper: SWLW_rifle_base
	{
		author="SW Legion Studios";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class ItemCore;
	class InventoryMuzzleItem_Base_F;	
	class 332nd_IQA11_Suppressor: muzzle_snds_338_black
	{
		scope = 2;
		displayName = "332nd IQA-11 Suppressor";

		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "\A3\Weapons_F\Acc\acca_snds_338_black_F";	
		
		class ItemInfo: InventoryMuzzleItem_Base_F
		{	
			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class)

			class MagazineCoef
			{
				initSpeed = 0.67;
			};

			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.1;
				audibleFire = 0.1;
				visibleFireTime = 1;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1;
				airFriction = 1.0;
			}; 

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	
	
			class MuzzleCoef
			{
				dispersionCoef = 1.0f;
				artilleryDispersionCoef = 1.0f;

				fireLightCoef = 0.1f;

				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};
		};
	};
	class MACRO_NEW_WEAPON(IQA_11): SWLW_sniper
	{
		scope=2;
		baseweapon = "";
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_ui.paa";

		model = "332nd_weapons\IQA_11\CrossHair_Sniper.p3d";
		handAnim[] =
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"
		};

		magazines[]=
		{
	    MACRO_NEW_MAG(IQA_11,8),
		MACRO_NEW_MAG(IQA_11_T,8)
		};
		displayName = MACRO_WEAPON_DISPLAYNAME(*TEST* IQA-11)
		descriptionShort="";
		maxZeroing=2500;
		initspeed=2500;
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"SWLW_clones\pistols\dc17\sounds\DC17_reload.wss",
			0.56234133,
			1,
			30
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		weaponInfoType = "RscOptics_tws";
		modelOptics = "\A3\Weapons_f\acc\reticle_tws";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
					"332nd_Weapons\IQA_11\sounds\IQA_11_Fire.wss",
					1.9,
					0.98,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"332nd_Weapons\IQA_11\sounds\IQA_11_Suppressed.wss",
					45,
					2,
					300
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.40;
			dispersion=0.000001;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
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
				discreteDistanceInitIndex = 1;
				discreteInitIndex = 1;
				discretefov[] =
				{
					".25/1",
					".25/4",
					".25/8",
					".25/12",
					".25/24"
				};
				discreteDistanceInitIndex = 2;
				distanceZoomMin = 300;
				distanceZoomMax = 2400;
				memoryPointCamera = "eye";
				modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
				opticsPPEffects[] =
				{
					"OpticsCHAbera1"
				};
				weaponInfoType = "RscWeaponRangeZeroingFOV";
				opticsZoomMin = ".25/24";
				opticsZoomMax = 0.25;
				opticsZoomInit = 0.25;
				thermalMode[] = { 0,5 };
				visionMode[] =
				{
					"Normal",
					"NVG"
				};
				opticsDisplayName = "WFOV";
				opticsDisablePeripherialVision = 0;
			};
		};
		maxRecoilSway=0.0025;
		swayDecaySpeed=1.25;
		dexterity=1.7;
		inertia=1.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		    class MuzzleSlot : SlotInfo
			{
				// class names with items supported by weapon
				compatibleItems[] = {"332nd_IQA11_Suppressor"}; // moved to each weapon
			};
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = {};
			};
			mass = 130;
		};
	};
};