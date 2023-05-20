#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(15L_E_Web)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,15L,E_Web_Noshield),
			MACRO_NEW_VEHICLE(Land,15L,E_Web_Shield),
        };
		weapons[] = {};
	};
};

class CfgMagazines
{
	class MACRO_NEW_MAG(DC_15L_T,200);

	class MACRO_NEW_MAG(15L_E_Web_mag,2000) : MACRO_NEW_MAG(DC_15L_T,200)
	{
		count = 2000;
		displayName = MACRO_AMMO_DISPLAYNAME(15L_E_Web,2000)
		displayNameShort = "High Power 2000rnd";
	};
};

class CfgWeapons
{
	class MACRO_NEW_WEAPON(DC_15l);

	class MACRO_NEW_WEAPON(15L_E_Web) : MACRO_NEW_WEAPON(DC_15l)
	{
		scopeArsenal = 0;
		model = "";
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(15L_E_Web_mag,2000)
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
	
	class MACRO_NEW_VEHICLE(Land,15L,E_Web_Noshield) : 3AS_HeavyRepeater_Unarmoured
	{
		displayName = "E-Web (No Shield)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_TURR";
		crew = "ORG_aux_infantry_unit_trooper";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
				  MACRO_NEW_WEAPON(15L_E_Web)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000)
				};
			};
		};

		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = MACRO_NEW_WEAPON(15L_E_Web);
			};
			class muzzle_source_rot
			{
				source = "ammorandom";
				weapon = MACRO_NEW_WEAPON(15L_E_Web);
			};
			class minigun
			{
				source = "revolving";
				weapon = MACRO_NEW_WEAPON(15L_E_Web);
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,15L,E_Web_Shield) : 3AS_HeavyRepeater_Armoured
	{
		displayName = "E-Web (Shielded)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_ORG";
		editorSubcategory = "EdSubcat_ORG_TURR";
		crew = "ORG_aux_infantry_unit_trooper";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
				  MACRO_NEW_WEAPON(15L_E_Web)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000),
				  MACRO_NEW_MAG(15L_E_Web_mag,2000)
				};
			};
		};

		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = MACRO_NEW_WEAPON(15L_E_Web);
			};
			class muzzle_source_rot
			{
				source = "ammorandom";
				weapon = MACRO_NEW_WEAPON(15L_E_Web);
			};
			class minigun
			{
				source = "revolving";
				weapon = MACRO_NEW_WEAPON(15L_E_Web);
			};
		};
	};
};