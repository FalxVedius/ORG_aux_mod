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
			MACRO_NEW_HELMET(arf,332nd_recon_veteran),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(arf,base);
	class MACRO_NEW_HELMET(arfcustom,base);
	
    MACRO_NEW_ARF_HELMET_ITEM(332nd_recon,Recon,arf_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_woodland,Recon (Woodland),arf_woodland_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_desert,Recon (Desert),arf_desert_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_urban,Recon (Urban/Night-Ops),arf_urban_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_jungle,Recon (Jungle),arf_jungle_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_snow,Recon (Snow),arf_snow_ca.paa)

	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran,Veteran Recon,arf_vet_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_woodland,Veteran Recon (Woodland),arf_vet_woodland_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_desert,Veteran Recon (Desert),arf_vet_desert_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_urban,Veteran Recon (Urban/Night-Ops),arf_vet_urban_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_jungle,Veteran Recon (Jungle),arf_vet_jungle_ca.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_snow,Veteran Recon (Snow),arf_vet_snow_ca.paa)

	MACRO_NEW_ARF_HELMET_ITEM(Moca,Moca,Moca.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Wood,Moca Woodland,Moca_Wood.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Des,Moca Desert,Moca_Des.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Jung,Moca Jungle,Moca_Jung.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Snow,Moca Snow,Moca_Snow.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Urb,Moca Urban,Moca_Urb.paa)
}