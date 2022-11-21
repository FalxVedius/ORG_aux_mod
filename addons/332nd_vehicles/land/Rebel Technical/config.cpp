#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_Rebel_Technical_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\Rebel Technical
class CfgPatches
{
	class MACRO_PATCH_NAME(Rebel_Technical)
	{
		author = "Bugs";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_Z6),
			MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_AT)
        };
		weapons[] = {};
	};
};

class CfgVehicles
 {
	class Offroad_01_military_base_F;

	class Offroad_01_armed_base_F : Offroad_01_military_base_F
	{
		class Turrets;
	};

	class I_G_Offroad_01_armed_F : Offroad_01_armed_base_F
	{
		class Turrets : Turrets
		{
			class M2_Turret;
		};
	};

    class MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_Z6): I_G_Offroad_01_armed_F
    {
        displayName = "Rebel Lynx (Z90) (Experimental)";
        scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_CARS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";

		class EventHandlers
		{
			init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
		};

		hiddenSelections[] = { "camo","camo2" };

		hiddenSelectionsTextures[] = { "\332nd_vehicles\_textures\land\Rebel_Technical\Base\Rebel_Offroad.paa", "\332nd_vehicles\_textures\land\Rebel_Technical\Base\Rebel_Offroad.paa" };

		class Turrets : Turrets
		{
			class M2_Turret : M2_Turret
			{
				weapons[] =
				{
					"332nd_aux_weapon_R_Z90",
				};
				magazines[] =
				{
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750",
					"332nd_aux_magazine_R_Z90_x750"
					
				};
			};
			   
	   };
	};

	class Offroad_01_military_base_F;

	class Offroad_01_AT_base_F : Offroad_01_military_base_F
	{
		class Turrets;
	};

	class I_G_Offroad_01_AT_F : Offroad_01_AT_base_F
	{
		class Turrets : Turrets
		{
			class AT_Turret;
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,Rebel_Light_Technical_AT) : I_G_Offroad_01_AT_F
	{
		displayName = "Rebel Lynx (AT) (Experimental)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332nd_Rebel";
		editorSubcategory = "EdSubcat_332nd_Rebel_CARS";
		crew = "332nd_aux_rebel_unit_332nd_indep_rebel";

		class EventHandlers
		{
			init = "(_this select 0) setVariable [""BIS_enableRandomization"",false];";
		};

		hiddenSelections[] = { "camo","camo2" };

		hiddenSelectionsTextures[] = { "\332nd_vehicles\_textures\land\Rebel_Technical\Base\Rebel_Offroad.paa", "\332nd_vehicles\_textures\land\Rebel_Technical\Base\Rebel_Offroad.paa" };

		class Turrets : Turrets
		{
			class AT_Turret : AT_Turret
			{
				weapons[] =
				{
					"332nd_aux_weapon_R_SPG"
				};
				magazines[] =
				{
					"332nd_aux_magazine_R_SPG_Med_x12",
					"332nd_aux_magazine_R_SPG_Med_x12"					
				};
			};

		};
	};

};	

class CfgAmmo
{
	class M_SPG9_HEAT;
	class MACRO_NEW_AMMO(R_SPG_Med) : M_SPG9_HEAT
	{
		soundengine[] =
		{
			"332nd_weapons\sounds\weapons\flight\homingrocket1.wss",
			1,
			1,
			750
		};
		soundfly[] =
		{
			"332nd_weapons\sounds\weapons\flight\RocketEngine.wss",
			1,
			1.5,
			200
		};
		soundsetsoniccrack[] =
		{
			"332nd_genericrocket_flyby_soundset"
		};
		model = "\A3\Weapons_F\Ammo\Missile_AT_03_fly_F";
		manualcontrol = 0;
		effectsMissile = "332nd_aux_effects_missile_Rocket_Dark_Green";
		proxyShape = "\A3\Weapons_F\Ammo\Missile_AT_03_F";
		caliber = 2;
		airlock = 0;
		hit = 550;
		cost = 1;
		indirectHit = 35;
		mass = 2;
		indirectHitRange = 8;
	};
};

class CfgMagazines
{
	class 12rnd_SPG9_HEAT;
	class MACRO_NEW_MAG(R_SPG_Med,12) : 12rnd_SPG9_HEAT
	{
		displayName = "Beetle SPG";
		count = 12;
		descriptionshort = "Anti-Tank Missile Beetle";
		pylonWeapon = MACRO_NEW_WEAPON(R_SPG);
		displayNameShort = "SPG Beetle Missiles";
		ammo = MACRO_NEW_AMMO(R_SPG_Med);
	};
};

class CfgWeapons
{

	class launcher_SPG9;
	class MACRO_NEW_WEAPON(R_SPG) : launcher_SPG9
	{
		magazineWell[] = {};
		weaponLockDelay = 0.5;
		magazines[] = {
			 MACRO_NEW_MAG(R_SPG_Med,12),
		};
		displayName = "SPG";
	};

};