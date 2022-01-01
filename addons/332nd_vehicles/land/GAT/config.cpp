#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(GAT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,GAT),
			MACRO_NEW_VEHICLE(Land,CIS,GAT_Olive),
			MACRO_NEW_VEHICLE(Land,CIS,Light_GAT),
			MACRO_NEW_VEHICLE(Land,CIS,Light_GAT_Olive),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class 3as_GAT_redPlasma;
	class 3as_GAT_redPlasma_AT;

	class MACRO_NEW_AMMO(GAT_MMG) : 3as_GAT_redPlasma
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
	};

	class MACRO_NEW_AMMO(GAT_AP) : 3as_GAT_redPlasma_AT
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
	};
};

class CfgMagazines
{
	class 3as_500rnd_GAT_redPlasma;
	class 3as_24rnd_GAT_AP;

	class MACRO_NEW_MAG(GAT_MMG,500) : 3as_500rnd_GAT_redPlasma
	{
		displayName = "GAT MMG";
		ammo = MACRO_NEW_AMMO(GAT_MMG)
	};

	class MACRO_NEW_MAG(GAT_AP,24) : 3as_24rnd_GAT_AP
	{
		displayName = "GAT AP";
		ammo = MACRO_NEW_AMMO(GAT_AP)
	};
};

class CfgWeapons
{
	class 3AS_GATRepeater;
	class 3AS_GATCannon;

	class MACRO_NEW_WEAPON(GAT_MMG) : 3AS_GATRepeater
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(GAT_MMG,500)
		};
	};

	class MACRO_NEW_WEAPON(GAT_AP) : 3AS_GATCannon
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(GAT_AP,24)
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
	class 3AS_GAT_base_F : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_CIS_GAT_base_F : 3AS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_CIS_GAT_F : 3AS_CIS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_GAT : 3AS_CIS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_GAT_Olive : 3AS_GAT
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_GAT_Light_Base : 3AS_GAT_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_GAT_Light_base_F : 3AS_GAT_Light_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_GAT_Light : 3AS_GAT_Light_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
	class 3AS_GAT_Light_Olive : 3AS_GAT_Light
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};


	
    class MACRO_NEW_VEHICLE(Land,CIS,Light_GAT): 3AS_GAT_Light
    {
        displayName = "Light GAT";
        scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		class Turrets : Turrets
		 {
		   class MainTurret : MainTurret
		   {
			   weapons[] =
			   {
				 MACRO_NEW_WEAPON(GAT_MMG)
			   };
			   magazines[] =
			   {
				 MACRO_NEW_MAG(GAT_MMG,500),
				 MACRO_NEW_MAG(GAT_MMG,500),
				 MACRO_NEW_MAG(GAT_MMG,500)
			   };
			   class Turrets
			   {
			   };
			   gunnerType = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		   };
	   };
	};

	class MACRO_NEW_VEHICLE(Land,CIS,Light_GAT_Olive) : 3AS_GAT_Light_Olive
	{
		displayName = "Light GAT (Olive)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		class Turrets : Turrets
		 {
		   class MainTurret : MainTurret
		   {
			   weapons[] =
			   {
				 MACRO_NEW_WEAPON(GAT_MMG)
			   };
			   magazines[] =
			   {
				 MACRO_NEW_MAG(GAT_MMG,500),
				 MACRO_NEW_MAG(GAT_MMG,500),
				 MACRO_NEW_MAG(GAT_MMG,500)
			   };
			   class Turrets
			   {
			   };
			   gunnerType = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		   };
	   };
	};

	class MACRO_NEW_VEHICLE(Land,CIS,GAT) : 3AS_GAT
	{
		displayName = "GAT";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		class Turrets : Turrets
		 {
		   class MainTurret : MainTurret
		   {
			   weapons[] =
			   {
				 MACRO_NEW_WEAPON(GAT_AP)
			   };
			   magazines[] =
			   {
				 MACRO_NEW_MAG(GAT_AP,24),
				 MACRO_NEW_MAG(GAT_AP,24),
				 MACRO_NEW_MAG(GAT_AP,24)
			   };
			   class Turrets
			   {
			   };
			   gunnerType = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		   };
	   };
	};

	class MACRO_NEW_VEHICLE(Land,CIS,GAT_Olive) : 3AS_GAT_Olive
	{
		displayName = "GAT (Olive)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		class Turrets : Turrets
		 {
		   class MainTurret : MainTurret
		   {
			   weapons[] =
			   {
				 MACRO_NEW_WEAPON(GAT_AP)
			   };
			   magazines[] =
			   {
				 MACRO_NEW_MAG(GAT_AP,24),
				 MACRO_NEW_MAG(GAT_AP,24),
				 MACRO_NEW_MAG(GAT_AP,24)
			   };
			   class Turrets
			   {
			   };
			   gunnerType = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		   };
	   };
	};
};