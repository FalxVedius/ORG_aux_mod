#include "../../../332nd_main/macros/main.hpp" // my config macro lib
#define MACRO_TX200_TEXTURES MACRO_VEHICLE_TEXTURES_PATH\land\AAT
class CfgPatches
{
	class MACRO_PATCH_NAME(AAT)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,AAT_CIS),
			MACRO_NEW_VEHICLE(Land,CIS,AAT_Tan),
			MACRO_NEW_VEHICLE(Land,CIS,Heavy_AAT),
        };
		weapons[] = {};
	};
};

class CfgAmmo
{
	class 3as_ATT_redPlasma_AT;
	class 3as_ATT_redPlasma;
	class ls_120mm_red_ap;
	class ls_120mm_red_he;
	class ls_127x99_red;

	class MACRO_NEW_AMMO(AAT_AP) : ls_120mm_red_ap
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 512";
		model = "swlw_main\Effects\laser_red.p3d";

		cost = 50;
		caliber = 34;
		hit = 400;
		indirectHit = 30;
		indirectHitRange = 8;
	};

	class MACRO_NEW_AMMO(AAT_MMG) : ls_127x99_red
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		model = "swlw_main\Effects\laser_red.p3d";

		cost = 5;
		caliber = 3.79;
		hit = 30;
		indirectHit = 6;
		indirectHitRange = 1;
	};

	class MACRO_NEW_AMMO(Heavy_AAT_AP) : ls_120mm_red_ap
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 512";
		tracerscale = 2;

		cost = 50;
		caliber = 18;
		hit = 350;
		indirectHit = 10;
		indirectHitRange = 0.5;
	};

	class MACRO_NEW_AMMO(Heavy_AAT_HE) : ls_120mm_red_he
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128";
		tracerscale = 2;

		cost = 50;
		caliber = 6;
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 3;
	};

	class MACRO_NEW_AMMO(Heavy_AAT_MMG) : ls_127x99_red
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		tracerscale = 2;

		cost = 5;
		caliber = 2.6;
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
	};
};

class CfgMagazines
{
	class 3as_24rnd_AAT_AP;
	class 3as_500Rnd_ATT_RedPlasma;
	class ls_30rnd_120mm_AP_mag_red;
	class ls_30rnd_120mm_HE_mag_red;
	class ls_500rnd_127x99_mag_red;

	class MACRO_NEW_MAG(AAT_AP,24) : 3as_24rnd_AAT_AP
	{
		displayName = "AAT AP";
		ammo = MACRO_NEW_AMMO(AAT_AP)
	};

	class MACRO_NEW_MAG(AAT_MMG,500) : 3as_500Rnd_ATT_RedPlasma
	{
		displayName = "AAT MMG";
		ammo = MACRO_NEW_AMMO(AAT_MMG)
	};

	class MACRO_NEW_MAG(Heavy_AAT_AP,30) : ls_30rnd_120mm_AP_mag_red
	{
		displayName = "Heavy AAT AP";
		ammo = MACRO_NEW_AMMO(Heavy_AAT_AP)
	};

	class MACRO_NEW_MAG(Heavy_AAT_HE,30) : ls_30rnd_120mm_HE_mag_red
	{
		displayName = "Heavy AAT HE";
		ammo = MACRO_NEW_AMMO(Heavy_AAT_HE)
	};

	class MACRO_NEW_MAG(Heavy_AAT_MMG,500) : ls_500rnd_127x99_mag_red
	{
		displayName = "Heavy AAT MMG";
		ammo = MACRO_NEW_AMMO(Heavy_AAT_MMG)
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class 3AS_AATCannon;
	class 3AS_AAT_Repeater;
	class ls_aat_cannon_120mm;
	class ls_aat_127;
	class mgun;

	class MACRO_NEW_WEAPON(AAT_Cannon) : 3AS_AATCannon
	{
		modes[] =
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};

		reloadSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};

