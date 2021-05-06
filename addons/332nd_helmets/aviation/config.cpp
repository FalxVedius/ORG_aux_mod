#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(aviation_helmets)
	{
		author = "Namenai";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_HELMET(aviation,332nd_pilot),
			MACRO_NEW_HELMET(warden,332nd_warden),
			MACRO_NEW_HELMET(aviation,332nd_aspect),
			MACRO_NEW_HELMET(aviation,332nd_blast),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(aviation,base);
	class MACRO_NEW_HELMET(warden,base);

	//pilots
    MACRO_NEW_AVIATION_HELMET_ITEM(332nd_pilot,332nd Pilot,Pilot.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(332nd_aspect,Aspect,Aspect.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(332nd_blast,Blast,Blast.paa)
	
	//warden
	MACRO_NEW_WARDEN_HELMET_ITEM(332nd_warden,332nd Warden,warden.paa)
}