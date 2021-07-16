#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(land_weapons)
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
	class ls_ammo_127x108_blue;
	class MACRO_NEW_AMMO(40mmAP): ls_ammo_127x108_blue
	{
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000};
	cartridge = "";
	effectsMissile = "332nd_aux_effects_RPS4_blue";
	caliber=15;
	hit=250;
	indirectHit = 8;
	indirectHitRange = 0.2;
	};
	class B_40mm_GPR;
	class MACRO_NEW_AMMO(40mmHEDP): B_40mm_GPR
	{
    soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",5,2,1000}; //Volume,Pitch,Distance
	cartridge = "";
	effectsMissile = "332nd_aux_effects_RPS4_green";
	caliber=6;
	model = "swlw_main\Effects\laser_green.p3d";
	effectfly = "SWLW_plasma_green";
	hit=70;
	tracerScale = 1.3;
	indirectHit = 35;
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
	class 40Rnd_40mm_APFSDS_shells;
	class MACRO_NEW_MAG(RX200_40mmAP,50): 40Rnd_40mm_APFSDS_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy AP,50)
		ammo=MACRO_NEW_AMMO(40mmAP)
		initSpeed = 1500;
		count=50;
	};
	class MACRO_NEW_MAG(RX200_40mmHE,100): 40Rnd_40mm_APFSDS_shells
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Direct Energy HEDP,100)
		descriptionshort="40mm HEDP";
		initSpeed = 1500;
		displayNameShort="40mm HEDP";
		ammo=MACRO_NEW_AMMO(40mmHEDP)
		count=100;
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

class player;
class manual;
class CfgWeapons
{
	class autocannon_40mm_CTWS;
	class MACRO_NEW_WEAPON(RX200_40mm): autocannon_40mm_CTWS
	{
		muzzles[] = {"this"};
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(RX200_40mmAP,50),
			MACRO_NEW_MAG(RX200_40mmHE,100)
		};
		displayName = "40mm Directed Energy Autocannon";
		class player: player
		{
			magazineReloadTime = 2;
			displayname="Full";
			reloadTime=0.35;
			dispersion=0.00005;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_Static\data\Sounds\FieldCannon\Fieldcannon.ogg",
					25,
					2.5,
					4000
				};
				soundBegin[]=
				{
					"begin1",
					1,
				};
			};
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