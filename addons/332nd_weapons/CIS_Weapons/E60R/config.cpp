#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(E60R)
	{
		author = "Halligan";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(E60R_AT),
			MACRO_NEW_WEAPON(E60R_AA)
		};
	};
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgMagazines
{
	class SWLW_plx1_at_mag;

	class MACRO_NEW_MAG(E60R_ATMag,1) : SWLW_plx1_at_mag
	{
		ammo = MACRO_NEW_AMMO(E60R_ATRocket)
		displayName = MACRO_AMMO_DISPLAYNAME(E60R - AT,1)
		scope = 2;
		count = 1;
		initSpeed = 60;
		mass = 62;
	};

	class MACRO_NEW_MAG(E60R_AAMag,1) : MACRO_NEW_MAG(E60R_ATMag,1)
	{
		ammo = MACRO_NEW_AMMO(E60R_AARocket);
		displayName = MACRO_AMMO_DISPLAYNAME(E60R - AA,1)
		mass = 31;
	};
};

class CfgWeapons
{
	class launch_Titan_short_base;
	class JLTS_E60R_AT : launch_Titan_short_base
	{
		class GunParticles;
		class GunClouds;
		class WeaponSlotsInfo;
	};


	class MACRO_NEW_WEAPON(E60R_AT): JLTS_E60R_AT
	{
		scope=2;
		displayName="CIS E60R AT";
		descriptionShort="Standard AT Launcher of the CIS";

		baseWeapon = MACRO_NEW_WEAPON(E60R_AT);

		ace_overpressure_angle = 30;
		ace_overpressure_damage = 0.5;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 2;
		ace_reloadlaunchers_enabled = 1;

		canLock = 0;
		airLock = 0;

		weaponInfoType = "RscOpticsRangeFinderMRAWS";

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(E60R_ATMag,1)
		};

	};

	class MACRO_NEW_WEAPON(E60R_AA) : JLTS_E60R_AT
	{
		scope = 2;
		displayName = "CIS E60R AA";
		descriptionShort = "Standard AA Launcher of the CIS";

		baseWeapon = MACRO_NEW_WEAPON(E60R_AA);

		ace_overpressure_angle = 45;
		ace_overpressure_damage = 0;
		ace_overpresssure_priority = 1;
		ace_overpressure_range = 10;
		ace_reloadlaunchers_enabled = 1;

		canLock = 2;
		airLock = 2;

		magazineWell[] = {};
		magazines[] = {

			MACRO_NEW_MAG(E60R_AAMag,1)
		};

	};
};