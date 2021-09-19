#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(airborne_helmets)
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
            MACRO_NEW_HELMET(ab,332nd_airborne),
			MACRO_NEW_HELMET(ab,332nd_airborne_veteran),
			MACRO_NEW_HELMET(ab,Chronic),
			MACRO_NEW_HELMET(ab,Griif),
			MACRO_NEW_HELMET(ab,Sazi),
			MACRO_NEW_HELMET(ab,Cutter)
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(airborne,base);

    MACRO_NEW_AB_HELMET_ITEM(332nd_airborne,Airborne,AB.paa)
	MACRO_NEW_AB_HELMET_ITEM(332nd_airborne_veteran,Airborne Veteran,AB_Vet_Helmet.paa)
	MACRO_NEW_AB_HELMET_ITEM(Chronic,Chronic,Chronic.paa)
	MACRO_NEW_AB_HELMET_ITEM(Griif,Griif,Griif.paa)
	MACRO_NEW_AB_HELMET_ITEM(Sazi,Sazi,Sazi.paa)
	MACRO_NEW_AB_HELMET_ITEM(Cutter,Cutter,Cutter.paa)
};