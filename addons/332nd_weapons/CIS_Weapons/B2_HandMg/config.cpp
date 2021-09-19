#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(B2_weapons)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(B2_Handcannon)
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(B2Low,1000): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		count=1000;
		mass=1;
		initspeed=700;
		displayName="E5 50rnd Low";
		descriptionShort="50rnd Magazine for the E-5";
		displayNameShort="E5 50rnd Low ";
		ammo=MACRO_NEW_AMMO(556_Red);
		tracersEvery=1;
	};
};


class cfgWeapons
{
	class FullAuto;
	class WBK_B2_NormalMod;
	class MACRO_NEW_WEAPON(B2_Handcannon): WBK_B2_NormalMod
	{
		displayName = "CIS B2 HandCannon"
		magazines[] = {
			MACRO_NEW_MAG(B2Low,1000)
		};
		canShootInWater=1;
		recoil="recoil_spar";
		recoilprone="recoil_spar";
		modes[] = {"FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		
		muzzles[]=
		{
			"this"
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound";
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
					"\332nd_weapons\CIS_Weapons\B2_HandMg\sounds\B2Autocannon.wss",
					1,
					1.2,
					4000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			displayname="FullAuto";
			burst=25
			reloadTime=0.05;
			dispersion=0.01;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			textureType="fastAuto";
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
			showToPlayer=0;
			burst=50;
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
		class single_medium_optics1: FullAuto
		{
		
			burst=50;
			requiredOpticType=1;
			showToPlayer=0;
			aiDispersionCoefX=3.0
			aiDispersionCoefY=3.0
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
			burst=100;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			aiDispersionCoefX=3.0
			aiDispersionCoefY=3.0
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
	    };
        
	};
};
};