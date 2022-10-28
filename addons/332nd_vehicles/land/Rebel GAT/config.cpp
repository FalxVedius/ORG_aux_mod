#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\Rebel_GAT
class CfgPatches
{
	class MACRO_PATCH_NAME(OX)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEHICLE(Land,CIS,Rebel_OX),
        };
		weapons[] = {};
	};
};
class CfgVehicles
 {
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3AS_GAT_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_CIS_GAT_base_F : 3AS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light_Base : 3AS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light_base_F : 3AS_GAT_Light_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_GAT_Light : 3AS_GAT_Light_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};


	
    class MACRO_NEW_VEHICLE(Land,CIS,Rebel_OX): 3AS_GAT_Light
    {
        displayName = "OX (Experimental)";
        scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_TANKS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";
		hiddenSelectionsTextures[] = { "\332nd_vehicles\_textures\land\Rebel_GAT\hull_CO.paa", "\332nd_vehicles\_textures\land\Rebel_GAT\RGAT.paa" };

		class Turrets : Turrets
		 {
		   class MainTurret : MainTurret
		   {
			   weapons[] =
			   {
				   "332nd_aux_weapon_Ox_repeater"
			   };
			   magazines[] =
			   {
				   "332nd_aux_magazine_Ox_repeater_x300",
				   "332nd_aux_magazine_Ox_repeater_x300",
				   "332nd_aux_magazine_Ox_repeater_x300",
				   "332nd_aux_magazine_Ox_repeater_x300",
				   "332nd_aux_magazine_Ox_repeater_x300",
				   "332nd_aux_magazine_Ox_repeater_x300"

			   };
			   gunnerType = "332nd_aux_rebel_unit_332nd_indep_rebel";
		   };
	   };
	};

};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class WeaponSlotsInfo;
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class OPTRE_M73;
	class MACRO_NEW_WEAPON(Ox_repeater) : OPTRE_M73
	{
		dlc = "";
		scope = 1;
		scopeArsenal = 0;
		displayName = "Ox Repeater"
		ACE_Overheating_mrbs = 300000;
		reloadTime = 0.1;
		recoil = "recoil_lim";
		recoilprone = "recoil_mx";
		canShootInWater = 1;
		baseweapon = "";
		cursor = "332_DOT";
		cursoraim = "332_Z6";
		magazines[] =
		{
			MACRO_NEW_MAG(Ox_repeater,300)
		};
		modes[] =
		{
			"FullAuto"
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "swlw_rework\sounds\e-series\E5C_shot.wss",2,1,2000 };
				soundBegin[] = { "begin1",1 };

				class SoundTails
				{
					class TailTrees
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",
					0.89125091,
					1,
					200
				};
				begin2[] =
				{
					"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",
					0.89125091,
					1,
					200
				};
				begin3[] =
				{
					"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",
					0.89125091,
					1,
					200
				};
				soundBegin[] =
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",
							1,
							1,
							1800
						};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",
							1,
							1,
							1800
						};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",
							1,
							1,
							1800
						};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] =
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",
							1,
							1,
							1800
						};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.055;
			dispersion = 0.002;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			aiBurstTerminable = 1;
			minRangeProbab = 0.30000001;
			midRange = 5;
			midRangeProbab = 0.69999999;
			maxRange = 10;
			maxRangeProbab = 0.039999999;
			showToPlayer = 1;
		};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 3;
	};

};

class CfgMagazines
{
	class 130Rnd_338_Mag;
	class MACRO_NEW_MAG(Ox_repeater,300) : 130Rnd_338_Mag //OX magazine
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 300;
		mass = 30;
		initSpeed = 600;
		displayName = MACRO_AMMO_DISPLAYNAME(OX Repeater,300)
		displayNameShort = "Ox 300rnd";
		descriptionShort = "332nd Ox 300rnd";
		ammo = MACRO_NEW_AMMO(Ox_repeater);
		tracersEvery = 1;
	};
};

class CfgAmmo
{
	class B_338_NM_Ball;
	class MACRO_NEW_AMMO(Ox_repeater) : B_338_NM_Ball
	{	
		lightcolor[] = {0,188,0};
		effectfly = "332nd_mainRound_REBEL_effects";
	};
};