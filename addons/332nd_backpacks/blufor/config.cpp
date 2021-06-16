#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(blufor_backpacks)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(backpacks)
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(backpacks)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_BACKPACK(blufor,332nd_jt_12),
            MACRO_NEW_BACKPACK(blufor,332nd_jt_12_1),
            MACRO_NEW_BACKPACK(blufor,332nd_jt_12_2),
            MACRO_NEW_BACKPACK(blufor,332nd_jt_12_3),
            };
		weapons[] = {};
	};
};

class CfgVehicles
{
    class MACRO_NEW_BACKPACK(blufor,332nd_jt_12_base);

    
	class MACRO_NEW_BACKPACK(blufor,332nd_jt_12): MACRO_NEW_BACKPACK(blufor,332nd_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,Basic)
        scope = 2;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12.paa};
    }

    class MACRO_NEW_BACKPACK(blufor,332nd_jt_12_1) : MACRO_NEW_BACKPACK(blufor,332nd_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,60-Fuel)
        scope = 2;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12.paa};

        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 60;
        NSM_jumppack_recharge = 2;

        //Code to be deleted once we remove 501st dependencies
        RD501_jumppack_spam_delay = 0;
        RD501_jumppack_energy_capacity = 60;
        RD501_jumppack_recharge = 2;
    }

    class MACRO_NEW_BACKPACK(blufor,332nd_jt_12_2) : MACRO_NEW_BACKPACK(blufor,332nd_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,80-Fuel)
        scope = 2;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12.paa};

        NSM_jumppack_spam_delay = 1;
        NSM_jumppack_energy_capacity = 80;
        NSM_jumppack_recharge = 2;

        //Code to be deleted once we remove 501st dependencies
        RD501_jumppack_spam_delay = 0;
        RD501_jumppack_energy_capacity = 80;
        RD501_jumppack_recharge = 2;
    }

    class MACRO_NEW_BACKPACK(blufor,332nd_jt_12_3) : MACRO_NEW_BACKPACK(blufor,332nd_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,100-Fuel)
        scope = 2;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12.paa};

        NSM_jumppack_spam_delay = 0;
        NSM_jumppack_energy_capacity = 100;
        NSM_jumppack_recharge = 2;

        //Code to be deleted once we remove 501st dependencies
        RD501_jumppack_spam_delay = 1;
        RD501_jumppack_energy_capacity = 100;
        RD501_jumppack_recharge = 2;
    }
}