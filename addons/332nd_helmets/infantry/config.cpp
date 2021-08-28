#include "../../332nd_main/macros/main.hpp"

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
            MACRO_NEW_HELMET(infantry,332nd_trooper),
			MACRO_NEW_HELMET(infantry,poseidon),
			MACRO_NEW_HELMET(infantry,332nd_veteran_trooper),
			MACRO_NEW_HELMET(infantry,332nd_Sergeant),
			MACRO_NEW_HELMET(infantry,332nd_trooper_original),
			MACRO_NEW_HELMET(infantry,george),
            MACRO_NEW_HELMET(infantry,Halligan),
			MACRO_NEW_HELMET(infantry,Riddle),
			MACRO_NEW_HELMET(infantry,Hoggy),
			MACRO_NEW_HELMET(infantry,Cross),
			MACRO_NEW_HELMET(infantry,Falx),
			MACRO_NEW_HELMET(infantry,Deserter),
			MACRO_NEW_HELMET(infantry,Poseidon_V1),
			MACRO_NEW_HELMET(infantry,Frost),
			MACRO_NEW_HELMET(infantry,332nd_recruit),
			MACRO_NEW_HELMET(infantry,Rev),
			MACRO_NEW_HELMET(infantry,Bugs),
			MACRO_NEW_HELMET(infantry,Marshal),
			MACRO_NEW_HELMET(infantry,Lasagna),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(infantry,base);

	MACRO_NEW_INF_HELMET_ITEM_RECRUIT(332nd_recruit,332nd Recruit)
    MACRO_NEW_INF_HELMET_ITEM(332nd_trooper,332nd Trooper,332nd Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_veteran_trooper,332nd Veteran Trooper,332nd Veteran Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_sergeant,332nd Sergeant,332nd Sergeant Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_trooper_original,332nd Original,332nd_Original_Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(poseidon,Poseidon,Poseidon.paa)
	MACRO_NEW_INF_HELMET_ITEM(george,George,George.paa)
    MACRO_NEW_INF_HELMET_ITEM(Halligan,Halligan,Halligan.paa)
	MACRO_NEW_INF_HELMET_ITEM(Riddle,Riddle,Riddle.paa)
	MACRO_NEW_INF_HELMET_ITEM(Hoggy,Hoggy,Hoggy.paa)
	MACRO_NEW_INF_HELMET_ITEM(Poseidon_V1,Poseidon_V1,Poseidon_V1.paa)
	MACRO_NEW_INF_HELMET_ITEM(Cross,Cross,Cross.paa)
	MACRO_NEW_INF_HELMET_ITEM(Falx,Falx,Falx.paa)
	MACRO_NEW_INF_HELMET_ITEM(Frost,Frost,Frost.paa)
	MACRO_NEW_INF_HELMET_ITEM(Deserter,Deserter,332nd_Rebal_Helmet_phase_2_ca.paa)
	MACRO_NEW_INF_HELMET_ITEM(Rev,Rev,Rev.paa)
	MACRO_NEW_INF_HELMET_ITEM(Bugs,Bugs,Bugs.paa)
	MACRO_NEW_INF_HELMET_ITEM(Marshal,Marshal,Marshal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Lasagna,Lasagna,Lasagna.paa)
};
