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

	class CloneHelmetAB_Base : JLTS_CloneHelmetAB
	{
		class ItemInfo;
	};

	//Base airborne helmet
	class MACRO_NEW_HELMET(airborne,base): CloneHelmetAB_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Airborne Helmet ('base')";
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

	class 3as_P2_Pilot_helmet;

	class CloneHelmetPilot_Base : 3as_P2_Pilot_helmet
	{
		class ItemInfo;
	};

	//Base aviation helmet
	class MACRO_NEW_HELMET(aviation,base): CloneHelmetPilot_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Aviation Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

		class ItemInfo : ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 16;
					passThrough = 0.5;
					explosionShielding = 0.75;
				};
			};
		};
	}

	//ARF helmet

	class 3AS_ARF_Helmet;

	class CloneARFHelmet_Base :3AS_ARF_Helmet
	{
		class ItemInfo;
	};

	class MACRO_NEW_HELMET(arf,base): CloneARFHelmet_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] ARF Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

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

	class 3as_Engineer_Helmet;

	class CloneHelmetWarden_Base : 3as_Engineer_Helmet
	{
		class ItemInfo;
	};

	//Base Warden helmet
	class MACRO_NEW_HELMET(warden,base): CloneHelmetWarden_Base
	{
		scopeArsenal = 0;
        scope = 0;
        author = MACRO_AUTHOR;
        displayName = "[332nd] Warden Helmet ('base')";
        subItems[] = {"Integrated_NVG_TI_1_F"};

		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

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
}