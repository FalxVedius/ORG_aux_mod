#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(CLB)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,CLB),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class OPTRE_B_20mm_HEIAP;

	class MACRO_NEW_AMMO(CLB_Laser) : OPTRE_B_20mm_HEIAP
	{
		model = "ls_weapons_core\Effects\laser_red.p3d";

		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "256 + 512";
	};
};

class CfgMagazines
{
	class OPTRE_6000Rnd_20mm_HEIAP;

	class MACRO_NEW_MAG(CLB_LaserMag,6000) : OPTRE_6000Rnd_20mm_HEIAP
	{
		displayName = "CLB Laser Magazine";
		ammo = MACRO_NEW_AMMO(CLB_Laser)
	};
};

class CfgWeapons
{
	class OPTRE_M71;

	class MACRO_NEW_WEAPON(CLB_LaserCannon) : OPTRE_M71
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(CLB_LaserMag,6000)
		};
	};
};

class CfgVehicles
 {
	class StaticMGWeapon;

	class AAA_System_01_base_F : StaticMGWeapon
	{
		class Turrets;
	};

	class OPTRE_Scythe : AAA_System_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

    class MACRO_NEW_VEHICLE(Land,CIS,CLB): OPTRE_Scythe
    {
        displayName = "Chain Laser Battery *Test*";
        scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TURR";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = 
				{ 
					MACRO_NEW_WEAPON(CLB_LaserCannon)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000),
					MACRO_NEW_MAG(CLB_LaserMag,6000)
				};
			};
		};
	};
};