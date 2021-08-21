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

class CfgAddons {
	class PreloadAddons {
		class SL_Monitor {
			list[] = { "332nd_main" };
		};
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

class RscDisplayLoading 
{
	class Variants 
	{
		class LoadingBackground_332nd
		{
			idd = 250;
			class controls
			{
				class LoadingPicture_332nd : RscPicture
				{
					idc = 1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\332nd_Banner.paa";
				};
			};
		};

		class Loading_West1 : LoadingBackground_332nd
		{
			class controls
			{
				class LoadingPicture_332nd
				{
					idc = 1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\332nd_Banner.paa";
				};
			};
		};

		class Loading_West2 : LoadingBackground_332nd
		{
			class controls
			{
				class LoadingPicture_332nd
				{
					idc = 1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\332nd_Banner.paa";
				};
			};
		};

		class Loading_East1 : LoadingBackground_332nd
		{
			class controls
			{
				class LoadingPicture_332nd
				{
					idc = 1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\332nd_Banner.paa";
				};
			};
		};

		class Loading_East2 : LoadingBackground_332nd
		{
			class controls
			{
				class LoadingPicture_332nd
				{
					idc = 1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\332nd_main\332nd_Banner.paa";
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
			idc = 1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\332nd_Banner.paa";
		};
	};
};

class RscDisplayLoadMission : RscStandardDisplay 
{
	class controlsBackground 
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\332nd_Banner.paa";
		};
	};
};

class RscDisplayStart : RscStandardDisplay 
{
	class controls 
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\332nd_Banner.paa";
		};
	};
};

class RscDisplayMPPlayers;
class RscDisplayClientWait : RscDisplayMPPlayers 
{
	class LoadingPicture_332nd : RscPicture 
	{
		idc = 1;
		x = SafeZoneX;
		y = SafeZoneY;
		h = SafeZoneH;
		w = SafeZoneW;
		text = "\332nd_main\332nd_Banner.paa";
	};
};

class RscDisplayClient : RscStandardDisplay 
{
	class controlsBackground
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\332nd_Banner.paa";
		};
	};
};

class RscDisplayConfigure 
{
	enableDisplay = 1;
};

class RscDisplayMain : RscStandardDisplay 
{
	idd = 0;
	idc = 1;
	enableDisplay = 1;

	text = "\332nd_main\332nd_Banner.paa";

	class RscActiveText;

	class RscActivePicture : RscActiveText
	{
		style = 48;
		color[] = 
		{
				1, 1, 1, 0.5
		};
		colorActive[] = 
		{
				1, 1, 1, 1
		};
	};
	class Spotlight {};

	class controls {
		class Spotlight1 {};
		class Spotlight2 {};
		class Spotlight3 {};
		class BackgroundSpotlightRight {};
		class BackgroundSpotlightLeft {};
		class BackgroundSpotlight {};

		class B_Credits {};

		class ConnectServer : RscButton 
		{
			idc = -1;
			text = "Join the 332nd Legion Discord!";
			style = 2;
			url = "https://discord.gg/EYbu9QzfBN";
			colorBackground[] = { 0, 0, 0, 0.4 };
			colorBackgroundActive[] = { 1,0,0, 0,2 };
			soundEnter[] = { "\332nd_main\ui\Hover_Sound.ogg",0.3,1 };
			soundPush[] = { "\332nd_main\ui\Click_Sound.ogg",0.7,1 };
			borderSize = 0.054;
			colorBorder[] = { 0,0,0,0 };
			x = "SafeZoneXAbs + 0.425 * SafeZoneW";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

		};
		class ConnectDiscord : RscButton 
		{
			idc = -1;
			text = "Join the 332nd Legion Discord!";
			style = 2;
			url = "https://discord.gg/EYbu9QzfBN";
			colorBackground[] = { 0, 0, 0, 0.4 };
			colorBackgroundActive[] = { 1,0,0, 0,2 };
			soundEnter[] = { "\332nd_main\ui\Hover_Sound.ogg",0.3,1 };
			soundPush[] = { "\332nd_main\ui\Click_Sound.ogg",0.7,1 };
			borderSize = 0.054;
			colorBorder[] = { 0,0,0,0 };
			x = "SafeZoneXAbs + 0.425 * SafeZoneW";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

		};
		class ConnectVK : RscButton 
		{
			idc = -1;
			text = "Join the 332nd Legion Discord!";
			style = 2;
			url = "https://discord.gg/EYbu9QzfBN";
			colorBackground[] = { 0, 0, 0, 0.4 };
			colorBackgroundActive[] = { 1,0,0, 0,2 };
			soundEnter[] = { "\332nd_main\ui\Hover_Sound.ogg",0.3,1 };
			soundPush[] = { "\332nd_main\ui\Click_Sound.ogg",0.7,1 };
			borderSize = 0.054;
			colorBorder[] = { 0,0,0,0 };
			x = "SafeZoneXAbs + 0.425 * SafeZoneW";
			y = "1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "12 * (((safezoneW / safezoneH) min 1.2) / 40)";
			h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

		};
	};

	class controlsBackground 
	{
		class LoadingPicture_332nd : RscPicture 
		{
			idc = 1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\332nd_main\332nd_Banner.paa";
		};
	};
};