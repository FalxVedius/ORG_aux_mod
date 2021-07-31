#include "macros/main.hpp" // my config macro lib
#include "macros/cba_patches.hpp"
#include "macros/jlts_patches.hpp"
#include "macros/3as_patches.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(main)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			"A3_Data_F_Enoch_Loadorder",//Load all of arma first
			cba_patches ,//cba stuff
            MARCO_JLTS_PATCHES,
			MARCO_3AS_PATCHES,
			"ls_laat_2",
			"SWLW_merc_mando_rifles_sniper",
			"SWLW_merc_mando_pistols_Westar35SA",
			"SWLW_clones_launchers_RPS6"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class cfgFunctions
{
	class 332nd_aux_functions
	{
		tag = "aux_332nd"; //tag
		class ace_interactions //catagory
		{
			class change_hud_color //function name, aux_332nd_fnc_change_hud_color
			{
				file = "332nd_main\functions\interactions\hud_color_changer\hud_color_change.sqf"
			}
		}

		class user_actions 
		{
			class show_damage_report
			{
				file = "332nd_main\functions\actions\show_damage_report.sqf"
			}
		}
	}
}

//Run once at a point in time before all the mission units and vehicles have their own init event handlers processed
// Stuff like keybinds would go here
// Non scheduled environments
class Extended_PreInit_EventHandlers
{
	class 332nd_aux_PREINIT
	{
		init="call compile preprocessFileLineNumbers '332nd_main\functions\XEH_preinit.sqf'";
	};
};

//run once and after all the units and vehicles have had both their init event handlers and the code in the mission editor "init" lines processed
// stuff like Scheduled environments
// class Extended_PostInit_EventHandlers {
//     class 332nd_aux_POSTINIT {
//         init = "call compile preprocessFileLineNumbers '332nd_main\XEH_postinit.sqf'";
//     };
// };