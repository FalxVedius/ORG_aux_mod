#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ATAP)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,TX,130)
        };
		weapons[] = {};
	};
};

class CfgVehicles
 {
	class NewTurret;
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class ViewPilot;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class ACE_SelfActions : ACE_SelfActions
		{
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class MBT_01_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret_1: NewTurret
			{

			};
			class MainTurretTop : MainTurret_1
			{

			};
			class MainTurret_bottom : MainTurretTop
			{

			};
			class CargoTurret : NewTurret
			{

			};
		};
	};

	class MBT_01_arty_base_F : MBT_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret_1: NewTurret
			{

			};
			class MainTurretTop : MainTurret_1
			{

			};
			class MainTurret_bottom : MainTurretTop
			{

			};
			class CargoTurret : NewTurret
			{

			};
		};
	};

	class 3as_ATAP_base : MBT_01_arty_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret_1: NewTurret
			{

			};
			class MainTurretTop : MainTurret_1
			{

			};
			class MainTurret_bottom : MainTurretTop
			{

			};
			class CargoTurret : NewTurret
			{

			};
		};
	};
	
	class MACRO_NEW_VEHICLE(Land,TX,ATAP): 3as_ATAP_base
	{
	    displayName = "AT-AP *WIP*";
	    scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] = 
		{ 

		};

        class Turrets : Turrets
		{
			class MainTurret_1: NewTurret
			{
                weapons[] =
				{
				  MACRO_NEW_WEAPON(ATAP_Mortar)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(ATAP_HE_Mortar,10),
                  MACRO_NEW_MAG(ATAP_HE_Mortar,10),
                  MACRO_NEW_MAG(ATAP_HE_Mortar,10),
                  MACRO_NEW_MAG(ATAP_HE_Mortar,10)
				};
			};
			class MainTurretTop : MainTurret_1
			{
                weapons[] =
				{
				  MACRO_NEW_WEAPON(ATAP_Top_Cannon)
				};
			};
			class MainTurret_bottom : MainTurretTop
			{
                weapons[] =
				{
				  MACRO_NEW_WEAPON(ATAP_Bottom_Cannon)
				};

			};
			class CargoTurret : NewTurret
			{

			};
		};

		class Hitpoints : Hitpoints
		{
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLTrack : HitLTrack
			{

			};
			class HitRTrack : HitRTrack
			{

			};
		};
	};
};


class CfgAmmo
{
    class 3AS_ATAP_155mm_AMOS_Mortar_Ammo;

    class MACRO_NEW_AMMO(ATAP_HE_Mortar) : 3AS_ATAP_155mm_AMOS_Mortar_Ammo
	{
		model = "3as\3as_weapons\data\tracer_shell_blue";
	};

    class 3AS_ATAP_AT_Ammo;

    class MACRO_NEW_AMMO(ATAP_AT_Ammo) : 3AS_ATAP_AT_Ammo
	{
		model = "3as\3as_weapons\data\tracer_shell_blue";
	};

    class SmokeLauncherAmmo;

    class MACRO_NEW_AMMO(ATAP_Smoke) : SmokeLauncherAmmo
	{

	};

    class 3AS_EC60_BluePlasma;

    class MACRO_NEW_AMMO(ATAP_PD_Ammo) : 3AS_EC60_BluePlasma
	{
		model = "\3AS\3AS_Weapons\Data\tracer_blue.p3d";
	};

}

class CfgMagazines
{
    class 3AS_32Rnd_155mm_ATAP_Mortar_shells;

    class MACRO_NEW_MAG(ATAP_HE_Mortar,10) : 3AS_32Rnd_155mm_ATAP_Mortar_shells
	{
		displayName = "ATAP HE Mortar";
		ammo = MACRO_NEW_AMMO(ATAP_HE_Mortar)
        count=10;
	};

    class 3AS_15rnd_ATAP_AT_Mag;

    class MACRO_NEW_MAG(ATAP_AT_Ammo,10) : 3AS_15rnd_ATAP_AT_Mag
	{
		displayName = "ATAP AT";
		ammo = MACRO_NEW_AMMO(ATAP_AT_Ammo)
        count=10;
	};

    class SmokeLauncherMag;

    class MACRO_NEW_MAG(SmokeLauncherAmmo,10) : SmokeLauncherMag
	{
		displayName = "ATAP Smoke";
		ammo = MACRO_NEW_AMMO(ATAP_Smoke)
        count=10;
	};

    class 3AS_500Rnd_ATAP_PD_Mag;

    class MACRO_NEW_MAG(ATAP_PD_Ammo,10) : 3AS_500Rnd_ATAP_PD_Mag
	{
		displayName = "ATAP PD";
		ammo = MACRO_NEW_AMMO(ATAP_PD_Ammo)
        count=10;
	};
}

class CfgWeapons
{
	class mortar_155mm_AMOS;
	class 3AS_ATAP_mortar : mortar_155mm_AMOS
	{
		class manual;
	};
    
    class MACRO_NEW_WEAPON(ATAP_Mortar) : 3AS_ATAP_mortar
	{
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(ATAP_HE_Mortar,10)
		};
		modes[] = {"Single1","Single2","Single3","Single4","Single5","Burst1","Burst2","Burst3","Burst4","Burst5"};

		class manual : manual
		{

		};
		class close : manual
		{

		};
		class medium : close
		{

		};
		class far : close
		{

        };
		class further : close
		{

		};
        class extreme : close
		{

		};
	};

    class 3AS_Sabre_MG;
	class 3AS_ATAP_PD_Turret : 3AS_Sabre_MG;
    class MACRO_NEW_WEAPON(ATAP_PD) : 3AS_ATAP_PD_Turret
	{
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(ATAP_PD_Ammo,10),
            MACRO_NEW_MAG(ATAP_PD_Ammo,10),
            MACRO_NEW_MAG(ATAP_PD_Ammo,10),
            MACRO_NEW_MAG(ATAP_PD_Ammo,10)
		};
    };	
    
    class 3AS_Sabre_Cannons_Super;
	class 3AS_ATAP_AT_Turret" : 3AS_Sabre_Cannons_Super;
    class MACRO_NEW_WEAPON(ATAP_AT) : 3AS_ATAP_AT_Turret
	{
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(ATAP_AT_Ammo,10),
            MACRO_NEW_MAG(ATAP_AT_Ammo,10),
            MACRO_NEW_MAG(ATAP_AT_Ammo,10),
            MACRO_NEW_MAG(ATAP_AT_Ammo,10),
            MACRO_NEW_MAG(SmokeLauncherMag,10)
		};
    };	
};