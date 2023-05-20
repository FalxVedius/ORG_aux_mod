#include "../../ORG_main/macros/main.hpp"
class CfgPatches
{
	class MACRO_PATCH_NAME(Facewear)
	{
		author="ORG Aux Team";
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

	class ORG_Underwater_Helmet_Visor : G_Diving
	{
		displayName = "[ORG] Underwater Helmet Visor";
		model = "\A3\characters_f\Heads\glasses\g_diving";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_RangeFinder : G_Tactical_Black
	{
		displayName = "[ORG] Rangefinder (White)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_range_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Sniper : G_Tactical_Black
	{
		displayName = "[ORG] Sniper Attachment";
		model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
		hiddenSelections[] = { "illum","camo1" };
		hiddenSelectionsMaterials[] = { "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
		hiddenSelectionsTextures[] = { "\SWLB_clones_spec\data\camo2_co.paa","\SWLB_clones_spec\data\camo2_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Omega : G_Tactical_Black
	{
		displayName = "[ORG] Shoulder Attachment";
		model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\SWLB_units_spec\data\SWLB_Omega_Armor2_Co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_EOD : G_Tactical_Black
	{
		displayName = "[ORG] EOD Bag";
		model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\ORG_units\Facewear\data\EOD.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_LowProfile : G_Tactical_Black
	{
		displayName = "[ORG] Low Profile";
		model = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Scarf : G_Tactical_Black
	{
		displayName = "[ORG] Scarf";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\SWLB_CEE\data\SWLB_CEE_Scarf_Co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Scarf_blue : G_Tactical_Black
	{
		displayName = "[ORG] Scarf (Blue)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Blue.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Scarf_green : G_Tactical_Black
	{
		displayName = "[ORG] Scarf (Green)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Green.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Scarf_orange : G_Tactical_Black
	{
		displayName = "[ORG] Scarf (Orange)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Orange.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Scarf_red : G_Tactical_Black
	{
		displayName = "[ORG] Scarf (Red)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Red.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Scarf_white : G_Tactical_Black
	{
		displayName = "[ORG] Scarf (White)";
		model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_White.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class lsd_gar_republicCommando_hud;
	class ORG_Commando_HUD : lsd_gar_republicCommando_hud
	{
		displayName = "[ORG] Republic Commando HUD";
		model = "\A3\Weapons_f\DummyNVG";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "\SWLB_equipment\facewears\data\RC_HUD_ca.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\SWLB_equipment\facewears\data\RC_HUD_cracked_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class lsd_gar_p2Interior_hud;
	class ORG_P2_HUD : lsd_gar_p2Interior_hud
	{
		displayName = "[ORG] P2 HUD";
		model = "\A3\Weapons_f\DummyNVG";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "\SWLB_equipment\facewears\data\P2_HUD_ca.paa";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "\SWLB_equipment\facewears\data\P2_HUD_cracked_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_RangeFinder_ls : G_Tactical_Black
	{
		displayName = "[ORG] Rangefinder (Legions)";
		model = "\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_assault_Ant : G_Tactical_Black
	{
		displayName = "[ORG] Antenna";
		model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\Facewear\data\Antenna" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_mando_rangefinder : G_Tactical_Black
	{
		displayName = "[ORG] Mando Rangefinder";
		model = "\ls_equipment_greenfor\nvg\mandalorian\rangefinder\ls_mandalorian_rangefinder_nvg_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ls_armor_greenfor\helmet\mandalorian\original\data\original_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_LowVisor : G_Tactical_Black
	{
		displayName = "[ORG] Lowered Visor (White)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\White_nvg.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_LowVisor_Orange : G_Tactical_Black
	{
		displayName = "[ORG] Lowered Visor (Orange)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\Orange_nvg.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_LowVisor_Grey : G_Tactical_Black
	{
		displayName = "[ORG] Lowered Visor (Grey)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\Grey_nvg.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_RangeFinder_Black : G_Tactical_Black
	{
		displayName = "[ORG] Rangefinder (Black)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_rangefinder_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_CC_Visor : G_Tactical_Black
	{
		displayName = "[ORG] Sun Visor";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_NVG_Visor: G_Tactical_Black
	{
		displayName = "[ORG] NVG Visor (White)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\White_nvg.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_NVG_Visor_Orange : G_Tactical_Black
	{
		displayName = "[ORG] NVG Visor (Black)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\Orange_nvg.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_NVG_Visor_Grey : G_Tactical_Black
	{
		displayName = "[ORG] NVG Visor (Black)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\Grey_nvg.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_Helmet_Visor : G_Tactical_Black
	{
		displayName = "[ORG] Helmet Visor";
		model = "\A3\characters_f_beta\heads\glasses\g_tactical_black";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class ORG_JTAC_Attachment : ORG_Helmet_Visor
	{
		displayName = "[ORG] JTAC Attachment (Blue)";
		model = "ORG_units\Facewear\Clone_RTO_EARS.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\Facewear\data\CAMO1_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	
	class ORG_JTAC_Attachment_Orange : ORG_Helmet_Visor
	{
		displayName = "[ORG] JTAC Attachment (Orange)";
		model = "ORG_units\Facewear\Clone_RTO_EARS.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\ORG_units\Facewear\data\CAMO2_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
};
