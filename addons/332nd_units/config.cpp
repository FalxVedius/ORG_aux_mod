#include "../332nd_main/macros/main.hpp" // my config macro lib

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

class CfgPatches
{
	class MACRO_PATCH_NAME(units)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_UNIT(infantry,base),
			MACRO_NEW_UNIT(aviation,base),
			"EmptyBox_332nd",
			"MedicalBox_332nd",
			"AmmoBox_332nd"

		};
		weapons[] = {
		 	MACRO_NEW_UNIFORM(infantry,base),
			MACRO_NEW_UNIFORM(aviation,base)
		};
	};
};

class CfgFactionClasses
{
	class EdCat_332nd
	{
		displayName = "332nd Legion";
		side = 1;
		priority = 2;
	};

	class EdCat_332ndCIS
	{
		displayName = "332nd CIS";
		side = 2;
		priority = 2;
	};
};

class CfgEditorCategories
{
	class EdCat_332nd_Props
	{
		displayName = "332nd Legion";
		priority = 2;
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_332nd_AA
	{
		displayName = "Anti-Air";
		priority = 1;
	};
	class EdSubcat_332nd_APCS
	{
		displayName = "APCs";
		priority = 2;
	};
	class EdSubcat_332nd_ART
	{
		displayName = "Artillery";
		priority = 3;
	};
	class EdSubcat_332nd_PACKS
	{
		displayName = "Backpacks";
		priority = 4;
	};
	class EdSubcat_332nd_BOAT
	{
		displayName = "Boats";
		priority = 4;
	};
	class EdSubcat_332nd_CAR
	{
		displayName = "Cars";
		priority = 5;
	};
	class EdSubcat_332nd_DRONE
	{
		displayName = "Drones";
		priority = 6;
	};
	class EdSubcat_332nd_HELI
	{
		displayName = "Helicopters";
		priority = 7;
	};
	class EdSubcat_332nd_MEN
	{
		displayName = "Men";
		priority = 8;
	};
	class EdSubcat_332nd_IFV
	{
		displayName = "IFVs";
		priority = 9;
	};
	class EdSubcat_332nd_PLANE
	{
		displayName = "Planes";
		priority = 10;
	};
	class EdSubcat_332nd_RESUPPLY
	{
		displayName = "Resupply";
		priority = 11;
	};
	class EdSubcat_332nd_TANK
	{
		displayName = "Tanks";
		priority = 12;
	};
	class EdSubcat_332nd_TRUCK
	{
		displayName = "Trucks";
		priority = 13;
	};
	class EdSubcat_332nd_TURR
	{
		displayName = "Turrets";
		priority = 14;
	};
};

class CfgMarkers
{
	class mil_dot;
	class Marker_332nd : mil_dot {
		name = "332nd";
		icon = "332nd_units\images\332nd_Logo.paa";
		shadow = false;
		scope = 2;
		color[] = { 1, 1, 1, 1 };
	};
};

class CfgWeapons
{
 	// ---- blufor Uniforms ----

    class U_I_CombatUniform;
	class JLTS_CloneArmor: U_I_CombatUniform
	{
		class ItemInfo;
	};

	//Recruit
	class MACRO_NEW_UNIFORM(recruit,base) : JLTS_CloneArmor
	{
		displayName = "[332nd] Recruit Uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(recruit,base);
			containerClass = "Supply140";
		};
	};

