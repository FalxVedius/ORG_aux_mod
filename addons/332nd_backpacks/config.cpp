#include "../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(backpacks)
	{
		author = "Namenai";
		requiredAddons[]=
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
	class JLTS_Clone_jumppack_JT12;
	class MACRO_NEW_BACKPACK(blufor,332nd_jt_12_base): JLTS_Clone_jumppack_JT12
	{	
		displayName = "[332nd] JT-12 ('base')";
		scope = 0;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	};

	class JLTS_Clone_backpack;
	class MACRO_NEW_BACKPACK(blufor,332nd_base): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_base_co.paa
		};
		displayName = "[332nd] Ammo Bearer Pack (base)";
		maximumLoad = 450;

		scope = 0;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_co.paa
		};
		displayName = "[332nd] Ammo Bearer Pack";
		maximumLoad = 450;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Des) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_Des.paa
		};
		displayName = "[332nd] Ammo Bearer Pack (Desert)";
		maximumLoad = 450;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Dig) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_Dig.paa
		};
		displayName = "[332nd] Ammo Bearer Pack (Digital)";
		maximumLoad = 450;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Jung) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_Jung.paa
		};
		displayName = "[332nd] Ammo Bearer Pack (Jungle)";
		maximumLoad = 450;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Snow) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_Snow.paa
		};
		displayName = "[332nd] Ammo Bearer Pack (Snow)";
		maximumLoad = 450;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Wood) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_Wood.paa
		};
		displayName = "[332nd] Ammo Bearer Pack (Wood)";
		maximumLoad = 450;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_co.paa
		};
		displayName = "[332nd] Support Pack";
		maximumLoad = 290;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support_Des) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_Des.paa
		};
		displayName = "[332nd] Support Pack (Desert)";
		maximumLoad = 290;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support_Dig) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_Dig.paa
		};
		displayName = "[332nd] Support Pack (Digital)";
		maximumLoad = 290;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support_Jung) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_Jung.paa
		};
		displayName = "[332nd] Support Pack (Jungle)";
		maximumLoad = 290;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support_Snow) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_Snow.paa
		};
		displayName = "[332nd] Support Pack (Snow)";
		maximumLoad = 290;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support_Wood) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_Wood.paa
		};
		displayName = "[332nd] Support Pack (Wood)";
		maximumLoad = 290;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_support_base): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_base_co.paa
		};
		displayName = "[332nd] Support Pack (Base)";
		maximumLoad = 290;

		scope = 0;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_332_co.paa
		};
		displayName = "[332nd] Medic Pack";
		tf_dialog="JLTS_clone_rto_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range= 50000;
        tf_subtype="digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic_Des) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_332_Des.paa
		};
		displayName = "[332nd] Medic Pack (Desert)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic_Dig) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_332_Dig.paa
		};
		displayName = "[332nd] Medic Pack (Digital)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic_Jung) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_332_Jung.paa
		};
		displayName = "[332nd] Medic Pack (Jungle)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic_Snow) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_332_Snow.paa
		};
		displayName = "[332nd] Medic Pack (Snow)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic_Wood) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_332_Wood.paa
		};
		displayName = "[332nd] Medic Pack (Wood)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_medic_base): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_base_co.paa
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range= 50000;
        tf_subtype="digital_lr";
		displayName = "[332nd] Medic Pack (base)";
		maximumLoad = 393;

		scope = 0;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class JLTS_Clone_backpack_RTO;
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_base): JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] JTAC Pack";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_Des) : JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] JTAC Pack (Desert)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Des.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_Dig) : JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] JTAC Pack (Digital)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Dig.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_Jung) : JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] JTAC Pack (Jungle)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Jung.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_Snow) : JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] JTAC Pack (Snow)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Snow.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_Wood) : JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] JTAC Pack (Wood)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Wood.paa
		};
	}
	class JLTS_Clone_belt_bag;
	class MACRO_NEW_BACKPACK(blufor,332nd_belt_bag): JLTS_Clone_belt_bag
	{
		displayName = "[332nd] Belt Bag (UGL/DMR)";
		maximumLoad = 232;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}	
	class JLTS_Clone_LR_attachment;
	class MACRO_NEW_BACKPACK(blufor,332nd_Leadership): JLTS_Clone_LR_attachment
	{
		displayName = "[332nd] Leadership Pack";
		maximumLoad = 271;
		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}	
	class JLTS_Clone_RTO_pack;
	class MACRO_NEW_BACKPACK(blufor,332nd_Pilot_Pack): JLTS_Clone_RTO_pack
	{
		displayName = "[332nd] Pilot Radio Pack";
		maximumLoad = 271;

		tf_range = 50000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}	
	class JLTS_Clone_backpack_eod;
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack): JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] EOD Pack";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack_Des) : JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] EOD Pack (Desert)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Des.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack_Dig) : JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] EOD Pack (Digital)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Dig.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack_Jung) : JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] EOD Pack (Jungle)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Jung.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack_Snow) : JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] EOD Pack (Snow)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Snow.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack_Wood) : JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] EOD Pack (Wood)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Wood.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class ls_gar_rocket_backpack;
	class MACRO_NEW_BACKPACK(blufor,332nd_AT): ls_gar_rocket_backpack
	{
		displayName = "[332nd] AT Pack";

		maximumLoad = 375;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_332_AT.paa,
			"ls_equipment_bluefor\backpack\gar\backpack\data\holder_co.paa",
			"ls_equipment_bluefor\backpack\gar\backpack\data\rocket_co.paa",
			"ls_equipment_bluefor\backpack\gar\backpack\data\light_co.paa",
			"ls_equipment_bluefor\backpack\gar\backpack\data\pouches_co.paa"
		};
	}
	class SWLB_clone_bag_leg;
	class MACRO_NEW_BACKPACK(blufor,332nd_rifleman_pack) : SWLB_clone_bag_leg
	{
		displayName = "[332nd] Rifleman Pack";
		maximumLoad = 32;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_hidden_pack) : SWLB_clone_bag_leg
	{
		displayName = "[332nd] Rifleman Pack (Hidden)";
		maximumLoad = 32;

		hiddenSelectionsTextures[] =
		{
			""
		};

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class 3AS_B_Katarn_Backpack;
	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_at) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - AT *WIP*";
		maximumLoad = 468;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_Supp) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - Support *WIP*";
		maximumLoad = 380;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_Grend) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - (UGL/DMR) *WIP*";
		maximumLoad = 277;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_JTAC) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - JTAC *WIP*";
		maximumLoad = 468;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_Lead) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - Leadership *WIP*";
		maximumLoad = 316;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_EOD) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - EOD *WIP*";
		maximumLoad = 460;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_Medic) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - Medic *WIP*";
		maximumLoad = 433;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,332nd_assault_pack_Ammo) : 3AS_B_Katarn_Backpack
	{
		displayName = "[332nd] Assault Pack - Ammo Bearer *WIP*";
		maximumLoad = 512;


		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
}