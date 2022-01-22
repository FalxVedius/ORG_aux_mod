#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(E5c)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(E5c)
		};
	};
};
class CfgMagazines
{
	class 100Rnd_65x39_caseless_mag;
	class MACRO_NEW_MAG(E5cLow,300): 100Rnd_65x39_caseless_mag
	{
		author="MrClock";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_mag.p3d";
		count=300;
		displayName="$STR_JLTS_names_E5C_mag";
		displayNameShort="$STR_JLTS_snames_EnergyCellStandard";
		descriptionShort="$STR_JLTS_descs_E5C_mag";
		ammo=MACRO_NEW_AMMO(762_Red);
		tracersEvery=1;
		initSpeed=600;
		mass=32;
	};
};
class BaseSoundModeType;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class MACRO_NEW_WEAPON(E5c): LMG_Mk200_F
	{
		//JLTS_hasElectronics=1;
		//JLTS_hasEMPProtection=0;
		//JLTS_friedItem="JLTS_E5C_fried";
		//JLTS_repairTime=40;
		author="332nd Aux Team";
		scope=2;
		baseWeapon="";
		displayName="CIS E5c";
		descriptionShort="$STR_JLTS_descs_BlasterRepeating";
		picture="\MRC\JLTS\weapons\e5c\data\ui\e5c_stock_ui_ca.paa";
		model="\MRC\JLTS\weapons\e5c\e5c_stock.p3d";
		
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\e5c\data\e5c_co.paa"
		};
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\e5c\anims\e5c_stock_handanim.rtm"
		};
		magazines[]=
		{
			MACRO_NEW_MAG(E5cLow,300)
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		inertia=1;
		class manual: Mode_FullAuto
		{
		    sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15a_Tail_SoundSet","332_E5c_Shot_SoundSet"};
			};
			reloadTime=0.075;
			dispersion=0.002;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			aiBurstTerminable = 1;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=40;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=40;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=40;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=40;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=40;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
};
