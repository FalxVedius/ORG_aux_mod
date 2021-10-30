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


	class MACRO_NEW_AMMO(Proton_Torpedo): Missile_AGM_02_F
	{
	soundFly[]=
		{
			"332nd_vehicle_weapons\air\sounds\V1.wss",
			2,
			1,
			4000
		};

		maxSpeed = 50;
		thrust = 50;
		timeToLive = 60;
		typicalSpeed = 50;
		thrustTime = 60;
		model = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
	  manualcontrol=1;
	  effectsMissile = "332nd_aux_effects_missile_Proton_Purple";
	  proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_01_fly_F";
	caliber=1;
	explosionEffects = "HelicopterExplosionEffects2";
	missileLockMaxDistance = 5000;
	missileLockMinDistance = 0;
	missileLockCone = 360;
	airlock=1;
	weaponLockSystem = "1 + 2 + 4 + 8 + 16";
	missileKeepLockedCone = 360;
	hit=3500;
	indirectHit = 1000;
	mass=2;
	indirectHitRange = 10;
	};

	class Bo_GBU12_LGB;
	class MACRO_NEW_AMMO(Proton_Bomb): Bo_GBU12_LGB
	{
	soundFly[]=
		{
			"332nd_vehicle_weapons\air\sounds\V1.wss",
			2,
			15,
			1000
		};
    effectfly="332nd_aux_effects_purple_tracer_Bomb";
	effectsMissile = "332nd_aux_effects_purple_tracer_Bomb";
	maxSpeed = 100;
		thrust = 50;
		timeToLive = 60;
		typicalSpeed = 50;
		thrustTime = 1.5;
	explosionEffects = "HelicopterExplosionEffects2";

	weaponLockSystem = "1 + 2 + 4 + 8 + 16";
	missileKeepLockedCone = 360;
	hit=5000;
	indirectHit = 1150;
	indirectHitRange = 15;
	};

	class MACRO_NEW_AMMO(Plasma_Bomb): Bo_GBU12_LGB
	{
	effectsMissile = "332nd_aux_effects_purple_tracer_Bomb";
	model = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_fly_F";
	proxyShape = "\a3\Weapons_F_Orange\Ammo\BombCluster_03_F";
	//thrust = 50;
	timeToLive = 60;
	//typicalSpeed = 50;
	//thrustTime = 1.5;
	explosionEffects = "MK82_Explode";
	weaponLockSystem = "8";
	missileKeepLockedCone = 360;
	hit=5000;
	indirectHit = 3000;
	indirectHitRange = 30;
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
	missileLockMaxDistance = 2500;
	missileLockMinDistance = 300;
    effectsMissile = "332nd_aux_effects_missile_Rocket_Red";
	caliber=1;
	weaponLockSystem = "1 + 2 + 16";
	missileKeepLockedCone = 180;
	missileLockCone = 360;
	hit=600;
    cmImmunity = 0.8;
	};

	class MACRO_NEW_AMMO(AA_Low): M_Air_AA
	{
	soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			3,
			2,
			2000
		};
    manualcontrol=0;
	missileLockMaxDistance = 1500;
	missileLockMinDistance = 0;
    effectsMissile = "332nd_aux_effects_missile_Rocket_Red";
	caliber=1;
	weaponLockSystem = "1 + 2 + 16";
	missileKeepLockedCone = 270;
	missileLockCone = 360;
	hit=150;
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
	class MACRO_NEW_MAG(Pylon_AA_Med,3): PylonRack_3Rnd_LG_scalpel
	{
	    hardpoints[]	= {"332_C_Pylon","332_A_Pylon"};
		displayName="Concussion Missile AA";

		descriptionshort="Air to Air Concussion Missile";
		pylonWeapon = "332nd_aux_weapon_AA_Pylon";
		displayNameShort="A2A Concussion Missiles";
		ammo=MACRO_NEW_AMMO(AA_Med)
	};

	class PylonRack_12Rnd_missiles;
    class MACRO_NEW_MAG(Pylon_AA_low,12): PylonRack_3Rnd_LG_scalpel
	{
	    hardpoints[]	= {"332_A_Pylon"};
		displayName="Micro Concussion Missile AA";

		descriptionshort="Air to Air micro Concussion Missile";
		pylonWeapon = MACRO_NEW_WEAPON(AALow_Pylon);
		displayNameShort="A2A Micro Concussion Missiles";
		ammo=MACRO_NEW_AMMO(AA_Low)
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
		count = 600;
		ammo=MACRO_NEW_AMMO(Nu_20mm)
	};
	
	class MACRO_NEW_MAG(Pylon_ProtonTorpedo,1): PylonWeapon_300Rnd_20mm_shells
	{
	    hardpoints[]	= {"332_B_Pylon"};
		displayName="Proton Torpedo";
		model = "\a3\Weapons_F_Orange\DynamicLoadout\PylonMissile_1x_BombCluster_01_F.p3d";
		descriptionshort="Proton Torpedo";
		pylonWeapon = "332nd_aux_weapon_ProtonTorpedo_Pylon";
		displayNameShort="Proton Torpedo";
		tracersEvery=1;
		initspeed=50;
		count = 1;
		ammo=MACRO_NEW_AMMO(Proton_Torpedo)
	};
	class PylonMissile_1Rnd_BombCluster_03_F;
	class MACRO_NEW_MAG(Pylon_ProtonBomb,1): PylonMissile_1Rnd_BombCluster_03_F
	{
	    hardpoints[]= {"332_B_Pylon"};
		displayName="Proton Bomb";
		descriptionshort="Proton Bomb";
		pylonWeapon = "332nd_aux_weapon_ProtonBomb_Pylon";
		displayNameShort="Proton Bomb";
		tracersEvery=1;
		initspeed=0;
		ammo=MACRO_NEW_AMMO(Proton_Bomb)
	};
	class MACRO_NEW_MAG(Pylon_PlasmaBomb,1): PylonMissile_1Rnd_BombCluster_03_F
	{
	    hardpoints[]= {"332_B_Pylon"};
		displayName="Plasma Bomb";
		descriptionshort="Plasma Bomb";
		pylonWeapon = "332nd_aux_weapon_PlasmaBomb_Pylon";
		displayNameShort="Plasma Bomb";
		tracersEvery=1;
		initspeed=0;
		ammo=MACRO_NEW_AMMO(Plasma_Bomb)
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
		weaponLockDelay = 0.5;
		magazines[] = {
			 MACRO_NEW_MAG(Pylon_AGM_Med,3),
		};
		displayName = "AGM";
		lockAcquire = 1;
	};

	class MACRO_NEW_WEAPON(ProtonTorpedo_Pylon): MACRO_NEW_WEAPON(AGM_Pylon)
	{
		magazineWell[] = {};
		weaponLockDelay = 0.5;
		magazines[] = {
			 MACRO_NEW_MAG(Pylon_ProtonTorpedo,1)
		};
		displayName = "Torpedo";
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
	class MACRO_NEW_WEAPON(AALow_Pylon):  missiles_ASRAAM
	{
		magazineWell[] = {};
		weaponLockDelay = 0;
		magazines[] = {
			 MACRO_NEW_MAG(Pylon_AA_low,12)
		};
		lockAcquire = 1;
		displayName = "Micro Concussion";
	};

	class  MACRO_NEW_WEAPON(air_dumb_rocketpod);
	class MACRO_NEW_WEAPON(RocketPod_Pylon):   MACRO_NEW_WEAPON(air_dumb_rocketpod)
	{
	magazines[] = {
			MACRO_NEW_MAG(Pylon_Shrieker,20)
	   };
	};


	class weapon_GBU12Launcher;
	class MACRO_NEW_WEAPON(ProtonBomb_Pylon): weapon_GBU12Launcher
	{
	displayName="Proton Bomb";
	magazines[] = {
			 MACRO_NEW_MAG(Pylon_ProtonBomb,1)
		};
	};

	class MACRO_NEW_WEAPON(PlasmaBomb_Pylon): weapon_GBU12Launcher
	{
	displayName="Plasma Bomb";
	magazines[] = {
			 MACRO_NEW_MAG(Pylon_PlasmaBomb,1),
			 MACRO_NEW_MAG(Ywing_Plasma,20)
		};
	};

	class Twin_Cannon_20mm;
	class MACRO_NEW_WEAPON(20mm_Pylon): Twin_Cannon_20mm
	{
	//class manual: manual
	//{

	//}
	//class manual: LowROF
	//	{
	//		displayname="Full";
	//		burst=1;
	//		magazineReloadTime=6;
	//		autoReload=1;
	//		reloadTime=0.05;
	//		dispersion=0.002;
	//		sounds[]=
	//		{
	//			"StandardSound"
	//		};
	//		class StandardSound
	//		{
	//			begin1[]=
	//			{
	//				"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
	//				1.5,
	//				3,
	//				3000
	//			};
	//			soundBegin[]=
	//			{
	//				"begin1",
	//				1
	//			};
	//		};
	//	};
	lockAcquire = 1;
	ballisticsComputer = 1;
	canLock = 2;
	magazineWell[] = {};
	magazines[] = {
			MACRO_NEW_MAG(Pylon_20mm,600)
	   };
	};
};