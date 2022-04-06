#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(R_E5)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(R_E5)
		};
	};
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_E5: arifle_MX_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(R_E5_B1): JLTS_E5
	{
		JLTS_hasElectronics=0;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_E5_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon=MACRO_NEW_WEAPON(E5_Shield);
		scope=2;
		displayName="rebel E5";
		descriptionShort="Standard Blaster";
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\E5\data\E5_co.paa"
		};
		magazines[]=
		{
			MACRO_NEW_MAG(R_E5Low,50)
		};
		magazineWell[]={};
		fireLightDiffuse[]={1,0,0};
		class WeaponFireGun;
		class Table;
		class maxT;
		class GunFire : WeaponFireGun //Here we go 
		{
			class Table
			{
				class T0
				{
					color[] = {0.23,0.94,0.28,1};
					maxT = 0;
				};

				class T1
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 200;
				};

				class T10
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2600;
				};

				class T11
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2650;
				};

				class T12
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2700;
				};

				class T13
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2750;
				};

				class T14
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2800;
				};

				class T15
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2850;
				};

				class T16
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2900;
				};

				class T17
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2950;
				};

				class T18
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 3000;
				};

				class T19
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 3100;
				};

				class T2
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 400;
				};

				class T20
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 3300;
				};

				class T21
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 3600;
				};

				class T22
				{
					color[] = { 1,1,1,1 };
					maxT = 4200;
				};

				class T3
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 600;
				};

				class T4
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 800;
				};

				class T5
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 1000;
				};

				class T6
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 1500;
				};

				class T7
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2000;
				};

				class T8
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2300;
				};

				class T9
				{
					color[] = { 0.23,0.94,0.28,1 };
					maxT = 2500;
				};
			};
		}
		flash = "GunFire";

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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.0020000001;
			minRange=2;
			aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.14;
			dispersion=0.005;
			aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=0;
			burst=3;
			aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=1;
			showToPlayer=0;
			aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
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
					"\SWLW_droids\smgs\e5\sounds\e5",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			aiDispersionCoefX=2.0
			aiDispersionCoefY=2.0
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=44;
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