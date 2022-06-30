#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_17m)
	{
		author = "332nd_aux_team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_17m)
		};
	};
};

class cfgRecoils
{
 class DC_15s
 {              //  x     y     a     b
  muzzleOuter[]	= { 0,  8,  0,  0 };
  kickBack[]	= { 0.02, 0.04 };
  permanent	= 0;
  temporary	= 6;
 };
};
class cfgWeapons
{
	class BaseSoundModeType;

	class Rifle_Base_F;
	class 3AS_DC17M_Base_F : Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class 3AS_DC17M_F : 3AS_DC17M_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
			class MuzzleSlot;
		};
		class GunParticles;
		class FullAuto;
		class Single;
	};

	class JLTS_stun_muzzle;

	class MACRO_NEW_WEAPON(DC_17m) : 3AS_DC17M_F
	{
		
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{
			mass = 80;
			class MuzzleSlot : MuzzleSlot
			{
				// class names with items supported by weapon
				compatibleItems[] = { "332nd_DC_17m_Rifle_Muz", "332nd_DC_17m_Marks_Muz", "332nd_DC_17m_Grend_Muz" }; // moved to each weapon
			};
		};

		
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 17M *WIP*)

		canShootInWater=1;
		baseWeapon="332nd_aux_weapon_DC_17m";
		recoil="DC_15s";
		recoilprone="DC_15s";
		cursor="332_DOT";
        cursoraim="332_DC15S";
		modes[]=  
		{
			"FullAuto",
			"Single"
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

		class FullAuto: FullAuto
		{
		    
			sounds[] = {"StandardSound","SilencedSound","GrenadeSound" };
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC17m_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_DC17mSniper_Shot_SoundSet","332_Sniper_Tail_SoundSet" };
			};
			class GrenadeSound : BaseSoundModeType
			{
				soundSetShot[] = {"332_UGL_Shot_SoundSet","332_Rocket_Tail_SoundSet"};
			};
			displayname="FullAuto";
			reloadTime = 0.1;
			dispersion = 0.009;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			textureType="fastAuto";
		};

		class Single: FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound","GrenadeSound" };
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC17m_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] = { "332_DC17mSniper_Shot_SoundSet","332_Sniper_Tail_SoundSet" };
			};
			class GrenadeSound : BaseSoundModeType
			{
				soundSetShot[] = {"332_UGL_Shot_SoundSet","332_Rocket_Tail_SoundSet"};
			};
			reloadTime = 0.365;
			displayname="SlowAuto";
			dispersion = 0.00093;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		    textureType = "semi";
		};

        magazines[] = {
			MACRO_NEW_MAG(DC_17m_rifle,60),
			MACRO_NEW_MAG(DC_17m_marks,5),
			MACRO_NEW_MAG(DC_17m_grend,4)
		};
        
		class OpticsModes
        {
            class sight
            {
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 1;
				opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
				opticsZoomInit = 0.75;
				opticsZoomMax = 1.25;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
            };
            class scope: sight
            {
				cameraDir = "";
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 0.67;
				opticsFlare = "true";
				opticsID = 2;
				opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
				opticsZoomInit = 0.2;
				opticsZoomMax = 0.2;
				opticsZoomMin = 0.015;
				useModelOptics = 1;
				visionMode[] = { "Normal","NVG"};
            };
        };
	};

	class muzzle_snds_338_black;
	class InventoryMuzzleItem_Base_F;
	class 332nd_DC_17m_Rifle_Muz : muzzle_snds_338_black
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "332nd Rifle Muzzle";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "";

		class ItemInfo : InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 0; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) READ DIS, DIS BE COOL

			class MagazineCoef
			{
				initSpeed = 0.67;
			};

			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.1;
				audibleFire = 0.1;
				visibleFireTime = 1;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1;
				airFriction = 1.0;
			};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	

			class MuzzleCoef
			{
				dispersionCoef = 1.0f;
				artilleryDispersionCoef = 1.0f;

				fireLightCoef = 0.1f;

				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};
		};
	};

	class 332nd_DC_17m_Marks_Muz : muzzle_snds_338_black
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "332nd Marksman Muzzle";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "";

		class ItemInfo : InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 1; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) READ DIS, DIS BE COOL

			class MagazineCoef
			{
				initSpeed = 0.67;
			};

			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.1;
				audibleFire = 0.1;
				visibleFireTime = 1;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1;
				airFriction = 1.0;
			};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	

			class MuzzleCoef
			{
				dispersionCoef = 1.0f;
				artilleryDispersionCoef = 1.0f;

				fireLightCoef = 0.1f;

				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};
		};
	};

	class 332nd_DC_17m_Grend_Muz : muzzle_snds_338_black
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "332nd Grenade Muzzle";
		picture = "\a3\Weapons_F_Mark\Data\UI\icon_muzzle_snds_338_black_ca.paa";
		model = "";

		class ItemInfo : InventoryMuzzleItem_Base_F
		{
			soundTypeIndex = 2; // index of sound in sounds[] in weapon modes (inherited 1 from parent class) READ DIS, DIS BE COOL

			class MagazineCoef
			{
				initSpeed = 0.67;
			};

			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.1;
				audibleFire = 0.1;
				visibleFireTime = 1;
				audibleFireTime = 1.0;
				cost = 1.0;
				typicalSpeed = 1;
				airFriction = 1.0;
			};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	

			class MuzzleCoef
			{
				dispersionCoef = 1.0f;
				artilleryDispersionCoef = 1.0f;

				fireLightCoef = 0.1f;

				recoilCoef = 1.0f;
				recoilProneCoef = 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};
		};
	};
};

class CfgMagazines
{
	class 3as_100rnd_ec40_mag;
	class 3as_5rnd_ec80_mag;
	class 3as_antiarmour_mag;

	class MACRO_NEW_MAG(DC_17m_rifle,60) : 3as_100rnd_ec40_mag
	{
		count = 60;
		mass = 15;
		initspeed = 1400;
		displayName = MACRO_AMMO_DISPLAYNAME(17m Rifle Mag,60)
		displayNameShort = "Med Power 60rnd";
		descriptionShort = "332nd Medium Power Round";
		ammo = MACRO_NEW_AMMO(762_blue);
		tracersEvery = 1;
	};

	class MACRO_NEW_MAG(DC_17m_marks,5) : 3as_5rnd_ec80_mag
	{
		count = 5;
		mass = 15;
		initspeed = 2200;
		displayName = MACRO_AMMO_DISPLAYNAME(17m Marksman Mag,5)
		displayNameShort = "Med Power 5rnd";
		descriptionShort = "332nd Medium Power Round";
		ammo = MACRO_NEW_AMMO(762_blue);
		tracersEvery = 1;
	};

	class MACRO_NEW_MAG(DC_17m_grend,4) : 3as_antiarmour_mag
	{
		count = 4;
		mass = 15;
		initspeed = 80;
		displayName = MACRO_AMMO_DISPLAYNAME(17m Grenade,4)
		displayNameShort = "High Explosive 4rnd";
		descriptionShort = "332nd HE Round";
		ammo = MACRO_NEW_AMMO(40mm_HE);
		tracersEvery = 1;
	};
};