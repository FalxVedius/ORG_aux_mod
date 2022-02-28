#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(air_weapons)
	{
		author = "Bugs";
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
	class M_Air_AA;
	class MACRO_NEW_AMMO(R_AA_Low) : M_Air_AA
	{
		soundFly[] =
		{
			"332nd_weapons\sounds\Firefly\Firefly_fly_effect.wss",
			3,
			2,
			2000
		};
		manualcontrol = 0;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 0;
		effectsMissile = "332nd_aux_effects_missile_Rocket_Green";
		caliber = 1;
		weaponLockSystem = "1 + 2 + 4 + 16"; //Visual + Infra-red + laser_guided + Missile
		missileKeepLockedCone = 360;
		missileLockCone = 360;
		indirectHit = 15;
		hit = 25;
		cmImmunity = 0.2;
		whistleOnFire = 1;
		cost = 2000;
		missileLockMaxSpeed = 7000;
		maxSpeed = 8000;
	};

};
	



class CfgMagazines
{
	
	class PylonRack_12Rnd_missiles;
	class MACRO_NEW_MAG(R_Pylon_AA_low,12) : PylonRack_12Rnd_missiles
	{
		hardpoints[] = { "332_A_Pylon" };
		displayName = "Firefly Cluster Missile";
		count = 12;
		descriptionshort = "Air to Air Firefly Cluster Missile";
		pylonWeapon = MACRO_NEW_WEAPON(R_AALow_Pylon);
		displayNameShort = "A2A Firefly Missiles";
		ammo = MACRO_NEW_AMMO(R_AA_Low)
		maxLeadSpeed = 800;
	};

};


class LowROF;
class player;
class manual;
class CfgWeapons
{
	class missiles_ASRAAM;
	class MACRO_NEW_WEAPON(R_AALow_Pylon) : missiles_ASRAAM
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(R_Pylon_AA_low,12)
		};
		lockAcquire = 1;
		displayName = "Firefly";
		weaponLockDelay = 0;
		burst = 3;
		aiRateOfFire = 5.0;
		
	};

};