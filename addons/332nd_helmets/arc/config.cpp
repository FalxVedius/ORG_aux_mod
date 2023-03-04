#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(arc_helmets)
	{
		author = "Namenai";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {

            MACRO_NEW_HELMET(arc,Arc),
			MACRO_NEW_HELMET(arc,Dovah),

        };
		weapons[] = {};
	};
};

class CfgWeapons
{
	// ---- Helmets ----

	class MACRO_NEW_HELMET(arc,base);

	MACRO_NEW_ARC_HELMET_ITEM(Arc,Arc,Arc.paa)
	MACRO_NEW_ARC_HELMET_ITEM(Dovah,Dovah,Dovah.paa)

}