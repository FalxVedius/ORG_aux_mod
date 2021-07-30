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
	class MACRO_NEW_BACKPACK(blufor,332nd_support): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_co.paa
		};
		displayName = "[332nd] Support Pack";
		maximumLoad = 265;

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
		maximumLoad = 265;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class MACRO_NEW_BACKPACK(blufor,332nd_funops): JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[]=
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Funops_332_co.paa
		};
		displayName = "[332nd] Fun Ops Pack";
		maximumLoad = 675;

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
        tf_range=25000;
        tf_subtype="digital_lr";
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
        tf_range=25000;
        tf_subtype="digital_lr";
		displayName = "[332nd] Medic Pack (base)";
		maximumLoad = 393;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}
	class JLTS_Clone_backpack_RTO;
	class MACRO_NEW_BACKPACK(blufor,332nd_RTO_base): JLTS_Clone_backpack_RTO
	{
		displayName = "[332nd] RTO Pack";
		maximumLoad = 280;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
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
		tf_range = 15000;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}	
	class JLTS_Clone_RTO_pack;
	class MACRO_NEW_BACKPACK(blufor,332nd_Pilot_Pack): JLTS_Clone_RTO_pack
	{
		displayName = "[332nd] Pilot Radio Pack";
		maximumLoad = 271;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}	
	class JLTS_Clone_backpack_eod;
	class MACRO_NEW_BACKPACK(blufor,332nd_Demolition_pack): JLTS_Clone_backpack_eod
	{
		displayName = "[332nd] Demolition Pack";
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
	}
	class SWLB_clone_bag_leg;
	class MACRO_NEW_BACKPACK(blufor,332nd_rifleman_pack): SWLB_clone_bag_leg
	{
		displayName = "[332nd] Rifleman Pack";
		maximumLoad = 32;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";
	}	

	//Rebel player bag
	class MACRO_NEW_BACKPACK(blufor,332nd_rebel_pack) : SWLB_clone_bag_leg
	{
		displayName = "[332nd] rebel Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		class TransportItems
		{
			class PlasmaIV_500_rebel
			{
				name = "ACE_plasmaIV_500";
				count = 2;
			};

		};

		class TransportWeapons
		{

		};

		class TransportMagazines
		{
			class DC_15s_x60_rebel
			{
				magazine = "332nd_aux_magazine_DC_15s_x60";
				count = 15;
			};

			class Frag_rebel
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 2;
			};

		};


	}

	class MACRO_NEW_BACKPACK(blufor,332nd_rebel_AT_pack) : JLTS_Clone_backpack
	{
		hiddenSelectionsTextures[] =
		{
			MACRO_BACKPACK_TEXTURES_PATH\JLTS_Backpack\Support_332_co.paa
		};

		displayName = "[332nd] rebel AT Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		class TransportItems
		{
			class PlasmaIV_500_rebel
			{
				name = "ACE_plasmaIV_500";
				count = 2;
			};

		};

		class TransportWeapons
		{

		};

		class TransportMagazines
		{
			class DC_15s_x60_rebel
			{
				magazine = "332nd_aux_magazine_DC_15s_x60";
				count = 15;
			};

			class Frag_rebel
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 2;
			};

			class RPS4_HE_rnd_rebel
			{
				magazine = "332nd_aux_magazine_RPS4_HE_x1";
				count = 3;
			};

		};


	}

	class JLTS_B1_backpack;
	class MACRO_NEW_BACKPACK(blufor,332nd_rebel_Sniper_pack) : JLTS_B1_backpack
	{

		displayName = "[332nd] rebel Sniper Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		class TransportItems
		{
			class PlasmaIV_500_rebel
			{
				name = "ACE_plasmaIV_500";
				count = 2;
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

			class Frag_rebel
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 2;
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


	}

	class MACRO_NEW_BACKPACK(blufor,332nd_rebel_Medic_pack) : JLTS_B1_backpack
	{

		displayName = "[332nd] rebel medic Pack";
		maximumLoad = 332;

		editorCategory = "EdCat_332nd_Props";
		editorSubcategory = "EdSubcat_332nd_PACKS";

		class TransportItems
		{
			class PlasmaIV_500_rebel
			{
				name = "ACE_plasmaIV_500";
				count = 2;
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

			class Frag_rebel
			{
				magazine = "332nd_aux_magazine_332_FRAG_x1";
				count = 2;
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


	}
}