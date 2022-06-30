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
			//MACRO_NEW_HELMET(ab,Griif),
			//MACRO_NEW_HELMET(ab,Sigma),
			MACRO_NEW_HELMET(ab,Beast),
			MACRO_NEW_HELMET(ab,Screw),
			MACRO_NEW_HELMET(ab,Corporal),
			MACRO_NEW_HELMET(ab,Specialist),
			MACRO_NEW_HELMET(ab,Sergeant),
			//MACRO_NEW_HELMET(ab,Halligan),
			MACRO_NEW_HELMET(ab,Dets),
			MACRO_NEW_HELMET(ab,Dark),
			MACRO_NEW_HELMET(ab,Sentinel),
			MACRO_NEW_HELMET(ab,Raven),
			MACRO_NEW_HELMET(ab,Veta),
			MACRO_NEW_HELMET(ab,Grey),
			MACRO_NEW_HELMET(ab,Shock),
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
	//MACRO_NEW_AB_HELMET_ITEM(Griif,Griif,Griif.paa)
	//MACRO_NEW_AB_HELMET_ITEM(Sigma,Sigma,Sigma.paa)
	MACRO_NEW_AB_HELMET_ITEM(Beast,Beast,Beast.paa)
	MACRO_NEW_AB_HELMET_ITEM(Screw,Screw,Screw.paa)
	MACRO_NEW_AB_HELMET_ITEM(Corporal,Corporal,Corporal.paa)
	MACRO_NEW_AB_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_AB_HELMET_ITEM(Sergeant,Sergeant,Sergeant.paa)
	//MACRO_NEW_AB_HELMET_ITEM(Halligan,Halligan,Halligan.paa)
	MACRO_NEW_AB_HELMET_ITEM(Dets,Dets,Dets.paa)
	MACRO_NEW_AB_HELMET_ITEM(Dark,Dark,Dark.paa)
	MACRO_NEW_AB_HELMET_ITEM(Sentinel,Sentinel,Sentinel.paa)
	MACRO_NEW_AB_HELMET_ITEM(Raven,Raven,Raven.paa)
	MACRO_NEW_AB_HELMET_ITEM(Veta,Veta,Veta.paa)
	MACRO_NEW_AB_HELMET_ITEM(Grey,Grey,Grey.paa)
	MACRO_NEW_AB_HELMET_ITEM(Shock,Shock,Shock.paa)
};