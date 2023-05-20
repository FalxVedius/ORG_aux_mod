#include "../../ORG_main/macros/main.hpp"

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
	class ORG_Torrent1_2
	{
		displayName = "[ORG] Torrent 1-2 (Wildcards)";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Torrent1_2.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Torrent1_1
	{
		displayName = "[ORG] Torrent 1-1 (Big Game)";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Torrent1_1.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Banshee1_4
	{
		displayName = "[ORG] Banshee 1-4";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Banshee1_4.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class Torrent2_1
	{
		displayName = "[ORG] Torrent 2-1";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Torrent2_1.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class Torrent2_2
	{
		displayName = "[ORG] Torrent 2-2";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Torrent2_2.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class Seraph2_3
	{
		displayName = "[ORG] Seraph 2-3";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Seraph2_3.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class Seraph1_3
	{
		displayName = "[ORG] Seraph 1-3";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Seraph1_3.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Roundel
	{
		displayName = "[ORG] GAR Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\ORG_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Christmas_Roundel
	{
		displayName = "[ORG] Christmas";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\ORG_Christmas.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Specialist_Roundel
	{
		displayName = "[ORG] Specialist GAR Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Specialist_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Ahsoka
	{
		displayName = "[ORG] Ahsoka Pattern";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Ahsoka_Mark.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Reaper_Roundel
	{
		displayName = "[ORG] Reaper Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Reaper_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Seraph_Roundel
	{
		displayName = "[ORG] Seraph Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Seraph_Roundel.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_GreyMedic
	{
		displayName = "[ORG] Medic Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\GreyMedic.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_GreyRTO
	{
		displayName = "[ORG] RTO Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\GreyRTO.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Medic
	{
		displayName = "[ORG] Medic Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Medic.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_RTO
	{
		displayName = "[ORG] RTO Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\RTO.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_WhiteMedic
	{
		displayName = "[ORG] Medic Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\WhiteMedic.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_WhiteRTO
	{
		displayName = "[ORG] RTO Roundel";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\WhiteRTO.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_1stPlt
	{
		displayName = "[ORG] Torrent 1";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\1st_Plt.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_2ndPlt
	{
		displayName = "[ORG] Torrent 2";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\2nd_Plt.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_1stFlight
	{
		displayName = "[ORG] 1st Flight";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\1st_Flight.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_2ndFlight
	{
		displayName = "[ORG] 2nd Flight";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\2nd_Flight.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Aegis_1_5
	{
		displayName = "[ORG] Aegis 1-5";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Aegis_1_5.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
	class ORG_Gravedigger
	{
		displayName = "[ORG] Gravedigger";								// Name displayed in Arsenal
		author = "Halligan";											// Author displayed in Arsenal
		texture = "\ORG_units\Insignia\data\Gravedigger.paa";			// Image path
		material = "\MRC\JLTS\Core_mod\data\insignias\insignia_CloneArmor.rvmat";	// .rvmat path
	};
};