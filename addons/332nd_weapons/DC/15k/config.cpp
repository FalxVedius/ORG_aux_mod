#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15k)
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
			MACRO_NEW_WEAPON(DC_15k)
		};
	};
};

class cfgWeapons
{
    class BaseSoundModeType;
	class 3as_pistol_DC15SA_Base_F;
	class 3as_pistol_DC15SA_F : 3as_pistol_DC15SA_Base_F
	{
		class Single;
		class WeaponSlotsInfo;
	}
    class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(DC_15k) : 3as_pistol_DC15SA_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15k *Test*)

        ACE_Overheating_mrbs=300000;
		canShootInWater=1;
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		cursor="332_DOT";
		baseweapon= (DC_15k)
        cursoraim="332_DC17";
		magazines[] = {MACRO_NEW_MAG(DC_15k,15)};

		discreteDistanceInitIndex = 0;


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
        };

        class Single: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_Suppresed_DC15k_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
			reloadTime=0.10;
			displayname="SemiAuto";
			dispersion=0.000009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				// class names with items supported by weapon
				compatibleItems[] = {}; // moved to each weapon
			};
			mass = 130;
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_15k,15): 30rnd_762x39_AK12_Mag_F //DC-17
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		count=15;
		mass=1;
		initspeed=800;
		displayName=MACRO_AMMO_DISPLAYNAME(15k ,15)
		displayNameShort="Med Power 15rnd";
		descriptionShort="332nd Medium Power Round";
		ammo=MACRO_NEW_AMMO(Medium_15k);
		tracersEvery=1;
	};
};

class CfgAmmo
{
	class ls_ammo_762_blue;
	class MACRO_NEW_AMMO(Medium_15k) : ls_ammo_762_blue
	{
		soundsetsoniccrack[] =
		{
			"332nd_blaster_flyby_soundset"
		};
		audibleFire = 2;
		ACE_bulletMass = 3;
		visibleFireTime = 3;
		visibleFire = 1;
		cartridge = "";
	};
};