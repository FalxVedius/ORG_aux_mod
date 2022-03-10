#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_Series)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAmmo
{
	class ls_ammo_338_green;
	class MACRO_NEW_AMMO(338_Green_T):  ls_ammo_338_green
	{
	    hit = 20;
	    effectfly="332nd_aux_effects_green_bullet";
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	}

	class MACRO_NEW_AMMO(338_Green):  ls_ammo_338_green
	{
	    hit = 20;
        soundsetsoniccrack[]=
		{
			"332nd_blaster_flyby_soundset"
		};
	}
};