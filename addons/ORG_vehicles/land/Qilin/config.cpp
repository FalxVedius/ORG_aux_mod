#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Qilin)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,Qilin,Gun),
			MACRO_NEW_VEHICLE(Land,Qilin,AT),
        };
		weapons[] = 
		{
			"Qilin_Vic_15L",
			"Qilin_Vic_RPS6"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Default;
	class MGunCore;
	class BaseSoundModeType;
	class LMG_RCWS;
	class MACRO_NEW_WEAPON(DC_15l);
	class missiles_Vorona;
	class Qilin_Vic_15L : MACRO_NEW_WEAPON(DC_15l)
	{
		scopeArsenal = 0;
		model = "";
		displayName = "Qilin 15L";
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(15L_E_Web_mag,2000)
		};
	};
	class Qilin_Vic_RPS6 : missiles_Vorona
	{
		scopeArsenal = 0;
		model = "";
		displayName = "Qilin RPS6";
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(RPS6_ATMag,1)
		};
	};
};
class RCWSOptics;
class CfgVehicles
{
    class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
    class LSV_02_base_F: Car_F
    {
        class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
        class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
		};
    };

    class LSV_02_armed_base_F:LSV_02_base_F
    {
        class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
		};
    };
    class LSV_02_AT_base_F : LSV_02_base_F
    {
        class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
            };
        };
    };

    class MACRO_NEW_VEHICLE(Land,Qilin,Gun): LSV_02_armed_base_F
    {
        author="ORG";
        displayName="Qilin [Gun]";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction="EdCat_ORG";
        editorSubcategory = "EdSubcat_ORG_CAR";
		crew="ORG_aux_infantry_unit_trooper";
        typicalCargo[]=
		{
			"ORG_aux_infantry_unit_trooper"
		};
        textureList[]=
		{
			"Black",
			0,
		};
        hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
		};
        class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="OtocVez";
				gunnerRightLegAnimName="OtocVez";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"Qilin_Vic_15L"
				};
				magazines[]=
				{
					MACRO_NEW_MAG(15L_E_Web_mag,2000)
				};
				minElev=-10;
				maxElev=40;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="gunner_lsv_02";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="Eye";
				optics=0;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
				};
				commanding=-2;
				primaryGunner=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = Qilin_Vic_15L;
			};
			class muzzle_source_rot
			{
				source = "ammorandom";
				weapon = Qilin_Vic_15L;
			};
			class minigun
			{
				source = "revolving";
				weapon = Qilin_Vic_15L;
			};
		};
    };

    class MACRO_NEW_VEHICLE(Land,Qilin,AT): LSV_02_AT_base_F
    {
        author="ORG";
        displayName="Qilin [AT]";
        scope = 2;
        scopeCurator = 2;
        side = 1;

        faction="EdCat_ORG";
        editorSubcategory = "EdSubcat_ORG_CAR";
		crew="ORG_aux_infantry_unit_trooper";
        typicalCargo[]=
		{
			"ORG_aux_infantry_unit_trooper"
		};
        textureList[]=
		{
			"Black",
			0,
		};
        hiddenSelectionsTextures[]=
		{
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
			"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
            "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
		};
        class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="OtocVez";
				gunnerRightLegAnimName="OtocVez";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"Qilin_Vic_RPS6"
				};
				magazines[]=
				{
					MACRO_NEW_MAG(RPS6_ATMag,1),
					MACRO_NEW_MAG(RPS6_ATMag,1),
					MACRO_NEW_MAG(RPS6_ATMag,1),
					MACRO_NEW_MAG(RPS6_ATMag,1),
					MACRO_NEW_MAG(RPS6_ATMag,1),
					MACRO_NEW_MAG(RPS6_ATMag,1)
				};
				minElev=-15;
				maxElev=30;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="Gunner_LSV_02_AT_F";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="Eye";
				optics=0;
				gunnerOpticsModel="A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
				turretInfoType="RscOpticsRangeFinderVorona";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewOptics
				{
				};
				class OpticsIn
				{
					class Wide: RCWSOptics
					{
						gunnerOpticsModel="A3\Weapons_F_Tank\acc\reticle_Vorona.p3d";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={4,5};
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
				};
				commanding=-2;
				primaryGunner=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
			class CargoTurret_05: CargoTurret_05
			{
			};
		};
    };
};