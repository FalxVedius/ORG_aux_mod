#include "../../ORG_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(recon_helmets)
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

        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(arf,base);
	class MACRO_NEW_HELMET(arfcustom,base);
	

}