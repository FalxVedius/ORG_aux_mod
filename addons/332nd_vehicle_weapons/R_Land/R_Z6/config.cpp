#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(R_Z90)
	{
		author = "332nd Aux Team";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(Z90)
		};
	};
};

class BaseSoundModeType;
class Mode_FullAuto;
class mode_SemiAuto;
class cfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F : Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	}

	class JLTS_Z6 : LMG_Mk200_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot;
		}
	};
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(R_Z90) : JLTS_Z6
	{
		scope = 1;
		scopeArsenal = 0;
		displayName = MACRO_WEAPON_DISPLAYNAME(Z90)
		reloadTime = 0.1;
		ACE_Overheating_mrbs = 300000;
		recoil = "recoil_lim";
		recoilprone = "recoil_mx";
		canShootInWater = 1;
		baseweapon = "";
		cursor = "332_DOT";
		cursoraim = "332_Z6";
		modes[] =
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		modelOptics[] = { "\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F" };
		muzzles[] =
		{
			"this"
		};
		class OpticsModes
		{
			class sight
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] =
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.75;
				discreteInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 700;
				discreteDistance[] = { 100,200,300,400,500,600,700 };
				discreteDistanceInitIndex = 0;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "true";
				cameraDir = "";
			};
			class scope : sight
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] =
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin = 0.0300;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "optic_view";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				visionMode[] = { "Normal", "NVG" };
				discretefov[] = { 0.125,0.0625 };
				discreteInitIndex = 0;
				discreteDistanceInitIndex = 0;
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1000 };
				distanceZoomMin = 100;
				distanceZoomMax = 1000;
				modelOptics[] = { "\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F" };
			};
		};
		magazines[] =
		{
			MACRO_NEW_MAG(R_Z90,750)
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_Z6_Shot_SoundSet","332_DC15a_Tail_SoundSet" };
			};

			displayname = "FullAuto";
			reloadTime = 0.055;
			dispersion = 0.002;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			aiBurstTerminable = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.69999999;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = 1;
		};
		class close : FullAuto
		{
			burst = 40;
			aiRateOfFire = 0.055;
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
			burst = 40;
			aiRateOfFire = 0.055;
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
			burst = 40;
			aiRateOfFire = 0.055;
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
			burst = 40;
			aiRateOfFire = 0.055;
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
			burst = 40;
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 0.75;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 3;
	};
};
class CfgAmmo
{
	class ls_ammo_762_green;
	class MACRO_NEW_AMMO(R_Z90762_green) :ls_ammo_762_green
	{
		lightcolor[] = { 0, 188, 0 };
	};
};
class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(R_Z90,750): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=750;
		mass=30;
		initspeed=1200;
		displayName=MACRO_AMMO_DISPLAYNAME(Z90 Low,750)
		displayNameShort="Low Power 150rnd";
		descriptionShort="332nd Low Power Round";
		ammo= MACRO_NEW_AMMO(R_Z90762_green);
		tracersEvery=1;
	};
};
