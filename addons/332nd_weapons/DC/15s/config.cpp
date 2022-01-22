#include "../../../332nd_main/macros/main.hpp" // my config macro lib

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
			MACRO_PATCH_NAME(weapons)
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

		
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15s)

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
			dispersion=0.006;
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
                opticsZoomMin=0.375;
                opticsZoomMax=0.9; //1.1
                opticsZoomInit=0.600;
                discreteInitIndex=0;
                distanceZoomMin=25;
                distanceZoomMax=700;
                discreteDistance[]={25,100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
            class scope: sight
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
                visionMode[] = {"Normal", "NVG"};
                discretefov[] = {0.125,0.0625};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {25,100,200,300,400,500,600,700,800};
                distanceZoomMin=25;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
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