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
			"SWLW_merc_mando_rifles_sniper",
			"SWLW_merc_mando_pistols_Westar35SA",
			"SWLW_clones_launchers_RPS6",
			"ace_medical_treatment"

		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class cfgFunctions
{
	class ORG_aux_functions
	{
		tag = "aux_ORG"; //tag
		class ace_interactions //catagory
		{
			class change_hud_color //function name, aux_ORG_fnc_change_hud_color
			{
				file = "ORG_main\functions\interactions\hud_color_changer\hud_color_change.sqf"
			}
		}

		class Keybinds_and_Functions
		{
			file = "\ORG_main\functions";
			class keybinds
			{
				postInit = 1;
			};
			class resetAnimation
			{

			};
			class placeMarker
			{

			};

		};

		class user_actions 
		{
			class show_damage_report
			{
				file = "ORG_main\functions\actions\show_damage_report.sqf"
			}
		}
	}
}

//Run once at a point in time before all the mission units and vehicles have their own init event handlers processed
// Stuff like keybinds would go here
// Non scheduled environments
class Extended_PreInit_EventHandlers
{
	class ORG_aux_PREINIT
	{
		init="call compile preprocessFileLineNumbers 'ORG_main\functions\XEH_preinit.sqf'";
	};
};

class Extended_PostInit_EventHandlers 
{
	class ORG_aux_POSTINIT
	{
		init="call compile preprocessFileLineNumbers 'ORG_main\functions\XEH_postinit.sqf'";
	};
};


class CAWorld;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class RscText;
class RscPicture;
class RscTitle;
class RscButtonMenu;
class RscHTML;
class RscControlsGroupNoHScrollbars;
class RscListBox;
class RscPictureKeepAspect;
class RscButton;
class RscButtonImages;
class RscShortcutButton;

class RscDisplayLoadMission : RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPicture_ORG : RscPicture
		{
			idc = 1000;

			colorText[] = { 1,1,1,0.42 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\ORG_main\images\ORG_Banner.paa";
		};
	};
};

class RscDisplayLoading 
{
	class Variants 
	{
		class LoadingBackground_ORG : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Banner.paa";
				};
			};
		};

		class LoadingBackground_ORG_V1 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_1.paa";
				};
			};
		};

		class LoadingBackground_ORG_V2 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_2.paa";
				};
			};
		};

		class LoadingBackground_ORG_V3 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_3.paa";
				};
			};
		};

		class LoadingBackground_ORG_V4 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_4.paa";
				};
			};
		};

		class LoadingBackground_ORG_V5 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_5.paa";
				};
			};
		};

		class LoadingBackground_ORG_V6 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_6.paa";
				};
			};
		};

		class LoadingBackground_ORG_V7 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_7.paa";
				};
			};
		};

		class LoadingBackground_ORG_V8 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_8.paa";
				};
			};
		};

		class LoadingBackground_ORG_V9 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_9.paa";
				};
			};
		};

		class LoadingBackground_ORG_V10 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_10_Tally.paa";
				};
			};
		};

		class LoadingBackground_ORG_V11 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_11.paa";
				};
			};
		};

		class LoadingBackground_ORG_V12 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_12.paa";
				};
			};
		};

		class LoadingBackground_ORG_V13 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_13.paa";
				};
			};
		};

		class LoadingBackground_ORG_V14 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_14.paa";
				};
			};
		};

		class LoadingBackground_ORG_V15 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_15.paa";
				};
			};
		};

		class LoadingBackground_ORG_V16 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_16.paa";
				};
			};
		};

		class LoadingBackground_ORG_V17 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_17.paa";
				};
			};
		};

		class LoadingBackground_ORG_V18 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_18.paa";
				};
			};
		};

		class LoadingBackground_ORG_V19 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_19.paa";
				};
			};
		};

		class LoadingBackground_ORG_V20 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_20.paa";
				};
			};
		};

		class LoadingBackground_ORG_V21 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_21.paa";
				};
			};
		};

		class LoadingBackground_ORG_V22 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_22.paa";
				};
			};
		};

		class LoadingBackground_ORG_V23 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_23.paa";
				};
			};
		};

		class LoadingBackground_ORG_V24 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_24.paa";
				};
			};
		};

		class LoadingBackground_ORG_V25 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_25.paa";
				};
			};
		};

		class LoadingBackground_ORG_V26 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_26.paa";
				};
			};
		};

		class LoadingBackground_ORG_V27 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_27.paa";
				};
			};
		};

		class LoadingBackground_ORG_V28 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_28.paa";
				};
			};
		};

		class LoadingBackground_ORG_V29 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_29.paa";
				};
			};
		};

		class LoadingBackground_ORG_V30 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_30.paa";
				};
			};
		};

		class LoadingBackground_ORG_V31 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_31.paa";
				};
			};
		};

		class LoadingBackground_ORG_V32 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_32.paa";
				};
			};
		};

		class LoadingBackground_ORG_V33 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_33.paa";
				};
			};
		};

		class LoadingBackground_ORG_V34 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_34.paa";
				};
			};
		};

		class LoadingBackground_ORG_V35 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_35.paa";
				};
			};
		};

		class LoadingBackground_ORG_V36 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_36.paa";
				};
			};
		};

		class LoadingBackground_ORG_V37 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_37.paa";
				};
			};
		};

		class LoadingBackground_ORG_V38 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_38.paa";
				};
			};
		};

		class LoadingBackground_ORG_V39 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_39.paa";
				};
			};
		};

		class LoadingBackground_ORG_V40 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_41.paa";
				};
			};
		};

		class LoadingBackground_ORG_V41 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_41.paa";
				};
			};
		};

		class LoadingBackground_ORG_V42 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_42.paa";
				};
			};
		};

		class LoadingBackground_ORG_V43 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_43.paa";
				};
			};
		};

		class LoadingBackground_ORG_V44 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_44.paa";
				};
			};
		};

		class LoadingBackground_ORG_V45 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_45.paa";
				};
			};
		};

		class LoadingBackground_ORG_V46 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_46.paa";
				};
			};
		};

		class LoadingBackground_ORG_V47 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_47.paa";
				};
			};
		};

		class LoadingBackground_ORG_V48 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_48.paa";
				};
			};
		};

		class LoadingBackground_ORG_V49 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_49.paa";
				};
			};
		};

		class LoadingBackground_ORG_V50 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_50.paa";
				};
			};
		};

		class LoadingBackground_ORG_V51 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_ORG : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\ORG_main\images\ORG_Promo_51.paa";
				};
			};
		};

	};
};

class RscDisplayLoadCustom : RscStandardDisplay 
{
	class controlsBackground 
	{
		class LoadingPicture_ORG : RscPicture 
		{
			idc = 1000;

			colorText[] = { 1,1,1,1 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\ORG_main\images\ORG_Banner.paa";
		};
	};
};


class RscDisplayMPPlayers;
class RscDisplayClientWait : RscDisplayMPPlayers 
{
	class LoadingPicture_ORG : RscPicture 
	{
		idc = 1000;

		colorText[] = { 1,1,1,1 };

		x = SafeZoneX;
		y = SafeZoneY;
		h = SafeZoneH;
		w = SafeZoneW;
		text = "\ORG_main\images\ORG_Banner.paa";
	};
};

class RscDisplayClient : RscStandardDisplay 
{
	class controlsBackground
	{
		class LoadingPicture_ORG : RscPicture 
		{
			idc = 1000;

			colorText[] = { 1,1,1,1 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\ORG_main\images\ORG_Banner.paa";
		};
	};
};

class RscDisplayConfigure 
{
	enableDisplay = 1;
};