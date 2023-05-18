#include "../../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15s)
	{
		author = "332nd_aux_team + Clock";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_shield",
			"JLTS_weapons_DC15S",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15s),
			MACRO_NEW_WEAPON(DC_15s_Shield)
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
	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	
	
	class JLTS_DC15S: arifle_MX_Base_F
	{
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class UnderBarrelSlot;
		};

		
		class FullAuto;
		class Single;
		class Stun;
	};
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_15s):JLTS_DC15S
	{
		
		class WeaponSlotsInfo: WeaponSlotsInfo 
		{

			mass = 80;
			class UnderBarrelSlot: UnderBarrelSlot
			{

			};
		};

		
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15s [Rifleman])

		canShootInWater=1;
		baseWeapon="332nd_aux_weapon_DC_15s";
		recoil="DC_15s";
		recoilprone="DC_15s";
		cursor="332_DOT";
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="332nd_aux_weapon_DC_15s_Shield";
        cursoraim="332_DC15S";
		modes[]=  {
		 "FullAuto",
		 "Single"
		};
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
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
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		class FullAuto: FullAuto
		{
		    
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15s_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			displayname="FullAuto";
			reloadTime=0.08;
			dispersion=0.003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			textureType="fastAuto";
		};

		class stun: stun
		{
		  cursoraim="332_Stun";
		  cursor="332_DOT"
		};

		class Single: FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15s_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			reloadTime=0.14;
			displayname="SlowAuto";
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		    textureType = "semi";
		};

        magazines[] = {
			MACRO_NEW_MAG(DC_15s,60)
		};
        
		class OpticsModes
        {
            class sight
            {
                opticsID=2;
                useModelOptics=0;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				discreteInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 700;
                discreteDistance[]={25,100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
        };
	};
	class MACRO_NEW_WEAPON(DC_15s_Shield): MACRO_NEW_WEAPON(DC_15s)
	{
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class UnderBarrelSlot: UnderBarrelSlot {
				compatibleItems[] = {
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
		
		displayName="332nd 15s Shield";
		baseWeapon="332nd_aux_weapon_DC_15s_Shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="332nd_aux_weapon_DC_15s";
		model="\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa",
			"\MRC\JLTS\weapons\Shield\data\shield_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
		};
		reloadAction="GestureReload";
		inertia=0.80000001;
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_15s,60): 30rnd_762x39_AK12_Mag_F //15S
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		mass=15;
		initspeed=1400;
		displayName=MACRO_AMMO_DISPLAYNAME(15s,60)
		displayNameShort="Med Power 60rnd";
		descriptionShort="332nd Medium Power Round";
		ammo=MACRO_NEW_AMMO(762_blue);
		tracersEvery=1;
	};
};