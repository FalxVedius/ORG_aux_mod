#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(barc_helmets)
	{
		author = "332nd Aux Mod team";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            // helmets
            MACRO_NEW_HELMET(barc,Trooper),
			MACRO_NEW_HELMET(barc,Veteran),
			MACRO_NEW_HELMET(barc,Specialist),
			MACRO_NEW_HELMET(barc,Corporal),
			MACRO_NEW_HELMET(barc,Sergeant),
			MACRO_NEW_HELMET(barc,Lasagna),
			MACRO_NEW_HELMET(barc,Qrow),
			MACRO_NEW_HELMET(barc,Spacy),
			MACRO_NEW_HELMET(barc,Cutter),
			MACRO_NEW_HELMET(barc,Royal),
			MACRO_NEW_HELMET(barc, Print),
			MACRO_NEW_HELMET(barc, Beast),
			MACRO_NEW_HELMET(barc, Hoggy),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
	// ---- Helmets ----

	class MACRO_NEW_HELMET(barc,base);

	MACRO_NEW_BARC_HELMET_ITEM(Trooper,Trooper,Trooper.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Veteran,Veteran,Veteran.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Corporal,Corporal,Corporal.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Sergeant,Sergeant,Sergeant.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Lasagna,Lasagna,Lasagna.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Qrow,Qrow,Qrow.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Spacy,Spacy,Spacy.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Cutter,Cutter,Cutter.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Royal,Royal,Royal.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Print,Print,Print.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Beast,Beast,Beast.paa)
	MACRO_NEW_BARC_HELMET_ITEM(Hoggy,Hoggy,Hoggy.paa)
	
};