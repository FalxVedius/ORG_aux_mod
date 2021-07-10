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

		class MACRO_NEW_MEDICAL_ITEM(BactaSpray) : ElasticBandage
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PlastiBandage) : PackingBandage
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(MedPatch) : QuikClot
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(MediKit) : ElasticBandage
		{

		};
	};

	class IV
	{
		class BloodIV;

		class MACRO_NEW_MEDICAL_ITEM(Blood) : BloodIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(Bacta) : BloodIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(Kolto) : BloodIV
		{

		};
	};

	class Medication
	{
		class Epinephrine;
		class Morphine;

		class MACRO_NEW_MEDICAL_ITEM(Adrenaline) : Epinephrine
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PainKiller) : Morphine
		{
			hrIncreaseHigh[] =
			{
				-1,
				-2
			};
			hrIncreaseLow[] =
			{
				-1,
				-2
			};
			hrIncreaseNormal[] =
			{
				-1,
				-2
			};
			incompatibleMedication[] = {};
			maxDose = 10;
			painReduce = 1.0;
			timeInSystem = 120;
			timeTillMaxEffect = 30;
			viscosityChange = -1;
		};
		class MACRO_NEW_MEDICAL_ITEM(PainKillerBottle) : Morphine
		{
			hrIncreaseHigh[] =
			{
				-1,
				-2
			};
			hrIncreaseLow[] =
			{
				-1,
				-2
			};
			hrIncreaseNormal[] =
			{
				-1,
				-2
			};
			incompatibleMedication[] = {};
			maxDose = 10;
			painReduce = 1.0;
			timeInSystem = 120;
			timeTillMaxEffect = 30;
			viscosityChange = -1;
		};
		class MACRO_NEW_MEDICAL_ITEM(Bacta_Inj) : Epinephrine
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(Kolto_Inj) : Epinephrine
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(Combat) : Epinephrine
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
	class Epinephrine;
	class Morphine;
	class SurgicalKit;
	class ApplyTourniquet;
	class RemoveTourniquet;

	class MACRO_NEW_MEDICAL_ITEM(BactaSpray) : ElasticBandage
	{
		items[] = { "332nd_aux_medical_BactaSpray" };

		displayName = "Bacta Spray";
		displayNameProgress = "Spraying...";
	};
	class MACRO_NEW_MEDICAL_ITEM(PlastiBandage) : PackingBandage
	{
		items[] = { "332nd_aux_medical_PlastiBandage" };

		displayName = "Plasti Bandage";
		displayNameProgress = "Bandaging...";
	};
	class MACRO_NEW_MEDICAL_ITEM(MedPatch) : QuikClot
	{
		items[] = { "332nd_aux_medical_MedPatch" };

		displayName = "Med-Patch";
		displayNameProgress = "Patching...";
	};
	class MACRO_NEW_MEDICAL_ITEM(Bacta) : BloodIV
	{
		items[] = { "332nd_aux_medical_Bacta" };

		displayName = "Bacta Tank";
		displayNameProgress = "Transfusing Bacta...";

		litter[] = { {}, { "332nd_aux_medical_Blood_Litter"} };
	};
	class MACRO_NEW_MEDICAL_ITEM(Blood) : BloodIV
	{
		items[] = { "332nd_aux_medical_Blood" };

		displayName = "Blood Tank";
		displayNameProgress = "Transfusing Blood...";

		litter[] = { {}, { "332nd_aux_medical_Blood_Litter"} };
	};
	class MACRO_NEW_MEDICAL_ITEM(Kolto) : BloodIV
	{
		items[] = { "332nd_aux_medical_Kolto" };

		displayName = "Kolto Tank";
		displayNameProgress = "Transfusing Kolto...";

		litter[] = { {}, { "332nd_aux_medical_Kolto_Litter"} };
	};
	class MACRO_NEW_MEDICAL_ITEM(Adrenaline) : Epinephrine
	{
		items[] = { "332nd_aux_medical_Adrenaline" };

		displayName = "Adrenaline Injector";
		displayNameProgress = "Injecting Adrenaline...";

		litter[] = { {}, { "332nd_aux_medical_Adrenaline_Litter"} };
	};
	class MACRO_NEW_MEDICAL_ITEM(PainKiller) : Morphine
	{
		items[] = { "332nd_aux_medical_PainKiller" };

		displayName = "Pain Killer Stimulant";
		displayNameProgress = "Injecting Stimulant...";

		litter[] = { {}, { "332nd_aux_medical_PainKiller_Litter"} };
	};
	class MACRO_NEW_MEDICAL_ITEM(PainKillerBottle) : Morphine
	{
		items[] = { "332nd_aux_medical_PainKillerBottle" };

		consumeItem = 0;
		medicRequired = 1;
		displayName = "Pain Killer Bottle";
		displayNameProgress = "Injecting Stimulant...";
	};
	class MACRO_NEW_MEDICAL_ITEM(Mechnosuture) : SurgicalKit
	{
		items[] = { "332nd_aux_medical_Mechnosuture" };

		displayName = "Use Mechnosuture Kit";
		displayNameProgress = "Stitching...";
	};
	class MACRO_NEW_MEDICAL_ITEM(ApplyPressureCuff) : ApplyTourniquet
	{
		items[] = { "332nd_aux_medical_PressureCuff" };

		displayName = "Apply Pressure Cuff";
		displayNameProgress = "Applying Pressure Cuff...";
	};
	class MACRO_NEW_MEDICAL_ITEM(RemovePressureCuff) : RemoveTourniquet
	{
		items[] = { "" };

		displayName = "Remove Pressure Cuff";
		displayNameProgress = "Removing Pressure Cuff...";
	};
	class MACRO_NEW_MEDICAL_ITEM(MediKit) : ElasticBandage
	{
		items[] = { "332nd_aux_medical_MediKit" };

		medicRequired = 1;

		displayName = "Medi-Kit";
		displayNameProgress = "Bandaging...";
	};
	class MACRO_NEW_MEDICAL_ITEM(Bacta_Inj) : Epinephrine
	{
		items[] = { "332nd_aux_medical_Bacta_Inj" };

		medicRequired = 1;
		displayName = "Bacta Injector";
		displayNameProgress = "Injecting Bacta...";
	};
	class MACRO_NEW_MEDICAL_ITEM(Kolto_Inj) : Epinephrine
	{
		items[] = { "332nd_aux_medical_Kolto_Inj" };

		medicRequired = 1;
		displayName = "Kolto Injector";
		displayNameProgress = "Injecting Kolto...";
	};
	class MACRO_NEW_MEDICAL_ITEM(Combat) : Epinephrine
	{
		items[] = { "332nd_aux_medical_Combat" };

		displayName = "Combat Stimulant";
		displayNameProgress = "Injecting Stimulant...";
	};
};

