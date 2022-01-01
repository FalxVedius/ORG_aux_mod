#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\ADSD
class CfgPatches
{
	class MACRO_PATCH_NAME(ADSD)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,ADSD),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class 3as_ATT_redPlasma_AT;
	class 3as_ATT_redPlasma;

	class MACRO_NEW_AMMO(ADSD_AP) : 3as_ATT_redPlasma_AT
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
	};

	class MACRO_NEW_AMMO(ADSD_MMG) : 3as_ATT_redPlasma
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
	};
};

class CfgMagazines
{
	class 3as_24rnd_125mm_ADSD;
	class 3as_500Rnd_ATT_RedPlasma;

	class MACRO_NEW_MAG(ADSD_AP,24) : 3as_24rnd_125mm_ADSD
	{
		displayName = "ADSD AP";
		ammo = MACRO_NEW_AMMO(ADSD_AP)
	};

	class MACRO_NEW_MAG(ADSD_MMG,500) : 3as_500Rnd_ATT_RedPlasma
	{
		displayName = "ADSD MMG";
		ammo = MACRO_NEW_AMMO(ADSD_MMG)
	};
};

class CfgWeapons
{
	class 3AS_ADSD_Cannon;
	class 3AS_ADSD_Repeater;

	class MACRO_NEW_WEAPON(ADSD_Cannon) : 3AS_ADSD_Cannon
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(ADSD_AP,24)
		};
	};

	class MACRO_NEW_WEAPON(ADSD_MMG) : 3AS_ADSD_Repeater
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(ADSD_MMG,500)
		};
	};
};

class CfgVehicles
 {
	class Land;
	class LandVehicle : Land
	{
		class ViewPilot;
		class ViewGunner;
		class NewTurret;
	};
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
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class 3AS_AAT_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
					};
				};
			};
		};
	};
	class 3AS_Advanced_DSD_Base : 3AS_AAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{

				};
			};
		};
	};
	class 3AS_Advanced_DSD : 3AS_Advanced_DSD_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{

				};
			};
		};
	};
	
    class MACRO_NEW_VEHICLE(Land,CIS,ADSD): 3AS_Advanced_DSD
    {
        displayName = "ADSD *WiP*";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		armor = 560;
		armorStructural = 5;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
				  MACRO_NEW_WEAPON(ADSD_Cannon),
				  MACRO_NEW_WEAPON(ADSD_MMG)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_AP,24),
				  MACRO_NEW_MAG(ADSD_MMG,500),
				  MACRO_NEW_MAG(ADSD_MMG,500),
				  MACRO_NEW_MAG(ADSD_MMG,500),
				  MACRO_NEW_MAG(ADSD_MMG,500)
				};
				class Turrets : Turrets
				{

				};
			};
		};
	};
};