#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(E5X)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(E5X)
		};
	};
};

class BaseSoundModeType;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;


class CfgMagazines
{
	class JLTS_E5C_mag;

	class MACRO_NEW_MAG(E5X_Mag,51) : JLTS_E5C_mag
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		count = 51;
		mass = 10;
		initspeed = 1100;
		displayName = "E5X Magazine";
		displayNameShort = "E5X rnd";
		descriptionShort = "332nd E5X Round";
		ammo = "ls_ammo_762_red";
		tracersEvery = 1;
	};
};


class CfgWeapons
{
	class LMG_Mk200_F;
	class JLTS_E5C : LMG_Mk200_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};

	class MACRO_NEW_WEAPON(E5X): JLTS_E5C
	{
		scope=2;
		scopeArsenal = 2;

		displayName="CIS E5X";
		descriptionShort="Special Blaster of the CIS";

		baseWeapon = "";

		magazines[]=
		{
			MACRO_NEW_MAG(E5X_Mag,51)
		};
		magazineWell[]={};

		fireLightDiffuse[]={1,0,0};

		modes[] = { "manual","close","short","medium","far_optic1","far_optic2" };

		class manual : Mode_FullAuto
		{
			burst = 3;
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_DC15a_Tail_SoundSet","332_E5c_Shot_SoundSet" };
			};
			reloadTime = 0.15;
			dispersion = 0.002;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			aiBurstTerminable = 0;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.69999999;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = 1;
		};
		class close : manual
		{
			burst = 3;
			aiRateOfFire = 0.15;
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
			burst = 3;
			aiRateOfFire = 0.15;
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
			burst = 3;
			aiRateOfFire = 0.15;
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
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 0.15;
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
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 0.15;
			aiRateOfFireDistance = 900;
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