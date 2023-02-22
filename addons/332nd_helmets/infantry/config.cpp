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
			MACRO_NEW_HELMET(infantry,332nd_recruit),
            MACRO_NEW_HELMET(infantry,332nd_trooper),
			MACRO_NEW_HELMET(infantry,332nd_veteran_trooper),
			MACRO_NEW_HELMET(infantry,332nd_Sergeant),
			MACRO_NEW_HELMET(infantry,332nd_trooper_original),
			MACRO_NEW_HELMET(infantry,Corporal),
			MACRO_NEW_HELMET(infantry,Specialist),

			MACRO_NEW_HELMET(infantry,CW),
			MACRO_NEW_HELMET(infantry,CWV),
			MACRO_NEW_HELMET(infantry,CWT),
			MACRO_NEW_HELMET(infantry,CWP),
			MACRO_NEW_HELMET(infantry,CWS),

			MACRO_NEW_HELMET(infantry,Riddle),
			MACRO_NEW_HELMET(infantry,Hoggy),
			MACRO_NEW_HELMET(infantry,Deserter),
			MACRO_NEW_HELMET(infantry,Poseidon),
			MACRO_NEW_HELMET(infantry,Aspect),
			MACRO_NEW_HELMET(infantry,Grass),
			MACRO_NEW_HELMET(infantry,King),
			MACRO_NEW_HELMET(infantry,Church),
			MACRO_NEW_HELMET(infantry,Tidal),
			MACRO_NEW_HELMET(infantry,Vault),
			MACRO_NEW_HELMET(infantry,Xander),
			MACRO_NEW_HELMET(infantry,Zombie),
			MACRO_NEW_HELMET(infantry,Brotha),
			MACRO_NEW_HELMET(infantry,Knight),
			MACRO_NEW_HELMET(infantry,Rev),
			MACRO_NEW_HELMET(infantry,Bob),
			MACRO_NEW_HELMET(infantry,Ukrainian),
			MACRO_NEW_HELMET(infantry,Griif),
			MACRO_NEW_HELMET(infantry,Noodles),
			MACRO_NEW_HELMET(infantry,Caboose),
			MACRO_NEW_HELMET(infantry,Inverse),
			MACRO_NEW_HELMET(infantry,Mod),
			MACRO_NEW_HELMET(infantry,Preacher),
			MACRO_NEW_HELMET(infantry,Brain),
			MACRO_NEW_HELMET(infantry,Ion),
			MACRO_NEW_HELMET(infantry,Sync),
			MACRO_NEW_HELMET(infantry,Bored),
			MACRO_NEW_HELMET(infantry,Kanin),
			MACRO_NEW_HELMET(infantry,Driskoll),
			MACRO_NEW_HELMET(infantry,Sniggs),
			MACRO_NEW_HELMET(infantry,Falx),
			MACRO_NEW_HELMET(infantry,Harmacist),
			MACRO_NEW_HELMET(infantry,Pagan),
			MACRO_NEW_HELMET(infantry,Sabine),
			MACRO_NEW_HELMET(infantry,Storm),
			MACRO_NEW_HELMET(infantry,Nordic),
			MACRO_NEW_HELMET(infantry,Kink),
			MACRO_NEW_HELMET(infantry,Pillsy),
			MACRO_NEW_HELMET(infantry,Ambiguous),
			MACRO_NEW_HELMET(infantry,Blast),

			MACRO_NEW_HELMET(engineer,Cadet),
			MACRO_NEW_HELMET(engineer,Engineer),
			MACRO_NEW_HELMET(engineer,Expert),
			MACRO_NEW_HELMET(engineer,Tech),
			MACRO_NEW_HELMET(engineer,Corporal),
			MACRO_NEW_HELMET(engineer,Sergeant),
			MACRO_NEW_HELMET(engineer,Hammer),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(infantry,base);
	class MACRO_NEW_HELMET(engineer,base);

	MACRO_NEW_INF_HELMET_ITEM(332nd_recruit,Recruit,332nd_Recruit.paa)
    MACRO_NEW_INF_HELMET_ITEM(332nd_trooper,Trooper,332nd Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_veteran_trooper,Veteran Trooper,332nd Veteran Trooper Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_sergeant,Sergeant,332nd Sergeant Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(332nd_trooper_original,Original,332nd_Original_Helmet.paa)
	MACRO_NEW_INF_HELMET_ITEM(Corporal,Corporal,Corporal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Specialist,Specialist,Specialist.paa)

	MACRO_NEW_INF_HELMET_ITEM(CW,CW,CW.paa)
	MACRO_NEW_INF_HELMET_ITEM(CWV,CW-V,CWV.paa)
	MACRO_NEW_INF_HELMET_ITEM(CWT,CW-T,CWT.paa)
	MACRO_NEW_INF_HELMET_ITEM(CWP,CW-P,CWP.paa)
	MACRO_NEW_INF_HELMET_ITEM(CWS,CW-S,CWS.paa)

	MACRO_NEW_INF_HELMET_ITEM(Riddle,Riddle,Riddle.paa)
	MACRO_NEW_INF_HELMET_ITEM(Hoggy,Hoggy,Hoggy.paa)
	MACRO_NEW_INF_HELMET_ITEM(Poseidon,Poseidon,Poseidon.paa)
	MACRO_NEW_INF_HELMET_ITEM(Deserter,Deserter,332nd_Rebal_Helmet_phase_2_ca.paa)
	MACRO_NEW_INF_HELMET_ITEM(Aspect,Aspect,Aspect.paa)
	MACRO_NEW_INF_HELMET_ITEM(Grass,Grass,Grass.paa)
	MACRO_NEW_INF_HELMET_ITEM(King,King,King.paa)
	MACRO_NEW_INF_HELMET_ITEM(Church,Church,Church.paa)
	MACRO_NEW_INF_HELMET_ITEM(Tidal,Tidal,Tidal.paa)
	MACRO_NEW_INF_HELMET_ITEM(Vault,Vault,Vault.paa)
	MACRO_NEW_INF_HELMET_ITEM(Xander,Xander,Xander.paa)
	MACRO_NEW_INF_HELMET_ITEM(Zombie,Zombie,Zombie.paa)
	MACRO_NEW_INF_HELMET_ITEM(Knight,Knight,Knight.paa)
	MACRO_NEW_INF_HELMET_ITEM(Rev,Rev,Rev.paa)
	MACRO_NEW_INF_HELMET_ITEM(Bob,Bob,Bob.paa)
	MACRO_NEW_INF_HELMET_ITEM(Ukrainian,Ukrainian,Ukrainian.paa)
	MACRO_NEW_INF_HELMET_ITEM(Noodles,Noodles,Noodles.paa)
	MACRO_NEW_INF_HELMET_ITEM(Caboose,Caboose,Caboose.paa)
	MACRO_NEW_INF_HELMET_ITEM(Inverse,Inverse,Inverse.paa)
	MACRO_NEW_INF_HELMET_ITEM(Mod,Mod,Mod.paa)
	MACRO_NEW_INF_HELMET_ITEM(Preacher,Preacher,Preacher.paa)
	MACRO_NEW_INF_HELMET_ITEM(Brain,Brain,Brain.paa)
	MACRO_NEW_INF_HELMET_ITEM(Ion,Ion,Ion.paa)
	MACRO_NEW_INF_HELMET_ITEM(Sync,Sync,Sync.paa)
	MACRO_NEW_INF_HELMET_ITEM(Bored,Bored,Bored.paa)
	MACRO_NEW_INF_HELMET_ITEM(Kanin,Kanin,Kanin.paa)
	MACRO_NEW_INF_HELMET_ITEM(Driskoll,Driskoll,Driskoll.paa)
	MACRO_NEW_INF_HELMET_ITEM(Brotha,Brotha,Brotha.paa)
	MACRO_NEW_INF_HELMET_ITEM(Sniggs,Sniggs,Sniggs.paa)
	MACRO_NEW_INF_HELMET_ITEM(Falx,Falx,Falx.paa)
	MACRO_NEW_INF_HELMET_ITEM(Harmacist,Harmacist,Harmacist.paa)
	MACRO_NEW_INF_HELMET_ITEM(Pagan,Pagan,Pagan.paa)
	MACRO_NEW_INF_HELMET_ITEM(Sabine,Sabine,Sabine.paa)
	MACRO_NEW_INF_HELMET_ITEM(Storm,Storm,Storm.paa)
	MACRO_NEW_INF_HELMET_ITEM(Nordic,Nordic,Nordic.paa)
	MACRO_NEW_INF_HELMET_ITEM(Kink,Kink,Kink.paa)
	MACRO_NEW_INF_HELMET_ITEM(Pillsy,Pillsy,Pillsy.paa)
	MACRO_NEW_INF_HELMET_ITEM(Ambiguous,Ambiguous,Ambiguous.paa)
	MACRO_NEW_INF_HELMET_ITEM(Blast,Blast,Blast.paa)


	MACRO_NEW_ENGINEER_HELMET_ITEM(Cadet,Cadet,CE-C.paa)
	MACRO_NEW_ENGINEER_HELMET_ITEM(Engineer,Engineer,CE.paa)
	MACRO_NEW_ENGINEER_HELMET_ITEM(Expert,Expert,CE-X.paa)
	MACRO_NEW_ENGINEER_HELMET_ITEM(Tech,Tech,CE-T.paa)
	MACRO_NEW_ENGINEER_HELMET_ITEM(Corporal,Corporal,CE-P.paa)
	MACRO_NEW_ENGINEER_HELMET_ITEM(Sergeant,Sergeant,CE-S.paa)
	MACRO_NEW_ENGINEER_HELMET_ITEM(Hammer,Hammer,Hammer.paa)
};