	//Infantry
    class MACRO_NEW_UNIFORM(infantry,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Infantry Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(infantry,base);
			containerClass = "Supply140";
		};
	};

	//RTO
    class MACRO_NEW_UNIFORM(rto,base): JLTS_CloneArmor
	{
		displayName = "[332nd] RTO Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(rto,base);
			containerClass = "Supply140";
		};
	};

	//Medic
    class MACRO_NEW_UNIFORM(medic,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Medic Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(medic,base);
			containerClass = "Supply140";
		};
	};

	class MACRO_NEW_UNIFORM(aviation,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Aviation Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(aviation,base);
			containerClass = "Supply140";
		};
	};

	class MACRO_NEW_UNIFORM(cwo,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Clone Warrant Officer Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cwo,base);
			containerClass = "Supply140";
		};
	};

	
	// ---- End blufor Uniforms ----

	// ---- Opfor Uniforms ----

	class JLTS_DroidB1 : U_I_CombatUniform
	{
		class ItemInfo;
	};

	//CIS B-1
	class MACRO_NEW_UNIFORM(cisb1,base) : JLTS_DroidB1
	{
		displayName = "[332nd] Battle droid uniform ('base')";
		scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo : ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cisb1,base);
			containerClass = "Supply140";
		};
	};

	// ---- End opfor Uniforms ----
}
class CfgSounds
{
	sounds[] = {};
	class B1_Death1
	{
		name = "B1_Death1";
		sound[] = {"\opfor\DeathSounds\B1_Death1.ogg", 5, 1.0};
	};
};


class CfgFunctions
{
	class Resupply
	{
		class myCategory
		{
			class SetCratesToCarryable
			{
				file = "332nd_units\fnc_carryResupplyCrates.sqf";
			};
		};
	};

	class Aux332nd
	{
		class DeathSounds
		{
			file = "\332nd_units\opfor";
			class Killed
			{
			};
		};
	};
};

class CfgVehicles
{  
	// ---- Supply Containers for Unif ----

	class ContainerSupply;
	class SupplyXX : ContainerSupply
	{
		maximumLoad = XX;
	};

	// ---- End Supply Containers for Armor ----

	// ---- Supply Crates ----

	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_weapons_GAR;

	class EmptyBox_332nd : JLTS_Ammobox_weapons_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "[332nd] Empty Ammo Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_RESUPPLY";

