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
