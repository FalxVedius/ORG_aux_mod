#include "../../ORG_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(barc_helmets)
	{
		author = "ORG Aux Mod team";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            // helmets

        };
		weapons[] = {};
	};
};

class CfgWeapons
{
	// ---- Helmets ----

	class MACRO_NEW_HELMET(barc,base);


};