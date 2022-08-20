#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Flak_cannon)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,Flak_cannon),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class 3AS_FlakCannon_AA;

	class MACRO_NEW_AMMO(Flak_cannon) : 3AS_FlakCannon_AA
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
	class 3AS_FlakCannon_1000Rnd_AA_shells;

	class MACRO_NEW_MAG(Flak_cannon,28) : 3AS_FlakCannon_1000Rnd_AA_shells
	{
		displayName = "Flak Cannon";
		ammo = MACRO_NEW_AMMO(Flak_cannon)
	};
};

class CfgWeapons
{
	class 3AS_Flak_Cannon;

	class MACRO_NEW_WEAPON(Flak_cannon) : 3AS_Flak_Cannon
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Flak_cannon,28)
		};
	};
};

class CfgVehicles
 {

	class StaticMGWeapon;

	class 3as_FlakCannon_Base : StaticMGWeapon
	{
		class Turrets;
	};

	class 3as_FlakCannon : 3as_FlakCannon_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,Flak_cannon) : 3as_FlakCannon
    {
        displayName = "Quad-Barrel Flak Cannon *WIP*";
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
					MACRO_NEW_WEAPON(Flak_cannon)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(PMB_AA,6),
					MACRO_NEW_MAG(PMB_AA,6),
					MACRO_NEW_MAG(PMB_AA,6),
					MACRO_NEW_MAG(PMB_AA,6),
					MACRO_NEW_MAG(PMB_AA,6)
				};
			};
		};
	};
};