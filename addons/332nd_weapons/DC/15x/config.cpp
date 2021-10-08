#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15x)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_DC15X",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15x),
			//MACRO_NEW_WEAPON(DC_15x_Scoped),
			//"332nd_DC15X_scope"
		};
	};
};

class CfgFunctions
{
	class Aux332nd
	{
		class DC_15XSounds
		{
			file = "\332nd_weapons\DC\15x";
			class Fired_DC15X_Sound
			{
			};
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class DC15X_Bolt_Sound
	{
		name = "DC15X-Bolt-Sound";
		sound[] = { "\sounds\DC-15xBolt.ogg", db + 250, 1.0, 20 };
	};
};

class CowsSlot;
class PointerSlot;
//class GunClouds;
class mode_SemiAuto;
class cfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_DC15X: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
	}
	class MACRO_NEW_WEAPON(DC_15x): JLTS_DC15X
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(*TEST* DC 15x ATR)

		ACE_Overheating_mrbs=300000;
		recoil="recoil_m320";
		recoilprone="recoil_m320";
		canShootInWater=1;
        baseWeapon=MACRO_NEW_WEAPON(DC_15x);
		cursor="332_DOT";
        cursoraim="332_Chevron";
		magazines[] = {
			MACRO_NEW_MAG(DC_15x,3)
		};
		modelOptics = "\A3\Weapons_f\acc\reticle_tws";
	 //   class GunClouds: GunClouds
		//{
		//	cloudletDuration = 0.3;
		//	size = 0.5;
		//	cloudletAccY = 0.4;
		//	cloudletFadeIn = 0.01;
		//	cloudletFadeOut = 1;
		//	cloudletGrowUp = 1;
		//	cloudletMaxYSpeed = 0.8;
		//	cloudletMinYSpeed = 0.2;
		//	cloudletAlpha = 1;
		//	interval = -0.01;
		//	sourceSize = 0.1;
		//};
		class Single: mode_SemiAuto
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
					"332nd_weapons\DC\15X\sounds\DC-15X.wss",
					1.5,
					1,
					4500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
            reloadTime=2;
			dispersion=0.0000001;
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
                discreteDistance[]={100};
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
                visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[] = {0, 1};
                discretefov[] = {0.125};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics = "\A3\Weapons_f\acc\reticle_tws";
            };
        };

      class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					""
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};

		class EventHandlers
		{
			fired = "[_this select 0, _this select 1, _this select 1, _this select 2] spawn Aux332nd_fnc_Fired_DC15X_Sound;";
		};
	};

	//class InventoryOpticsItem_Base_F;
	//class JLTS_DC15X_scope;
	//class 332nd_DC15X_scope: JLTS_DC15X_scope
	//{
	//    model="";
	//	displayName="332nd Integrated DC-15X scope";
	//	picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_scope_ui_ca.paa";
	//	descriptionShort="$STR_JLTS_descs_DC15X_scope";
	//	class ItemInfo: InventoryOpticsItem_Base_F
	//	{
	//		mass=16;
	//		opticType=2;
	//		weaponInfoType="RscWeaponRangeZeroingFOV";
	//		optics=1;
	//		modelOptics = "\A3\Weapons_f\acc\reticle_tws";
	//		class OpticsModes
	//		{
	//			class Snip
	//			{
	//				opticsID=1;
	//				opticsDisplayName="WFOV";
	//				useModelOptics=1;
	//				opticsPPEffects[]=
	//				{
	//					"OpticsCHAbera1",
	//					"OpticsBlur1"
	//				};
	//				opticsZoomMin=0.125;
	//				opticsZoomMax=0.04;
	//				opticsZoomInit=0.0625;
	//				discreteDistance[]={100};
	//				discreteDistanceInitIndex=1;
	//				distanceZoomMin=100;
	//				distanceZoomMax=1000;
	//				discreteFov[]={0.125};
	//				discreteInitIndex=0;
	//				memoryPointCamera="opticView";
	//				modelOptics = "\A3\Weapons_f\acc\reticle_tws";
	//				visionMode[]=
	//				{
	//					"Normal",
	//					"NVG",
	//					"TI"
	//				};
	//				thermalMode[] = {0, 1};
	//				opticsFlare=1;
	//				opticsDisablePeripherialVision=1;
	//				cameraDir="";
	//			};
	//		};
	//	};
	//};
};