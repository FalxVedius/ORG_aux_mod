#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Launchers)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
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
	class ACE_Javelin_FGM148;
	class M_Titan_AA;
	class M_Titan_AT;
	class M_Titan_AP;
	class R_MRAAWS_HEAT_F;
	class R_MRAAWS_HE_F;
	
	class MACRO_NEW_AMMO(RPS1_Rocket): M_Titan_AT
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		irLock=0;
		allowAgainstInfantry=1;
		hit=900;
		manualControl=1;
		indirectHit=20;
		indirectHitRange=8;
		maxControlRange = 2500;
		maxSpeed = 150;
		effectsMissile = "332nd_aux_effects_missile_blue";
		manueuvrability = 26;
		thrust = 100;
		thrustTime = 15;
		timeToLive = 20;
		missileManualControlCone = 90;
		fuseDistance = 2;
		initTime = 0;
		typicalSpeed = 100;
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\PLX_fly.wss",
			6,
			1.5,
			700
		};
	};
	
	class MACRO_NEW_AMMO(RPS6_ATRocket): MACRO_NEW_AMMO(RPS1_Rocket)
	{
		irLock=1;
	};
	
	class MACRO_NEW_AMMO(RPS6_AARocket): M_Titan_AA
	{
		cmImmunity=0.8;
		hit=1400;
		effectsMissile = "332nd_aux_effects_missile_red";
		missileLockMaxDistance = 3000;
		manueuvrability = 25;
		sideAirFriction = 0.02;
		missileKeepLockedCone = 360;
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\PLX_fly.wss",
			6,
			1.5,
			700
		};
	};
	
	class MACRO_NEW_AMMO(RPS4_AT): R_MRAAWS_HEAT_F
	{
	  model = "ls_weapons_core\Effects\laser_blue.p3d";
	  effectfly = "ls_plasma_blue";
	  effectflare = "FlareShell";
	  flaresize = 10;
	  hit=950;
	  caliber = 30;
	  tracerscale = 6;
	  tracerstarttime = 0;
	  effectsMissile = "332nd_aux_effects_RPS4_blue";
	  tracerendtime = 10;
	  tracerColor[] = {0.7,0.7,0.5,0.04};
	  tracerColorR[] = {0.7,0.7,0.5,0.04};
	  soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,250};
	  class CamShakeFire
	  {
		  
		  power = 10;
		  duration = 0.5;
		  frequency = 10;
		  distance = 20;
	  };
	};

    class MACRO_NEW_AMMO(RPS4_HE): R_MRAAWS_HE_F
	{
	  model = "ls_weapons_core\Effects\laser_green.p3d";
	  effectfly = "ls_plasma_green";
	  effectflare = "FlareShell";
	  effectsMissile = "332nd_aux_effects_RPS4_green";
	  flaresize = 10;
	  tracerscale = 6;
	  caliber = 10;
	  ace_frag_charge = 350;
	  hit=50 ;
	  indirectHit=50;
	  indirectHitRange = 15;
	  tracerstarttime = 0;
	  tracerendtime = 10;
	  tracerColor[] = {0.7,0.7,0.5,0.04};
	  tracerColorR[] = {0.7,0.7,0.5,0.04};
	  soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,250};
	  class CamShakeFire
	  {
		  
		  power = 10;
		  duration = 0.5;
		  frequency = 10;
		  distance = 20;
	  };
	};

	class MACRO_NEW_AMMO(PLX1_AT): M_Titan_AT
    {
		irLock=1;
		allowAgainstInfantry=0;
		hit=2100;
		airlock=0;
		autoSeekTarget = 1;
		lockSeekRadius = 25;
		missileLockMaxDistance = 3000;
		laserlock=1;
		flightProfiles[] = {Direct, TopDown};
		sideAirFriction = 0.02;
		indirectHit=20;
		manualControl=1;
		missileManualControlCone = 90;
		weaponLockSystem = "1 + 2 + 4 + 8 + 16";
		indirectHitRange=8;
		maxSpeed = 100;
		effectsMissile = "332nd_aux_effects_missile_plx_blue";
		manueuvrability = 30;
		thrust = 80;
		thrustTime = 20;
		timeToLive = 20;
		fuseDistance = 2;
		initTime = 0;
		typicalSpeed = 100;
		missileKeepLockedCone = 360;
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			6,
			1.5,
			700
		};
	};
	
	class MACRO_NEW_AMMO(PLX1_HE): M_Titan_AP
	{
		hit=500;
		manueuvrability=25;
		manualControl=1;
		indirectHit=500;
		indirectHitRange=30;
		effectsMissile = "332nd_aux_effects_missile_plx_green";
		explosionEffects = "BombExplosion";
		maxSpeed = 75;
		thrust = 50;
		missileManualControlCone = 90;
		timeToLive = 20;
		typicalSpeed = 40;
		thrustTime = 20;
		maxControlRange = 2500;
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			6,
			1.5,
			1000
		};
	};
	class MACRO_NEW_AMMO(PLX1_AA): M_Titan_AA
	{
		cmImmunity=1.0;
		hit=1400;
		missileLockMaxDistance = 3000;
		manueuvrability = 30;
		sideAirFriction = 0.02;
		missileKeepLockedCone = 360;
		soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			6,
			1.5,
			1000
		};
		effectsMissile = "332nd_aux_effects_missile_plx_red";
	};
};

