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
	class 332_DC15A: throw
	{
		texture="332nd_weapons\Reticules\DC15A.paa";
	};
	class 332_DC15C: throw
	{
		texture="332nd_weapons\Reticules\DC15C.paa";
	};
	class 332_DC15S: throw
	{
		texture="332nd_weapons\Reticules\DC15S.paa";
	};
	class 332_DC17: throw
	{
		texture="332nd_weapons\Reticules\DC17.paa";
	};
	class 332_DMR: throw
	{
		texture="332nd_weapons\Reticules\DMR.paa";
	};
	class 332_RocketLauncher: throw
	{
		texture="332nd_weapons\Reticules\RocketLauncher.paa";
	};
	class 332_RPS4: throw
	{
		texture="332nd_weapons\Reticules\RPS4.paa";
	};
	class 332_Shotgun: throw
	{
		texture="332nd_weapons\Reticules\Shotgun.paa";
	};
	class 332_Stun: throw
	{
		texture="332nd_weapons\Reticules\Stun.paa";
	};
	class 332_UGL: throw
	{
		texture="332nd_weapons\Reticules\UGL.paa";
	};
	class 332_Z6: throw
	{
		texture="332nd_weapons\Reticules\Z6.paa";
	};
	class 332_DOT: throw
	{
		texture="332nd_weapons\Reticules\DOT.paa"; //Need to add 15L possibly more variation to snipers?
	};
	class 332_Locking: throw
	{
		texture="332nd_weapons\Reticules\Locking.paa";
	};
	class 332_Locked: throw
	{
		texture="332nd_weapons\Reticules\Locked.paa"; 
	};
	class 332_Chevron: throw
	{
		texture="332nd_weapons\Reticules\Chevron.paa"; 
	};
}