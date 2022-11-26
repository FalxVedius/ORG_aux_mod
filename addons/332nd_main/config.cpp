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

		class Keybinds_and_Functions
		{
			file = "\332nd_main\functions";
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

class Extended_PostInit_EventHandlers 
{
	class 332nd_aux_POSTINIT
	{
		init="call compile preprocessFileLineNumbers '332nd_main\functions\XEH_postinit.sqf'";
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
		class LoadingPicture_332nd : RscPicture
		{
			idc = 1000;

			colorText[] = { 1,1,1,0.42 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\images\332nd_Banner.paa";
		};
	};
};

class RscDisplayLoading 
{
	class Variants 
	{
		class LoadingBackground_332nd : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Banner.paa";
				};
			};
		};

		class LoadingBackground_332nd_V1 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_1.paa";
				};
			};
		};

		class LoadingBackground_332nd_V2 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_2.paa";
				};
			};
		};

		class LoadingBackground_332nd_V3 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_3.paa";
				};
			};
		};

		class LoadingBackground_332nd_V4 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_4.paa";
				};
			};
		};

		class LoadingBackground_332nd_V5 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_5.paa";
				};
			};
		};

		class LoadingBackground_332nd_V6 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_6.paa";
				};
			};
		};

		class LoadingBackground_332nd_V7 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_7.paa";
				};
			};
		};

		class LoadingBackground_332nd_V8 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_8.paa";
				};
			};
		};

		class LoadingBackground_332nd_V9 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_9.paa";
				};
			};
		};

		class LoadingBackground_332nd_V10 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_10_Tally.paa";
				};
			};
		};

		class LoadingBackground_332nd_V11 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_11.paa";
				};
			};
		};

		class LoadingBackground_332nd_V12 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_12.paa";
				};
			};
		};

		class LoadingBackground_332nd_V13 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_13.paa";
				};
			};
		};

		class LoadingBackground_332nd_V14 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_14.paa";
				};
			};
		};

		class LoadingBackground_332nd_V15 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_15.paa";
				};
			};
		};

		class LoadingBackground_332nd_V16 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_16.paa";
				};
			};
		};

		class LoadingBackground_332nd_V17 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_17.paa";
				};
			};
		};

		class LoadingBackground_332nd_V18 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_18.paa";
				};
			};
		};

		class LoadingBackground_332nd_V19 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_19.paa";
				};
			};
		};

		class LoadingBackground_332nd_V20 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_20.paa";
				};
			};
		};

		class LoadingBackground_332nd_V21 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_21.paa";
				};
			};
		};

		class LoadingBackground_332nd_V22 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_22.paa";
				};
			};
		};

		class LoadingBackground_332nd_V23 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_23.paa";
				};
			};
		};

		class LoadingBackground_332nd_V24 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_24.paa";
				};
			};
		};

		class LoadingBackground_332nd_V25 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_25.paa";
				};
			};
		};

		class LoadingBackground_332nd_V26 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_26.paa";
				};
			};
		};

		class LoadingBackground_332nd_V27 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_27.paa";
				};
			};
		};

		class LoadingBackground_332nd_V28 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_28.paa";
				};
			};
		};

		class LoadingBackground_332nd_V29 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_29.paa";
				};
			};
		};

		class LoadingBackground_332nd_V30 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_30.paa";
				};
			};
		};

		class LoadingBackground_332nd_V31 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_31.paa";
				};
			};
		};

		class LoadingBackground_332nd_V32 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_32.paa";
				};
			};
		};

		class LoadingBackground_332nd_V33 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_33.paa";
				};
			};
		};

		class LoadingBackground_332nd_V34 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_34.paa";
				};
			};
		};

		class LoadingBackground_332nd_V35 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_35.paa";
				};
			};
		};

		class LoadingBackground_332nd_V36 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_36.paa";
				};
			};
		};

		class LoadingBackground_332nd_V37 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_37.paa";
				};
			};
		};

		class LoadingBackground_332nd_V38 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_38.paa";
				};
			};
		};

		class LoadingBackground_332nd_V39 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_39.paa";
				};
			};
		};

		class LoadingBackground_332nd_V40 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_41.paa";
				};
			};
		};

		class LoadingBackground_332nd_V41 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_41.paa";
				};
			};
		};

		class LoadingBackground_332nd_V42 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_42.paa";
				};
			};
		};

		class LoadingBackground_332nd_V43 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_43.paa";
				};
			};
		};

		class LoadingBackground_332nd_V44 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_44.paa";
				};
			};
		};

		class LoadingBackground_332nd_V45 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_45.paa";
				};
			};
		};

		class LoadingBackground_332nd_V46 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_46.paa";
				};
			};
		};

		class LoadingBackground_332nd_V47 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_47.paa";
				};
			};
		};

		class LoadingBackground_332nd_V48 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_48.paa";
				};
			};
		};

		class LoadingBackground_332nd_V49 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_49.paa";
				};
			};
		};

		class LoadingBackground_332nd_V50 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_50.paa";
				};
			};
		};

		class LoadingBackground_332nd_V51 : RscDisplayLoadMission
		{

			class controlsBackground : controlsBackground
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1000;

					colorText[] = { 1,1,1,0.42 };

					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\images\332nd_Promo_51.paa";
				};
			};
		};

	};
};

class RscDisplayLoadCustom : RscStandardDisplay 
{
	class controlsBackground 
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1000;

			colorText[] = { 1,1,1,1 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\images\332nd_Banner.paa";
		};
	};
};


class RscDisplayMPPlayers;
class RscDisplayClientWait : RscDisplayMPPlayers 
{
	class LoadingPicture_332nd : RscPicture 
	{
		idc = 1000;

		colorText[] = { 1,1,1,1 };

		x = SafeZoneX;
		y = SafeZoneY;
		h = SafeZoneH;
		w = SafeZoneW;
		text = "\332nd_main\images\332nd_Banner.paa";
	};
};

class RscDisplayClient : RscStandardDisplay 
{
	class controlsBackground
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1000;

			colorText[] = { 1,1,1,1 };

			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\images\332nd_Banner.paa";
		};
	};
};

class RscDisplayConfigure 
{
	enableDisplay = 1;
};