class CfgMagazines
{
	class SWLW_plx1_ap_mag;
	class SWLW_plx1_at_mag;
	class MRAWS_HEAT_F;
	class MRAWS_HE_F;
	class MACRO_NEW_MAG(PLX1_ATMag,2): SWLW_plx1_at_mag
	{
		displayName=MACRO_AMMO_DISPLAYNAME(PLX1-AT,2)
		ammo=MACRO_NEW_AMMO(PLX1_AT)
		count=2;
		model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
		mass=124;
	};
	
	class MACRO_NEW_MAG(PLX1_HEMag,2): SWLW_plx1_ap_mag
	{
		count=2;
		ammo=MACRO_NEW_AMMO(PLX1_HE)
		model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
		mass=124;
		displayName=MACRO_AMMO_DISPLAYNAME(PLX1-HE,2)
	};
	
	class MACRO_NEW_MAG(PLX1_AAMag,2): SWLW_plx1_at_mag
	{
		displayName=MACRO_AMMO_DISPLAYNAME(PLX1-AA,2)
		ammo=MACRO_NEW_AMMO(PLX1_AA)
		count=2;
		model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
		mass=124;
	};
	
	class MACRO_NEW_MAG(RPS6_ATMag,1): SWLW_plx1_at_mag
	{
		ammo=MACRO_NEW_AMMO(RPS6_ATRocket);
		displayName=MACRO_AMMO_DISPLAYNAME(RPS6-AT,1)
		scope=2;
		count=1;
		initSpeed=60;
		mass=62;
	};
	
	class MACRO_NEW_MAG(RPS6_AAMag,1): MACRO_NEW_MAG(RPS6_ATMag,1)
	{
		ammo=MACRO_NEW_AMMO(RPS6_AARocket);
		displayName=MACRO_AMMO_DISPLAYNAME(RPS6-AA,1)
		mass=31;
	};
	
	class MACRO_NEW_MAG(RPS1_ATMag,1): SWLW_plx1_at_mag
	{
		ammo=MACRO_NEW_AMMO(RPS1_Rocket);
		displayName=MACRO_AMMO_DISPLAYNAME(*DO NOT TAKE*,1) 
		scope=2;
		count=1;
		initSpeed=60;
		mass=0;
	};
	
	class MACRO_NEW_MAG(RPS4_AT,1): MRAWS_HEAT_F
	{
		ammo=MACRO_NEW_AMMO(RPS4_AT);
		displayName=MACRO_AMMO_DISPLAYNAME(RPS4-AT,1)
		scope=2;
        mass=31;
	};
	
	class MACRO_NEW_MAG(RPS4_HE,1): MRAWS_HE_F
	{
		ammo=MACRO_NEW_AMMO(RPS4_HE);
		displayName=MACRO_AMMO_DISPLAYNAME(RPS4-HE,1)
		scope=2;
		mass=31;
	};
}
	
	
	