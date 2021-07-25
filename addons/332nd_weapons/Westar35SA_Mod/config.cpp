#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Westar_Series)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(Westar35SA_mod)
		};
	};
};
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base_F;
	class SWLW_Westar35SA: Pistol_Base_F
	{
		class Single;
	}
    class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(Westar35SA_mod): SWLW_Westar35SA
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(Wester-35SA Mod)
		baseweapon="";
        ACE_Overheating_mrbs=300000;
		recoil="recoil_spar";
		recoilprone="recoil_spar";
		canShootInWater=1;
		cursoraim="332_DC15S";
		cursor="332_DOT";
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
        linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";

		modes[] = {"FullAuto","close","short","medium"};
		
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
        compatibleItems[]=
        {
            "acc_flashlight",
            "acc_pointer_IR"
        };

		magazines[]=
		{
			MACRO_NEW_MAG(35sa_low,30)
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

		
        class FullAuto: Mode_FullAuto
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
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1.2,
					1800
				};
				begin2[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1.2,
					1800
				};
				begin3[]=
				{
					"\SWLW_clones_spec\sounds\DC17M_blaster_fire.wss",
					1,
					1.2,
					1800
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

			textureType = "fullAuto";
			autoFire = 1;
			displayName = "Full Auto";
			reloadTime=0.05;
			dispersion=0.0008;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	};
}

	
	


class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;

	class MACRO_NEW_MAG(35sa_low,30): 30rnd_762x39_AK12_Mag_F //Westar35-Mod
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=40;
		mass=1;
		initspeed=1750;
		displayName=MACRO_AMMO_DISPLAYNAME(35SA Low,45)
		displayNameShort="low Power 30rnd";
		descriptionShort="332nd Low Power Round";
		ammo="ls_ammo_65_blue";
		tracersEvery=1;
	};
}