		class TransportWeapons
		{

		};
	};

	class MedicalBox_332nd : JLTS_Ammobox_support_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "[332nd] Medical Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_RESUPPLY";

		class TransportItems
		{
			class Elastics_332nd
			{
				name = "ACE_elasticBandage";
				count = 300;
			};

			class Packing_332nd
			{
				name = "ACE_packingBandage";
				count = 300;
			};

			class Quickclot_332nd
			{
				name = "ACE_quikclot";
				count = 300;
			};

			class Painkillers_332nd
			{
				name = "ACE_morphine";
				count = 40;
			};

			class Epinephrine_332nd
			{
				name = "ACE_epinephrine";
				count = 40;
			};

			class Plasma1k_332nd
			{
				name = "ACE_plasmaIV";
				count = 25;
			};

			class Plasma500_332nd
			{
				name = "ACE_plasmaIV_500";
				count = 50;
			};

			class Plasma250_332nd
			{
				name = "ACE_plasmaIV_250";
				count = 50;
			};

			class Tournys_332nd
			{
				name = "ACE_tourniquet";
				count = 30;
			};

			class PAK_332nd
			{
				name = "ACE_personalAidKit";
				count = 5;
			};
		};

		class TransportWeapons
		{

		};

		class TransportMagazines {

		};

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	class AmmoBox_332nd : JLTS_Ammobox_weapons_GAR
	{
		author = MACRO_AUTHOR;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "[332nd] Ammo Resupply Box";
		maximumLoad = 5000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_RESUPPLY";


		class TransportWeapons
		{
			class DC15A_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15a";
				count = 10;
			};

			class DC15S_Weps_332nd
			{
				weapon = "332nd_aux_weapon_DC_15s";
				count = 10;
			};

			class RPS1_Weps_332nd
			{
				weapon = "332nd_aux_weapon_RPS_1_Loaded";
				count = 5;
			};
		};

		class TransportMagazines
		{
			class DC15A_low_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Low_x60";
				count = 300;
			};

			class DC15A_medium_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_Medium_x30";
				count = 300;
			};

			class DC15A_High_332nd
			{
				magazine = "332nd_aux_magazine_DC_15a_High_x10";
				count = 50;
			};

			class DC15A_StunLong_332nd
			{
				magazine = "JLTS_stun_mag_long";
				count = 40;
			};

			class DC15A_StunShort_332nd
			{
				magazine = "JLTS_stun_mag_short";
				count = 40;
			};

			class DC15A_UGLAP_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_AP_x2";
				count = 50;
			};

			class DC15A_UGLHE_332nd
			{
				magazine = "332nd_aux_magazine_DC_15_UGL_HE_x4";
				count = 50;
			};

			class DC15s_332nd
			{
				magazine = "332nd_aux_magazine_DC_15s_x60";
				count = 300;
			};

			class DC17_332nd
			{
				magazine = "332nd_aux_magazine_DC_17_x15";
				count = 50;
			};

			class SA35_332nd
			{
				magazine = "332nd_aux_magazine_35sa_low_x30";
				count = 50;
			};

			class DC15L_332nd
			{
				magazine = "332nd_aux_magazine_DC_15L_x125";
				count = 100;
			};

			class DC15X_HIGH_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x10";
				count = 50;
			};

			class DC15X_LOW_332nd
			{
				magazine = "332nd_aux_magazine_DC_15x_x2";
				count = 25;
			};

			class DP_23_332nd
			{
				magazine = "332nd_aux_magazine_DP23_x12";
				count = 100;
			};

			class DW_32_HIGH_332nd
			{
				magazine = "332nd_aux_magazine_DW32_High_x5";
				count = 50;
			};

			class DW_32_CONCMED_332nd
			{
				magazine = "332nd_aux_magazine_DW32_Med_x20";
				count = 100;
			};

			class Z6_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x200";
				count = 200;
			};

			class Z6_ALT_332nd
			{
				magazine = "332nd_aux_magazine_Z6_x125";
				count = 200;
			};

			class Flash_332nd
			{
				magazine = "332nd_aux_magazine_332_FLASH_x1";
				count = 30;
			};

			class ATCharge_332nd
			{
				magazine = "332nd_aux_magazine_332_INCENDIARY_x1";
				count = 30;
			};

			class HEDPImpact_332nd
			{
				magazine = "332nd_aux_magazine_332_HEDP_x1";
				count = 30;
			};

			class SquadShield_332nd
			{
				magazine = "332nd_aux_magazine_332_SquadShield_x1";
				count = 5;
			};

			class ThermalDet_332nd
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 30;
			};

			class PLXAA_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_AAMag_x2";
				count = 10;
			};

			class PLXAT_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_ATMag_x2";
				count = 10;
			};

			class PLXHE_332nd
			{
				magazine = "332nd_aux_magazine_PLX1_HEMag_x2";
				count = 10;
			};

			class RPS6AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_ATMag_x1";
				count = 20;
			};

			class RPS6AA_332nd
			{
				magazine = "332nd_aux_magazine_RPS6_AAMag_x1";
				count = 20;
			};

			class RPS4AT_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_AT_x1";
				count = 20;
			};

			class RPS4HE_332nd
			{
				magazine = "332nd_aux_magazine_RPS4_HE_x1";
				count = 20;
			};
		};

		class EventHandlers
		{
			init = "[_this] spawn Resupply_fnc_SetCratesToCarryable;";
		};
	};

	// ---- End Supply Crates ----

	// ---- Blufor Units for Uniforms ----

	class B_Soldier_f;
    class JLTS_Clone_P2_DC15A:B_Soldier_f 
    {
        class HitPoints;
    };

	//recruit
	class MACRO_NEW_UNIT(recruit,base) : JLTS_Clone_P2_DC15A
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] Clone Base";

		uniformClass = MACRO_NEW_UNIFORM(recruit,base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

		linkedItems[] = {"332nd_aux_infantry_helmet_332nd_recruit","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG"};
		respawnLinkedItems[] = {"332nd_aux_infantry_helmet_332nd_recruit","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15a","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 2;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 2;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

		// define stuff like
		// armor, items, unit name

	};

	//infantry
    class MACRO_NEW_UNIT(infantry,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

        uniformClass = MACRO_NEW_UNIFORM(infantry,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG"};
		respawnLinkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG"};
		weapons[] = {"332nd_aux_weapon_DC_15a","Throw","Put"};
		respawnWeapons[] = {"332nd_aux_weapon_DC_15a","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_rifleman_pack";
		magazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_8(332nd_aux_magazine_DC_15a_Low_x60),
			mag_5(332nd_aux_magazine_DC_15a_Medium_x30),
			mag_2(332nd_aux_magazine_DC_15a_High_x10),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 2;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 2;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(rto,base) : MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[332nd] Clone RTO Base";

		uniformClass = MACRO_NEW_UNIFORM(rto, base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		backpack = "332nd_aux_blufor_backpack_332nd_RTO_base";
	};

	class MACRO_NEW_UNIT(medic,base) : MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[332nd] Clone Medic Base";

		uniformClass = MACRO_NEW_UNIFORM(medic, base);
		hiddenSelections[] = { "camo1","camo2","insignia" };

		backpack = "332nd_aux_blufor_backpack_332nd_medic";
	};

	class MACRO_NEW_UNIT(aviation,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Aviation Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

        uniformClass = MACRO_NEW_UNIFORM(aviation,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
		linkedItems[] = {"332nd_aux_seniorensign_vest_332nd_FlightSeniorEnsign_Vest", "332nd_aux_aviation_helmet_332nd_pilot","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = { "332nd_aux_seniorensign_vest_332nd_FlightSeniorEnsign_Vest", "332nd_aux_aviation_helmet_332nd_pilot","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		weapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_Pilot_Pack";
		magazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 2;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 2;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(cwo,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Warrant Officer Base";

		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_MEN";

        uniformClass = MACRO_NEW_UNIFORM(cwo,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
		linkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_infantry_vest_332nd_officer","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		respawnLinkedItems[] = {"332nd_aux_infantry_helmet_332nd_trooper","332nd_aux_infantry_vest_332nd_officer","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" };
		weapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		respawnWeapons[] = { "332nd_aux_weapon_DC_15s","Throw","Put" };
		nakedUniform = "JLTS_CloneNaked_uniform";
		backpack = "332nd_aux_blufor_backpack_332nd_Leadership";
		magazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		respawnMagazines[] =
		{
			mag_15(332nd_aux_magazine_DC_15s_x60),
			mag_2(JLTS_stun_mag_long),
			mag_2(332nd_aux_magazine_332_FRAG_x1)
		};
		items[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};
		respawnItems[] =
		{
			mag_2(ACE_CableTie),
			mag_10(ACE_elasticBandage),
			mag_5(ACE_packingBandage),
			mag_5(ACE_quikclot),
			"ACE_EntrenchingTool",
			"ACE_Flashlight_XL50",
			"ACE_M26_Clacker",
			"MineDetector",
			mag_4(ACE_epinephrine),
			mag_3(ACE_plasmaIV_500),
			"ACE_wirecutter"
		};

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 2;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 2;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 16;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 12;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 12;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 16;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 12;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 12;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 12;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 2000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 12;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 12;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

    };
	// ---- End Blufor Units for Uniforms ----

	// ---- Opfor Units for Uniforms ----
	class O_Soldier_F;
	class JLTS_Droid_B1_E5 :O_Soldier_F
	{
		class HitPoints;
	};

	class MACRO_NEW_UNIT(cisb1,base) : JLTS_Droid_B1_E5
	{
		author = MACRO_AUTHOR;
		scope = 0;
		displayName = "[332nd] B1 Battle Droid Base";

		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_MEN";
		uniformClass = MACRO_NEW_UNIFORM(cisb1,base);

		class HitPoints : HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};

	};

	// ---- End Opfor Units for Uniforms ----
};

class Extended_Killed_EventHandlers
{
	class MACRO_NEW_UNIT(cisb1,base)
	{
		Aux332nd_DeathSound = "(_this select 0) call Aux332nd_fnc_Killed";
	};
};