#include "../../ORG_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(airborne_helmets)
	{
		author = "ORG Aux Team";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            // helmets
			MACRO_NEW_HELMET(airborne,recruit),
			MACRO_NEW_HELMET(airborne,trooper),
			MACRO_NEW_HELMET(airborne,veteran),
			MACRO_NEW_HELMET(airborne,Specialist),
			MACRO_NEW_HELMET(airborne,nco),
			MACRO_NEW_HELMET(airborne,recruit_P2),
			MACRO_NEW_HELMET(airborne,trooper_P2),
			MACRO_NEW_HELMET(airborne,veteran_P2),
			MACRO_NEW_HELMET(airborne,Specialist_P2),
			MACRO_NEW_HELMET(airborne,nco_P2),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(airborne,base);
	class MACRO_NEW_HELMET(airborne_P2,base);

	//Phase 1
	MACRO_NEW_AB_HELMET_ITEM(trooper,Trooper,Trooper.paa)
	MACRO_NEW_AB_HELMET_ITEM(veteran,Veteran Trooper,Veteran.paa)
	MACRO_NEW_AB_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_AB_HELMET_ITEM(nco,NCO,Nco.paa)

	//Phase 2
	MACRO_NEW_AB_P2_HELMET_ITEM(trooper_P2,Trooper,Trooper_P2.paa)
	MACRO_NEW_AB_P2_HELMET_ITEM(veteran_P2,Veteran Trooper,Veteran_P2.paa)
	MACRO_NEW_AB_P2_HELMET_ITEM(Specialist_P2,Specialist,Specialist_P2.paa)
	MACRO_NEW_AB_P2_HELMET_ITEM(nco_P2,NCO,Nco_P2.paa)
};