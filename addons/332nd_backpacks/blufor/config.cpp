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
            MACRO_NEW_BACKPACK(blufor,332nd_jt_12)
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
}