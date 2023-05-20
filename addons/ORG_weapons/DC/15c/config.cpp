#include "../../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15c)
	{
		author = "ORG Aux Team";
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

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class ORG_Acog_DC15C : ItemCore
	{
		scope = 2;
		displayName = "ACOG Optic";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model = "\3AS\3AS_Weapons\DC15C\3AS_DC15C_ACOG_Sight_f.p3d";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class 3AS_DC15C_Optic
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] =
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					discreteInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 700;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					modelOptics[] =
					{
						"\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d"
					};
					memoryPointCamera = "opticView";
					visionMode[] =
					{
						"Normal",
						"NVG"
					};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class IronOnTopOfMyOptics : 3AS_DC15C_Optic
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};


	class MACRO_NEW_WEAPON(DC_15c): 3AS_DC15C_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15c [Rifleman])
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_15c";
		recoilProne="recoil_15c";
		cursor="ORG_DOT";
        cursoraim="ORG_DC15C";
		magazines[] = {
			MACRO_NEW_MAG(DC_15c_Medium,45)
		};
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Burst"};
		class ORGStun: JLTS_stun_muzzle
		{
	       magazines[]=
		   {
		  	MACRO_NEW_MAG(Stun,10)
		   };
		   magazineWell[]={};
		   cursoraim="ORG_Stun";
		   cursor="ORG_DOT"
		};
		muzzles[]=
		{
			"this",
			"ORGStun"
		};
		class Burst: Single
		{
		    burst=3;
			displayName="Burst";
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"ORG_DC15c_Shot_SoundSet","ORG_DC15a_Tail_SoundSet"};
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

			class CowsSlot
			{
				access = 1;
				compatibleItems[] = { "ORG_Acog_DC15C","3AS_optic_reflex_DC15C" };
				displayName = "Optics Slot";
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
				iconPosition[] = { 0,0 };
				iconScale = 0;
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 0;
			};
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
                discreteDistance[]={100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
        };
	};

	class UGL_F;
	class MACRO_NEW_WEAPON(DC_15c_ugl): MACRO_NEW_WEAPON(DC_15c)
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15c UGL [Grenadier])
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		cursor="ORG_DOT";
        cursoraim="ORG_DC15C";
		muzzles[] = {"this","ORGUGL"};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Machineguns\LMG_03\Data\Anim\LIM.rtm"
		};
		weaponInfoType="RscWeaponZeroing";
		model = "3AS\3AS_Weapons\DC15C\3AS_DC15C_GL.p3d";

		class ORGUGL: UGL_F
		{
			displayName="UGL";
			descriptionShort="UGL";
			reloadTime=1;
			cursor="ORG_DOT";
			modes[] = {"Single"};
			recoil="recoil_15a";
			cursorAim="ORG_UGL";
			baseweapon="";
			showtoplayer=1;
			discreteDistance[]={25,50,100,200,300,400};
			discreteDistanceCameraPoint[] = {"GL_EYE","OP_eye_50","OP_eye_100","OP_eye_200","OP_eye_300","OP_eye_400"};
			class Single: Mode_SemiAuto
		    {
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"ORG_UGL_Shot_SoundSet","ORG_Rocket_Tail_SoundSet"};
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
				"3Rnd_UGL_FlareWhite_F",
				"ACE_HuntIR_M203",
                MACRO_NEW_MAG(DC_15_UGL_AP,2),
                MACRO_NEW_MAG(DC_15_UGL_HE,4),
				MACRO_NEW_MAG(ORG_GL_SMOKE_WHITE,1),
				MACRO_NEW_MAG(ORG_GL_SMOKE_RED,1),
				MACRO_NEW_MAG(ORG_GL_SMOKE_GREEN,1),
				MACRO_NEW_MAG(ORG_GL_SMOKE_YELLOW,1),
				MACRO_NEW_MAG(ORG_GL_SMOKE_PURPLE,1),
				MACRO_NEW_MAG(ORG_GL_SMOKE_BLUE,1),
				MACRO_NEW_MAG(ORG_GL_SMOKE_ORANGE,1),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_WHITE,3),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_RED,3),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_GREEN,3),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_YELLOW,3),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_PURPLE,3),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_BLUE,3),
				MACRO_NEW_MAG(ORG_GL3_SMOKE_ORANGE,3),
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
		descriptionShort="ORG Medium Power Round";
		ammo=MACRO_NEW_AMMO(762_blue);
		tracersEvery=1;
	};
};