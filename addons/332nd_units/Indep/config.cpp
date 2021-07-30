#include "../../332nd_main/macros/main.hpp"
/*current Mission
Make rebels carry custom equipment as well as equipment in there backpack, with spawnable groups of rebels
*/
class CfgPatches
{
    class MACRO_PATCH_NAME(indep_units)
    {
        author = "Bugs";
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
        };
        weapons[] = {
			MACRO_NEW_UNIFORM(rebel,332nd_indep_rebel),
			MACRO_NEW_UNIFORM(rebel_AT,332nd_indep_rebel_AT),
			MACRO_NEW_UNIFORM(rebel_Sniper,332nd_indep_rebel_Sniper),
			MACRO_NEW_UNIFORM(rebel_Medic,332nd_indep_rebel_Medic),

        };
    };
};

class CfgWeapons
{
	class JLTS_DroidB1;

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

	//Rebel
	MACRO_NEW_REBEL_UNIFORM_ITEM(332nd_indep_rebel,Rebel,332nd_indep_rebel)//Class name, shown name, unit name
	MACRO_NEW_REBEL_AT_UNIFORM_ITEM(332nd_indep_rebel_AT,AT Rebel,332nd_indep_rebel_AT)
	MACRO_NEW_REBEL_SNIPER_UNIFORM_ITEM(332nd_indep_rebel_Sniper,Sniper Rebel,332nd_indep_rebel_Sniper)
	MACRO_NEW_REBEL_MEDIC_UNIFORM_ITEM(332nd_indep_rebel_Medic,Medical Rebel,332nd_indep_rebel_Medic)


};

class CfgVehicles
{
	class MACRO_NEW_UNIT(rebel,base);//Added
	class MACRO_NEW_UNIT(rebel_AT,base);
	class MACRO_NEW_UNIT(rebel_Sniper,base);
	class MACRO_NEW_UNIT(rebel_Medic,base);

		//Rebels
		MACRO_NEW_REBEL_UNIT(332nd_indep_rebel,Rebel,332nd_indep_rebel)//Added
		MACRO_NEW_REBEL_AT_UNIT(332nd_indep_rebel_AT,AT Rebel,332nd_indep_rebel_AT)
		MACRO_NEW_REBEL_SNIPER_UNIT(332nd_indep_rebel_Sniper,Sniper Rebel,332nd_indep_rebel_Sniper)
		MACRO_NEW_REBEL_MEDIC_UNIT(332nd_indep_rebel_Medic,Medical Rebel,332nd_indep_rebel_Medic)
		
};

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
				name = "Rebel Fireteams";
				class rebelFireteamA
				{
					name = "Attack Team";
					side = 2;
					faction = "EdCat_332nd_Rebel";
					class Unit0
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 2;
						vehicle = "332nd_aux_rebel_AT_unit_332nd_indep_rebel_AT";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit2
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Medic_unit_332nd_indep_rebel_Medic";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit3
					{
						side = 2;
						vehicle = "332nd_aux_rebel_Sniper_unit_332nd_indep_rebel_Sniper";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit4
					{
						side = 2;
						vehicle = "332nd_aux_rebel_unit_332nd_indep_rebel";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
				};
			};
		};
	};
};