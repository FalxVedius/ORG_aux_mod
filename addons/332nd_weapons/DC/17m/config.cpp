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
 class DC_17m
 {              //  x     y     a     b
  muzzleOuter[]	= { 0,  6,  0,  0 };
  kickBack[]	= { 0.03, 0.06 };
  permanent	= 0;
  temporary	= 5;
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

		
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 17M *Test*)

		canShootInWater=1;
		baseWeapon="332nd_aux_weapon_DC_17m";
		recoil="DC_17m";
		recoilprone="DC_17m";
		cursor="332_DOT";
        cursoraim="332_DC15S";
		modes[]=  
		{
			"FullAuto",
			"Single"
		};
		//class 332Stun: JLTS_stun_muzzle
		//{
	 //      magazines[]=
		//   {
		//  	MACRO_NEW_MAG(Stun,10)
		//   };
		//   magazineWell[]={};
		//   cursoraim="332_Stun";
		//   cursor="332_DOT"
		//};
		muzzles[]=
		{
			"this"
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
			dispersion = 0.001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.11;
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
			reloadTime = 0.2;
			displayname="SlowAuto";
			dispersion = 0.001;
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
				initSpeed = 1;
			};

			//class AmmoCoef
			//{
			//	hit = 1;
			//	visibleFire = 0.1;
			//	audibleFire = 0.1;
			//	visibleFireTime = 1;
			//	audibleFireTime = 1.0;
			//	cost = 1.0;
			//	typicalSpeed = 1;
			//	airFriction = 1.0;
			//};

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
				initSpeed = 1;
			};

			//class AmmoCoef
			//{
			//	hit = 1;
			//	visibleFire = 0.1;
			//	audibleFire = 0.1;
			//	visibleFireTime = 1;
			//	audibleFireTime = 1.0;
			//	cost = 1.0;
			//	typicalSpeed = 1;
			//	airFriction = 1.0;
			//};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	

			class MuzzleCoef
			{
				dispersionCoef = 0.001f;
				artilleryDispersionCoef = 1.0f;

				fireLightCoef = 0.1f;

				recoilCoef = 3.0f;
				recoilProneCoef = 2.0f;

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
				initSpeed = 1;
			};

			//class AmmoCoef
			//{
			//	hit = 1;
			//	visibleFire = 0.1;
			//	audibleFire = 0.1;
			//	visibleFireTime = 1;
			//	audibleFireTime = 1.0;
			//	cost = 1.0;
			//	typicalSpeed = 1;
			//	airFriction = 1.0;
			//};

			muzzleEnd = "zaslehPoint";		// memory point in muzzle supressor's model
			alternativeFire = "Zasleh2";	// class in cfgWeapons with model of muzzle flash	

			class MuzzleCoef
			{
				dispersionCoef = 1.0f;
				artilleryDispersionCoef = 1.0f;

				fireLightCoef = 0.1f;

				recoilCoef = 5.0f;
				recoilProneCoef = 1.0f;

				minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
				midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
				maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
			};
		};
	};
};
class SWLW_ammo_40mm_at;
class MACRO_NEW_AMMO(762_blue);
class CfgAmmo
{	
	class MACRO_NEW_AMMO(DM17GP): SWLW_ammo_40mm_at
	{
		aiAmmoUsageFlags="64 + 128";
		ace_frag_enabled = 0;
		irLock=0;
		caliber = 1;
		allowAgainstInfantry=1;
		hit=80;
		manualControl=0;
		CraterEffects = "SWLW_plasma_he_impact";
		indirectHit=20;
		indirectHitRange=1;
		tracerscale = 1;
		model = "\A3\weapons_f\launchers\nlaw\nlaw_rocket";
		maxControlRange = 0;
		maxSpeed = 70;
		effectfly="332nd_aux_effects_missile_Rocket_DC17mGP";
		manueuvrability = 0;
		coefGravity = 0;
		flaresize = 1;
		timeToLive = 20;
		fuseDistance = 1;
		typicalSpeed = 70;
		soundfly[]=
		{
			"332nd_weapons\sounds\weapons\flight\rocketengine1.wss",
			2,
			1.5,
			200
		};
	};
	class MACRO_NEW_AMMO(762_Blue_DC17mSniper): MACRO_NEW_AMMO(762_blue)
	{
		//effectfly="332nd_aux_effects_blue_bullet";
		class CamShakePlayerFire
		{
		power = 5;
		duration = 0.1;
		frequency = 20;
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
		count = 42;
		mass = 10;
		initspeed = 700;
		displayName = MACRO_AMMO_DISPLAYNAME(17m Rifle Mag,42)
		displayNameShort = "Med Power 60rnd";
		descriptionShort = "332nd Medium Power Round";
		ammo = MACRO_NEW_AMMO(762_blue);
		tracersEvery = 1;
	};

	class MACRO_NEW_MAG(DC_17m_marks,5) : 3as_5rnd_ec80_mag
	{
		count = 10;
		mass = 10;
		initspeed = 2200;
		displayName = MACRO_AMMO_DISPLAYNAME(17m Marksman Mag,10)
		displayNameShort = "Med Power 5rnd";
		descriptionShort = "332nd Medium Power Round";
		ammo = MACRO_NEW_AMMO(762_Blue_DC17mSniper);
		tracersEvery = 1;
	};

	class MACRO_NEW_MAG(DC_17m_grend,4) : 3as_antiarmour_mag
	{
		count = 1;
		mass = 25;
		initspeed = 70;
		displayName = MACRO_AMMO_DISPLAYNAME(17m GP Rocket,1)
		displayNameShort = "High Explosive 4rnd";
		descriptionShort = "332nd HE Round";
		ammo = MACRO_NEW_AMMO(DM17GP);
		tracersEvery = 1;
	};
};