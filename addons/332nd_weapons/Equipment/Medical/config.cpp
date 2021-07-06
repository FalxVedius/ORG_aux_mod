#include "..\..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(medical)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class ACE_Medical_Treatment
{
	class Bandaging
	{
		class ElasticBandage;
		class PackingBandage;
		class QuikClot;

		class MACRO_NEW_MEDICAL_ITEM(EBandage) : ElasticBandage
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PBandage) : PackingBandage
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(QBandage) : QuikClot
		{

		};
	};

	class IV
	{
		class BloodIV;
		class BloodIV_500;
		class BloodIV_250;
		class PlasmaIV;
		class PlasmaIV_500;
		class PlasmaIV_250;
		class SalineIV;
		class SalineIV_500;
		class SalineIV_250;

		class MACRO_NEW_MEDICAL_ITEM(BIV) : BloodIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(BIV_500) : BloodIV_500
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(BIV_250) : BloodIV_250
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PIV) : PlasmaIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PIV_500) : PlasmaIV_500
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PIV_250) : PlasmaIV_250
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(SIV) : SalineIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(SIV_500) : SalineIV_500
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(SIV_250) : SalineIV_250
		{

		};
	};

	class Medication
	{
		class Epinephrine;
		class Morphine;

		class MACRO_NEW_MEDICAL_ITEM(EMed) : Epinephrine
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(MMed) : Morphine
		{

		};
	};
};

class ACE_Medical_Treatment_Actions
{
	class ElasticBandage;
	class PackingBandage;
	class QuikClot;
	class BloodIV;
	class BloodIV_500;
	class BloodIV_250;
	class PlasmaIV;
	class PlasmaIV_500;
	class PlasmaIV_250;
	class SalineIV;
	class SalineIV_500;
	class SalineIV_250;
	class Epinephrine;
	class Morphine;
	class SurgicalKit;

	class MACRO_NEW_MEDICAL_ITEM(EBandage) : ElasticBandage
	{
		items[] = { "332nd_aux_medical_EBandage" };
	};
	class MACRO_NEW_MEDICAL_ITEM(PBandage) : PackingBandage
	{
		items[] = { "332nd_aux_medical_PBandage" };
	};
	class MACRO_NEW_MEDICAL_ITEM(QBandage) : QuikClot
	{
		items[] = { "332nd_aux_medical_QBandage" };
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV) : BloodIV
	{
		items[] = { "332nd_aux_medical_BIV" };
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV_500) : BloodIV_500
	{
		items[] = { "332nd_aux_medical_BIV_500" };
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV_250) : BloodIV_250
	{
		items[] = { "332nd_aux_medical_BIV_250" };
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV) : PlasmaIV
	{
		items[] = { "332nd_aux_medical_PIV" };
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV_500) : PlasmaIV_500
	{
		items[] = { "332nd_aux_medical_PIV_500" };
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV_250) : PlasmaIV_250
	{
		items[] = { "332nd_aux_medical_PIV_250" };
	};
	class MACRO_NEW_MEDICAL_ITEM(SIV) : SalineIV
	{
		items[] = { "332nd_aux_medical_SIV" };
	};
	class MACRO_NEW_MEDICAL_ITEM(SIV_500) : SalineIV_500
	{
		items[] = { "332nd_aux_medical_SIV_500" };
	};
	class MACRO_NEW_MEDICAL_ITEM(SIV_250) : SalineIV_250
	{
		items[] = { "332nd_aux_medical_SIV_250" };
	};
	class MACRO_NEW_MEDICAL_ITEM(EMed) : Epinephrine
	{
		items[] = { "332nd_aux_medical_EMed" };
	};
	class MACRO_NEW_MEDICAL_ITEM(MMed) : Morphine
	{
		items[] = { "332nd_aux_medical_MMed" };
	};
	class MACRO_NEW_MEDICAL_ITEM(SurgKit) : SurgicalKit
	{
		items[] = { "332nd_aux_medical_SurgKit" };
	};
};

class CfgWeapons
{
	class ACE_elasticBandage;
	class ACE_packingBandage;
	class ACE_quikclot;
	class ACE_bloodIV;
	class ACE_bloodIV_500;
	class ACE_bloodIV_250;
	class ACE_plasmaIV;
	class ACE_plasmaIV_500;
	class ACE_plasmaIV_250;
	class ACE_salineIV;
	class ACE_salineIV_500;
	class ACE_salineIV_250;
	class ACE_epinephrine;
	class ACE_morphine;
	class ACE_surgicalKit;
	class CBA_MiscItem_ItemInfo;

	class MACRO_NEW_MEDICAL_ITEM(EBandage) : ACE_elasticBandage
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Bandage (Elastic))
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\medikit_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\medikit.p3d";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PBandage) : ACE_packingBandage
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Bandage (Packing))
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\electrolit_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\electrolit.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(QBandage) : ACE_quikclot
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Bandage (Quikclot))
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\deathstick_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\deathstick.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV) : ACE_bloodIV
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Blood IV)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_red_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(1,0,0,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV_500) : ACE_bloodIV_500
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Blood IV 500)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_red_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(1,0,0,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV_250) : ACE_bloodIV_250
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Blood IV 250)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_red_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(1,0,0,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV) : ACE_plasmaIV
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Plasma IV)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV_500) : ACE_plasmaIV_500
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Plasma IV 500)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV_250) : ACE_plasmaIV_250
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Plasma IV 250)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(SIV) : ACE_salineIV
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Saline)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_kolto_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_kolto_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(SIV_500) : ACE_salineIV_500
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Saline IV 500)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_kolto_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_kolto_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(SIV_250) : ACE_salineIV_250
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Saline IV 250)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_kolto_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_kolto_co.paa",
			"#(argb,8,8,3)color(0,0.8,1,0.8,co)"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(EMed) : ACE_epinephrine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Epinephrine)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\stimulant_echani_battle_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";

		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_echani_battle_co.paa"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(MMed) : ACE_morphine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Morphine)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\stimulant_battle_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";

		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_battle_co.paa"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(SurgKit) : ACE_surgicalKit
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Surgical Kit)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Intel\data\ui\briefcase_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Intel\briefcase.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};

	