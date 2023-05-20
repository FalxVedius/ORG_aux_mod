#include "../../ORG_main/macros/main.hpp"

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
			MACRO_NEW_HELMET(infantry,recruit_P2),
			MACRO_NEW_HELMET(infantry,trooper_P2),
			MACRO_NEW_HELMET(infantry,veteran_P2),
			MACRO_NEW_HELMET(infantry,Specialist_P2),
			MACRO_NEW_HELMET(infantry,nco_P2),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(infantry,base);
	class MACRO_NEW_HELMET(infantry_P2,base);
	class MACRO_NEW_HELMET(engineer,base);

	//Phase 1
	MACRO_NEW_INF_HELMET_ITEM(recruit,Recruit,Recruit.paa)
    MACRO_NEW_INF_HELMET_ITEM(trooper,Trooper,Trooper.paa)
	MACRO_NEW_INF_HELMET_ITEM(veteran,Veteran Trooper,Veteran.paa)
	MACRO_NEW_INF_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_INF_HELMET_ITEM(nco,NCO,Nco.paa)

	//Phase 2
	MACRO_NEW_INF_P2_HELMET_ITEM(recruit_P2,Recruit,Recruit_P2.paa)
	MACRO_NEW_INF_P2_HELMET_ITEM(trooper_P2,Trooper,Trooper_P2.paa)
	MACRO_NEW_INF_P2_HELMET_ITEM(veteran_P2,Veteran Trooper,Veteran_P2.paa)
	MACRO_NEW_INF_P2_HELMET_ITEM(Specialist_P2,Specialist,Specialist_P2.paa)
	MACRO_NEW_INF_P2_HELMET_ITEM(nco_P2,NCO,Nco_P2.paa)

};
