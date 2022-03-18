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
			MACRO_NEW_HELMET(arf,332nd_recon_veteran_woodland),
			MACRO_NEW_HELMET(arf,332nd_recon_veteran_desert),
			MACRO_NEW_HELMET(arf,332nd_recon_veteran_urban),
			MACRO_NEW_HELMET(arf,332nd_recon_veteran_jungle),
			MACRO_NEW_HELMET(arf,332nd_recon_veteran_snow),
			MACRO_NEW_HELMET(arf,332nd_recon_Spec),
			MACRO_NEW_HELMET(arf,332nd_recon_Spec_woodland),
			MACRO_NEW_HELMET(arf,332nd_recon_Spec_desert),
			MACRO_NEW_HELMET(arf,332nd_recon_Spec_urban),
			MACRO_NEW_HELMET(arf,332nd_recon_Spec_jungle),
			MACRO_NEW_HELMET(arf,332nd_recon_Spec_snow),
			MACRO_NEW_HELMET(arf,332nd_recon_Corp),
			MACRO_NEW_HELMET(arf,332nd_recon_Corp_woodland),
			MACRO_NEW_HELMET(arf,332nd_recon_Corp_desert),
			MACRO_NEW_HELMET(arf,332nd_recon_Corp_urban),
			MACRO_NEW_HELMET(arf,332nd_recon_Corp_jungle),
			MACRO_NEW_HELMET(arf,332nd_recon_Corp_snow),
			MACRO_NEW_HELMET(arf,332nd_recon_Serg),
			MACRO_NEW_HELMET(arf,332nd_recon_Serg_woodland),
			MACRO_NEW_HELMET(arf,332nd_recon_Serg_desert),
			MACRO_NEW_HELMET(arf,332nd_recon_Serg_urban),
			MACRO_NEW_HELMET(arf,332nd_recon_Serg_jungle),
			MACRO_NEW_HELMET(arf,332nd_recon_Serg_snow),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(arf,base);
	class MACRO_NEW_HELMET(arfcustom,base);
	
    MACRO_NEW_ARF_HELMET_ITEM(332nd_recon,Recon,Trooper_Base.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_woodland,Recon (Woodland),Trooper_Woodland.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_desert,Recon (Desert),Trooper_Desert.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_urban,Recon (Urban/Night-Ops),Trooper_Urban.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_jungle,Recon (Jungle),Trooper_Jungle.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_snow,Recon (Snow),Trooper_Snow.paa)

	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran,Veteran Recon,Vet_Base.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_woodland,Veteran Recon (Woodland),Vet_Woodland.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_desert,Veteran Recon (Desert),Vet_Desert.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_urban,Veteran Recon (Urban/Night-Ops),Vet_Urban.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_jungle,Veteran Recon (Jungle),Vet_Jungle.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_veteran_snow,Veteran Recon (Snow),Vet_Snow.paa)

	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Spec,Specialist Recon,Spec_Base.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Spec_woodland,Specialist Recon(Woodland),Spec_Woodland.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Spec_desert,Specialist Recon(Desert),Spec_Desert.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Spec_urban,Specialist Recon(Urban / Night - Ops),Spec_Urban.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Spec_jungle,Specialist Recon(Jungle),Spec_Jungle.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Spec_snow,Specialist Recon(Snow),Spec_Snow.paa)

	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Corp,Corporal Recon,CP_Base.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Corp_woodland,Corporal Recon(Woodland),CP_Woodland.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Corp_desert,Corporal Recon(Desert),CP_Desert.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Corp_urban,Corporal Recon(Urban / Night - Ops),CP_Urban.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Corp_jungle,Corporal Recon(Jungle),CP_Jungle.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Corp_snow,Corporal Recon(Snow),CP_Snow.paa)

	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Serg,Sergeant Recon,CS_Base.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Serg_woodland,Sergeant Recon(Woodland),CS_Woodland.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Serg_desert,Sergeant Recon(Desert),CS_Desert.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Serg_urban,Sergeant Recon(Urban / Night - Ops),CS_Urban.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Serg_jungle,Sergeant Recon(Jungle),CS_Jungle.paa)
	MACRO_NEW_ARF_HELMET_ITEM(332nd_recon_Serg_snow,Sergeant Recon(Snow),CS_Snow.paa)

	MACRO_NEW_ARF_HELMET_ITEM(Moca,Moca,Moca.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Wood,Moca Woodland,Moca_Wood.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Des,Moca Desert,Moca_Des.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Jung,Moca Jungle,Moca_Jung.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Snow,Moca Snow,Moca_Snow.paa)
	MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(Moca_Urb,Moca Urban,Moca_Urb.paa)
}