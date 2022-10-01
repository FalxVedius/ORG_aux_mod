#include "../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(backpacks_indep)
	{
		author = "Namenai";
		requiredAddons[] =
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	//Rebel player bag
	class JLTS_B1_antenna;
	class JLTS_B1_backpack;
	class TFAR_rt1523g_bwmod;
	class B_TacticalPack_blk; //AT
	class B_LegStrapBag_coyote_F; //Sniper
	class B_Messenger_Black_F; //medic

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_AT_pack) : JLTS_B1_backpack
	{
		displayName = "Rebel AT Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_AT_Pack_co.paa"
		};

		class TransportMagazines
		{

			class E60R_AT_rnd_rebel
			{
				magazine = "332nd_aux_magazine_E60R_ATMag_x1";
				count = 2;
			};
		};
	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_AA_pack) : JLTS_B1_backpack
	{
		displayName = "Rebel AA Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_AA_Pack_co.paa"
		};

		class TransportMagazines
		{

			class E60R_AA_rnd_rebel
			{
				magazine = "332nd_aux_magazine_E60R_AAMag_x1";
				count = 2;
			};

		};


	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Sniper_pack) : JLTS_B1_backpack
	{
		displayName = "Rebel Sniper Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_Sniper_Pack_co.paa"
		};

	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Breacher_pack) : JLTS_B1_antenna
	{

		displayName = "Rebel Breacher Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_Breacher_Pack.paa"
		};

	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Shocker_pack) : JLTS_B1_antenna
	{

		displayName = "Rebel Shocker Pack";
		maximumLoad = 332;
		scope = 0;
		scopeArsenal = 0;
		

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_Breacher_Pack.paa"
		};


		class TransportItems
		{
			class CableTie
			{
				name = "ACE_CableTie";
				count = 3;
			};

			class Entrenching_Tool_rebel
			{
				namne = "ACE_EntrenchingTool";
				count = 1;
			};

			class Flashlight_rebel
			{
				namne = "ACE_Flashlight_XL50";
				count = 1;
			};

			class M26_Clacker_rebel
			{
				namne = "ACE_M26_Clacker";
				count = 1;
			};

			class MineDetector_rebel
			{
				namne = "MineDetector";
				count = 1;
			};

			class Wirecutter_rebel
			{
				name = "ACE_wirecutter";
				count = 1;
			};

			class Earplugs_rebel
			{
				name = "ACE_EarPlugs";
				count = 1;
			};

			class epinephrine_rebel
			{
				name = "ACE_epinephrine";
				count = 2;
			};

			class PlasmaIV_500_rebel
			{
				name = "ACE_plasmaIV_500";
				count = 2;
			};

			class Pressure_Cuff_rebel
			{
				name = "332nd_aux_medical_PressureCuff";
				count = 4;
			};

			class Plasti_Band_rebel
			{
				name = "332nd_aux_medical_PlastiBandage";
				count = 5;
			};

			class Bacta_Spray_rebel
			{
				name = "332nd_aux_medical_BactaSpray";
				count = 10;
			};

		};

		class TransportWeapons
		{

		};

		class TransportMagazines
		{
			class DC_15x_x10_rebel
			{
				magazine = "332nd_aux_magazine_DC_15x_x10";
				count = 7;
			};

			class DC_15x_x2_rebel
			{
				magazine = "332nd_aux_magazine_DC_15x_x2";
				count = 10;
			};


			class Smoke_Blue_rebel
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_BLUE_x1";
				count = 2;
			};

			class Smoke_Orange_rebel
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_ORANGE_x1";
				count = 2;
			};

			class Smoke_White_rebel
			{
				magazine = "332nd_aux_magazine_332_SMOKE_IMPACT_WHITE_x1";
				count = 2;
			};

		};
	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Heavy_pack) : JLTS_B1_antenna
	{

		displayName = "Rebel Heavy Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_Breacher_Pack.paa"
		};
	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Medic_pack) : JLTS_B1_backpack
	{

		displayName = "Rebel medic Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			"\332nd_backpacks\_textures\Indep\Droidpacks\Rebel_Medic_Pack_co.paa"
		};

		class TransportItems
		{

			class Bacta_Spray_rebel
			{
				name = "332nd_aux_medical_BactaSpray";
				count = 5;
			};

			class Blood_Tank_rebel_medic
			{
				name = "332nd_aux_medical_Blood";
				count = 1;
			};

			class Adhesive_Defib_Strip_medic
			{
				name = "332nd_aux_medical_AdhesiveDefibStrip";
				count = 2;
			};
		};
	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_squad_lead_pack) : TFAR_rt1523g_bwmod
	{
		tf_dialog = "anprc155_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_independent_radio_code";
		tf_hasLRradio = 1;
		tf_range = 25000;
		tf_subtype = "digital_lr";
		displayName = "Squad Leader Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	};

	//Human Rebel bags

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Human_AT_pack) : B_TacticalPack_blk
	{
		displayName = "[332nd] rebel Human AT Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		class TransportMagazines
		{

			class E60R_AT_rnd_rebel
			{
				magazine = "332nd_aux_magazine_E60R_ATMag_x1";
				count = 2;
			};
		};
	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Human_Sniper_pack) : B_LegStrapBag_coyote_F
	{

		displayName = "[332nd] rebel Human Sniper Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	};

	class MACRO_NEW_BACKPACK(indep,332nd_rebel_Human_Medic_pack) : B_Messenger_Black_F
	{

		displayName = "[332nd] rebel Human medic Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		class TransportItems
		{

			class Bacta_Spray_rebel
			{
				name = "332nd_aux_medical_BactaSpray";
				count = 5;
			};

			class Blood_Tank_rebel_medic
			{
				name = "332nd_aux_medical_Blood";
				count = 1;
			};

			class Adhesive_Defib_Strip_medic
			{
				name = "332nd_aux_medical_AdhesiveDefibStrip";
				count = 2;
			};
		};
	};
};