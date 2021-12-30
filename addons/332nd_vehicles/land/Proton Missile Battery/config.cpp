#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(PMB)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,PMB),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class OPTRE_M_ASGM4_AA;

	class MACRO_NEW_AMMO(PMB_AA) : OPTRE_M_ASGM4_AA
	{
		soundFly[] =
		{
			"swlw_rework\sounds\launcher\E60R_fly.wss",
			6,
			1.5,
			1000
		};
		effectsMissile = "332nd_aux_effects_missile_plx_red";
	};
};

class CfgMagazines
{
	class OPTRE_6Rnd_ASGM7_rockets;

	class MACRO_NEW_MAG(PMB_AA,6) : OPTRE_6Rnd_ASGM7_rockets
	{
		displayName = "PMB AA";
		ammo = MACRO_NEW_AMMO(PMB_AA)
	};
};

class CfgWeapons
{
	class OPTRE_M95;

	class MACRO_NEW_WEAPON(PMB_Launcher) : OPTRE_M95
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(PMB_AA,6)
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

	class OPTRE_lance : AAA_System_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,PMB) : OPTRE_lance
    {
        displayName = "Proton Missile Battery *Test*";
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
					MACRO_NEW_WEAPON(PMB_Launcher)
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