#include "../../332nd_main/macros/main.hpp"
/*current Mission
Make rebels carry custom equipment as well as equipment in there backpack, with spawnable groups of rebels
*/
class CfgPatches
{
    class MACRO_PATCH_NAME(indep_units)
    {
        author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(units);
        requiredAddons[] =
        {
            MACRO_PATCH_NAME(units)
        };
        requiredVersion = 0.1;
        units[] = {
			MACRO_NEW_UNIT(rebel,332nd_indep_rebel),//added
			MACRO_NEW_UNIT(rebel_AT,332nd_indep_rebel_AT),
			MACRO_NEW_UNIT(rebel_Sniper,332nd_indep_rebel_Sniper),
			MACRO_NEW_UNIT(rebel_Medic,332nd_indep_rebel_Medic),
			MACRO_NEW_UNIT(rebel_Heavy,332nd_indep_rebel_Heavy),
			MACRO_NEW_UNIT(rebel_SL,332nd_indep_rebel_SL),
			MACRO_NEW_UNIT(rebel_Mg,332nd_indep_rebel_Mg),
			MACRO_NEW_UNIT(rebel_AA,332nd_indep_rebel_AA),
			MACRO_NEW_UNIT(rebel_Spotter,332nd_indep_rebel_Spotter),
			MACRO_NEW_UNIT(rebel_Breacher,332nd_indep_rebel_Breacher),
			//MACRO_NEW_UNIT(rebel_Human,332nd_indep_rebel_Human),
			//MACRO_NEW_UNIT(rebel_Human_AT,332nd_indep_rebel_Human_AT),
			//MACRO_NEW_UNIT(rebel_Human_Sniper,332nd_indep_rebel_Human_Sniper),
			//MACRO_NEW_UNIT(rebel_Human_Medic,332nd_indep_rebel_Human_Medic),
			//MACRO_NEW_UNIT(rebel_Human_Heavy,332nd_indep_rebel_Human_Heavy),
			//MACRO_NEW_UNIT(rebel_Human_Spotter,332nd_indep_rebel_Human_Spotter),
        };
        weapons[] = {
			MACRO_NEW_UNIFORM(rebel,332nd_indep_rebel),
			MACRO_NEW_UNIFORM(rebel_AT,332nd_indep_rebel_AT),
			MACRO_NEW_UNIFORM(rebel_Sniper,332nd_indep_rebel_Sniper),
			MACRO_NEW_UNIFORM(rebel_Medic,332nd_indep_rebel_Medic),
			MACRO_NEW_UNIFORM(rebel_Heavy,332nd_indep_rebel_Heavy),
			MACRO_NEW_UNIFORM(rebel_SL,332nd_indep_rebel_SL),
			MACRO_NEW_UNIFORM(rebel_Mg,332nd_indep_rebel_Mg),
			MACRO_NEW_UNIFORM(rebel_AA,332nd_indep_rebel_AA),
			MACRO_NEW_UNIFORM(rebel_Spotter,332nd_indep_rebel_Spotter),
			MACRO_NEW_UNIFORM(rebel_Breacher,332nd_indep_rebel_Breacher),
			//MACRO_NEW_UNIFORM(rebel_Human,332nd_indep_rebel_Human),
			//MACRO_NEW_UNIFORM(rebel_Human_AT,332nd_indep_rebel_Human_AT),
			//MACRO_NEW_UNIFORM(rebel_Human_Sniper,332nd_indep_rebel_Human_Sniper),
			//MACRO_NEW_UNIFORM(rebel_Human_Medic,332nd_indep_rebel_Human_Medic),
			//MACRO_NEW_UNIFORM(rebel_Human_Heavy,332nd_indep_rebel_Human_Heavy),
			//MACRO_NEW_UNIFORM(rebel_Human_Spotter,332nd_indep_rebel_Human_Spotter),
        };
    };
};

