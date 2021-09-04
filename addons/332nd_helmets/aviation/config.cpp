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
			MACRO_NEW_HELMET(aviation,332nd_blast),
			MACRO_NEW_HELMET(aviation,Dragneel),
			MACRO_NEW_HELMET(aviation,Chopper),
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
    MACRO_NEW_AVIATION_HELMET_ITEM(332nd_pilot,Pilot,Pilot.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(332nd_blast,Blast,Blast.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Dragneel,Dragneel,Dragneel.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Chopper,Chopper,Chopper.paa)
	
	//warden
	MACRO_NEW_WARDEN_HELMET_ITEM(332nd_warden,Warden,warden.paa)
}