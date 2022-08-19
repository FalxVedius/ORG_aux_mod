#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(assault_helmets)
	{
		author = "Falx";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            // helmets
			MACRO_NEW_HELMET(assault,332nd_trooper),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(assault,base);

	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_trooper,Trooper,Trooper.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_veteran,Veteran,Veteran.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_specialist,Specialist,Specialist.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_corporal,Corporal,Corporal.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_sergeant,Sergeant,Sergeant.paa)
};
