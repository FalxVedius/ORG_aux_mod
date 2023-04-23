#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(infantry_helmets)
	{
		author = "Namenai";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            // helmets
			MACRO_NEW_HELMET(infantry,332nd_recruit),
            MACRO_NEW_HELMET(infantry,332nd_trooper),
			MACRO_NEW_HELMET(infantry,332nd_veteran_trooper),
			MACRO_NEW_HELMET(infantry,332nd_Sergeant),
			MACRO_NEW_HELMET(infantry,332nd_trooper_original),
			MACRO_NEW_HELMET(infantry,Corporal),
			MACRO_NEW_HELMET(infantry,Specialist),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(infantry,base);
	class MACRO_NEW_HELMET(engineer,base);

	MACRO_NEW_INF_HELMET_ITEM(332nd_recruit,Recruit,332nd_Recruit.paa)
    MACRO_NEW_INF_HELMET_ITEM(332nd_trooper,Trooper,332nd Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_veteran_trooper,Veteran Trooper,332nd Veteran Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_sergeant,Sergeant,332nd Sergeant Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_trooper_original,Original,332nd_Original_Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(Corporal,Corporal,Corporal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
};