class CfgWeapons
{
	class U_BG_leader;
	class U_I_C_Soldier_Para_1_F;
	class U_C_ArtTShirt_01_v6_F;
	class U_I_C_Soldier_Bandit_1_F;
	class U_C_E_LooterJacket_01_F;
	class U_C_Mechanic_01_F;
	class C_Man_casual_1_F;
	class JLTS_DroidB1;


	class I_R_H_AT;
	class I_R_H_S;
	class I_R_H_M;
	class I_R_H_L;
	class I_R_H_H;
	class I_R_H_B;

	//Rebel
	class MACRO_NEW_UNIFORM(rebel,base) : JLTS_DroidB1 //leave droid skin for now find where civil skins are
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_AT,base) : JLTS_DroidB1 //leave droid skin for now find where civil skins are
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Sniper,base) : JLTS_DroidB1 //leave droid skin for now find where civil skins are
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Medic,base) : JLTS_DroidB1 
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Mg,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Heavy,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_AA,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Spotter,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Breacher,base) : JLTS_DroidB1
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_SL,base) : U_BG_leader
	{
		class ItemInfo;
	};



	//Rebel Human
	class MACRO_NEW_UNIFORM(rebel_Human,base) : I_R_H_B
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_AT,base) : I_R_H_AT
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_Sniper,base) : I_R_H_S
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_Medic,base) : I_R_H_M
	{
		class ItemInfo;
	};

	class MACRO_NEW_UNIFORM(rebel_Human_Heavy,base) : I_R_H_H
	{
		class ItemInfo;
	}; 
	
	class MACRO_NEW_UNIFORM(rebel_Human_Spotter,base) : I_R_H_L
	{
		class ItemInfo;
	};

	//Rebel Driods
	MACRO_NEW_REBEL_UNIFORM_ITEM(332nd_indep_rebel,Droid,332nd_indep_rebel)//Class name, shown name, unit name
	MACRO_NEW_REBEL_AT_UNIFORM_ITEM(332nd_indep_rebel_AT,AT,332nd_indep_rebel_AT)
	MACRO_NEW_REBEL_SNIPER_UNIFORM_ITEM(332nd_indep_rebel_Sniper,Sniper,332nd_indep_rebel_Sniper)
	MACRO_NEW_REBEL_MEDIC_UNIFORM_ITEM(332nd_indep_rebel_Medic,Medical,332nd_indep_rebel_Medic)
	MACRO_NEW_REBEL_HEAVY_UNIFORM_ITEM(332nd_indep_rebel_Heavy,Heavy,332nd_indep_rebel_Heavy)
	MACRO_NEW_REBEL_SL_UNIFORM_ITEM(332nd_indep_rebel_SL,Squad Leader,332nd_indep_rebel_SL)
	MACRO_NEW_REBEL_AA_UNIFORM_ITEM(332nd_indep_rebel_AA,AA,332nd_indep_rebel_AA)
	MACRO_NEW_REBEL_SPOTTER_UNIFORM_ITEM(332nd_indep_rebel_Spotter,Spotter,332nd_indep_rebel_Spotter)
	MACRO_NEW_REBEL_BREACHER_UNIFORM_ITEM(332nd_indep_rebel_Breacher,Breacher,332nd_indep_rebel_Breacher)
	MACRO_NEW_REBEL_MG_UNIFORM_ITEM(332nd_indep_rebel_Mg,MG,332nd_indep_rebel_Mg)

	//Rebel Humans
	//MACRO_NEW_REBEL_HUMAN_UNIFORM_ITEM(332nd_indep_rebel_Human,Human,332nd_indep_rebel_Human)
	//MACRO_NEW_REBEL_HUMAN_AT_UNIFORM_ITEM(332nd_indep_rebel_Human_AT,Human AT,332nd_indep_rebel_Human_AT)
	//MACRO_NEW_REBEL_HUMAN_SNIPER_UNIFORM_ITEM(332nd_indep_rebel_Human_Sniper,Human Sniper,332nd_indep_rebel_Human_Sniper)
	//MACRO_NEW_REBEL_HUMAN_MEDIC_UNIFORM_ITEM(332nd_indep_rebel_Human_Medic,Human Medic,332nd_indep_rebel_Human_Medic)
	//MACRO_NEW_REBEL_HUMAN_HEAVY_UNIFORM_ITEM(332nd_indep_rebel_Human_Heavy,Human Heavy,332nd_indep_rebel_Human_Heavy)
	//MACRO_NEW_REBEL_HUMAN_SPOTTER_UNIFORM_ITEM(332nd_indep_rebel_Human_Spotter,Human Spotter,332nd_indep_rebel_Human_Spotter)


};

