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
			MACRO_NEW_HELMET(assault,332nd_veteran),
			MACRO_NEW_HELMET(assault,332nd_specialist),
			MACRO_NEW_HELMET(assault,332nd_corporal),
			MACRO_NEW_HELMET(assault,332nd_sergeant),
			MACRO_NEW_HELMET(assault,Monty),
			MACRO_NEW_HELMET(assault,Tally),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(assault,base);

	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_trooper,Trooper,Trooper.paa,KatarnVisor.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_veteran,Veteran,Veteran.paa,KatarnVisor.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_specialist,Specialist,Specialist.paa,KatarnVisor.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_corporal,Corporal,Corporal.paa,KatarnVisor.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(332nd_sergeant,Sergeant,Sergeant.paa,KatarnVisor.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(Monty,Monty,Monty.paa,Monty.paa)
	MACRO_NEW_ASSAULT_HELMET_ITEM(Tally,Tally,Tally.paa,Tally.paa)
};
