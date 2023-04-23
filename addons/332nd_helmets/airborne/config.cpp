#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(airborne_helmets)
	{
		author = "332nd Aux Team";
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
			MACRO_NEW_HELMET(ab,Corporal),
			MACRO_NEW_HELMET(ab,Specialist),
			MACRO_NEW_HELMET(ab,Sergeant),
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
	MACRO_NEW_AB_HELMET_ITEM(Corporal,Corporal,Corporal.paa)
	MACRO_NEW_AB_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_AB_HELMET_ITEM(Sergeant,Sergeant,Sergeant.paa)
};