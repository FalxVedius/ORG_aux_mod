#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(land_weapons)
	{
		author = "Bugs+Thuner";
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class Mode_FullAuto;

class CfgAmmo
{
    
	class MACRO_NEW_AMMO(AAT_AP);
	class MACRO_NEW_AMMO(R_AAT) : MACRO_NEW_AMMO(AAT_AP)
	{

	};
};

class CfgMagazines
{

	class MACRO_NEW_MAG(AAT_AP,24);
	class MACRO_NEW_MAG(R_AAT,24) : MACRO_NEW_MAG(AAT_AP,24)
	{
		displayName = "Rebel AAT 30mm";
		ammo = MACRO_NEW_AMMO(R_AAT)
		tracerColor[] = {{0.4,1,0.4,-50}};
		initSpeed = 8000;
		maxLeadSpeed = 45;
	};

};

class MGun;
class player;
class FullAuto;
class manual;
class CfgWeapons
{
  
	class MACRO_NEW_WEAPON(AAT_Cannon);
	class MACRO_NEW_WEAPON(R_AAT_Cannon) : MACRO_NEW_WEAPON(AAT_Cannon)
	{
		displayName = "Rebel AAT Railgun";

		magazines[] = 
		{
			MACRO_NEW_MAG(R_AAT,24)
		};
	};

};