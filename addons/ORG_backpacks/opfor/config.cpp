#include "../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(backpacks_opfor)
	{
		author = "Falx";
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
	class JLTS_B1_backpack_at_predef;
	class MACRO_NEW_BACKPACK(opfor,ORG_b1_at_bp) : JLTS_B1_backpack_at_predef
	{
		displayName = "CIS AT Pack";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		class TransportMagazines
		{
			class AT_ORG_B1
			{
				magazine = "JLTS_RPS6_mag";
				count = 2;
			};
		};
	};

	class MACRO_NEW_BACKPACK(opfor,ORG_b1_aa_bp) : JLTS_B1_backpack_at_predef
	{
		displayName = "CIS AA Pack";
		maximumLoad = 450;

		editorCategory = "EdCat_ORG_Props";
		editorSubcategory = "EdSubcat_ORG_PACKS";

		class TransportMagazines
		{
			class AA_ORG_B1
			{
				magazine = "ORG_aux_magazine_E60R_AAMag_x1";
				count = 2;
			};
		};
	};
};