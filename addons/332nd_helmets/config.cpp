#include "../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(helmets)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(main)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class JLTS_CloneHelmetP2;

	class CloneHelmetP2_Base : JLTS_CloneHelmetP2
	{
		class ItemInfo;
	};

	//Base infantry helmet
    class MACRO_NEW_HELMET(infantry,base): CloneHelmetP2_Base
    {
        scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Infantry Helmet ('base')";
        subItems[] = {"G_B_Diving"};

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
				};
			};
		};
    }

	class JLTS_CloneHelmetAB;

	//Base airborne helmet
	class MACRO_NEW_HELMET(airborne,base): JLTS_CloneHelmetAB
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Airborne Helmet ('base')";
        subItems[] = {"G_B_Diving"};
	}

	class 3as_P2_Pilot_helmet;

	//Base aviation helmet
	class MACRO_NEW_HELMET(aviation,base): 3as_P2_Pilot_helmet
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Aviation Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};
	}

	class 3as_Engineer_Helmet;

	//Base Warden helmet
	class MACRO_NEW_HELMET(warden,base): 3as_Engineer_Helmet
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Warden Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};
	}
}