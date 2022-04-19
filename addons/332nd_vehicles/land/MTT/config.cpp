#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(MTT)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles),
		};
		requiredVersion = 0.1;
		units[] = 
        {
            MACRO_NEW_VEHICLE(Land,CIS,MTT_CIS),
            MACRO_NEW_VEHICLE(Land,CIS,MTT_wreck_static)
        };
		weapons[] = 
        {
            "3AS_MTTCannon"
        };
        Magazines[]=
        {
            "3AS_40Rnd_MTT_HEAT"
        };
        ammo[]=
        {
            "3AS_MTT_redplasma_HEAT"
        };
	};
};

class CfgAmmo
{
    class 3AS_MTT_redplasma_HEAT;
    class MACRO_NEW_AMMO(MTT_MMG): 3AS_MTT_redplasma_HEAT
    {
        hit=480;
		indirectHit=80;
		indirectHitRange=2;
		typicalSpeed=550;
		caliber=28;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		explosionSoundEffect="DefaultExplosion";
    };
};

class CfgMagazines
{
    class 3AS_40Rnd_MTT_HEAT;
    class MACRO_NEW_MAG(MTT_MMG,40): 3AS_40Rnd_MTT_HEAT
    {
        displayName = "MTT HE";
        ammo = MACRO_NEW_AMMO(MTT_MMG);
    };
};

class CfgWeapons
{
    class 3AS_MTTCannon;
    class MACRO_NEW_WEAPON(MTT_MMG): 3AS_MTTCannon
    {
        displayName = "MTT Heavy Cannon";
        magazine[] = 
        {
            MACRO_NEW_AMMO(MTT_MMG,40)
        };
    };
};

class CfgVehicles
{
	class Tank;
	class Tank_F : Tank
	{
        class Turrets;
	};
    class 3as_MTT_Base: Tank_F
    {
        class Turrets: Turrets 
        {
            class MainTurret;
        };
    };


};