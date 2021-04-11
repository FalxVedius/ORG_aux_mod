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
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(airborne,base);

    MACRO_NEW_AB_HELMET_ITEM(332nd_airborne,332nd Airborne,AB.paa)
}