#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(R_M380_turret)
	{
		author = "332nd Aux Team";
		addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[] =
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEHICLE(Land,Rebel,R_M380_turret),
		};
		weapons[] = {};
	};
};

class CfgMagazines
{
	class MACRO_NEW_MAG(R_M380,200);

	class MACRO_NEW_MAG(R_M380_turret_Mag,2000) : MACRO_NEW_MAG(R_M380,200)
	{
		count = 2000;
		displayName = MACRO_AMMO_DISPLAYNAME(R_M380_turret_Mag,2000)
	};
};

class CfgWeapons
{
	class MACRO_NEW_WEAPON(R_M380);

	class MACRO_NEW_WEAPON(R_M380_turret) : MACRO_NEW_WEAPON(R_M380)
	{
		scopeArsenal = 0;
		model = "";
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(R_M380_turret_Mag,2000)
		};
	};
};



class CfgVehicles
{
	class StaticMGWeapon;
	class 3AS_HeavyRepeater_Base : StaticMGWeapon
	{
		class Turrets;
	};
	class 3AS_HeavyRepeater_Unarmoured : 3AS_HeavyRepeater_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class 3AS_HeavyRepeater_Armoured : 3AS_HeavyRepeater_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class MACRO_NEW_VEHICLE(Land,Rebel,R_M380_turret) : 3AS_HeavyRepeater_Unarmoured
	{
		displayName = "M380 Turrent";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_TURR";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
				  MACRO_NEW_WEAPON(R_M380_turret)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(R_M380_turret_Mag,2000),
				  MACRO_NEW_MAG(R_M380_turret_Mag,2000),
				  MACRO_NEW_MAG(R_M380_turret_Mag,2000),
				  MACRO_NEW_MAG(R_M380_turret_Mag,2000),
				  MACRO_NEW_MAG(R_M380_turret_Mag,2000)
				};
			};
		};

		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = MACRO_NEW_WEAPON(R_M380_turret);
			};
			class muzzle_source_rot
			{
				source = "ammorandom";
				weapon = MACRO_NEW_WEAPON(R_M380_turret);
			};
			class minigun
			{
				source = "revolving";
				weapon = MACRO_NEW_WEAPON(R_M380_turret);
			};
		};
	};
};