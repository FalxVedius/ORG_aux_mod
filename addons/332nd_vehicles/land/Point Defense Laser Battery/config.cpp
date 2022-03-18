#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(PDLB)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,PDLB,Laser),
			MACRO_NEW_VEHICLE(Land,PDLB,Laser_Flak),
			MACRO_NEW_VEHICLE(Land,PDLB,Laser_Inverted),
			MACRO_NEW_VEHICLE(Land,PDLB,Laser_Flak_Inverted),
        };
		weapons[] = {};
	};
};


class CfgFunctions
{
	class Flak
	{
		class PDLB_Flak
		{
			file = "\332nd_vehicles\land\Point Defense Laser Battery";
			class init_Flak
			{

			};
			class init_Flak_blu
			{

			};
			class init_Flak_ind
			{

			};
		};
	};
};

class CfgAmmo
{
	class SmallSecondary;
	class OPTRE_B_50mm;

	class Flak_Round_332nd : SmallSecondary
	{
		explosionSoundEffect = "{""\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg"",1.4,1,2000}";
		explosionEffects = "VehicleExplosionEffectsBig";
		SoundSetExplosion[] = { "\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,2000 };
		multiSoundHit[] = { "soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25 };
		soundHit1[] = { "\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900 };
		soundHit2[] = { "\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900 };
		soundHit3[] = { "\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900 };
		soundHit4[] = { "\OPTRE_FC_Weapons\Data\sounds\Mortar_Impact2.ogg",1.4,1,1900 };
	};

	class MACRO_NEW_AMMO(PDLB_Laser) : OPTRE_B_50mm
	{
		model = "ls_weapons_core\Effects\laser_red.p3d";

		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "256 + 512";
	};
};

class CfgMagazines
{
	class OPTRE_2500Rnd_50mm_HE;

	class MACRO_NEW_MAG(PDLB_Laser,2500) : OPTRE_2500Rnd_50mm_HE
	{
		displayName = "PDLB Laser Magazine";
		ammo = MACRO_NEW_AMMO(PDLB_Laser)
	};
};

class CfgWeapons
{
	class OPTRE_M9109_Turret;

	class MACRO_NEW_WEAPON(PDLB_LaserCannon) : OPTRE_M9109_Turret
	{
		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(PDLB_Laser,2500)
		};
	};
};


class CfgVehicles
 {
	class LandVehicle;

	class StaticWeapon : LandVehicle
	{
		class Turrets;
	};

	class OPTRE_Corvette_M910_Turret : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class OPTRE_Corvette_M910_Turret_u : OPTRE_Corvette_M910_Turret
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

    class MACRO_NEW_VEHICLE(Land,PDLB,Laser): OPTRE_Corvette_M910_Turret
    {
        displayName = "PD Laser Battery *WIP*";
        scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = 
				{ 
					MACRO_NEW_WEAPON(PDLB_LaserCannon)
				};

				magazines[] = 
				{ 
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500)
				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB,Laser_Flak) : OPTRE_Corvette_M910_Turret
	{
		displayName = "PD Laser Battery (Flak)";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class EventHandlers {
			init = "[_this] spawn Flak_fnc_init_Flak;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB,Laser_Inverted) : OPTRE_Corvette_M910_Turret_u
	{
		displayName = "PD Laser Battery Inverted *WIP*";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(PDLB_LaserCannon)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500)
				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB,Laser_Flak_Inverted) : OPTRE_Corvette_M910_Turret_u
	{
		displayName = "PD Laser Battery Inverted (Flak)";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class EventHandlers {
			init = "[_this] spawn Flak_fnc_init_Flak;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB_Blu,Laser) : OPTRE_Corvette_M910_Turret
	{
		displayName = "PD Laser Battery *WIP*";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(PDLB_LaserCannon)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500)
				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB_Blu,Laser_Flak) : OPTRE_Corvette_M910_Turret
	{
		displayName = "PD Laser Battery (Flak)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		class EventHandlers {
			init = "[_this] spawn Flak_fnc_init_Flak_blu;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB_Blu,Laser_Inverted) : OPTRE_Corvette_M910_Turret_u
	{
		displayName = "PD Laser Battery Inverted *WIP*";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
				{
					MACRO_NEW_WEAPON(PDLB_LaserCannon)
				};

				magazines[] =
				{
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500),
					MACRO_NEW_MAG(PDLB_Laser,2500)
				};
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,PDLB_Blu,Laser_Flak_Inverted) : OPTRE_Corvette_M910_Turret_u
	{
		displayName = "PD Laser Battery Inverted (Flak)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		class EventHandlers {
			init = "[_this] spawn Flak_fnc_init_Flak_blu;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
			};
		};
	};

	/*class MACRO_NEW_VEHICLE(Land,PDLB_ind,Laser) : OPTRE_Corvette_M910_Turret
	{
		displayName = "PD Laser Battery *WIP*";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
									  
	class MACRO_NEW_VEHICLE(Land,PDLB_ind,Laser_Flak) : OPTRE_Corvette_M910_Turret
	{
		displayName = "PD Laser Battery (Flak)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class EventHandlers {
			init = "[_this] spawn Flak_fnc_init_Flak_ind;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
			};
		};
	};
									  
	class MACRO_NEW_VEHICLE(Land,PDLB_ind,Laser_Inverted) : OPTRE_Corvette_M910_Turret_u
	{
		displayName = "PD Laser Battery Inverted *WIP*";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
	};
									  
	class MACRO_NEW_VEHICLE(Land,PDLB_ind,Laser_Flak_Inverted) : OPTRE_Corvette_M910_Turret_u
	{
		displayName = "PD Laser Battery Inverted (Flak)";
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_AA";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		class EventHandlers {
			init = "[_this] spawn Flak_fnc_init_Flak_ind;";
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] =
				{

				};
			};
		};
	};*/
};