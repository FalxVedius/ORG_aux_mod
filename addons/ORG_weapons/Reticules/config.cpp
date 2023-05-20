#include "..\..\ORG_main\macros\main.hpp" // my config macro lib

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
	class ORG_DC15A: throw
	{
		texture="ORG_weapons\Reticules\DC15A.paa";
	};
	class ORG_DC15C: throw
	{
		texture="ORG_weapons\Reticules\DC15C.paa";
	};
	class ORG_DC15S: throw
	{
		texture="ORG_weapons\Reticules\DC15S.paa";
	};
	class ORG_DC17: throw
	{
		texture="ORG_weapons\Reticules\DC17.paa";
	};
	class ORG_DMR: throw
	{
		texture="ORG_weapons\Reticules\DMR.paa";
	};
	class ORG_RocketLauncher: throw
	{
		texture="ORG_weapons\Reticules\RocketLauncher.paa";
	};
	class ORG_RPS4: throw
	{
		texture="ORG_weapons\Reticules\RPS4.paa";
	};
	class ORG_Shotgun: throw
	{
		texture="ORG_weapons\Reticules\Shotgun.paa";
	};
	class ORG_Stun: throw
	{
		texture="ORG_weapons\Reticules\Stun.paa";
	};
	class ORG_UGL: throw
	{
		texture="ORG_weapons\Reticules\UGL.paa";
	};
	class ORG_Z6: throw
	{
		texture="ORG_weapons\Reticules\Z6.paa";
	};
	class ORG_DOT: throw
	{
		texture="ORG_weapons\Reticules\DOT.paa"; //Need to add 15L possibly more variation to snipers?
	};
	class ORG_Locking: throw
	{
		texture="ORG_weapons\Reticules\Locking.paa";
	};
	class ORG_Locked: throw
	{
		texture="ORG_weapons\Reticules\Locked.paa"; 
	};
	class ORG_Chevron: throw
	{
		texture="ORG_weapons\Reticules\Chevron.paa"; 
	};
}