class CfgVehicles
{
	class MACRO_NEW_UNIT(rebel,base);//Added
	class MACRO_NEW_UNIT(rebel_AT,base);
	class MACRO_NEW_UNIT(rebel_Sniper,base);
	class MACRO_NEW_UNIT(rebel_Medic,base);
	class MACRO_NEW_UNIT(rebel_Heavy,base);
	class MACRO_NEW_UNIT(rebel_SL,base);
	class MACRO_NEW_UNIT(rebel_AA,base);
	class MACRO_NEW_UNIT(rebel_Spotter,base);
	class MACRO_NEW_UNIT(rebel_Breacher,base);
	class MACRO_NEW_UNIT(rebel_Mg,base);
	//Rebel Human
	class MACRO_NEW_UNIT(rebel_Human,base);
	class MACRO_NEW_UNIT(rebel_Human_AT,base);
	class MACRO_NEW_UNIT(rebel_Human_Sniper,base);
	class MACRO_NEW_UNIT(rebel_Human_Medic,base);
	class MACRO_NEW_UNIT(rebel_Human_Heavy,base);
	class MACRO_NEW_UNIT(rebel_Human_Spotter,base);

	//Rebels
	MACRO_NEW_REBEL_UNIT(332nd_indep_rebel,Rebel,332nd_indep_rebel)//Added
	MACRO_NEW_REBEL_AT_UNIT(332nd_indep_rebel_AT,AT Rebel,332nd_indep_rebel_AT)
	MACRO_NEW_REBEL_SNIPER_UNIT(332nd_indep_rebel_Sniper,Sniper Rebel,332nd_indep_rebel_Sniper)
	MACRO_NEW_REBEL_MEDIC_UNIT(332nd_indep_rebel_Medic,Medical Rebel,332nd_indep_rebel_Medic)
	MACRO_NEW_REBEL_HEAVY_UNIT(332nd_indep_rebel_Heavy,Heavy Rebel,332nd_indep_rebel_Heavy)
	MACRO_NEW_REBEL_SL_UNIT(332nd_indep_rebel_SL,Squad Leader Rebel,332nd_indep_rebel_SL)
	MACRO_NEW_REBEL_AA_UNIT(332nd_indep_rebel_AA,AA Rebel,332nd_indep_rebel_AA)
	MACRO_NEW_REBEL_SPOTTER_UNIT(332nd_indep_rebel_Spotter,Spotter Rebel,332nd_indep_rebel_Spotter)
	MACRO_NEW_REBEL_BREACHER_UNIT(332nd_indep_rebel_Breacher,Breacher Rebel,332nd_indep_rebel_Breacher)
	MACRO_NEW_REBEL_MG_UNIT(332nd_indep_rebel_Mg,MG Rebel,332nd_indep_rebel_Mg)

