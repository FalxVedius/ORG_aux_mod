#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_44h)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons),
            MACRO_PATCH_NAME(Effects)

		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_44h)
		};
	};
};

class cfgWeapons
{
    class BaseSoundModeType;
	class Pistol_Base_F;
	class optre_hgun_comet_F : Pistol_Base_F
	{
		class Single;
	}
    class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_44h): optre_hgun_comet_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 44h)

        ACE_Overheating_mrbs=300000;
		canShootInWater=1;
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		cursor="332_DOT";
		baseweapon= (DC_44h)
        cursoraim="332_DC17";
		magazines[] = 
		{
			MACRO_NEW_MAG(DC_44h,6)
		};

		recoil = "recoil_m320";
		recoilprone = "recoil_m320";

        class 332PistolStun: JLTS_stun_muzzle
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
			"332PistolStun"
		};
		linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
        compatibleItems[]=
        {
            "acc_flashlight",
            "acc_pointer_IR"
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
                discretefov[] = {0.125};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500};
                distanceZoomMin=100;
                distanceZoomMax=500;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };

        class Single: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = { "332_Sniper_Tail_SoundSet","332_DC44h_Shot_SoundSet" };
			};
			reloadTime=0.3;
			displayname="SemiAuto";
			dispersion=0.000009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_44h,6): 30rnd_762x39_AK12_Mag_F //DC-17
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		magazineGroup[] = {};
		count=6;
		mass=1;
		initspeed=1550;
		displayName=MACRO_AMMO_DISPLAYNAME(44h ,6)
		displayNameShort="High Power 6rnd";
		descriptionShort="332nd High Power Round";
		ammo = MACRO_NEW_AMMO(127x108_Blue);
		tracersEvery=1;
	};
};