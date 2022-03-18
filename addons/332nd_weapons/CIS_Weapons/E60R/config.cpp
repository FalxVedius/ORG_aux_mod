#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(E60R)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(E60R_AT),
			MACRO_NEW_WEAPON(E60R_AA)
		};
	};
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgMagazines
{
	class SWLW_plx1_at_mag;

	class MACRO_NEW_MAG(E60R_ATMag,1) : SWLW_plx1_at_mag
	{
		ammo = MACRO_NEW_AMMO(E60R_ATRocket)
		displayName = MACRO_AMMO_DISPLAYNAME(E60R - AT,1)
		scope = 2;
		count = 1;
		initSpeed = 60;
		mass = 62;
	};

	class MACRO_NEW_MAG(E60R_AAMag,1) : MACRO_NEW_MAG(E60R_ATMag,1)
	{
		ammo = MACRO_NEW_AMMO(E60R_AARocket);
		displayName = MACRO_AMMO_DISPLAYNAME(E60R - AA,1)
		mass = 31;
	};
};

class CfgWeapons
{
	class launch_Titan_short_base;
	class JLTS_E60R_AT : launch_Titan_short_base
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};

	class Launcher_Base_F;
	class launch_RPG32_F : Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};


	class MACRO_NEW_WEAPON(E60R_AT): launch_RPG32_F
	{
		scope=2;
		displayName="CIS E60R AT";
		descriptionShort="Standard AT Launcher of the CIS";

		baseWeapon = MACRO_NEW_WEAPON(E60R_AT);

		ace_overpressure_angle = 30;
		ace_overpressure_damage = 0.5;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 2;
		ace_reloadlaunchers_enabled = 1;

		modes[] = 
		{
			"Single"
		};

		canLock = 0;
		airLock = 0;

		weaponInfoType = "RscOptics_titan";
		modelOptics[] = { "\A3\Weapons_F_Beta\acc\reticle_titan.p3d" };
		model = "\MRC\JLTS\weapons\E60R\E60R.p3d";

		handAnim[] = { "OFP2_ManSkeleton","\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm" };
		hiddenSelections[] = { "camo1","illum" };
		hiddenSelectionsMaterials[] = { "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\weapons\E60R\data\E60R_co.paa" };

		picture = "\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(E60R_ATMag,1)
		};

		class OpticsModes
		{
			class sight
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
				visionMode[] =
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = { 0, 1 };
				discreteInitIndex = 0;
				discreteDistanceInitIndex = 0;
				discretefov[] = { 0.125,0.0625,0.0310 };
				distanceZoomMin = 100;
				distanceZoomMax = 500;
				cameraDir = "";
			};
		};

		class Single : Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] =
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					1,
					500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			sounds[] =
			{
				"StandardSound"
			};
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.30000001;
			midRange = 40;
			midRangeProbab = 0.85000002;
			maxRange = 600;
			maxRangeProbab = 0.85000002;
		};
	};

	class MACRO_NEW_WEAPON(E60R_AA) : JLTS_E60R_AT
	{
		scope = 2;
		displayName = "CIS E60R AA";
		descriptionShort = "Standard AA Launcher of the CIS";

		baseWeapon = MACRO_NEW_WEAPON(E60R_AA);

		ace_overpressure_angle = 45;
		ace_overpressure_damage = 0;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 10;
		ace_reloadlaunchers_enabled = 1;

		modes[] =
		{
			"Single"
		};

		canLock = 2;
		airLock = 2;

		cmImmunity = 0.01;


		weaponInfoType = "RscOptics_titan";
		modelOptics[] = { "\A3\Weapons_F_Beta\acc\reticle_titan.p3d" };
		model = "\MRC\JLTS\weapons\E60R\E60R.p3d";

		cartridgePos = "nabojnicestart";
		cartridgeVel = "nabojniceend";

		handAnim[] = { "OFP2_ManSkeleton","\MRC\JLTS\weapons\E60R\anims\E60R_handanim.rtm" };
		hiddenSelections[] = { "camo1","illum" };
		hiddenSelectionsMaterials[] = { "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\weapons\E60R\data\E60R_co.paa" };

		picture = "\MRC\JLTS\weapons\E60R\data\ui\E60R_ui_ca.paa";

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(E60R_AAMag,1)
		};

		class OpticsModes
		{
			class sight
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
				visionMode[] =
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = { 0, 1 };
				discreteInitIndex = 0;
				discreteDistanceInitIndex = 0;
				discretefov[] = { 0.125,0.0625,0.0310 };
				distanceZoomMin = 100;
				distanceZoomMax = 500;
				cameraDir = "";
			};
		};

		class Single : Mode_SemiAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] =
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					10,
					1,
					500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			sounds[] =
			{
				"StandardSound"
			};
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.30000001;
			midRange = 40;
			midRangeProbab = 0.85000002;
			maxRange = 600;
			maxRangeProbab = 0.85000002;
		};
	};
};