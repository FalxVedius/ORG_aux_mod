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
			MACRO_NEW_HELMET(infantry,332nd_veteran_trooper),
			MACRO_NEW_HELMET(infantry,332nd_Sergeant),
			MACRO_NEW_HELMET(infantry,332nd_trooper_original),
			MACRO_NEW_HELMET(infantry,george),
			MACRO_NEW_HELMET(infantry,Riddle),
			MACRO_NEW_HELMET(infantry,Hoggy),
			MACRO_NEW_HELMET(infantry,Falx),
			MACRO_NEW_HELMET(infantry,Deserter),
			MACRO_NEW_HELMET(infantry,Poseidon),
			MACRO_NEW_HELMET(infantry,Frost),
			MACRO_NEW_HELMET(infantry,332nd_recruit),
			MACRO_NEW_HELMET(infantry,Bugs),
			MACRO_NEW_HELMET(infantry,Marshal),
			MACRO_NEW_HELMET(infantry,Lasagna),
			MACRO_NEW_HELMET(infantry,Aspect),
			MACRO_NEW_HELMET(infantry,Beat),
			MACRO_NEW_HELMET(infantry,Grass),
			MACRO_NEW_HELMET(infantry,Dakka),
			MACRO_NEW_HELMET(infantry,King),
			MACRO_NEW_HELMET(infantry,Spacy),
			MACRO_NEW_HELMET(infantry,Church),
			MACRO_NEW_HELMET(infantry,Cutter),
			MACRO_NEW_HELMET(infantry,Tidal),
			MACRO_NEW_HELMET(infantry,Corporal),
			MACRO_NEW_HELMET(infantry,Specialist),
			MACRO_NEW_HELMET(infantry,Deva),
			MACRO_NEW_HELMET(infantry,Vault),
			MACRO_NEW_HELMET(infantry,Xander),
			MACRO_NEW_HELMET(infantry,Sazi),

			//MACRO_NEW_HELMET(infantry,Cross),
			//MACRO_NEW_HELMET(infantry,Rev),
			//MACRO_NEW_HELMET(infantry,Sentinel),
			//MACRO_NEW_HELMET(infantry,Dark),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(infantry,base);

	MACRO_NEW_INF_HELMET_ITEM_RECRUIT(332nd_recruit,Recruit)
    MACRO_NEW_INF_HELMET_ITEM(332nd_trooper,Trooper,332nd Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_veteran_trooper,Veteran Trooper,332nd Veteran Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_sergeant,Sergeant,332nd Sergeant Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_trooper_original,Original,332nd_Original_Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(george,George,George.paa)
	MACRO_NEW_INF_HELMET_ITEM(Riddle,Riddle,Riddle.paa)
	MACRO_NEW_INF_HELMET_ITEM(Hoggy,Hoggy,Hoggy.paa)
	MACRO_NEW_INF_HELMET_ITEM(Poseidon,Poseidon,Poseidon.paa)
	MACRO_NEW_INF_HELMET_ITEM(Falx,Falx,Falx.paa)
	MACRO_NEW_INF_HELMET_ITEM(Frost,Frost,Frost.paa)
	MACRO_NEW_INF_HELMET_ITEM(Deserter,Deserter,332nd_Rebal_Helmet_phase_2_ca.paa)
	MACRO_NEW_INF_HELMET_ITEM(Bugs,Bugs,Bugs.paa)
	MACRO_NEW_INF_HELMET_ITEM(Marshal,Marshal,Marshal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Lasagna,Webs,Lasagna.paa)
	MACRO_NEW_INF_HELMET_ITEM(Aspect,Aspect,Aspect.paa)
	MACRO_NEW_INF_HELMET_ITEM(Beat,Beat,Beat.paa)
	MACRO_NEW_INF_HELMET_ITEM(Grass,Grass,Grass.paa)
	MACRO_NEW_INF_HELMET_ITEM(Dakka,Dakka,Dakka.paa)
	MACRO_NEW_INF_HELMET_ITEM(King,King,King.paa)
	MACRO_NEW_INF_HELMET_ITEM(Spacy,Spacy,Spacy.paa)
	MACRO_NEW_INF_HELMET_ITEM(Church,Church,Church.paa)
	MACRO_NEW_INF_HELMET_ITEM(Cutter,Cutter,Cutter.paa)
	MACRO_NEW_INF_HELMET_ITEM(Tidal,Tidal,Tidal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Corporal,Corporal,Corporal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Specialist,Specialist,Specialist.paa)
	MACRO_NEW_INF_HELMET_ITEM(Deva,Deva,Deva.paa)
	MACRO_NEW_INF_HELMET_ITEM(Vault,Vault,Vault.paa)
	MACRO_NEW_INF_HELMET_ITEM(Sazi,Sazi,Sazi.paa)
	MACRO_NEW_INF_HELMET_ITEM(Xander,Xander,Xander.paa)

	//MACRO_NEW_INF_HELMET_ITEM(Cross,Cross,Cross.paa)
	//MACRO_NEW_INF_HELMET_ITEM(Rev,Rev,Rev.paa)
	//MACRO_NEW_INF_HELMET_ITEM(Sentinel,Sentinel,Sentinel.paa)
	//MACRO_NEW_INF_HELMET_ITEM(Dark,Dark,Dark.paa)
};
