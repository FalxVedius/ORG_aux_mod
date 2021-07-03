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
    class ls_50mm_laat_he;
	class MACRO_NEW_AMMO(ARCLow): ls_50mm_laat_he
	{
	model="SWLW_main\Effects\laser_green.p3d";
	effectfly="ArtilleryTrails";
	 soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000};
	flaresize=10;
	caliber=5;
	tracersEvery = 1;
	hit=100;
	indirectHit = 25;
	mass=2;
	indirectHitRange = 1.5;
	tracerscale=2;
	};
	
	
	class ls_50mm_laat_he;
	class MACRO_NEW_AMMO(ARCHigh): ls_50mm_laat_he
	{
	flaresize=20;
	class CamShakeFire
	{
		power = 30;
		duration = 0.5;
		frequency = 20;
		distance = 30;
	};
	class CamShakePlayerFire
	{
		power = 10;
		duration = 0.3;
		frequency = 20;
	};
	class CamShakeHit
	{
		power = 100;
		duration = 1;
		frequency = 20;
	};
	ExplosionEffects = "80mm_Explode";
	tracerscale=10;
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",10,0.95,2000}; //Volume,Pitch,Distance
	hit=800;
	caliber=10;
	mass=20;
	tracerScale = 20;
	indirectHit = 50;
	indirectHitRange = 3;
	};
	
	class M_Titan_AT_long;
	class MACRO_NEW_AMMO(RX_200_ATGM): M_Titan_AT_long
	{
	soundFly[]=
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			5,
			5,
			1000
		};
	manualcontrol=1;
	caliber=5;
	effectsMissile = "332nd_aux_effects_missile_plx_blue";
	hit=200;
	thrusttime = 12;
	indirectHit = 35;
	indirectHitRange = 3;
	};
};

class CfgMagazines
{
	class 1000Rnd_25mm_shells;
	class MACRO_NEW_MAG(ARC170_High,60): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(ARC HIGH)
		ammo=MACRO_NEW_AMMO(ARCHigh)
		initSpeed = 2000;
		tracersEvery = 1;
		count=60;
	};
	class MACRO_NEW_MAG(ARC170_Low,600): 1000Rnd_25mm_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(ARC LOW)
		descriptionshort="ARC High Energy";
		initSpeed = 3000;
		displayNameShort="High Energy";
		ammo=MACRO_NEW_AMMO(ARCLow)
		tracersEvery = 1;
		count=600;
	};
	class MACRO_NEW_MAG(DC_15L,125);
	class MACRO_NEW_MAG(15L,500): MACRO_NEW_MAG(DC_15L,125)
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy HEDP,100)
		descriptionshort="Concentrated Medium";
		initSpeed = 1500;
		scope=1;
		count=500;
	};
	class 2Rnd_GAT_missiles_O;
	class MACRO_NEW_MAG(ATGM,2): 2Rnd_GAT_missiles_O
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Concussion AT Missile,2)
		ammo = MACRO_NEW_AMMO(RX_200_ATGM)
		descriptionshort="Concussion AT Missile";
		displayNameShort="Concussion Missile";
		scope=1;
		count=2;
	};
};

class LowROF;
class player;
class manual;
class CfgWeapons
{
	class 3as_ARC_Light_Canon;
	class MACRO_NEW_WEAPON(ARC_Low): 3as_ARC_Light_Canon
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(ARC170_Low,600)
		};
		modes[] = {"manual"};
		displayName = "Cannon Low Energy";
		class manual: LowROF
		{
			magazineReloadTime = 2;
			displayname="Full";
			burst=1;
			magazineReloadTime=6;
			autoReload=1;
			reloadTime=0.1;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
					2,
					3,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class MACRO_NEW_WEAPON(ARC_High): 3as_ARC_Light_Canon
	{
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(ARC170_High,60)
		};
		modes[] = {"manual"};
		displayName = "Cannon High Energy";
		class manual: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlg_clones_tanks\tx130\data\sounds\Saber_heavy_shot.wss",
					5,
					1.2,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			burst=1;
			multiplier=1;
			soundContinuous=0;
			reloadTime=0.5;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
	};
	



    class LMG_coax_ext;
	class MACRO_NEW_WEAPON(RX200_15L): LMG_coax_ext
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
             MACRO_NEW_MAG(15L,500)
		};
		displayName = "15L Coaxial";
		class manual: manual
		{
			magazineReloadTime = 2;
			displayname="Full";
			reloadTime=0.10;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15X\sounds\dc15x_fire",
					8,
					1.35,
					2500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
	class missiles_titan;
	class MACRO_NEW_WEAPON(RX200_ATGM): missiles_titan
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
            MACRO_NEW_MAG(ATGM,2)
		};
		displayName = "Concussion Missiles";
		class player: player
		{
			magazineReloadTime = 10;
			displayname="Full";
			reloadTime=0.10;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					2,
					500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
	};
};