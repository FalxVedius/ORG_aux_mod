#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Snipers)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DW_32S)
		};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;

class cfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F:Rifle_Base_F
	{
		class WeaponSlotsInfo;
	}
	class JLTS_DW32S: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		}
	}
	class MACRO_NEW_WEAPON(DW_32S): JLTS_DW32S
    {
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(DW-32S)
		reloadTime=0.1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_dmr_02";
		recoilprone="recoil_prone_dmr_02";
		canShootInWater=1;
		baseweapon="";
		handling="2.6";
		modes[]=  {
			"FullAuto",
			"Single"
		};
        weaponInfoType = "RscOptics_tws";
		modelOptics="\A3\Weapons_f\acc\reticle_tws";
		class OpticsModes
		{
			class NCTALKEP
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0025;
				opticsZoomMax=0.1;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,200,300,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900};
				discreteDistanceInitIndex = 0;
				distanceZoomMin=100;
				distanceZoomMax=1900;
				memoryPointCamera="opticView";
				discreteinitindex = 0;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = {0, 1};
                discretefov[] = {0.1, 0.0625, 0.0350, 0.0150, 0.0050};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
		magazines[]=
		{
			MACRO_NEW_MAG(DW32_Med,20),
			MACRO_NEW_MAG(DW32_High,5)
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
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin4[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
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
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			reloadTime=0.25;
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
				begin1[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
					1,
					1800
				};
				begin4[]=
				{
					"SWLW_clones\pistols\dc17\sounds\DC17_1",
					1,
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
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			reloadTime=0.2;
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
			
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
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
	};
}

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;

	class MACRO_NEW_MAG(DW32_Med,20): 30rnd_762x39_AK12_Mag_F //DW-32S
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		mass=30;
		initspeed=1900;
		displayName=MACRO_AMMO_DISPLAYNAME(Conc-Med,20)
		displayNameShort="Conc-Med Power 20rnd";
		descriptionShort="332nd Concentrated-Medium Power Round";
		ammo="ls_ammo_338_blue";
		tracersEvery=1;
	};
	class MACRO_NEW_MAG(DW32_High,5): 30rnd_762x39_AK12_Mag_F //DW-32S
	{
	    modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		mass=40
		initspeed=2100;
		displayName="332nd HighHv 5rnd";
		displayName=MACRO_AMMO_DISPLAYNAME(High Power,5)
		descriptionShort="332nd High Power-High Velocity Round";
		ammo="ls_ammo_127x108_green";
		tracersEvery=1;
	};
	
}
