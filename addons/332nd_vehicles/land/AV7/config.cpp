 #include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(AV7)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles),
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,AV,AV7),
        };
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
				};
			};
		};
	};

	class MBT_01_base_F : Tank_F
	{
		class Turrets : Turrets
		{
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                };
            };
		};
	};

	class MBT_01_arty_base_F : MBT_01_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret: MainTurret
			{
                class Turrets: Turrets
				{
				};
			};
		};
	};

	class 3as_01_arty_base_F : MBT_01_arty_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret: MainTurret
			{
                class Turrets: Turrets
				{
				};
			};
		};
	};

	class 3as_AV7 : 3as_01_arty_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret: MainTurret
			{
                class Turrets: Turrets
				{
				};
			};
		};
	};


	class MACRO_NEW_VEHICLE(Land,AV,AV7): 3as_AV7
	{
	    displayName = "AV7 *WIP*";
	    scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_ARTILLERY";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] = 
		{ 

		};

        class Turrets : Turrets
		{
			class MainTurret: MainTurret
			{
                turretInfoType="RscWeaponRangeArtilleryAuto";
                weapons[] =
				{
				  MACRO_NEW_WEAPON(AV7_Mortar)
				};
				magazines[] =
				{
                    MACRO_NEW_MAG(AV7_HE_Mortar,32),
                    MACRO_NEW_MAG(AV7_Smoke,12),
                    MACRO_NEW_MAG(AV7_Guided,4),
                    MACRO_NEW_MAG(AV7_Laser_Guided,4),
                    MACRO_NEW_MAG(AV7_Mine_Cluster,12),
                    MACRO_NEW_MAG(AV7_Cluster_Shell,4),
                    MACRO_NEW_MAG(AV7_AT_Mine,12)
				};
			};
		};
	};
};

class CfgAmmo
{
    class 3AS_300mm_AMOS;
    class MACRO_NEW_AMMO(AV7_HE_Shells) : 3AS_300mm_AMOS
	{
		model = "\A3\weapons_f\ammo\shell";
	};

    class 3AS_Smoke_300mm_AMOS_White;
    class MACRO_NEW_AMMO(AV7_Smoke_White) : 3AS_Smoke_300mm_AMOS_White
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};

    class 3AS_300mm_AMOS_guided;
    class MACRO_NEW_AMMO(AV7_Guided_Shells) : 3AS_300mm_AMOS_guided
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};

    class 3AS_300mm_AMOS_LG;
    class MACRO_NEW_AMMO(AV7_Laser_Guided_Shells) : 3AS_300mm_AMOS_LG
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};

    class 3AS_Mine_300mm_AMOS_range;
    class MACRO_NEW_AMMO(AV7_Mine_Clusters) : 3AS_Mine_300mm_AMOS_range
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};

    class 3AS_Cluster_300mm_AMOS;
    class MACRO_NEW_AMMO(AV7_Cluster_Shell) : 3AS_Cluster_300mm_AMOS
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};

    class 3AS_AT_Mine_300mm_AMOS_range;
    class MACRO_NEW_AMMO(AV7_AT_Mine) : 3AS_AT_Mine_300mm_AMOS_range
	{
		model = "\A3\Weapons_F\Ammo\shell.p3d";
	};
}

class CfgMagazines
{
    class 3AS_32Rnd_300mm_Mo_shells;
    class MACRO_NEW_MAG(AV7_HE_Mortar,32) : 3AS_32Rnd_300mm_Mo_shells
	{
		displayName = "AV7 HE Shells";
		ammo = MACRO_NEW_AMMO(AV7_HE_Shells)
        count=32;
	};

    class 3AS_12Rnd_300mm_Mo_smoke;
    class MACRO_NEW_MAG(AV7_Smoke,12) : 3AS_12Rnd_300mm_Mo_smoke
	{
		displayName = "AV7 Smoke (White)";
		ammo = MACRO_NEW_AMMO(AV7_Smoke_White)
        count=12;
	};

    class 3AS_4Rnd_300mm_Mo_guided;
    class MACRO_NEW_MAG(AV7_Guided,4) : 3AS_4Rnd_300mm_Mo_guided
	{
		displayName = "AV7 Guided Shells";
		ammo = MACRO_NEW_AMMO(AV7_Guided_Shells)
        count=4;
	};

    class 3AS_4Rnd_300mm_Mo_LG;
    class MACRO_NEW_MAG(AV7_Laser_Guided,4) : 3AS_4Rnd_300mm_Mo_LG
	{
		displayName = "AV7 Laser Guided";
		ammo = MACRO_NEW_AMMO(AV7_Laser_Guided_Shells)
        count=4;
	};

    class 3AS_12Rnd_300mm_Mo_mine;
    class MACRO_NEW_MAG(AV7_Mine_Cluster,12) : 3AS_12Rnd_300mm_Mo_mine
	{
		displayName = "AV7 Mine Cluster";
		ammo = MACRO_NEW_AMMO(AV7_Mine_Clusters)
        count=12;
	};

    class 3AS_4Rnd_300mm_Mo_Cluster;
    class MACRO_NEW_MAG(AV7_Cluster_Shell,4) : 3AS_4Rnd_300mm_Mo_Cluster
	{
		displayName = "AV7 Cluster Shell";
		ammo = MACRO_NEW_AMMO(AV7_Cluster_Shell)
        count=4;
	};

    class 3AS_12Rnd_300mm_Mo_AT_mine;
    class MACRO_NEW_MAG(AV7_AT_Mine,12) : 3AS_12Rnd_300mm_Mo_AT_mine
	{
		displayName = "AV7 AT Mine CLuster";
		ammo = MACRO_NEW_AMMO(AV7_AT_Mine)
        count=12;
	};
}

class CfgWeapons
{
	class CannonCore;
    class 3AS_AV7_300mm_AMOS : CannonCore 
	{
		class manual;
	};
    
    class MACRO_NEW_WEAPON(AV7_Mortar) : 3AS_AV7_300mm_AMOS
	{
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(AV7_HE_Mortar,32),
            MACRO_NEW_MAG(AV7_Smoke,12),
            MACRO_NEW_MAG(AV7_Guided,4),
            MACRO_NEW_MAG(AV7_Laser_Guided,4),
            MACRO_NEW_MAG(AV7_Mine_Cluster,12),
            MACRO_NEW_MAG(AV7_Cluster_Shell,4),
            MACRO_NEW_MAG(AV7_AT_Mine,12)
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
};

