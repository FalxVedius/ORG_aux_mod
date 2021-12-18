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
	class 332nd_Torrent1_1
	{
		displayName = "[332nd] Torrent 1-1 (Big Game)";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Torrent1_1.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Banshee1_4
	{
		displayName = "[332nd] Banshee 1-4";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Banshee1_4.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class Torrent2_1
	{
		displayName = "[332nd] Torrent 2-1";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Torrent2_1.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class Seraph2_3
	{
		displayName = "[332nd] Torrent 2-3";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Seraph2_3.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Roundel
	{
		displayName = "[332nd] GAR Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\332_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Christmas_Roundel
	{
		displayName = "[332nd] Christmas";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\332_Christmas.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Specialist_Roundel
	{
		displayName = "[332nd] Specialist GAR Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Specialist_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Ahsoka
	{
		displayName = "[332nd] Ahsoka Pattern";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Ahsoka_Mark.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Reaper_Roundel
	{
		displayName = "[332nd] Reaper Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Reaper_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class 332nd_Seraph_Roundel
	{
		displayName = "[332nd] Seraph Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\332nd_units\Insignia\data\Seraph_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
};