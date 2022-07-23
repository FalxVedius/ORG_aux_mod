#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15a)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    "A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_DC15A",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15a),
			MACRO_NEW_WEAPON(DC_15a_ugl)
		};
	};
};


class cfgRecoils
{
 class recoil_15a
 {              //  x     y     a     b
  muzzleOuter[]	= { 0,  0.8,  0,  0 };
  kickBack[]	= { 0.03, 0.05 };
  permanent	= 0;
  temporary	= 0.8;
 };
};

class BaseSoundModeType;
 class Mode_SemiAuto;
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
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15a [Rifleman])
		canShootInWater=1;
		recoil="recoil_15a";
		recoilProne="recoil_single_prone_mx";
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
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType 
			{
				soundSetShot[] = {"332_DC15a_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};

			reloadTime=0.14;
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
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15a_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
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
                opticsZoomMin = 0.25;
                opticsZoomMax = 1.25;
                opticsZoomInit=0.75;
                discreteInitIndex=0;
                distanceZoomMin=100;
                distanceZoomMax=700;
                discreteDistance[]={100,200,300,400,500,600,700,800};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
            //class scope: sight
            //{
            //    opticsID=1;
            //    useModelOptics=1;
            //    opticsPPEffects[]=
            //    {
            //        "OpticsCHAbera2",
            //        "OpticsBlur3"
            //    };
            //    opticsZoomMin=0.0300;
            //    opticsZoomMax=0.125;
            //    opticsZoomInit=0.125;
            //    memoryPointCamera="optic_view";
            //    opticsFlare=1;
            //    opticsDisablePeripherialVision=1;
            //    visionMode[] = {"Normal", "NVG"}; 
            //    discretefov[] = {0.125,0.0625,0.0310}; 
            //    discreteInitIndex = 0;         starting zoom
            //    discreteDistanceInitIndex = 0; starting zero
            //    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000}; Zeroing
            //    distanceZoomMin=100; min zeroing
            //    distanceZoomMax=1000; max zeroing
            //    modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"}; Reticule
            //};
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
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15a UGL [Grenadier])
		canShootInWater=1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_15a";
		recoilProne="recoil_single_prone_mx";
		magazines[] = {
			MACRO_NEW_MAG(DC_15a_Medium,30),
			MACRO_NEW_MAG(DC_15a_Low,60),
		    MACRO_NEW_MAG(DC_15a_High,10)
		};
		muzzles[]=
		{
			"this",
			"332_EGLM"
		};
		cursor="332_DOT";
        cursoraim="332_DC15A";
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15a_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			reloadTime=0.14;
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
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_DC15a_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
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
                distanceZoomMin=25;
                distanceZoomMax=700;
                discreteDistance[]={25,100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
        };

		class 332_EGLM: EGLM
		{
			displayName="UGL";
			
			descriptionShort="$STR_JLTS_names_UGL";
			useModelOptics=0;
			useExternalOptic=0;
			reloadTime=1;
			displayName="15a UGL";
			modes[] = {"Single"};
			recoil="recoil_15a";
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
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_15a_Medium,30): 30rnd_762x39_AK12_Mag_F //Medium Mag for DC15A/UGL
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		mass=10;
		initspeed=1800;
		displayName=MACRO_AMMO_DISPLAYNAME(15a Medium,30)
		displayNameShort="Med Power rnd";
		descriptionShort="332nd Medium Power Round";
		ammo=MACRO_NEW_AMMO(762_blue);
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15a_Low,60): MACRO_NEW_MAG(DC_15a_Medium,30) //Low Mag for DC15A
	{
		count=60;
		mass=10;
		initspeed=1800;
		displayName=MACRO_AMMO_DISPLAYNAME(15a Low,60)
		displayNameShort="Low Power 60rnd";
		descriptionShort="332nd Low Power Round";
		ammo=MACRO_NEW_AMMO(65_Blue);
	};

	class MACRO_NEW_MAG(DC_15a_High,10): MACRO_NEW_MAG(DC_15a_Medium,30)//High Mag for DC15A | Not on the 15A UGL
	{
		count=15;
		mass=20;
		initspeed=1600;
		displayName=MACRO_AMMO_DISPLAYNAME(15a High,15)
		displayNameShort="High Power 15rnd";
		descriptionShort="332nd High Power Round";
		ammo=MACRO_NEW_AMMO(127x108_green);
	};

	class SWLW_mag_40mm_1rnd;
	class MACRO_NEW_MAG(DC_15_UGL_AP,2): SWLW_mag_40mm_1rnd //15A UGL - 40mm
	{
		scope=2;
		displayName=MACRO_AMMO_DISPLAYNAME(AP Plasma Cell ,2)
		ammo=MACRO_NEW_AMMO(40mm_AP)
		count=2;
		mass = 12;
		initspeed=80;
	};

	class MACRO_NEW_MAG(DC_15_UGL_HE,4): SWLW_mag_40mm_1rnd //15A UGL - 40mm
	{
		scope=2;
		ammo=MACRO_NEW_AMMO(40mm_HE)
		displayName=MACRO_AMMO_DISPLAYNAME(HE Plasma Cell ,4)
		count=4;
		mass = 12;
		initspeed=80;
	};

	class JLTS_stun_mag_long;
	class MACRO_NEW_MAG(Stun,10): 30rnd_762x39_AK12_Mag_F
	{
		count=10;
		mass=6;
		JLTS_stunDuration = 30;
		initspeed=250;
		ammo = MACRO_NEW_AMMO(Stun);
		displayName=MACRO_AMMO_DISPLAYNAME(10rnd Stun (30sec) Magazine,10)
		displayNameShort="332nd 30 sec stun magazine";
		descriptionShort="332nd 30 sec stun magazine";
		model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
		tracersEvery=1;
	};
};

class CfgAmmo
{
	class ls_ammo_762_blue;
	class  MACRO_NEW_AMMO(762_blue): ls_ammo_762_blue
	{
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
		soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};
	
	class ls_ammo_65_blue;
	class  MACRO_NEW_AMMO(65_Blue): ls_ammo_65_blue
	{
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
		soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};

	class ls_ammo_127x108_blue;
	class MACRO_NEW_AMMO(127x108_Blue_T): ls_ammo_127x108_blue
	{
	     effectfly="332nd_aux_effects_blue_bullet";
		 soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	};
	class MACRO_NEW_AMMO(127x108_Blue): ls_ammo_127x108_blue
	{
		 soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
		class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	};

	class SWLW_ammo_40mm_green;
	class MACRO_NEW_AMMO(40mm_HE): SWLW_ammo_40mm_green
	{
		hit=25;
		indirecthit=20;
		fuseDistance=15;
		indirectHitRange=6;
		//effectfly="332nd_aux_effects_RPS4_green";
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};
	class SWLW_ammo_40mm_at;
	class MACRO_NEW_AMMO(40mm_AP): SWLW_ammo_40mm_at
	{
		 //effectfly="332nd_aux_effects_RPS4_blue";
		 fuseDistance=15;
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	};

	class JLTS_bullet_stun;
	class MACRO_NEW_AMMO(Stun): JLTS_bullet_stun
	{
	   JLTS_isStunAmmo = 1;
       audibleFire = 2;
       visibleFireTime = 3;
	   visibleFire = 1;
	   cartridge = "";
	};
};