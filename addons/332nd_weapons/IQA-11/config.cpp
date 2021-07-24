#include "../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(IQA_11)
	{
		author="Halligan";
		addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		MACRO_PATCH_NAME(weapons)
		};
		requiredVersion=0.1;
		units[]=
		{};
		weapons[]=
		{
			MACRO_NEW_WEAPON(IQA_11),
			"SWLW_sniper_scoped"
		};
	};
};
class CfgMagazines
{
	class  SWLW_sniper_Mag;
	class MACRO_NEW_MAG(IQA_11_T,8): SWLW_sniper_Mag
	{
		scope=2;
		displayname="IQA-11 Refined High mag (8rnd)";
		initspeed=3000;
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_mag_ui.paa";
		ammo=MACRO_NEW_AMMO(127x108_green_T);
		count=8;
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
		initspeed=3000;
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_mag_ui.paa";
		ammo="ls_ammo_127x108_green";
		count=8;
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
	class SWLW_sniper_scope;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Rifle_Long_Base_F;
	class SWLW_rifle_base: Rifle_Long_Base_F
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
	class 332_IQA11_scope: SWLW_sniper_scope
	{
		displayName="IQA-11 Scope";
		author="Halligan";
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_scope_ui.paa";
		model="\SWLW_merc_mando\rifles\sniper\sniper_scope.p3d";
		scope=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\SWLW_clones\smgs\westar_m5\WestarM5_optic.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsDisablePeripherialVision=0.67000002;
					opticsZoomMin=0.0099999998;
					opticsZoomMax=0.1;
					opticsZoomInit=0.041999999;
					discretefov[]={0.0625,0.041999999,0.0099999998};
					discreteInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=2500;
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2050,2100,2150,2200,2250,2300,2350,2400,2450,2500};
					discreteDistanceInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare="true";
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
	class SWLW_sniper: SWLW_rifle_base
	{
		scope=2;
		model="SWLW_merc_mando\rifles\sniper\sniper.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\SWLW_clones\rifles\dc15x\anims\dc15x_handanim.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\SWLW_merc_mando\rifles\sniper\data\ui\sniper_ui.paa";
		magazines[]=
		{
			"SWLW_sniper_Mag"
		};
		displayname="Mercenary sniper";
		descriptionShort="";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLW_merc_mando\rifles\sniper\data\sniper_ca.paa"
		};
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
					"SWLW_merc_mando\rifles\sniper\sounds\sniper",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_merc_mando\rifles\sniper\sounds\sniper",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_merc_mando\rifles\sniper\sounds\sniper",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.1;
			dispersion=0.00057999999;
			initSpeed=940;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		maxRecoilSway=0.0125;
		recoil="SWLW_recoil";
		swayDecaySpeed=1.25;
		dexterity=1.7;
		initspeed=800;
		inertia=1.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"SWLW_sniper_scope"
				};
			};
		};
	};
	class SWLW_sniper_scoped: SWLW_sniper
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item="SWLW_sniper_scope";
				slot="CowsSlot";
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class SWLW_GH_sniper_scoped: Weapon_Base_F
	{
		author="SW Legion Studios";
		displayName="Mercenary sniper rifle";
		scope=2;
		class TransportWeapons
		{
			class SWLW_sniper_scoped
			{
				count=1;
				weapon="SWLW_sniper_scoped";
			};
		};
		class TransportMagazines
		{
			class SWLW_sniper_Mag
			{
				count=1;
				magazine="SWLW_sniper_Mag";
			};
		};
	};
};
class cfgMods
{
	author="SW Legion Studios";
	timepacked="1557701663";
};
