#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Hailfire_Turret)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,Hailfire_Turret),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class ammo_Missile_rim116;

	class MACRO_NEW_AMMO(Hailfire_Turret) : ammo_Missile_rim116
	{
		aiAmmoUsageFlags = "16 + 128 + 512";

		cost = 5;
		caliber = 3.79;
		hit = 30;
		indirectHit = 6;
		indirectHitRange = 1;
	};
};

class CfgMagazines
{
	class magazine_Missile_rim116_x21;

	class MACRO_NEW_MAG(Hailfire_Turret,21) : magazine_Missile_rim116_x21
	{
		displayName = "Hailfire AT";
		ammo = MACRO_NEW_AMMO(Hailfire_Turret)
	};
};

class CfgWeapons
{
	class weapon_rim116Launcher;

	class MACRO_NEW_WEAPON(Hailfire_Turret) : weapon_rim116Launcher
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Hailfire_Turret,21)
		};
	};
};

class CfgVehicles
 {

	class StaticMGWeapon;

	class SAM_System_01_base_F : StaticMGWeapon
	{
		class Turrets;
	};

	class B_SAM_System_01_F : SAM_System_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,Hailfire_Turret) : B_SAM_System_01_F
    {
        displayName = "Hailfire AT Turret *WIP*";
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
					MACRO_NEW_WEAPON(Hailfire_Turret)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(Hailfire_Turret,21),
					MACRO_NEW_MAG(Hailfire_Turret,21),
					MACRO_NEW_MAG(Hailfire_Turret,21),
					MACRO_NEW_MAG(Hailfire_Turret,21),
					MACRO_NEW_MAG(Hailfire_Turret,21)
				};
			};
		};
	};
};