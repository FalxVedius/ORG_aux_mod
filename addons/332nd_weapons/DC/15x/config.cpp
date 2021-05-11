#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15x)
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
			MACRO_NEW_WEAPON(DC_15x),
			MACRO_NEW_WEAPON(DC_15x_Scoped)
		};
	};
};

class cfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_DC15X:arifle_MX_Base_F
	{
		class Single;
	}

	class MACRO_NEW_WEAPON(DC_15x): JLTS_DC15X
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15x)

		reloadTime=0.1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_m320";
		recoilprone="recoil_m320";
		canShootInWater=1;
        modelOptics="\A3\Weapons_f\acc\reticle_tws";
        baseWeapon=MACRO_NEW_WEAPON(DC_15x);
        weaponInfoType = "RscOptics_tws";
		
		magazines[] = {
			MACRO_NEW_MAG(DC_15x,2),
			MACRO_NEW_MAG(DC_15x,10)
		};

		class Single:Single
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
					"SWLW_merc_mando\rifles\sniper\sounds\sniper",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SWLW_merc_mando\rifles\sniper\sounds\sniper",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SWLW_merc_mando\rifles\sniper\sounds\sniper",
					1,
					1,
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
			
            reloadTime=0.75;
			dispersion=0.0;
			initSpeed=940; // put in mag
        }

        class OpticsModes
		{
			class NCTALKEP
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0005;
				opticsZoomMax=0.1;
				opticsZoomInit=0.0625;
				discreteDistance[]={100,200,300,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400};
				discreteDistanceInitIndex = 0;
				distanceZoomMin=100;
				distanceZoomMax=1900;
				memoryPointCamera="opticView";
				discreteinitindex = 0;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = {0, 1};
                discretefov[] = {0.1, 0.0625, 0.0350, 0.0150, 0.0050,0.0005};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};

        linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
        compatibleItems[]=
        {
            "acc_flashlight",
            "acc_pointer_IR"
        };
	
	}

	class MACRO_NEW_WEAPON(DC_15x_Scoped): MACRO_NEW_WEAPON(DC_15x)
	{
		scope = 2;
		scopeArsenal = 2;

		baseweapon= MACRO_NEW_WEAPON(DC_15x_Scoped);
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15x (Scoped))
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "JLTS_DC15X_scope";
			};
		};
	};
}