#include "../ORG_main/macros/main.hpp" // my config macro lib

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
	class MACRO_NEW_BACKPACK(blufor,ORG_jt_12_base): JLTS_Clone_jumppack_JT12
	{	
		displayName = "[ORG] JT-12 ('base')";
		scope = 0;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	};

	class JLTS_Clone_backpack;
	class MACRO_NEW_BACKPACK(blufor,ORG_base): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_base_co.paa
		};
		displayName = "[ORG] Ammo Bearer Pack (base)";
		maximumLoad = 450;

		scope = 0;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_co.paa
		};
		displayName = "[ORG] Ammo Bearer Pack";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Des) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_Des.paa
		};
		displayName = "[ORG] Ammo Bearer Pack (Desert)";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Dig) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_Dig.paa
		};
		displayName = "[ORG] Ammo Bearer Pack (Urban)";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Jung) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_Jung.paa
		};
		displayName = "[ORG] Ammo Bearer Pack (Jungle)";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Snow) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_Snow.paa
		};
		displayName = "[ORG] Ammo Bearer Pack (Snow)";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Wood) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_Wood.paa
		};
		displayName = "[ORG] Ammo Bearer Pack (Multi-cam)";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_ORG_co.paa
		};
		displayName = "[ORG] Support Pack";
		maximumLoad = 290;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support_Des) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_ORG_Des.paa
		};
		displayName = "[ORG] Support Pack (Desert)";
		maximumLoad = 290;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support_Dig) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_ORG_Dig.paa
		};
		displayName = "[ORG] Support Pack (Urban)";
		maximumLoad = 290;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support_Jung) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_ORG_Jung.paa
		};
		displayName = "[ORG] Support Pack (Jungle)";
		maximumLoad = 290;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support_Snow) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_ORG_Snow.paa
		};
		displayName = "[ORG] Support Pack (Snow)";
		maximumLoad = 290;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support_Wood) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_ORG_Wood.paa
		};
		displayName = "[ORG] Support Pack (Multi-cam)";
		maximumLoad = 290;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_support_base): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_base_co.paa
		};
		displayName = "[ORG] Support Pack (Base)";
		maximumLoad = 290;

		scope = 0;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_ORG_co.paa
		};
		displayName = "[ORG] Medic Pack";
		tf_dialog="JLTS_clone_rto_radio_dialog";
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode="tf_west_radio_code";
        tf_hasLRradio=1;
        tf_range= 50000;
        tf_subtype="digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic_Des) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_ORG_Des.paa
		};
		displayName = "[ORG] Medic Pack (Desert)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic_Dig) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_ORG_Dig.paa
		};
		displayName = "[ORG] Medic Pack (Urban)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic_Jung) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_ORG_Jung.paa
		};
		displayName = "[ORG] Medic Pack (Jungle)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic_Snow) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_ORG_Snow.paa
		};
		displayName = "[ORG] Medic Pack (Snow)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic_Wood) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\medic_ORG_Wood.paa
		};
		displayName = "[ORG] Medic Pack (Multi-cam)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 50000;
		tf_subtype = "digital_lr";
		maximumLoad = 393;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_medic_base): JLTS_Clone_backpack
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
		displayName = "[ORG] Medic Pack (base)";
		maximumLoad = 393;

		scope = 0;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class JLTS_Clone_backpack_RTO;
	class MACRO_NEW_BACKPACK(blufor,ORG_RTO_base): JLTS_Clone_backpack_RTO
	{
		displayName = "[ORG] JTAC Pack";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_RTO_Des) : JLTS_Clone_backpack_RTO
	{
		displayName = "[ORG] JTAC Pack (Desert)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Des.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_RTO_Dig) : JLTS_Clone_backpack_RTO
	{
		displayName = "[ORG] JTAC Pack (Urban)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Dig.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_RTO_Jung) : JLTS_Clone_backpack_RTO
	{
		displayName = "[ORG] JTAC Pack (Jungle)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Jung.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_RTO_Snow) : JLTS_Clone_backpack_RTO
	{
		displayName = "[ORG] JTAC Pack (Snow)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Snow.paa
		};
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_RTO_Wood) : JLTS_Clone_backpack_RTO
	{
		displayName = "[ORG] JTAC Pack (Multi-cam)";
		maximumLoad = 375;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenselectionstextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_JTAC_Wood.paa
		};
	}
	class JLTS_Clone_belt_bag;
	class MACRO_NEW_BACKPACK(blufor,ORG_belt_bag): JLTS_Clone_belt_bag
	{
		displayName = "[ORG] Belt Bag (UGL/DMR)";
		maximumLoad = 232;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}	
	class JLTS_Clone_LR_attachment;
	class MACRO_NEW_BACKPACK(blufor,ORG_Leadership): JLTS_Clone_LR_attachment
	{
		displayName = "[ORG] Leadership Pack";
		maximumLoad = 271;
		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}	
	class JLTS_Clone_RTO_pack;
	class MACRO_NEW_BACKPACK(blufor,ORG_Pilot_Pack): JLTS_Clone_RTO_pack
	{
		displayName = "[ORG] Pilot Radio Pack";
		maximumLoad = 271;

		tf_range = 50000;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}	
	class JLTS_Clone_backpack_eod;
	class MACRO_NEW_BACKPACK(blufor,ORG_Demolition_pack): JLTS_Clone_backpack_eod
	{
		displayName = "[ORG] EOD Pack";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Demolition_pack_Des) : JLTS_Clone_backpack_eod
	{
		displayName = "[ORG] EOD Pack (Desert)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Des.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Demolition_pack_Dig) : JLTS_Clone_backpack_eod
	{
		displayName = "[ORG] EOD Pack (Urban)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Dig.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Demolition_pack_Jung) : JLTS_Clone_backpack_eod
	{
		displayName = "[ORG] EOD Pack (Jungle)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Jung.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Demolition_pack_Snow) : JLTS_Clone_backpack_eod
	{
		displayName = "[ORG] EOD Pack (Snow)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Snow.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_Demolition_pack_Wood) : JLTS_Clone_backpack_eod
	{
		displayName = "[ORG] EOD Pack (Multi-cam)";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\EOD_backpack_Wood.paa
		};

		maximumLoad = 400;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class ls_gar_rocket_backpack;
	class MACRO_NEW_BACKPACK(blufor,ORG_AT): ls_gar_rocket_backpack
	{
		displayName = "[ORG] AT Pack";

		maximumLoad = 375;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Backpack_ORG_AT.paa,
			"ls_equipment_bluefor\backpack\gar\backpack\data\holder_co.paa",
			"ls_equipment_bluefor\backpack\gar\backpack\data\rocket_co.paa",
			"ls_equipment_bluefor\backpack\gar\backpack\data\light_co.paa",
			"ls_equipment_bluefor\backpack\gar\backpack\data\pouches_co.paa"
		};
	}
	class SWLB_clone_bag_leg;
	class MACRO_NEW_BACKPACK(blufor,ORG_rifleman_pack) : SWLB_clone_bag_leg
	{
		displayName = "[ORG] Rifleman Pack";
		maximumLoad = 32;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,ORG_hidden_pack) : SWLB_clone_bag_leg
	{
		displayName = "[ORG] Rifleman Pack (Hidden)";
		maximumLoad = 32;

		hiddenSelectionsTextures[] =
		{
			""
		};

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class 3AS_B_Katarn_Backpack;
	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_at) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - AT *WIP*";
		maximumLoad = 468;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_AT.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_Supp) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - Support *WIP*";
		maximumLoad = 380;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_Support.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_Grend) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - (UGL/DMR) *WIP*";
		maximumLoad = 277;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_UGLDMR.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_JTAC) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - JTAC *WIP*";
		maximumLoad = 468;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_JTAC.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_Lead) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - Leadership *WIP*";
		maximumLoad = 316;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_Leadership.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_EOD) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - EOD *WIP*";
		maximumLoad = 460;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_EOD.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_Medic) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - Medic *WIP*";
		maximumLoad = 433;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_Medic.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}

	class MACRO_NEW_BACKPACK(blufor,ORG_assault_pack_Ammo) : 3AS_B_Katarn_Backpack
	{
		displayName = "[ORG] Assault Pack - Ammo Bearer *WIP*";
		maximumLoad = 512;

		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\Katarn_Backpack\Katarn_Ammo.paa
		};


		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";
	}
};