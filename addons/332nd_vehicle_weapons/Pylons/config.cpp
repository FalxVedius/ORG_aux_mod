#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(air_weapons)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAmmo
{   
    class Missile_AGM_02_F;
	class MACRO_NEW_AMMO(AGM_Med): Missile_AGM_02_F
	{
	soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			3,
			2,
			2000
		};
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
	  manualcontrol=0;
	  effectsMissile = "332nd_aux_effects_missile_Rocket_Blue";
	  proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
	caliber=1;
	missileLockMaxDistance = 3000;
	missileLockMinDistance = 0;
	missileLockCone = 360;
	airlock=0;
	weaponLockSystem = "1 + 2 + 4 + 8 + 16";
	missileKeepLockedCone = 360;
	hit=1100;
	indirectHit = 85;
	mass=2;
	indirectHitRange = 8;
	};
    class M_Air_AA;
	class MACRO_NEW_AMMO(AA_Med): M_Air_AA
	{
	soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			3,
			2,
			2000
		};
    manualcontrol=0;

	missileLockMaxDistance = 2000;
	missileLockMinDistance = 0;
    effectsMissile = "332nd_aux_effects_missile_Rocket_Red";
	caliber=1;
	weaponLockSystem = "1 + 2 + 16";
	missileKeepLockedCone = 270;
	missileLockCone = 360;
	hit=500;
    cmImmunity = 0.7;
	};

};
	



class CfgMagazines
{
	class PylonRack_3Rnd_LG_scalpel; //332nd_aux_magazine_Pylon_AGM_Med_x3
	class MACRO_NEW_MAG(Pylon_AGM_Med,3): PylonRack_3Rnd_LG_scalpel
	{
	    hardpoints[]	= {"332_C_Pylon","332_B_Pylon"};
		displayName="Shrike AGM";
		descriptionshort="Concussion Missiles";
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		pylonWeapon = "332nd_aux_weapon_AGM_Pylon";
		autoSeekTarget = 1;
		displayNameShort="Shrike AGM";
		ammo=MACRO_NEW_AMMO(AGM_Med)
	};
	class PylonRack_3Rnd_LG_scalpel;
	class MACRO_NEW_MAG(Pylon_AA_Med,3): PylonRack_3Rnd_LG_scalpel
	{
	    hardpoints[]	= {"332_C_Pylon","332_A_Pylon"};
		displayName="Concussion Missile AA";

		descriptionshort="Air to Air Concussion Missile";
		pylonWeapon = "332nd_aux_weapon_AA_Pylon";
		displayNameShort="A2A Concussion Missiles";
		ammo=MACRO_NEW_AMMO(AA_Med)
	};
	class PylonRack_20Rnd_Rocket_03_HE_F;
	class MACRO_NEW_MAG(Pylon_Shrieker,20): PylonRack_20Rnd_Rocket_03_HE_F
	{
	    hardpoints[]	= {"332_C_Pylon","332_B_Pylon"};
		displayName="Shrieker 20rnd Rocket Pod";
		descriptionshort="Rocket Pod";
		pylonWeapon = "332nd_aux_weapon_RocketPod_Pylon";
		displayNameShort="Rocket Pod";
		count = 20;
		ammo=MACRO_NEW_AMMO(Shrieker_Rocket)
	};
	class PylonWeapon_300Rnd_20mm_shells;
	class MACRO_NEW_MAG(Pylon_20mm,600): PylonWeapon_300Rnd_20mm_shells
	{
	    hardpoints[]	= {"332_C_Pylon","332_A_Pylon"};
		displayName="20mm Cannon";
		descriptionshort="20mm Cannon";
		pylonWeapon = "332nd_aux_weapon_20mm_Pylon";
		displayNameShort="20mm Cannon";
		tracersEvery=1;
		FCSMaxLeadSpeed = 150;
		count = 600
		ammo=MACRO_NEW_AMMO(Nu_20mm)
	};
};

class LowROF;
class player;
class manual;
class CfgWeapons
{
	class Missile_AGM_02_Plane_CAS_01_F;
	class MACRO_NEW_WEAPON(AGM_Pylon): Missile_AGM_02_Plane_CAS_01_F
	{
		magazineWell[] = {};
		weaponLockDelay = 1;
		magazines[] = {
			 MACRO_NEW_MAG(Pylon_AGM_Med,3)
		};
		displayName = "AGM";
		lockAcquire = 1;
	};
	class missiles_ASRAAM;
	class MACRO_NEW_WEAPON(AA_Pylon):  missiles_ASRAAM
	{
		magazineWell[] = {};
		weaponLockDelay = 2;
		magazines[] = {
			 MACRO_NEW_MAG(Pylon_AA_Med,3)
		};
		lockAcquire = 1;
		displayName = "AA";
	};
	class  MACRO_NEW_WEAPON(air_dumb_rocketpod);
	class MACRO_NEW_WEAPON(RocketPod_Pylon):   MACRO_NEW_WEAPON(air_dumb_rocketpod)
	{
	magazines[] = {
			MACRO_NEW_MAG(Pylon_Shrieker,20)
	   };
	};
	class Twin_Cannon_20mm;
	class MACRO_NEW_WEAPON(20mm_Pylon): Twin_Cannon_20mm
	{
	//class manual: manual
	//{

	//}
	lockAcquire = 1;
	ballisticsComputer = 16;
	canLock = 2;
	magazineWell[] = {};
	magazines[] = {
			MACRO_NEW_MAG(Pylon_20mm,600)
	   };

	};
};