#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15a)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15a),
			MACRO_NEW_WEAPON(DC_15a_ugl)
		};
	};
};

class cfgWeapons
{
	class arifle_MX_Base_F;

	class JLTS_DC15A:arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
	}

	class JLTS_DC15A_plastic: JLTS_DC15A
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		}
		class EGLM;
		class Single;
		class FullAuto;
	}

	class JLTS_DC15A_ugl : JLTS_DC15A
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
		}
		class EGLM;
		class Single;
		class FullAuto;
	}
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_15a): JLTS_DC15A_plastic
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15a)
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		cursor="332_DOT";
        cursoraim="332_DC15A";
		magazines[] = {
			MACRO_NEW_MAG(DC_15a_Medium,30),
			MACRO_NEW_MAG(DC_15a_Low,60),
			MACRO_NEW_MAG(DC_15a_High,10)
		};

		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
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
					1.2,
					0.95,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.14;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00000009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1.2,
					0.95,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showtoplayer=1;
			displayname="Full Auto";
			reloadtime=0.14;
			dispersion=0.0000009;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
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
	};



	class MACRO_NEW_WEAPON(DC_15a_ugl): JLTS_DC15A_ugl
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15a UGL)
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;

		magazines[] = {
			MACRO_NEW_MAG(DC_15a_Medium,30),
			MACRO_NEW_MAG(DC_15a_Low,60),
		    MACRO_NEW_MAG(DC_15a_High,10)
		};
		cursor="332_DOT";
        cursoraim="332_DC15A";
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
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
					1.2,
					0.95,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.14;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00000009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1.2,
					0.95,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showtoplayer=1;
			displayname="Full Auto";
			reloadtime=0.14;
			dispersion=0.0000009;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
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
                discretefov[] = {0.125,0.0625,0.0310};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };

		class EGLM: EGLM
		{
			displayName="UGL";
			descriptionShort="$STR_JLTS_names_UGL";
			useModelOptics=0;
			useExternalOptic=0;
			reloadTime=1;
			showtoplayer=1;
			cursor="332_DOT";
			cursorAim="332_UGL";
			cameraDir="OP_look";
			discreteDistance[]={25,100,200,300,400};
			discreteDistanceCameraPoint[]= {
				"GL_eye",
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
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
					1.5,
					2,
					1500
				};
				begin2[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1.5,
					2,
					2500
				};
				begin3[]=
				{
					"SWLW_clones\rifles\gl\sounds\gl",
					1.5,
					2,
					3500
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
		};
	}
}