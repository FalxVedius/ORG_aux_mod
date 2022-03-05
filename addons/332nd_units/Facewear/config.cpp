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

	class 332nd_RangeFinder : G_Tactical_Black
	{
		displayName = "[332nd] Rangefinder (White)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_range_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_RangeFinder_Black : G_Tactical_Black
	{
		displayName = "[332nd] Rangefinder (Black)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_rangefinder_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_CC_Visor : G_Tactical_Black
	{
		displayName = "[332nd] Commander Visor";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_NVG_Visor: G_Tactical_Black
	{
		displayName = "[332nd] NVG Visor (White)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_NVG_Visor_Black : G_Tactical_Black
	{
		displayName = "[332nd] NVG Visor (Black)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_nvg_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332nd_MC_Visor : G_Tactical_Black
	{
		displayName = "[332nd] Marshal Commander Visor";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa" };
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
		displayName = "[332nd] JTAC Attachment";
		model = "332nd_units\Facewear\Clone_RTO_EARS.p3d";
		hiddenSelections[] = { "camo1" };
		hiddenSelectionsTextures[] = { "\332nd_units\Facewear\data\CAMO1_co.paa" };
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};

	class 332_PonchoBase: ls_misc_poncho_facewear
	{
		displayName="[332nd] Base Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\base_co.paa"};
		ACE_Overlay="";
	};
	class 332_PatternV1Blue: ls_misc_poncho_facewear
	{
		displayName="[332nd] Pattern 1 (Blue) Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\peace_blue_co.paa"};
		ACE_Overlay="";
	};
	class 332_PatternV1Green: ls_misc_poncho_facewear
	{
		displayName="[332nd] Pattern 1 (Green) Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\peace_green_co.paa"};
		ACE_Overlay="";
	};
	class 332_PatternV1Red: ls_misc_poncho_facewear
	{
		displayName="[332nd] Pattern 1 (Red) Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\peace_red_co.paa"};
		ACE_Overlay="";
	};
	class 332_PatternV2Blue: ls_misc_poncho_facewear
	{
		displayName="[332nd] Pattern 2 (Blue) Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\sidestripe_blue_co.paa"};
		ACE_Overlay="";
	};
	class 332_PatternV2Brown: ls_misc_poncho_facewear
	{
		displayName="[332nd] Pattern 2 (Brown) Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\sidestripe_brown_co.paa"};
		ACE_Overlay="";
	};
	class 332_PatternV2White: ls_misc_poncho_facewear
	{
		displayName="[332nd] Pattern 2 (White) Poncho";
		model="\ls_equipment_bluefor\_misc\poncho\ls_misc_poncho.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\ls_armor_greenfor\vest\misc\poncho\data\sidestripe_white_co.paa"};
		ACE_Overlay="";
	};
};
