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
		ammo=MACRO_NEW_AMMO(338_Red);
		tracersEvery=1;
	};
};
class mode_FullAuto;
class BaseSoundModeType;
class cfgWeapons
{
	
	class WBK_B2_NormalMod;
	class MACRO_NEW_WEAPON(B2_Handcannon): WBK_B2_NormalMod
	{
		scopeArsenal = 0;
		displayName = "CIS B2 HandCannon"
		magazines[] = {
			MACRO_NEW_MAG(B2Low,1000)
		};
		canShootInWater=1;
		recoil="recoil_spar";
		recoilprone="recoil_spar";
		modes[] = {"FullAuto","close","short","medium","far_optic1",""};
		
		muzzles[]=
		{
			"this"
		};
		class FullAuto: mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_Sniper_Tail_SoundSet","332_B2_Shot_SoundSet" };
			};
			displayname="FullAuto";
			reloadTime=0.25;
			dispersion=0.005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			textureType="fastAuto";
		};
		class close : FullAuto
		{
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.050000001;
			midRange = 20;
			midRangeProbab = 0.69999999;
			maxRange = 50;
			maxRangeProbab = 0.039999999;
			showToPlayer = 0;
		};
		class short : close
		{
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.050000001;
			midRange = 150;
			midRangeProbab = 0.69999999;
			maxRange = 300;
			maxRangeProbab = 0.039999999;
		};
		class medium : close
		{
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1 : medium
		{
			showToPlayer = 0;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.050000001;
			midRange = 500;
			midRangeProbab = 0.40000001;
			maxRange = 650;
			maxRangeProbab = 0.0099999998;
		};
		class far_optic2 : far_optic1
		{
			aiRateOfFire = 0.25;
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFireDistance = 900;
		};
	};
};
};