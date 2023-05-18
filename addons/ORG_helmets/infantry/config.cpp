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
			MACRO_NEW_HELMET(infantry,recruit),
            MACRO_NEW_HELMET(infantry,trooper),
			MACRO_NEW_HELMET(infantry,veteran),
			MACRO_NEW_HELMET(infantry,Specialist),
			MACRO_NEW_HELMET(infantry,nco),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(infantry,base);
	class MACRO_NEW_HELMET(engineer,base);

	MACRO_NEW_INF_HELMET_ITEM(recruit,Recruit,Recruit.paa)
    MACRO_NEW_INF_HELMET_ITEM(trooper,Trooper,Trooper.paa)
	MACRO_NEW_INF_HELMET_ITEM(veteran,Veteran Trooper,Veteran.paa)
	MACRO_NEW_INF_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_INF_HELMET_ITEM(nco,NCO,Nco.paa)

};
