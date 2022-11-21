#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Haxion_weapons)
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

class CfgAmmo
{
	class SWLW_ammo_762_red;

	class MACRO_NEW_AMMO(ZH73) : SWLW_ammo_762_red
	{

	};
};

class CfgMagazines
{
	class SWLW_ZH73_Mag;

	class MACRO_NEW_MAG(ZH73) : SWLW_ZH73_Mag
	{

	};
};

class CfgWeapons
{
	class SWLW_ZH73;

	class MACRO_NEW_WEAPON(ZH73) : SWLW_ZH73
	{

	};
};