		class player : Mode_SemiAuto
		{
			displayName = "AAT Main Gun";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"swlb_core\data\sounds\vehicles\aat\weapon\aat_main_shot.wss",
					3.1622777,
					1,
					3000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};


			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00056999997;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class TopDown : player
		{
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.40000001;
			midRange = 400;
			midRangeProbab = 0.94999999;
			maxRange = 8000;
			maxRangeProbab = 0.94999999;
		};
		class close : player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.80000001;
			maxRange = 1000;
			maxRangeProbab = 0.85000002;
		};
		class short : close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.30000001;
			midRange = 1000;
			midRangeProbab = 0.85000002;
			maxRange = 1500;
			maxRangeProbab = 0.85000002;
		};
		class medium : close
		{
			dispersion = 0.001;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.85000002;
			maxRange = 2000;
			maxRangeProbab = 0.80000001;
		};
		class far : close
		{
			dispersion = 0.002;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.80000001;
			maxRange = 3500;
			maxRangeProbab = 0.050000001;
		};

		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(AAT_AP,24)
		};
	};

	class MACRO_NEW_WEAPON(AAT_MMG) : 3AS_AAT_Repeater
	{
		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};

		class manual : mgun
		{
			TextureType = "";
			displayName = "AAT Side Gun";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"swlb_core\data\sounds\vehicles\aat\weapon\aat_light_shot.wss",
					1.5848932,
					1,
					3000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			dispersion = 0.0012000001;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.69999999;
			midRange = 100;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.69999999;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.69999999;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.050000001;
		};

		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(AAT_MMG,500)
		};
	};

	class MACRO_NEW_WEAPON(Heavy_AAT_Cannon) : ls_aat_cannon_120mm
	{
		modes[] =
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};

		reloadSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[] =
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};

		class player : Mode_SemiAuto
		{
			displayName = "AAT Main Gun";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"swlb_core\data\sounds\vehicles\aat\weapon\aat_main_shot.wss",
					3.1622777,
					1,
					3000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00056999997;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class TopDown : player
		{
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.40000001;
			midRange = 400;
			midRangeProbab = 0.94999999;
			maxRange = 8000;
			maxRangeProbab = 0.94999999;
		};
		class close : player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.80000001;
			maxRange = 1000;
			maxRangeProbab = 0.85000002;
		};
		class short : close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.30000001;
			midRange = 1000;
			midRangeProbab = 0.85000002;
			maxRange = 1500;
			maxRangeProbab = 0.85000002;
		};
		class medium : close
		{
			dispersion = 0.001;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.85000002;
			maxRange = 2000;
			maxRangeProbab = 0.80000001;
		};
		class far : close
		{
			dispersion = 0.002;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.80000001;
			maxRange = 3500;
			maxRangeProbab = 0.050000001;
		};

		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Heavy_AAT_AP,30),
			MACRO_NEW_MAG(Heavy_AAT_HE,30)
		};
	};

	class MACRO_NEW_WEAPON(Heavy_AAT_MMG) : ls_aat_127
	{
		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};

		class manual : mgun
		{
			TextureType = "";
			displayName = "AAT Side Gun";
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"swlb_core\data\sounds\vehicles\aat\weapon\aat_light_shot.wss",
					1.5848932,
					1,
					3000
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			dispersion = 0.0012000001;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.69999999;
			midRange = 100;
			midRangeProbab = 0.69999999;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.69999999;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.69999999;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far : close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.050000001;
		};

		magazineWell[] = {};
		magazines[] =
		{
			MACRO_NEW_MAG(Heavy_AAT_MMG,500)
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

	class 3AS_CIS_AAT_base_F : 3AS_AAT_base_F
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

	class 3AS_CIS_AAT_F : 3AS_CIS_AAT_base_F
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

	class 3AS_AAT : 3AS_CIS_AAT_F
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

	class 3AS_AAT_CIS : 3AS_AAT
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

	class 3AS_AAT_tan : 3AS_AAT
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

	class ls_ground_aat_base : Tank_F
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

		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class ls_ground_aat : ls_ground_aat_base
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

		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class ls_ground_aat_red : ls_ground_aat
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

		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,AAT_CIS) : 3AS_AAT_CIS
	{
		displayName = "AAT (CIS)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		armor = 500;
		armorStructural = 5;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
				  MACRO_NEW_WEAPON(AAT_Cannon)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(AAT_AP,24),
				  MACRO_NEW_MAG(AAT_AP,24),
				  MACRO_NEW_MAG(AAT_AP,24)
				};
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] =
						{
						  MACRO_NEW_WEAPON(AAT_MMG)
						};
						magazines[] =
						{
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500)
						};
					};
				};
			};
		};

		class TextureSources
		{
			class Tan
			{
				displayName = "Trade Federation";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"3AS\3AS_AAT\data\Tan_AAT_CO.paa"
				};
				factions[] =
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

		BushCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095701,
			1,
			100
		};
		BushCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095701,
			1,
			100
		};
		BushCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095701,
			1,
			100
		};
		soundBushCrash[] =
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		buildCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		buildCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		buildCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		buildCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		buildCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundBuildingCrash[] =
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		woodCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		woodCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		woodCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		woodCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		woodCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundWoodCrash[] =
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		ArmorCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		ArmorCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		ArmorCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		ArmorCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		ArmorCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundArmorCrash[] =
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		soundEngineOnInt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_start_int.wss",
			0.79432797,
			1
		};
		soundEngineOffInt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_stop_int.wss",
			0.79432797,
			1
		};
		soundEngineOnExt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_start.wss",
			1.99526,
			1,
			1000
		};
		soundEngineOffExt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_stop.wss",
			1.99526,
			1,
			1000
		};
		soundGetIn[] =
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundTurnIn[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOut[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnInInternal[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOutInternal[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundDammage[] =
		{
			"",
			0.56234097,
			1
		};
		class Sounds : Sounds
		{
			class Idle_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					4,
					1,
					750
				};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					4.48808,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine1_ext.wss",
					5.6501598,
					1,
					1000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine2_ext.wss",
					6.3396001,
					1,
					1250
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine3_ext.wss",
					7.1131301,
					1,
					1500
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine4_ext.wss",
					7.98104,
					1,
					1750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine5_ext.wss",
					8.9548903,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					5.6501598,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					7.1131301,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					8.9548903,
					1,
					1000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					10.0475,
					1,
					1250
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					8.9548903,
					1,
					1500
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					11.27353,
					1,
					1750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					12.64913,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.41589,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine1_int.wss",
					1.58866,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine2_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine3_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine4_int.wss",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine5_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.58866,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,AAT_Tan) : 3AS_AAT_tan
	{
		displayName = "AAT (Tan)";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

		armor = 500;
		armorStructural = 5;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
				  MACRO_NEW_WEAPON(AAT_Cannon)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(AAT_AP,24),
				  MACRO_NEW_MAG(AAT_AP,24),
				  MACRO_NEW_MAG(AAT_AP,24)
				};
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] =
						{
						  MACRO_NEW_WEAPON(AAT_MMG)
						};
						magazines[] =
						{
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500),
						  MACRO_NEW_MAG(AAT_MMG,500)
						};
					};
				};
			};
		};

		class TextureSources
		{
			class Tan
			{
				displayName = "Trade Federation";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"3AS\3AS_AAT\data\Tan_AAT_CO.paa"
				};
				factions[] =
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

		BushCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095701,
			1,
			100
		};
		BushCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095701,
			1,
			100
		};
		BushCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095701,
			1,
			100
		};
		soundBushCrash[] =
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		buildCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		buildCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		buildCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		buildCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		buildCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundBuildingCrash[] =
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		woodCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		woodCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		woodCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		woodCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		woodCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundWoodCrash[] =
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		ArmorCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		ArmorCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		ArmorCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		ArmorCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		ArmorCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundArmorCrash[] =
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		soundEngineOnInt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_start_int.wss",
			0.79432797,
			1
		};
		soundEngineOffInt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_stop_int.wss",
			0.79432797,
			1
		};
		soundEngineOnExt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_start.wss",
			1.99526,
			1,
			100
		};
		soundEngineOffExt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_stop.wss",
			1.99526,
			1,
			100
		};
		soundGetIn[] =
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundTurnIn[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOut[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnInInternal[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOutInternal[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundDammage[] =
		{
			"",
			0.56234097,
			1
		};
		class Sounds : Sounds
		{
			class Idle_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					4,
					1,
					750
				};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					4.48808,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine1_ext.wss",
					5.6501598,
					1,
					1000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine2_ext.wss",
					6.3396001,
					1,
					1250
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine3_ext.wss",
					7.1131301,
					1,
					1500
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine4_ext.wss",
					7.98104,
					1,
					1750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine5_ext.wss",
					8.9548903,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					5.6501598,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					7.1131301,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					8.9548903,
					1,
					1000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					10.0475,
					1,
					1250
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					8.9548903,
					1,
					1500
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					11.27353,
					1,
					1750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					12.64913,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.41589,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine1_int.wss",
					1.58866,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine2_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine3_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine4_int.wss",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine5_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.58866,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,CIS,Heavy_AAT) : ls_ground_aat_red
	{
		displayName = "Heavy AAT";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_TANK";
		driver = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
		typicalCargo[] =
		{
			"332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew"
		};

		armor = 1000;
		armorStructural = 6;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

				weapons[] =
				{
				  MACRO_NEW_WEAPON(Heavy_AAT_Cannon)
				};
				magazines[] =
				{
					MACRO_NEW_MAG(Heavy_AAT_AP,30),
					MACRO_NEW_MAG(Heavy_AAT_HE,30),
					MACRO_NEW_MAG(Heavy_AAT_AP,30),
					MACRO_NEW_MAG(Heavy_AAT_HE,30)
				};
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] =
						{
						  MACRO_NEW_WEAPON(Heavy_AAT_MMG)
						};
						magazines[] =
						{
						  MACRO_NEW_MAG(Heavy_AAT_MMG,500),
						  MACRO_NEW_MAG(Heavy_AAT_MMG,500),
						  MACRO_NEW_MAG(Heavy_AAT_MMG,500),
						  MACRO_NEW_MAG(Heavy_AAT_MMG,500),
						  MACRO_NEW_MAG(Heavy_AAT_MMG,500)
						};
					};
				};
			};
		};

		class TextureSources
		{
			class Red
			{
				displayname = "CIS Red";
				author = MACRO_AUTHOR;
				textures[] =
				{
					"ls_vehicles_ground\aat\data\red\body1_red_co.paa",
					"ls_vehicles_ground\aat\data\red\body2_red_co.paa",
					"ls_vehicles_ground\aat\data\red\gun_red_co.paa"
				};
				factions[] =
				{
					"EdCat_332ndCIS"
				};
			};
		};

		BushCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095701,
			1,
			100
		};
		BushCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095701,
			1,
			100
		};
		BushCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095701,
			1,
			100
		};
		soundBushCrash[] =
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		buildCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		buildCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		buildCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		buildCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		buildCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundBuildingCrash[] =
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		woodCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		woodCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		woodCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		woodCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		woodCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundWoodCrash[] =
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622801,
			1,
			200
		};
		ArmorCrash1[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622801,
			1,
			200
		};
		ArmorCrash2[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622801,
			1,
			200
		};
		ArmorCrash3[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622801,
			1,
			200
		};
		ArmorCrash4[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622801,
			1,
			200
		};
		ArmorCrash5[] =
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622801,
			1,
			200
		};
		soundArmorCrash[] =
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		soundEngineOnInt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_start_int.wss",
			0.79432797,
			1
		};
		soundEngineOffInt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_stop_int.wss",
			0.79432797,
			1
		};
		soundEngineOnExt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_start.wss",
			1.99526,
			1,
			100
		};
		soundEngineOffExt[] =
		{
			"swlb_core\data\sounds\vehicles\aat\misc\aat_stop.wss",
			1.99526,
			1,
			100
		};
		soundGetIn[] =
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1
		};
		soundGetOut[] =
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234097,
			1,
			20
		};
		soundTurnIn[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOut[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnInInternal[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundTurnOutInternal[] =
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.77828,
			1,
			20
		};
		soundDammage[] =
		{
			"",
			0.56234097,
			1
		};
		class Sounds : Sounds
		{
			class Idle_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					4,
					1,
					750
				};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					4.48808,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine1_ext.wss",
					5.6501598,
					1,
					1000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine2_ext.wss",
					6.3396001,
					1,
					1250
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine3_ext.wss",
					7.1131301,
					1,
					1500
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine4_ext.wss",
					7.98104,
					1,
					1750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine5_ext.wss",
					8.9548903,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					5.6501598,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					7.1131301,
					1,
					750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					8.9548903,
					1,
					1000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					10.0475,
					1,
					1250
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					8.9548903,
					1,
					1500
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					11.27353,
					1,
					1750
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_ext.wss",
					12.64913,
					1,
					2000
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.41589,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine1_int.wss",
					1.58866,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine2_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine3_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine4_int.wss",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine5_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.58866,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					1.7825,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.24404,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] =
				{
					"swlb_core\data\sounds\vehicles\aat\engine\aat_engine_int.wss",
					2.5178499,
					1
				};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
		};
	};
};