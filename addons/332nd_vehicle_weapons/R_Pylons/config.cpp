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
		missileLockMaxDistance = 4000;
		missileLockMinDistance = 0;
		effectsMissile = "332nd_aux_effects_missile_Rocket_Green";
		caliber = 1;
		weaponLockSystem = "1 + 2 + 4 + 16"; //Visual + Infra-red + laser_guided + Missile
		missileKeepLockedCone = 135;
		missileLockCone = 135;
		indirectHit = 35;
		hit = 65;
		cmImmunity = 0.1;
		whistleOnFire = 1;
		cost = 5;
		missileLockMaxSpeed = 7000;
		maxSpeed = 8000;
	};

	class Missile_AGM_02_F;
	class MACRO_NEW_AMMO(R_AGM_Med) : Missile_AGM_02_F
	{
		soundengine[] =
		{
			"332nd_weapons\sounds\weapons\flight\homingrocket1.wss",
			1,
			1,
			750
		};
		soundfly[] =
		{
			"332nd_weapons\sounds\weapons\flight\RocketEngine.wss",
			1,
			1.5,
			200
		};
		soundsetsoniccrack[] =
		{
			"332nd_genericrocket_flyby_soundset"
		};
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		manualcontrol = 0;
		effectsMissile = "332nd_aux_effects_missile_Rocket_Dark_Green";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		caliber = 1;
		missileLockMaxDistance = 3000;
		missileLockMinDistance = 0;
		missileLockCone = 180;
		airlock = 0;
		weaponLockSystem = "1 + 2 + 4 + 16";
		missileKeepLockedCone = 180;
		hit = 85;
		cost = 1;
		indirectHit = 35;
		mass = 2;
		indirectHitRange = 8;
	};

	class Bo_GBU12_LGB;
	class MACRO_NEW_AMMO(R_Plasma_Bomb) : Bo_GBU12_LGB
	{
		effectsMissile = "332nd_aux_effects_purple_tracer_Bomb";
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
		proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
		timeToLive = 60;
		explosionEffects = "MK82_Explode";
		weaponLockSystem = "8";
		missileKeepLockedCone = 360;
		hit = 1000;
		indirectHit = 1000;
		indirectHitRange = 15;
	};

};
	



class CfgMagazines
{
	
	class PylonRack_12Rnd_missiles;
	class MACRO_NEW_MAG(R_Pylon_AA_low,24) : PylonRack_12Rnd_missiles
	{
		hardpoints[] = { "332_A_Pylon" };
		displayName = "Firefly Cluster Missile";
		count = 24;
		descriptionshort = "Air to Air Firefly Cluster Missile";
		pylonWeapon = MACRO_NEW_WEAPON(R_AALow_Pylon);
		displayNameShort = "A2A Firefly Missiles";
		ammo = MACRO_NEW_AMMO(R_AA_Low)
		maxLeadSpeed = 800;
	};

	class PylonRack_12Rnd_missiles;
	class MACRO_NEW_MAG(R_Pylon_AGM_Med,12) : PylonRack_12Rnd_missiles
	{
		hardpoints[] = { "332_A_Pylon" };
		displayName = "Micro Missile AGM";
		count = 12;
		descriptionshort = "Air to Ground micro Concussion Missile";
		pylonWeapon = MACRO_NEW_WEAPON(R_AGM_Pylon);
		displayNameShort = "A2G Micro Missiles";
		ammo = MACRO_NEW_AMMO(R_AGM_Med)
	};

	class PylonMissile_1Rnd_BombCluster_03_F;
	class MACRO_NEW_MAG(Pylon_PlasmaBomb,3) : PylonMissile_1Rnd_BombCluster_03_F
	{
		hardpoints[] = { "332_B_Pylon"};
		displayName = "Rebel Plasma Bomb";
		descriptionshort = "Rebel Plasma Bomb";
		pylonWeapon = "332nd_aux_weapon_Rebel_PlasmaBomb_Pylon";
		displayNameShort = "R_Plasma Bomb";
		tracersEvery = 1;
		count = 3;
		initspeed = 0;
		ammo = MACRO_NEW_AMMO(R_Plasma_Bomb)
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
			MACRO_NEW_MAG(R_Pylon_AA_low,24)
		};
		lockAcquire = 1;
		displayName = "Firefly";
		weaponLockDelay = 0;
		burst = 3;
		reloadTime = 1;
		
	};

	class Missile_AGM_02_Plane_CAS_01_F;
	class MACRO_NEW_WEAPON(R_AGM_Pylon) : Missile_AGM_02_Plane_CAS_01_F
	{
		magazineWell[] = {};
		weaponLockDelay = 0.5;
		magazines[] = {
			 MACRO_NEW_MAG(R_Pylon_AGM_Med,12),
		};
		displayName = "AGM";
		lockAcquire = 1;
	};

	class weapon_GBU12Launcher;
	class MACRO_NEW_WEAPON(R_PlasmaBomb_Pylon) : weapon_GBU12Launcher
	{
		magazineWell[] = {};
		displayName = "R_Plasma_Bomb";
		magazines[] = 
		{
		 MACRO_NEW_MAG(Pylon_PlasmaBomb,3)
		};
	};
};