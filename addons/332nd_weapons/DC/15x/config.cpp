#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15x)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_DC15X",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15x)
		};
	};
};

class CfgFunctions
{
	class Aux332nd
	{
		class DC_15XSounds
		{
			file = "\332nd_weapons\DC\15x";
			class Fired_DC15X_Sound
			{
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class DC15X_Bolt_Sound
	{
		name = "DC15X-Bolt-Sound";
		sound[] = { "\sounds\DC-15xBolt.ogg", db + 250, 1.0, 20 };
	};
};

class CowsSlot;
class PointerSlot;
//class GunClouds;
class mode_SemiAuto;
class cfgWeapons
{

	class OPTRE_M99A2S3;

	class MACRO_NEW_WEAPON(DC_15x): OPTRE_M99A2S3
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(*WIP* DC 15x ATR)

		ACE_Overheating_mrbs=300000;
		recoil="recoil_m320";
		recoilprone="recoil_m320";
		canShootInWater=1;
        baseWeapon=MACRO_NEW_WEAPON(DC_15x);
		cursor="332_DOT";
        cursoraim="332_Chevron";
		magazineWell[] = {};
		magazines[] = {
			MACRO_NEW_MAG(DC_15x,2)
		};
		modelOptics = "\A3\Weapons_f\acc\reticle_tws";

		class Single: mode_SemiAuto
        {
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"332nd_weapons\DC\15X\sounds\DC-15X.wss",
					1.5,
					1,
					4500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime=2;
			dispersion=0.0000001;
        };

		class OpticsModes
        {
            class scope
            {
                opticsID=1;
                useModelOptics=1;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera2",
                    "OpticsBlur3"
                };
                opticsZoomMin=0.0300;
                opticsZoomMax=0.125;
                opticsZoomInit=0.125;
                memoryPointCamera="optic_view";
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
                visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[] = {0, 1};
                discretefov[] = {0.125};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics = "\A3\Weapons_f\acc\reticle_tws";
            };
        };

		class EventHandlers
		{
			fired = "[_this select 0, _this select 1, _this select 1, _this select 2] spawn Aux332nd_fnc_Fired_DC15X_Sound;";
		};
	};
};

class CfgMagazines
{
	class JLTS_DC15X_mag;
	class MACRO_NEW_MAG(DC_15x,2): JLTS_DC15X_mag
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=2;
		mass=50;
		initspeed=5000;
		displayName=MACRO_AMMO_DISPLAYNAME(15x Anti-Tank Magazine,2)
		displayNameShort="2 rnd 15x AT Magazine";
		descriptionShort="2 rnd 15x AT Magazine";
		ammo=MACRO_NEW_AMMO(DC_15xATR);
		tracersEvery=1;
	};
};

class CfgAmmo
{
	class ls_ammo_127x108_green;
    class MACRO_NEW_AMMO(127x108_green_T): ls_ammo_127x108_green
	{
		 effectfly="332nd_aux_effects_green_bullet";
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};

	class MACRO_NEW_AMMO(127x108_green): ls_ammo_127x108_green
	{
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};

	class MACRO_NEW_AMMO(DC_15xATR): ls_ammo_127x108_green
	{
		effectfly="332nd_aux_effects_RPS4_green";
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
		caliber = 10;
		hit = 450;
		typicalSpeed=5000;
		explosionEffects = "ImpactPlasmaExpGreen";
		tracerscale = 3;
		airFriction = -0.000005;
			class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 0.06;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};
};