#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Laser_Cannon)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,Laser_Cannon),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class ammo_ShipCannon_120mm_HE;

	class MACRO_NEW_AMMO(Laser_Cannon) : ammo_ShipCannon_120mm_HE
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		model = "swlw_main\Effects\laser_red.p3d";

		cost = 5;
		caliber = 3.79;
		hit = 30;
		indirectHit = 6;
		indirectHitRange = 1;
	};
};

class CfgMagazines
{
	class magazine_ShipCannon_120mm_HE_shells_x32;

	class MACRO_NEW_MAG(Laser_Cannon,32) : magazine_ShipCannon_120mm_HE_shells_x32
	{
		displayName = "Laser Cannon";
		ammo = MACRO_NEW_AMMO(Laser_Cannon)
	};
};

class CfgWeapons
{
	class weapon_ShipCannon_120mm;

	class MACRO_NEW_WEAPON(Laser_Cannon) : weapon_ShipCannon_120mm
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Laser_Cannon,32)
		};
	};
};

class CfgVehicles
 {

	class StaticMGWeapon;

	class B_Ship_Gun_01_base_F : StaticMGWeapon
	{
		class Turrets;
	};

	class B_Ship_Gun_01_F : B_Ship_Gun_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,Laser_Cannon) : B_Ship_Gun_01_F
    {
        displayName = "Laser Cannon *WIP*";
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
					MACRO_NEW_WEAPON(Laser_Cannon)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(Laser_Cannon,32),
					MACRO_NEW_MAG(Laser_Cannon,32),
					MACRO_NEW_MAG(Laser_Cannon,32),
					MACRO_NEW_MAG(Laser_Cannon,32),
					MACRO_NEW_MAG(Laser_Cannon,32)
				};
			};
		};
	};
};