class CfgWeapons
{
	class ACE_elasticBandage;
	class ACE_packingBandage;
	class ACE_quikclot;
	class ACE_bloodIV;
	class ACE_epinephrine;
	class ACE_morphine;
	class ACE_surgicalKit;
	class ACE_tourniquet;
	class CBA_MiscItem_ItemInfo;

	class MACRO_NEW_MEDICAL_ITEM(BactaSpray) : ACE_elasticBandage
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Bacta Spray)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\medikit_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\medikit.p3d";
		
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(MediKit) : ACE_elasticBandage
	{
		scope = 2;
		scopeArsenal = 0;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Medi-Kit)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\medikit_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\medikit.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PlastiBandage) : ACE_packingBandage
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Plasti Bandage)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\electrolit_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\electrolit.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(MedPatch) : ACE_quikclot
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Med-Patch)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Drugs\data\ui\deathstick_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\deathstick.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Blood) : ACE_bloodIV
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Blood Tank)
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
			mass = 10;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Bacta) : ACE_bloodIV
	{
		scope = 2;
		scopeArsenal = 0;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Bacta Tank)
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
			mass = 10;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Kolto) : ACE_bloodIV
	{
		scope = 2;
		scopeArsenal = 0;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Kolto Tank)
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
			mass = 10;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Adrenaline) : ACE_epinephrine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Adrenaline Injector)
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
	class MACRO_NEW_MEDICAL_ITEM(Bacta_Inj) : ACE_epinephrine
	{
		scope = 2;
		scopeArsenal = 0;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Bacta Injector)
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
	class MACRO_NEW_MEDICAL_ITEM(Kolto_Inj) : ACE_epinephrine
	{
		scope = 2;
		scopeArsenal = 0;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Kolto Injector)
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
	class MACRO_NEW_MEDICAL_ITEM(Combat) : ACE_epinephrine
	{
		scope = 2;
		scopeArsenal = 0;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Combat Stimulant)
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
	class MACRO_NEW_MEDICAL_ITEM(PainKiller) : ACE_morphine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Pain Killer Stimulant)
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
	class MACRO_NEW_MEDICAL_ITEM(PainKillerBottle) : ACE_morphine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Pain Killer Bottle)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "";
		model = "LS_statics_props\bottle\bottle.p3d";

		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"LS_statics_props\bottle\data\firstshot_co.paa"
		};

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Mechnosuture) : ACE_surgicalKit
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Mechnosuture Kit)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		picture = "\MRC\JLTS\contraband\Intel\data\ui\briefcase_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Intel\briefcase.p3d";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 15;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PressureCuff) : ACE_tourniquet
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Pressure Cuff)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";

		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};

class CfgVehicles
{
	class ACE_MedicalLitterBase;

	class MACRO_NEW_MEDICAL_ITEM(Blood_Litter) : ACE_MedicalLitterBase
	{
		scope = 2;
		scopeArsenal = 0;

		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Blood Tank Litter)

		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_co.paa",
			""
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Kolto_Litter) : ACE_MedicalLitterBase
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Kolto Tank Litter)

		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";

		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\bacta_kolto_co.paa",
			""
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(Adrenaline_Litter) : ACE_MedicalLitterBase
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Adrenaline Injector Litter)

		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";

		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_echani_battle_co.paa"
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PainKiller_Litter) : ACE_MedicalLitterBase
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Pain Killer Stimulant Litter)

		model = "\MRC\JLTS\contraband\Drugs\stimulant.p3d";

		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"\MRC\JLTS\contraband\Drugs\data\stimulant_battle_co.paa"
		};
	};
};

	