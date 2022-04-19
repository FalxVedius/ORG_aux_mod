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
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class RCWSOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
    
	class MACRO_NEW_VEHICLE(Land,CIS,MTT_CIS) : 3as_MTT_Base
    {
        displayName = "MTT (CIS)";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
        armor = 6000;
        armorStructural = 6;

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] =
                {
                    MACRO_NEW_WEAPON(MTT_Cannon)
                };
                magazines[] =
                {
                    MACRO_NEW_MAG(MTT_MMG,40)
                };
            };
        };
        class TextureSources
        {
           	class Standard
            {
            displayName= "CIS MTT";
			author= MACRO_AUTHOR;
			textures[]=
                {
                    "3as\3as_MTT\data\MTT_Main_CO.paa",
                    "3as\3as_MTT\data\MTT_Rack_CO.paa"
                };
                factions[]=
                {
                    "EdCat_332ndCIS"
                };
            };
            class CIS
            {
                displayName = "CIS";
                author = MACRO_AUTHOR;
                textures[] =
                {
                    "3AS\3AS_AAT\data\CIS_AAT_CO.paa"
                };
                factions[] =
                {
                    "EdCat_332ndCIS"
                };
            };
        };
    };
};