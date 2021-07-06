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
		class PlasmaIV;
		class SalineIV;

		class MACRO_NEW_MEDICAL_ITEM(BIV) : BloodIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(PIV) : PlasmaIV
		{

		};
		class MACRO_NEW_MEDICAL_ITEM(SIV) : SalineIV
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
	class PlasmaIV;
	class SalineIV;
	class Epinephrine;
	class Morphine;
	class SurgicalKit;

	class MACRO_NEW_MEDICAL_ITEM(EBandage) : ElasticBandage
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(PBandage) : PackingBandage
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(QBandage) : QuikClot
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(BIV) : BloodIV
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(PIV) : PlasmaIV
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(SIV) : SalineIV
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(EMed) : Epinephrine
	{

	};
	class MACRO_NEW_MEDICAL_ITEM(MMed) : Morphine
	{

	};
	//class OPTRE_Medigel : ElasticBandage
	//{
	//	displayName = "Apply Medigel";
	//	displayNameProgress = "Applying Medigel...";
	//	treatmentTime = 5;
	//	items[] =
	//	{
	//		"OPTRE_Medigel"
	//	};
	//	callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
	//	icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
	//	litter[] =
	//	{
	//		{},
	//
	//		{
	//			"ACE_MedicalLitter_Medigel"
	//		}
	//	};
	//};
	//class OPTRE_Biofoam : ElasticBandage
	//{
	//	displayName = "Inject Biofoam";
	//	displayNameProgress = "Injecting Biofoam...";
	//	treatmentTime = 8;
	//	items[] =
	//	{
	//		"OPTRE_Biofoam"
	//	};
	//	callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
	//	animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
	//	icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
	//	litter[] =
	//	{
	//		{},
	//
	//		{
	//			"ACE_MedicalLitter_Biofoam"
	//		}
	//	};
	//};
};

class CfgWeapons
{
	class ACE_elasticBandage;
	class ACE_packingBandage;
	class ACE_quikclot;
	class ACE_bloodIV;
	class ACE_plasmaIV;
	class ACE_salineIV;
	class ACE_epinephrine;
	class ACE_morphine;
	class CBA_MiscItem_ItemInfo;

	class MACRO_NEW_MEDICAL_ITEM(EBandage) : ACE_elasticBandage
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Elastic Bandage)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PBandage) : ACE_packingBandage
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Packing Bandage)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(QBandage) : ACE_quikclot
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Quikclot)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(BIV) : ACE_bloodIV
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Blood)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(PIV) : ACE_plasmaIV
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Plasma)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
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
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(EMed) : ACE_epinephrine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Epi)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
	class MACRO_NEW_MEDICAL_ITEM(MMed) : ACE_morphine
	{
		scope = 2;
		author = MACRO_AUTHOR;
		displayName = MACRO_MEDICAL_ITEM_DISPLAYNAME(Morph)
		descriptionShort = "332nd Healing";
		descriptionUse = "Injecting 332nd";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};

	