	//Rebel Human
	//MACRO_NEW_REBEL_HUMAN_UNIT(332nd_indep_rebel_Human,Human Rebel,332nd_indep_rebel_Human)
	//MACRO_NEW_REBEL_HUMAN_AT_UNIT(332nd_indep_rebel_Human_AT,Human AT Rebel,332nd_indep_rebel_Human_AT)
	//MACRO_NEW_REBEL_HUMAN_SNIPER_UNIT(332nd_indep_rebel_Human_Sniper,Human Sniper Rebel,332nd_indep_rebel_Human_Sniper)
	//MACRO_NEW_REBEL_HUMAN_MEDIC_UNIT(332nd_indep_rebel_Human_Medic,Human Medic Rebel,332nd_indep_rebel_Human_Medic)
	//MACRO_NEW_REBEL_HUMAN_HEAVY_UNIT(332nd_indep_rebel_Human_Heavy,Human Heavy Rebel,332nd_indep_rebel_Human_Heavy)
	//MACRO_NEW_REBEL_HUMAN_SPOTTER_UNIT(332nd_indep_rebel_Human_Spotter,Human Spotter Rebel,332nd_indep_rebel_Human_Spotter)
};

// TODO: Code for Rebels to fix for next Update.

class CfgGroups
{
	class Indep
	{
		side = 2;
		class EdCat_332nd_Rebel
		{
			side = 2;
			name = "332nd Rebels";

			class RebelInfantry
			{
				name = "Specialized Teams";
				class REBEL_332nd_InfSentry
				{
					name = "Sentry Team";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class REBEL_332nd_InfSnipers
				{
					name = "Sniper Team";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Spotter_unit_332nd_indep_rebel_Spotter";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Sniper_unit_332nd_indep_rebel_Sniper";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class REBEL_332nd_InfVehicleCrew
				{
					name = "Vehicle Crew";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
			};

			class RebelFireteams
			{
				name = "Fireteams";
				class REBEL_332nd_InfRifle_Teams
				{
					name = "Rifle Team";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class REBEL_332nd_InfAssault_Teams
				{
					name = "Assault Team";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Breacher_unit_332nd_indep_rebel_Breacher";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class REBEL_332nd_InfWeapons_Teams
				{
					name = "Weapons Team";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "SERGEANT";
						position[] = { 0,-1,0 };
					};
				};
				class REBEL_332nd_InfAA_Teams
				{
					name = "Anti-Air Team";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AA_unit_332nd_indep_rebel_AA";
						rank = "SERGEANT";
						position[] = { 0,-1,0 };
					};
				};
			};

			class RebelSquads
			{
				name = "Squads";
				class REBEL_332nd_InfRifle_Squads
				{
					name = "Rifle Squad";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
				class REBEL_332nd_InfAssault_Squads
				{
					name = "Assault Squad";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Breacher_unit_332nd_indep_rebel_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
				class REBEL_332nd_InfWeapons_Squads
				{
					name = "Weapons Squad";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
			};

			class RebelSections
			{
				name = "Sections";
				class REBEL_332nd_InfRifle_Sections
				{
					name = "Rifle Section";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class REBEL_332nd_InfAssault_Sections
				{
					name = "Assault Section";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Breacher_unit_332nd_indep_rebel_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Breacher_unit_332nd_indep_rebel_Breacher";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class REBEL_332nd_InfWeapons_Sections
				{
					name = "Weapons Section";
					side = 0;
					faction = "EdCat_332ndCIS";
					class Unit0
					{
						side = 0;
						vehicle = "332nd_aux_rebel_SL_unit_332nd_indep_rebel_SL";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Heavy_unit_332nd_indep_rebel_Heavy";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "332nd_aux_rebel_Mg_unit_332nd_indep_rebel_Mg";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
			};

			class HornetSquads
			{
				side = 2;
				name = "Hornet Squads";

				class HorentSwarmCAP
				{
					name = "Horent CAP Swarm"
					side = 2;
					faction = "EdCat_332nd_Rebel";
					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_CAP";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_CAP";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,-20,50 };
					};
				};

				class HorentSwarmCAS
				{
					name = "Horent CAS Swarm"
						side = 2;
					faction = "EdCat_332nd_Rebel";
					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_CAS";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_CAS";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,-20,50 };
					};
				};

				class HorentSwarmGUN
				{
					name = "Horent Swarm"
						side = 2;
					faction = "EdCat_332nd_Rebel";
					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_vehicle_air_CIS_Rebel_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,-20,50 };
					};
				};
			};
		};
		
	};
};