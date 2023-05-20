#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Particle_Cannon)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,Particle_Cannon),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class ls_127x99_red;

	class MACRO_NEW_AMMO(Particle_Cannon) : ls_127x99_red
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256";
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
	class 24Rnd_125mm_APFSDS;

	class MACRO_NEW_MAG(Particle_Cannon,64) : 24Rnd_125mm_APFSDS
	{
		displayName = "Particle Cannon";
		ammo = MACRO_NEW_AMMO(Particle_Cannon)
	};
};

class CfgWeapons
{
	class 3as_ParticleCannon;

	class MACRO_NEW_WEAPON(Particle_Cannon) : 3as_ParticleCannon
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Particle_Cannon,64)
		};
	};
};

class CfgVehicles
 {

	class StaticMGWeapon;

	class 3as_ParticleCannon_Base : StaticMGWeapon
	{
		class Turrets;
	};

	class 3as_ParticleCannon : 3as_ParticleCannon_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,Particle_Cannon) : 3as_ParticleCannon
    {
        displayName = "Particle Cannon *WIP*";
        scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_ORGCIS";
		editorSubcategory = "EdSubcat_ORG_TURR";
		crew = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";


		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = 
				{ 
					MACRO_NEW_WEAPON(Particle_Cannon)
				};
				magazines[] = 
				{ 
					MACRO_NEW_MAG(Particle_Cannon,64),
					MACRO_NEW_MAG(Particle_Cannon,64),
					MACRO_NEW_MAG(Particle_Cannon,64),
					MACRO_NEW_MAG(Particle_Cannon,64),
					MACRO_NEW_MAG(Particle_Cannon,64)
				};
			};
		};
	};
};