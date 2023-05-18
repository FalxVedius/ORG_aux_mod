#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(BAWS)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles),
            "3AS_HAAG"
		};
		requiredVersion = 0.1;
		units[] = 
        {
            MACRO_NEW_VEHICLE(Land,CIS,BAWS),
        };
		weapons[] = {};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_AAA_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Eventhandlers;
class CfgVehicles
{
    class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
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
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
    class 3AS_HAGM_Tan: Tank_F
    {
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
        class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
    };
    class MACRO_NEW_VEHICLE(Land,CIS,BAWS): 3AS_HAGM_Tan
    {
        author="Falx";
		scope=2;
		scopecurator=2;
		displayname="BAWS Artillery";
        icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		side=0;
		faction = "EdCat_332ndCIS";
		editorSubcategory = "EdSubcat_332nd_ART";
		crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";
        availableForSupportTypes[]=
		{
			"Artillery"
		};
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"3AS\3AS_HAGM\data\CISArty_Tan_CO.paa"
		};
        armor=100;
		armorStructural=2;
        class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4.5;
				material=-1;
				name="hull_hit";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.12;
			};
			class HitEngine: HitEngine
			{
				armor=0.75;
				material=-1;
				name="engine_hit";
				passThrough=0.2;
				minimalHit=0.23999999;
				explosionShielding=0.2;
				radius=0.33000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="track_l_hit";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="track_r_hit";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=1.5;
				material=-1;
				name="fuel_hit";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.25;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				gunBeg="Barrel";
				gunEnd="chamber";
				memoryPointGunnerOptics="gunner_view";
				memoryPointGun="gunner_view_dir";
				memoryPointsGetInGunner="getin";
				memoryPointsGetInGunnerDir="getindir";
				enableManualFire=1;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				proxyIndex=1;
				weapons[]=
				{
					"mortar_155mm_AMOS"
				};
				magazines[]=
				{
					"32Rnd_155mm_Mo_shells",
					"2Rnd_155mm_Mo_guided",
					"2Rnd_155mm_Mo_guided",
					"6Rnd_155mm_Mo_mine",
					"2Rnd_155mm_Mo_Cluster",
					"6Rnd_155mm_Mo_smoke",
					"2Rnd_155mm_Mo_LG",
					"6Rnd_155mm_Mo_AT_mine"
				};
				minElev=0;
				maxElev=80;
				initElev=0;
				minTurn=-90;
				maxTurn=90;
				elevationMode=3;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					30
				};
				turretInfoType="RscWeaponRangeArtilleryAuto";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov=0.17399999;
						minFov=0.0077777999;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"TI"
						};
					};
				};
				gunnerAction="mbt2_slot2b_in";
				gunnerInAction="mbt2_slot2b_in";
				forceHideGunner=1;
				inGunnerMayFire=1;
				viewGunnerInExternal=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="turret_hit";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="turret_hit";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
        class TextureSources
		{
			class CIS
			{
				displayName="CIS";
				author="Falx";
				textures[]=
				{
					"3AS\3AS_HAGM\data\CISArty_CIS_CO.paa"
				};
				factions[]=
				{
					"EdCat_332ndCIS"
				};
			};
			class Tan
			{
				displayName="Tan";
				author="Falx";
				textures[]=
				{
					"3AS\3AS_HAGM\data\CISArty_Tan_CO.paa"
				};
				factions[]=
				{
					"EdCat_332ndCIS"
				};
			};
		};
    };
};