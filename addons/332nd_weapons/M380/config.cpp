#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(R_M380)
	{
		units[]={};
		weapons[]=
		{
			MACRO_NEW_WEAPON(M380)
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"A3_Weapons_F"
		};
		author="332nd Aux Team";
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
	class optic_Aco;
	class InventoryOpticsItem_Base_F;
	class OPTRE_M73;
	class MACRO_NEW_WEAPON(R_M380): OPTRE_M73
	{
		dlc = "";
		scope = 2;
		scopeArsenal = 2;
		displayName = MACRO_WEAPON_DISPLAYNAME(M380)
		ACE_Overheating_mrbs = 300000;
		recoil = "recoil_lim";
		recoilprone = "recoil_mx";
		canShootInWater = 1;
		baseweapon = "";
		cursor = "332_DOT";
		cursoraim = "332_Z6";
		magazines[] =
		{
			MACRO_NEW_MAG(R_M380,200)
		};
		modes[] =
		{
			"FullAuto"
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot : MuzzleSlot
			{
				compatibleitems[] =
				{
					
				};
			};
			class CowsSlot : CowsSlot
			{
				compatibleitems[] =
				{
					
				};
			};
			class PointerSlot : PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] =
				{
					
				};
			};
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
				begin3[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-03.ogg",
					"db8",
					1,
					2000
				};
				begin4[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-04.ogg",
					"db8",
					1,
					2000
				};
				begin5[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-05.ogg",
					"db8",
					1,
					2000
				};
				begin6[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-06.ogg",
					"db8",
					1,
					2000
				};
				begin7[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-07.ogg",
					"db8",
					1,
					2000
				};
				begin8[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-08.ogg",
					"db8",
					1,
					2000
				};
				begin9[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-09.ogg",
					"db8",
					1,
					2000
				};
				begin10[] =
				{
					"\OPTRE_Weapons\MG\data\sounds\M73LMG-10.ogg",
					"db8",
					1,
					2000
				};
				soundBegin[] =
				{
					"begin3",
					0.1,
					"begin4",
					0.1,
					"begin5",
					0.1,
					"begin6",
					0.1,
					"begin7",
					0.1,
					"begin8",
					0.1,
					"begin9",
					0.1,
					"begin10",
					0.1
				};
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
			reloadTime = 0.078900002;
			dispersion = 0.00075000001;
			minRange = 2;
			minRangeProbab = 0.0099999998;
			midRange = 200;
			midRangeProbab = 0.0099999998;
			maxRange = 400;
			maxRangeProbab = 0.0099999998;
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 10;
	};

};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(R_M380,200) : 30rnd_762x39_AK12_Mag_F //M380 magazine
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 200;
		mass = 30;
		initspeed = 1200;
		displayName = MACRO_AMMO_DISPLAYNAME(M380,200)
		displayNameShort = "Low Power 200rnd";
		descriptionShort = "332nd Low Power Round";
		ammo = MACRO_NEW_AMMO(R_762_green);
		tracersEvery = 1;
	};
};


