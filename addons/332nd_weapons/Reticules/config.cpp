#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Reticules)
	{
		author = "Namenai";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgWeaponCursors
{
	class throw;
	class DC15A_Test: throw
	{
		texture="332nd_weapons\Reticules\DC15A.paa";
	};
	class DC15C_Test: throw
	{
		texture="332nd_weapons\Reticules\DC15C.paa";
	};
	class DC15S_Test: throw
	{
		texture="332nd_weapons\Reticules\DC15S.paa";
	};
	class DC17_Test: throw
	{
		texture="332nd_weapons\Reticules\DC17.paa";
	};
	class DMR_Test: throw
	{
		texture="332nd_weapons\Reticules\DMR.paa";
	};
	class RocketLauncher_Test: throw
	{
		texture="332nd_weapons\Reticules\RocketLauncher.paa";
	};
	class RPS4_Test: throw
	{
		texture="332nd_weapons\Reticules\RPS4.paa";
	};
	class Shotgun_Test: throw
	{
		texture="332nd_weapons\Reticules\Shotgun.paa";
	};
	class Stun_Test: throw
	{
		texture="332nd_weapons\Reticules\Stun.paa";
	};
	class UGL_Test: throw
	{
		texture="332nd_weapons\Reticules\UGL.paa";
	};
	class Z6_Test: throw
	{
		texture="332nd_weapons\Reticules\Z6.paa";
	};
	class DOT_Test: throw
	{
		texture="332nd_weapons\Reticules\DOT.paa";
	};
}