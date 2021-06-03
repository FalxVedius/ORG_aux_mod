#include "../332nd_main/macros/main.hpp" // my config macro lib

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

class CfgWeapons
{
 	// ---- Uniforms ----

    class U_I_CombatUniform;
	class JLTS_CloneArmor: U_I_CombatUniform
	{
		class ItemInfo;
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

	
	// ---- End Uniforms ----
}

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
		};
	};

	// ---- End Supply Crates ----

	// ---- Units for Uniforms ----

	class B_Soldier_f;
    class JLTS_Clone_P2_DC15A:B_Soldier_f 
    {
        class HitPoints;
    };

	//infantry
    class MACRO_NEW_UNIT(infantry,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Base";

        uniformClass = MACRO_NEW_UNIFORM(infantry,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		weapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		magazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};

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

	class MACRO_NEW_UNIT(rto,base): MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[332nd] Clone RTO Base";

        uniformClass = MACRO_NEW_UNIFORM(rto,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
	}

	class MACRO_NEW_UNIT(medic,base): MACRO_NEW_UNIT(infantry,base)
	{
		displayName = "[332nd] Clone Medic Base";

        uniformClass = MACRO_NEW_UNIFORM(medic,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
	}

	class MACRO_NEW_UNIT(aviation,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Aviation Base";

        uniformClass = MACRO_NEW_UNIFORM(aviation,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(aviation,332nd_pilot),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(aviation,332nd_pilot),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};
		weapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		magazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};

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

        uniformClass = MACRO_NEW_UNIFORM(cwo,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		weapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		magazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};

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
	// ---- End Units for Uniforms ----
}