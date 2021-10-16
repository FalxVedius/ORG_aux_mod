#include "../../../332nd_main/macros/main.hpp"

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
			MACRO_PATCH_NAME(weapons)
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
	class rifle_Base_F;
	class 3AS_DC15A_Base_F: rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class  JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_15b): 3AS_DC15A_Base_F
	{
	    displayName = MACRO_WEAPON_DISPLAYNAME(*Test* DC 15b "Barker")
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
		reloadAction="3AS_GestureReloadDC15A";
		magazineReloadSwitchPhase=0.40000001;
		cursor="332_DOT";
        cursoraim="332_DC15A";
		discreteDistanceInitIndex=0;
		recoil = "recoil_spar";
		recoilprone="recoil_spar";
		maxRecoilSway=0.0125;
		picture="\3AS\3AS_Weapons\DC15A\Data\Textures\DC15A_Arsenal.paa";
		swayDecaySpeed=1.25;
		modes[] = {"FullAuto"};
		inertia=0.5;
		dexterity=1.5;
		maxZeroing=1000;
		initSpeed=-1;
		model="3AS\3AS_Weapons\DC15A\3AS_DC15A_f.p3d";
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
				discreteDistance[] = {100,200,300};
				opticsZoomInit=0.75;
				discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
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
					"332nd_DC15b_muzzle"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"3AS_Optic_Red_DC15A",
					"332nd_DC15b_Scope"
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
				compatibleItems[]=
				{
				"332nd_bipod"
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="DC-15A, The Clone Wars Mod";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\DC15A\Data\Anim\DC15A_handanim.rtm"
		};
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
			sounds[]=
			{
				"StandardSound",
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
			begin1[]=
				{
					"332nd_weapons\DC\15b_Barker\sounds\DC-15b.wss",
					1,
					1,
					2200
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
		};
	};
		
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class 3AS_Optic_Red_DC15A: ItemCore
	{
		scope=2;
		displayName="3AS DC15A Red Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\DC15A\3AS_DC15A_Red.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class IronSights
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
				class Scope: IronSights
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
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare="true";
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class 3AS_Bipod_DC15L_f;
	class 332nd_bipod: 3AS_Bipod_DC15L_f
	 {
		  displayname="332nd Bipod";
		  scope=2;
	 }

	class 332nd_DC15b_Scope: ItemCore
	{
		scope=2;
		displayName="[332nd] DC15b Scope";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\DC15A\3AS_DC15A_LE_Scope.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F_EPA\acc\reticle_marksman_F";
			class OpticsModes
			{
				class IronSights
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
					discreteDistance[] = {100,200,300};
                    distanceZoomMin=100;
                    distanceZoomMax=1000;
					discreteInitIndex = 0;
                    discreteDistanceInitIndex = 0;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
				class Scope: IronSights
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsDisablePeripherialVision=0.67000002;
					opticsZoomMin=0.03125;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					discreteInitIndex = 0;
                    discreteDistanceInitIndex = 0;
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
                    distanceZoomMin=100;
                    distanceZoomMax=1000;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare="true";
					distanceZoomMin=100;
					distanceZoomMax=100;
					cameraDir="";
				};
			};
		};
	};
	class 3AS_Muzzle_LE_DC15A;
	class 332nd_DC15b_muzzle: 3AS_Muzzle_LE_DC15A
	{
		author="$STR_3as_Studio";
		_generalMacro="muzzle_snds_H";
		htMin=1;
		htMax=600;
		afMax=0;
		mfMax=0;
		mFact=1;
		tBody=100;
		scope=2;
		inertia=0.2;
		displayName="[332nd] DC-15b Flash - Hider";
		picture="\a3\Weapons_F\acc\Data\UI\icon_muzzle_snds_H_ca.paa";
		model="\3AS\3AS_Weapons\DC15A\3AS_DC15A_LE_Muzzle.p3d";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass=10;
			class MagazineCoef
			{
				initSpeed=1.25;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=1;
				audibleFire=1;
				visibleFireTime=1;
				audibleFireTime=1;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef=0.80000001;
				artilleryDispersionCoef=1;
				fireLightCoef=1;
				recoilCoef=1;
				recoilProneCoef=1;
				minRangeCoef=1;
				minRangeProbabCoef=1;
				midRangeCoef=1;
				midRangeProbabCoef=1;
				maxRangeCoef=1;
				maxRangeProbabCoef=1;
			};
		};
	};
};
