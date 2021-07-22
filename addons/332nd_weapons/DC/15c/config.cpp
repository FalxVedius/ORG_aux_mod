#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15c)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons),
			"3AS_Weapons",
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


class cfgWeapons
{  
	class 3AS_DC15C_Base_F;
	class 3AS_DC15C_F: 3AS_DC15C_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class MACRO_NEW_WEAPON(DC_15c): 3AS_DC15C_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15c)
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
		class Burst: Single
		{
		    burst=3;
			displayName="Burst";
			sounds[]=
			{
				"StandardSound";
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					0.97,
					1800
				};
				begin2[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					0.97,
					1800
				};
				begin3[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1.03,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1,
					"begin3",
					1
				};
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
	//class 3AS_15CGL
	//class 3AS_DC15C_GL: 3AS_DC15C_Base_F
	//{
	//	class Single;
	//	class WeaponSlotsInfo;
	//};
	class UGL_F;
	class MACRO_NEW_WEAPON(DC_15c_ugl): MACRO_NEW_WEAPON(DC_15c)
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15c UGL *TEST*)
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
		modelOptics="3AS\3AS_Weapons\Data\A3_2d_optic.p3d";

		//magazines[] = {
		//	MACRO_NEW_MAG(DC_15c_Medium,45)
		//};
		//recoil="recoil_15c";
		//recoilProne="recoil_15c";
  //      modes[] = {"Burst"};
		//modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		//class Burst: Single
		//{
		//    burst=3;
		//	displayName="Burst";
		//	sounds[]=
		//	{
		//		"StandardSound";
		//	};
		//	class BaseSoundModeType
		//	{
		//		weaponSoundEffect="";
		//		closure1[]={};
		//		closure2[]={};
		//		soundClosure[]={};
		//	};
		//	class StandardSound: BaseSoundModeType
		//	{
		//		weaponSoundEffect="";
		//		begin1[]=
		//		{
		//			"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
		//			1,
		//			0.97,
		//			1800
		//		};
		//		begin2[]=
		//		{
		//			"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
		//			1,
		//			0.97,
		//			1800
		//		};
		//		begin3[]=
		//		{
		//			"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
		//			1,
		//			1.03,
		//			1800
		//		};
		//		soundBegin[]=
		//		{
		//			"begin1",
		//			1,
		//			"begin2",
		//			1,
		//			"begin3",
		//			1
		//		};
		//	};
		//	};
		//	textureType = "burst";
		//	multiplier = 1;
		//	reloadTime=0.09;
		//	dispersion=0.0005;
		//	minRange=2;
		//	minRangeProbab=0.5;
		//	midRange=250;
		//	midRangeProbab=0.69999999;
		//	maxRange=450;
		//	maxRangeProbab=0.30000001;
		//};

		//class OpticsModes
  //      {
  //          class sight
  //          {
  //              opticsID=2;
  //              useModelOptics=0;
  //              opticsPPEffects[]=
  //              {
  //                  "OpticsCHAbera5",
  //                  "OpticsBlur5"
  //              };
  //              opticsDisablePeripherialVision=0.67000002;
  //              opticsZoomMin=0.375;
  //              opticsZoomMax=1.1;
  //              opticsZoomInit=0.75;
  //              discreteInitIndex=0;
  //              distanceZoomMin=25;
  //              distanceZoomMax=700;
  //              discreteDistance[]={25,100,200,300,400,500,600,700};
  //              discreteDistanceInitIndex=0;
  //              memoryPointCamera="eye";
  //              visionMode[]={};
  //              opticsFlare="true";
  //              cameraDir="";
  //          };
  //          class scope: sight
  //          {
  //              opticsID=1;
  //              useModelOptics=1;
  //              opticsPPEffects[]=
  //              {
  //                  "OpticsCHAbera2",
  //                  "OpticsBlur3"
  //              };
  //              opticsZoomMin=0.0300;
  //              opticsZoomMax=0.125;
  //              opticsZoomInit=0.125;
  //              memoryPointCamera="optic_view";
  //              opticsFlare=1;
  //              opticsDisablePeripherialVision=1;
  //              visionMode[] = {"Normal", "NVG"};
  //              discretefov[] = {0.125,0.0625,0.0310};
  //              discreteInitIndex = 0;
  //              discreteDistanceInitIndex = 0;
  //              discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
  //              distanceZoomMin=100;
  //              distanceZoomMax=1000;
  //              modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
  //          };
  //      };

		class 332UGL: UGL_F
		{
			displayName="UGL";
			descriptionShort="UGL";
			reloadTime=1;
			cursor="332_DOT";
			cursorAim="332_UGL";
			baseweapon="";
			showtoplayer=1;
			discreteDistance[]={50,100,200,300,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_200","OP_eye_300","OP_eye_400"};
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
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
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
