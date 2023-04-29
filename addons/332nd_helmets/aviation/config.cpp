#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(aviation_helmets)
	{
		author = "Namenai";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {

        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(aviation,base);

	//pilots

	
}