#include "../../ORG_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(scenario_helmets)
	{
		author = "Falx";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            // helmets
            MACRO_NEW_HELMET(scenario,scenario_104th),
			MACRO_NEW_HELMET(scenario,scenario_187th),
			MACRO_NEW_HELMET(scenario,scenario_212th),
			MACRO_NEW_HELMET(scenario,scenario_327th),
			MACRO_NEW_HELMET(scenario,scenario_442nd),
			MACRO_NEW_HELMET(scenario,scenario_501st),
			MACRO_NEW_HELMET(scenario,scenario_5th),
			MACRO_NEW_HELMET(scenario,scenario_91st),
			MACRO_NEW_HELMET(scenario,scenario_CG),
			MACRO_NEW_HELMET(scenario,scenario_DC),
			MACRO_NEW_HELMET(scenario,scenario_HC),
			MACRO_NEW_HELMET(scenario,scenario_KC),
			MACRO_NEW_HELMET(scenario,scenario_KS),
			MACRO_NEW_HELMET(scenario,scenario_OS),
			MACRO_NEW_HELMET(scenario,scenario_Shadow),

        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(scenario,base);

	//Infantry
    MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_104th,104th,\MRC\JLTS\characters\CloneLegions\data\Clone_104thTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_187th,187th,\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_212th,212th,\MRC\JLTS\characters\CloneLegions\data\Clone_212thTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_327th,327th,\MRC\JLTS\characters\CloneLegions\data\Clone_327thTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_442nd,442nd,\MRC\JLTS\characters\CloneLegions\data\Clone_442ndTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_501st,501st,\MRC\JLTS\characters\CloneLegions\data\Clone_501stTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_5th,5th,\MRC\JLTS\characters\CloneLegions\data\Clone_5thTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_91st,91st,\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_CG,CG,\MRC\JLTS\characters\CloneLegions\data\Clone_CGTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_DC,DC,\MRC\JLTS\characters\CloneLegions\data\Clone_DCTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_HC,HC,\MRC\JLTS\characters\CloneLegions\data\Clone_HCTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_KC,KC,\MRC\JLTS\characters\CloneLegions\data\Clone_KCTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_KS,KS,\MRC\JLTS\characters\CloneLegions\data\Clone_KSTrooper_helmet_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_OS,OS,\MRC\JLTS\characters\CloneArmor\data\Clone_eod_Helmet_P2_co.paa)
	MACRO_NEW_SCENARIO_HELMET_ITEM(scenario_Shadow,Shadow,\MRC\JLTS\characters\CloneLegions\data\Clone_ShadowTrooper_helmet_co.paa)

};
