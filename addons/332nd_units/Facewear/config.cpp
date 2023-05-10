#include "../../332nd_main/macros/main.hpp"
class CfgPatches
{
	class MACRO_PATCH_NAME(Facewear)
	{
		author="332nd Aux Team";
		requiredVersion=0.1;
		requiredAddons[]=
		{
		};
		units[]=
		{
		};
		weapons[]=
		{
		};
	};
};
class CfgGlasses
{
	class ls_misc_poncho_facewear;
	class G_Tactical_Black;
	class G_Diving;

	class 332nd_Underwater_Helmet_Visor : G_Diving
	{
		displayName = "[332nd] Underwater Helmet Visor";
		model = "\A3\characters_f\Heads\glasses\g_diving";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Sniper : G_Tactical_Black
	{
		displayName = "[332nd] Sniper Attachment";
		model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
		hiddenSelections[] = { "illum","camo1" };
		hiddenSelectionsMaterials[] = { "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
		hiddenSelectionsTextures[] = { "\SWLB_clones_spec\data\camo2_co.paa","\SWLB_clones_spec\data\camo2_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Omega : G_Tactical_Black
	{
		displayName = "[332nd] Shoulder Attachment";
		model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\SWLB_units_spec\data\SWLB_Omega_Armor2_Co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_EOD : G_Tactical_Black
	{
		displayName = "[332nd] EOD Bag";
		model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\332nd_units\Facewear\data\EOD.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_LowProfile : G_Tactical_Black
	{
		displayName = "[332nd] Low Profile";
		model = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Scarf : G_Tactical_Black
	{
		displayName = "[332nd] Scarf";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\SWLB_CEE\data\SWLB_CEE_Scarf_Co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Scarf_blue : G_Tactical_Black
	{
		displayName = "[332nd] Scarf (Blue)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Blue.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Scarf_green : G_Tactical_Black
	{
		displayName = "[332nd] Scarf (Green)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Green.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Scarf_orange : G_Tactical_Black
	{
		displayName = "[332nd] Scarf (Orange)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Orange.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Scarf_red : G_Tactical_Black
	{
		displayName = "[332nd] Scarf (Red)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Red.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Scarf_white : G_Tactical_Black
	{
		displayName = "[332nd] Scarf (White)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_White.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class lsd_gar_republicCommando_hud;
	class 332nd_Commando_HUD : lsd_gar_republicCommando_hud
	{
		displayName = "[332nd] Republic Commando HUD";
		model = "\A3\Weapons_f\DummyNVG";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "\SWLB_equipment\facewears\data\RC_HUD_ca.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\SWLB_equipment\facewears\data\RC_HUD_cracked_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class lsd_gar_p2Interior_hud;
	class 332nd_P2_HUD : lsd_gar_p2Interior_hud
	{
		displayName = "[332nd] P2 HUD";
		model = "\A3\Weapons_f\DummyNVG";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Headlamp_P1 : G_Tactical_Black
	{
		displayName = "[332nd] Headlamp (P1)";
		model = "lsd_equipment_bluefor\facewear\gar\headlampSingle\lsd_gar_n3rf_this_Fleshlight_p1";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Headlamp_P2 : G_Tactical_Black
	{
		displayName = "[332nd] Headlamp (P2)";
		model = "lsd_equipment_bluefor\facewear\gar\headlampSingle\lsd_gar_n3rf_this_Fleshlight_p2";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_RangeFinder_P1 : G_Tactical_Black
	{
		displayName = "[332nd] Rangefinder (P1)";
		model = "\lsd_equipment_bluefor\nvg\gar\rangefinder\lsd_gar_p1Rangefinder_nvg_off.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_RangeFinder_P2 : G_Tactical_Black
	{
		displayName = "[332nd] Rangefinder (P2)";
		model = "\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_assault_Ant : G_Tactical_Black
	{
		displayName = "[332nd] Antenna";
		model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\332nd_units\Facewear\data\Antenna" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_mando_rangefinder : G_Tactical_Black
	{
		displayName = "[332nd] Mando Rangefinder";
		model = "\ls_equipment_greenfor\nvg\mandalorian\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ls_armor_greenfor\helmet\mandalorian\original\data\original_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_LowVisor_P1: G_Tactical_Black
	{
		displayName = "[332nd] Lowered Visor (P1)";
		model = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_p1Visor_nvg_on.p3d";
		hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\NVG.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class 332nd_LowVisor_P2: G_Tactical_Black
	{
		displayName = "[332nd] Lowered Visor (P2)";
		model = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\NVG.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Sun_Visor_P1 : G_Tactical_Black
	{
		displayName = "[332nd] Sun Visor (P1)";
		model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			""
		};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Sun_Visor_P2 : G_Tactical_Black
	{
		displayName = "[332nd] Sun Visor (P2)";
		model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			""
		};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	
	class 332nd_CC_Visor_P1 : G_Tactical_Black
	{
		displayName = "[332nd] Commander Visor (P1)";
		model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg";
		hiddenSelectionsTextures[]=
		{
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa"
		};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_CC_Visor_P2 : G_Tactical_Black
	{
		displayName = "[332nd] Commander Visor (P2)";
		model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa",
			"\lsd_equipment_bluefor\nvg\gar\visor\data\SWLB_clone_nvg_co.paa"
		};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_NVG_Visor_P1: G_Tactical_Black
	{
		displayName = "[332nd] NVG Visor (P1)";
		model = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_p1Visor_nvg_off.p3d";
		hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\NVG.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_NVG_Visor_P2: G_Tactical_Black
	{
		displayName = "[332nd] NVG Visor (P2)";
		model = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
		hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\NVG.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_Helmet_Visor : G_Tactical_Black
	{
		displayName = "[332nd] Helmet Visor";
		model = "\A3\characters_f_beta\heads\glasses\g_tactical_black";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_JTAC_Attachment : 332nd_Helmet_Visor
	{
		displayName = "[332nd] JTAC Attachment (Blue)";
		model = "332nd_units\Facewear\Clone_RTO_EARS.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\332nd_units\Facewear\data\CAMO1_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	
	class 332nd_JTAC_Attachment_Orange : 332nd_Helmet_Visor
	{
		displayName = "[332nd] JTAC Attachment (Orange)";
		model = "332nd_units\Facewear\Clone_RTO_EARS.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\332nd_units\Facewear\data\CAMO2_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
};
