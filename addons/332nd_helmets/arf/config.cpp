#include "../../332nd_main/macros/main.hpp"

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
            MACRO_NEW_HELMET(arf,332nd_recon),
			MACRO_NEW_HELMET(arf,332nd_recon_woodland),
			MACRO_NEW_HELMET(arf,332nd_recon_desert),
			MACRO_NEW_HELMET(arf,332nd_recon_urban),
			MACRO_NEW_HELMET(arf,332nd_recon_jungle),
			MACRO_NEW_HELMET(arf,332nd_recon_snow),
			MACRO_NEW_HELMET(arf,332nd_recon_veteran)
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(arf,base);
	
    MACRO_NEW_ARF_HELMET_ITEM(332nd_recon,332nd Recon,arf_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_woodland,332nd Recon (Woodland),arf_woodland_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_desert,332nd Recon (Desert),arf_desert_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_urban,332nd Recon (Urban/Night-Ops),arf_urban_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_jungle,332nd Recon (Jungle),arf_jungle_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_snow,332nd Recon (Snow),arf_snow_ca.paa)

	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran,332nd Veteran Recon,arf_vet_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_woodland,332nd Veteran Recon (Woodland),arf_vet_woodland_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_desert,332nd Veteran Recon (Desert),arf_vet_desert_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_urban,332nd Veteran Recon (Urban / Night-Ops),arf_vet_urban_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_jungle,332nd Veteran Recon (Jungle),arf_vet_jungle_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_snow,332nd Veteran Recon (Snow),arf_vet_snow_ca.paa)
}