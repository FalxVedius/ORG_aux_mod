#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(R_DC_15s)
	{
		author = "332nd_aux_team + Clock";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_shield",
			"JLTS_weapons_DC15S",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(R_DC_15s)
			
		};
	};
};

class cfgRecoils
{
 class R_DC_15s
 {              //  x     y     a     b
  muzzleOuter[]	= { 0,  8,  0,  0 };
  kickBack[]	= { 0.02, 0.04 };
  permanent	= 0;
  temporary	= 6;
 };
};
class cfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	
	
	class JLTS_DC15S: arifle_MX_Base_F
	{
		
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class UnderBarrelSlot;
		};

		
		class FullAuto;
		class Single;
		class Stun;
	};
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(R_DC_15s): JLTS_DC15S
	{
		//No errors are returned but will not show up in game
		
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
			class UnderBarrelSlot : UnderBarrelSlot {};
		};

		displayName = MACRO_WEAPON_DISPLAYNAME(Rebel DC 15s)

		canShootInWater = 1;
		baseWeapon = "332nd_aux_weapon_R_DC_15s";
		recoil = "R_DC_15s";
		recoilprone = "R_DC_15s";
		cursor = "332_DOT";
		cursoraim = "332_DC15S";
		modes[] = {
		 "FullAuto",
		 "Single"
		};
		picture = "\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		class 332Stun : JLTS_stun_muzzle
		{
		   magazines[] =
		   {
			MACRO_NEW_MAG(Stun,10)
		   };
		   magazineWell[] = {};
		   cursoraim = "332_Stun";
		   cursor = "332_DOT"
		};
		muzzles[] =
		{
			"this",
			"332Stun"
		};
		modelOptics[] = { "\A3\Weapons_F_EPA\acc\reticle_marksman_F","\A3\Weapons_F_EPA\acc\reticle_marksman_z_F" };
		class FullAuto : FullAuto
		{
			sounds[] =
			{
				"StandardSound";
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1.2,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			displayname = "FullAuto";
			reloadTime = 0.08;
			dispersion = 0.006;
			minRange = 0;
			minRangeProbab = 0.89999998;
			midRange = 15;
			midRangeProbab = 0.69999999;
			maxRange = 30;
			maxRangeProbab = 0.1;
			textureType = "fastAuto";
		};

		class stun : stun
		{
			cursoraim = "332_Stun";
			cursor = "332_DOT"
		};

		class Single : FullAuto
		{
			sounds[] =
			{
				"StandardSound";
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] =
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			reloadTime = 0.14;
			displayname = "SlowAuto";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.69999999;
			maxRange = 450;
			maxRangeProbab = 0.30000001;
			textureType = "semi";
		};
		
        magazines[] = {
			MACRO_NEW_MAG(R_DC_15s,60)
		};
        
		class OpticsModes
		{
			class sight
			{
				opticsID = 2;
				useModelOptics = 0;
				opticsPPEffects[] =
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision = 0.67000002;
				opticsZoomMin = 0.375;
				opticsZoomMax = 0.9; //1.1
				opticsZoomInit = 0.600;
				discreteInitIndex = 0;
				distanceZoomMin = 25;
				distanceZoomMax = 700;
				discreteDistance[] = { 25,100,200,300,400,500,600,700 };
				discreteDistanceInitIndex = 0;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsFlare = "true";
				cameraDir = "";
			};
			class scope : sight
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] =
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin = 0.0300;
				opticsZoomMax = 0.125;
				opticsZoomInit = 0.125;
				memoryPointCamera = "optic_view";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				visionMode[] = { "Normal", "NVG" };
				discretefov[] = { 0.125,0.0625 };
				discreteInitIndex = 0;
				discreteDistanceInitIndex = 0;
				discreteDistance[] = { 25,100,200,300,400,500,600,700,800 };
				distanceZoomMin = 25;
				distanceZoomMax = 1000;
				modelOptics[] = { "\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F" };
			};
		};

	};
	
};