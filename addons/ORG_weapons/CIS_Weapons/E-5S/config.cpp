#include "../../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(E5S)
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
			MACRO_NEW_WEAPON(E5S_B1),
			MACRO_NEW_WEAPON(E5S_BX)
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


class CfgAmmo
{
	class ls_ammo_127x108_red;
	class MACRO_NEW_AMMO(20mm_E5S) : ls_ammo_127x108_red
	{
		cartridge = "";
		caliber = 3.2;
		hit = 40;
		tracerScale = 3.5;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		explosionSoundEffect = "DefaultExplosion";
		explosioneffects = "ExploAmmoExplosion";
		effectfly = "332nd_mainRound_CIS_effects";
		soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
		class CamShakeExplode
		{
			power = "(20*0.2)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 20^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.0099999998;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};


class CfgMagazines
{
	class JLTS_E5S_mag;

	class MACRO_NEW_MAG(E5S_Mag,5) : JLTS_E5S_mag
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		count = 5;
		mass = 10;
		initspeed = 1200;
		displayName = "E5S Magazine";
		displayNameShort = "E5S rnd";
		descriptionShort = "332nd E5S Round";
		ammo =MACRO_NEW_AMMO(20mm_E5S);
		tracersEvery = 1;
	};
};


class CfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_E5S : arifle_MX_Base_F
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};

	class MACRO_NEW_WEAPON(E5S_B1): JLTS_E5S
	{
		scope=2;
		scopeArsenal = 2;

		displayName="CIS E5S";
		descriptionShort="Standard Sniper of the CIS";

		baseWeapon = "";

		magazines[]=
		{
			MACRO_NEW_MAG(E5S_Mag,5)
		};
		magazineWell[]={};

		fireLightDiffuse[]={1,0,0};

		modes[] = { "manual","close","short","medium","far_optic1","far_optic2" };

		class manual : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_Sniper_Tail_SoundSet","332_E5S_Shot_SoundSet" };
			};
			reloadTime = 1;
			dispersion = 0.001;
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
			aiDispersionCoefX=2.0;
			aiDispersionCoefY=2.0;
		};
		class close : manual
		{
			aiRateOfFire = 2;
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
			aiRateOfFire = 2;
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
			aiRateOfFire = 2;
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
			aiRateOfFire = 2;
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
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 2;
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

	class MACRO_NEW_WEAPON(E5S_BX) : JLTS_E5S
	{
		scope = 2;

		displayName = "CIS E5SX";
		descriptionShort = "Special Sniper of the CIS";

		baseWeapon = "";

		magazines[] =
		{
			MACRO_NEW_MAG(E5S_Mag,5)
		};
		magazineWell[] = {};

		fireLightDiffuse[] = { 1,0,0 };

		modes[] = { "manual","close","short","medium","far_optic1","far_optic2" };

		class manual : Mode_FullAuto
		{
			sounds[] = { "StandardSound" };
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_Sniper_Tail_SoundSet","332_E5S_Shot_SoundSet" };
			};
			reloadTime = 1;
			dispersion = 0.001;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			aiDispersionCoefX=0.5;
			aiDispersionCoefY=0.5;
			aiBurstTerminable = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.69999999;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = 1;
		};
		class close : manual
		{
			aiRateOfFire = 1;
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
			aiRateOfFire = 1;
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
			aiRateOfFire = 1;
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
			aiRateOfFire = 1;
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
			minRange = 400;
			minRangeProbab = 0.050000001;
			midRange = 750;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.0099999998;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 44;
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = {};
			};
			class MuzzleSlot : MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};

		class GunParticles
		{
			class FirstEffect
			{
				directionName = "Konec hlavne";
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
			};
		};
	};

};