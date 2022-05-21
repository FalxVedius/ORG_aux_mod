#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15c)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15c),
			MACRO_NEW_WEAPON(DC_15c_ugl)
		};
	};
};


class cfgRecoils
{
 class recoil_15c
 {              //  x     y     a     b
  muzzleOuter[]	= { 0,  0.1,  0,  0 };
  kickBack[]	= { 0.01, 0.02 };
  permanent	= 0;
  temporary	= 0.01;
 };
};

class BaseSoundModeType;
class Mode_SemiAuto;
class cfgWeapons
{   
	class 3AS_DC15C_Base_F;
	class 3AS_DC15C_F: 3AS_DC15C_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_15c): 3AS_DC15C_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15c [Rifleman])
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_15c";
		recoilProne="recoil_15c";
		cursor="332_DOT";
        cursoraim="332_DC15C";
		magazines[] = {
			MACRO_NEW_MAG(DC_15c_Medium,45)
		};
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Burst"};
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
		class Burst: Single
		{
		    burst=3;
			displayName="Burst";
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15c_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			textureType = "burst";
			multiplier = 1;
			recoil = "recoil_single_primary_2outof10";
		    recoilProne = "recoil_single_primary_2outof10";
			reloadTime=0.09;
			dispersion=0.0005;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 80;
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
                opticsZoomMax=1.1;
                opticsZoomInit=0.75;
                discreteInitIndex=0;
                distanceZoomMin=100;
                distanceZoomMax=700;
                discreteDistance[]={100,200,300,400,500,600,700};
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
                discretefov[] = {0.125,0.0625,0.0310};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };
	};

	class UGL_F;
	class MACRO_NEW_WEAPON(DC_15c_ugl): MACRO_NEW_WEAPON(DC_15c)
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15c UGL [Grenadier])
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		cursor="332_DOT";
        cursoraim="332_DC15C";
		muzzles[] = {"this","332UGL"};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"
		};
		weaponInfoType="RscWeaponZeroing";
		model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_GL.p3d";

		class 332UGL: UGL_F
		{
			displayName="UGL";
			descriptionShort="UGL";
			reloadTime=1;
			cursor="332_DOT";
			modes[] = {"Single"};
			recoil="recoil_15a";
			cursorAim="332_UGL";
			baseweapon="";
			showtoplayer=1;
			discreteDistance[]={25,50,100,200,300,400};
			discreteDistanceCameraPoint[] = {"GL_EYE","OP_eye_50","OP_eye_100","OP_eye_200","OP_eye_300","OP_eye_400"};
			class Single: Mode_SemiAuto
		    {
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"332_UGL_Shot_SoundSet","332_Rocket_Tail_SoundSet"};
				};
				sounds[]=
				{
					"StandardSound"
				};
				reloadtime=0.5;
				  multiplier = 1;
				reloadtime=0.5;
				showtoplayer=1;
				burst=1;
				dispersion=0.0000009;
			    displayName="UGL";
				textureType="fullAuto";
				aiRateOfFire=5;
				aiRateOfFireDistance=500;
				aiRateOfFireDispersion=2;
				minRange=10;
				minRangeProbab=0.30000001;
				midRange=40;
				midRangeProbab=0.85000002;
				maxRange=600;
				maxRangeProbab=0.85000002;
		    };
			discreteDistanceInitIndex=0;
			magazineWell[]={};
			magazines[]= {
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"ACE_HuntIR_M203",
                MACRO_NEW_MAG(DC_15_UGL_AP,2),
                MACRO_NEW_MAG(DC_15_UGL_HE,4)
				};
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
	};
};
class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_15c_Medium,45): 30rnd_762x39_AK12_Mag_F //Medium Mag for DC15A/UGL
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=45;
		mass=10;
		initspeed=1600;
		displayName=MACRO_AMMO_DISPLAYNAME(15C Medium,45)
		displayNameShort="Med Power rnd";
		descriptionShort="332nd Medium Power Round";
		ammo=MACRO_NEW_AMMO(762_blue);
		tracersEvery=1;
	};
};