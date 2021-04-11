#include "../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(units)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_UNIT(infantry,base),
			MACRO_NEW_UNIT(aviation,base)
		};
		weapons[] = {
		 	MACRO_NEW_UNIFORM(infantry,base),
			MACRO_NEW_UNIFORM(aviation,base)
		};
	};
};

class CfgWeapons
{
 	// ---- Uniforms ----

    class U_I_CombatUniform;
	class JLTS_CloneArmor: U_I_CombatUniform
	{
		class ItemInfo;
	};

	//Infantry
    class MACRO_NEW_UNIFORM(infantry,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Infantry Uniform ('base')";
        scope = 0;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(infantry,base);
		};
	};

	class MACRO_NEW_UNIFORM(aviation,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Aviation Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(aviation,base);
		};
	};

	class MACRO_NEW_UNIFORM(cwo,base): JLTS_CloneArmor
	{
		displayName = "[332nd] Clone Warrant Officer Uniform ('base')";
        scope = 0;							
		class ItemInfo: ItemInfo
		{
			uniformClass = MACRO_NEW_UNIT(cwo,base);
		};
	};

	
	// ---- End Uniforms ----
}

class CfgVehicles
{  
	// ---- Units for Uniforms ----

	class B_Soldier_f;
    class JLTS_Clone_P2_DC15A:B_Soldier_f 
    {
        class HitPoints;
    };

	//infantry
    class MACRO_NEW_UNIT(infantry,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Base";

        uniformClass = MACRO_NEW_UNIFORM(infantry,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		weapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		magazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(aviation,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Aviation Base";

        uniformClass = MACRO_NEW_UNIFORM(aviation,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(aviation,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(aviation,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		weapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		magazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};

        // define stuff like
        // armor, items, unit name

    };

	class MACRO_NEW_UNIT(cwo,base): JLTS_Clone_P2_DC15A
    {
        author = MACRO_AUTHOR;
        scope = 0;
        displayName = "[332nd] Clone Warrant Officer Base";

        uniformClass = MACRO_NEW_UNIFORM(cwo,base);
        hiddenSelections[] = {"camo1","camo2","insignia"};
       
        linkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		respawnLinkedItems[] = {MACRO_NEW_HELMET(infantry,332nd_trooper),"ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","JLTS_CloneNVG"};
		weapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		respawnWeapons[] = {"JLTS_DC15A_plastic","JLTS_DC17SA","Throw","Put"};
		nakedUniform = "JLTS_CloneNaked_uniform";
		magazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","JLTS_stun_mag_long","JLTS_stun_mag_long","HandGrenade","HandGrenade"};
		items[] = {"FirstAidKit"};
		respawnItems[] = {"FirstAidKit"};

        // define stuff like
        // armor, items, unit name

    };
	// ---- End Units for Uniforms ----
}