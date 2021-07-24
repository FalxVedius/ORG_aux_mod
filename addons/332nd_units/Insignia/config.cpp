#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(Insignia)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(units);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(units)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgUnitInsignia
{
	class 332nd_Torrent1_2
	{
		displayName = "[332nd] Torrent 1-2 (Wildcards)";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Torrent1_2.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
};