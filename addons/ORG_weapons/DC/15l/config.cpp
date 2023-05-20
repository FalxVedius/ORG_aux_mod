#include "../../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15l)
	{
		author = "ORG Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    "A3_Data_F",
		    "A3_Weapons_F",
			"3AS_Weapons_DC15L",
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15l)
		};
	};
};

class cfgWeapons
{
    class BaseSoundModeType;
	class 3AS_DC15L_Base_F;
	class 3AS_DC15L_F : 3AS_DC15L_Base_F
	{
		class WeaponSlotsInfo;
		class FullAuto;
		class CowsSlot;
	};

	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class ORG_Acog_DC15L : ItemCore
	{
		scope = 2;
		displayName = "DC15L Optic";
		picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model = "3AS\3AS_Weapons\DC15L\3AS_DC15L_Scope_f.p3d";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo : InventoryOpticsItem_Base_F
		{
			mass = 7;
			modelOptics = "\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class 3AS_DC15L_Optic
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
				class IronOnTopOfMyOptics : 3AS_DC15L_Optic
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
			};
		};
	};


	class MACRO_NEW_WEAPON(DC_15l):3AS_DC15L_F
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15L [Heavy Support])
		cursor="ORG_DOT";
        cursoraim="ORG_Chevron";
		ACE_Overheating_mrbs=300000;
		canShootInWater=1;
		recoil="recoil_spar";
		recoilProne = "recoil_spar";
		modelOptics = "\A3\Weapons_f\acc\reticle_tws_mg";

		magazines[] = {
			MACRO_NEW_MAG(DC_15L,200),
			MACRO_NEW_MAG(DC_15L_T,200)
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 30;

			class CowsSlot
			{
				access = 1;
				compatibleItems[] = { "ORG_Acog_DC15L" };
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
		class FullAuto: FullAuto
		{
         sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType 
			{
				soundSetShot[] = {"ORG_Sniper_Tail_SoundSet","ORG_DC15l_Shot_SoundSet"};
			};

        
			burst=2;
			reloadTime=0.05;
			dispersion = 0.0003;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.30000001;
		};
			
			class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(DC_15L,200): 30rnd_762x39_AK12_Mag_F //DC-15L
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		mass=145;
		initspeed=1500;
		displayName=MACRO_AMMO_DISPLAYNAME(15L,200)
		displayNameShort="High Power 200rnd";
		descriptionShort="ORG High Power Round";
		ammo=MACRO_NEW_AMMO(127x108_Blue);
		tracersEvery=1;
	};
	class MACRO_NEW_MAG(DC_15L_T,200): MACRO_NEW_MAG(DC_15L,200) //DC-15L
	{
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		displayName=MACRO_AMMO_DISPLAYNAME(15L (T),200 Tracer)
		displayNameShort="High Power Tracer 200rnd";
		descriptionShort="ORG (T) High Power Round Tracer";
		ammo=MACRO_NEW_AMMO(127x108_Blue_T);
		tracersEvery=1;
	};
};