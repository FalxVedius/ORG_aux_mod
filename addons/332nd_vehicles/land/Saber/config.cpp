#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Saber)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,TX,130),
			MACRO_NEW_VEHICLE(Land,TX,130_GL),
			MACRO_NEW_VEHICLE(Land,TX,130_Recon),
			MACRO_NEW_VEHICLE(Land,TX,130_Super),
        };
		weapons[] = {};
	};
};







class Optics_Armored;
class Optics_Commander_01: Optics_Armored
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
class VehicleSystemsTemplateLeftDriver : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class RCWSOptics;
class Optics_Armored;
class Optics_Gunner_APC_01 : Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles
 {
	class LandVehicle;
	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class ACE_SelfActions;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CargoTurret;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class ACE_SelfActions : ACE_SelfActions
		{
		};
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
	};

	class 3as_saber_01_Base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : NewTurret
			{

			};
			class Mainturret_top : MainTurret_bottom
			{

			};
			class CargoTurret_01 : CargoTurret
			{

			};
			class CargoTurret_02 : CargoTurret_01
			{

			};
			class CargoTurret_03 : CargoTurret_02
			{

			};
			class CargoTurret_04 : CargoTurret_01
			{

			};
		};
	};

	class 3as_saber_Base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_m1 : 3as_saber_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_super_base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class Mainturret_super : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_super : 3as_saber_super_base
	{
		class Turrets : Turrets
		{
			class Mainturret_super : Mainturret_super
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_02_Base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_m1G : 3as_saber_02_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_03_Base : 3as_saber_01_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class 3as_saber_m1Recon : 3as_saber_03_Base
	{
		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{

			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};
	
	class MACRO_NEW_VEHICLE(Land,TX,130): 3as_saber_m1
	{
	    displayName = "TX-130 Saber *WIP*";
	    scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\Saber\332nd_Saber_Hull.paa",
			"332nd_vehicles\_textures\land\Saber\332nd_Standard_Saber_Weapons.paa"
		};


		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{
			turretInfoType="RscOptics_MBT_01_gunner";
			  class OpticsIn: Optics_Gunner_MBT_01
			  {
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
			  };
			  memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
			  weapons[] =
			  {
			    MACRO_NEW_WEAPON(Saber_High),
				MACRO_NEW_WEAPON(Saber_low)
			  };
			  magazines[] =
			  {
			    MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
			    MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500),
                MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500)
			  };
			};
			class Mainturret_top : Mainturret_top
			{
				turretInfoType="RscOptics_MBT_01_commander";
				class OpticsIn: Optics_Commander_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			weapons[] =
			  {
			    MACRO_NEW_WEAPON(Heavy_Hmg)
			  };
			  magazines[] =
			  {
			   MACRO_NEW_MAG(Heavy_HMG,150),
			   MACRO_NEW_MAG(Heavy_HMG,150),
			   MACRO_NEW_MAG(Heavy_HMG,150),
			   MACRO_NEW_MAG(Heavy_HMG,150)
			  };
			outGunnerMayFire=1;
			inGunnerMayFire=0;
			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,130_GL) : 3as_saber_m1G
	{
		displayName = "TX-130 GL *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\Saber\332nd_Saber_Hull.paa",
			"332nd_vehicles\_textures\land\Saber\332nd_Saber_Grenade_Launcher_Variant.paa"
		};


		class Turrets : Turrets
		{
		    
			class MainTurret_bottom : MainTurret_bottom
			{
			turretInfoType="RscOptics_MBT_01_gunner";
			class OpticsIn: Optics_Gunner_MBT_01
			  {
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
			  };
			  memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
			  weapons[] =
			  {
			    MACRO_NEW_WEAPON(Saber_High),
				MACRO_NEW_WEAPON(Saber_low)
			  };
			  magazines[] =
			  {
			    MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
				MACRO_NEW_MAG(Saber_AP,25),
			    MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(MassDriver_HE,15),
				MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500),
                MACRO_NEW_MAG(Saber_Low,500),
				MACRO_NEW_MAG(Saber_Low,500)
			  };

			};
			class Mainturret_top : Mainturret_top
			{
			turretInfoType="RscOptics_MBT_01_commander";
			class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
			weapons[] =
			  {
			    MACRO_NEW_WEAPON(BeamLaser_Full)
			  };
			  magazines[] =
			  {
			  MACRO_NEW_MAG(LaserBeamFull,2000)
			  };
			outGunnerMayFire=1;
			inGunnerMayFire=0;
			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,130_Recon) : 3as_saber_m1Recon
	{
		displayName = "TX-130 Recon *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\Saber\332nd_Saber_Hull.paa",
			"332nd_vehicles\_textures\land\Saber\332nd_Saber_Scout_Weapons.paa"
		};


		class Turrets : Turrets
		{
			class MainTurret_bottom : MainTurret_bottom
			{
			    
			};
			class Mainturret_top : Mainturret_top
			{

			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,130_Super) : 3as_saber_super
	{
		displayName = "TX-130 Super *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_TANK";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\Saber\332nd_Saber_Hull.paa",
			"332nd_vehicles\_textures\land\Saber\332nd_Standard_Saber_Weapons.paa"
		};


		class Turrets : Turrets
		{
			class Mainturret_super : Mainturret_super
			{
				turretInfoType="RscOptics_MBT_01_gunner";
				class OpticsIn: Optics_Gunner_MBT_01
			  {
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
			  };
				 weapons[] =
				 {
			    //MACRO_NEW_WEAPON(SuperSaber_40mm),
				MACRO_NEW_WEAPON(SuperSaber_High)
				 };
				 magazines[] =
				  {
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
					   MACRO_NEW_MAG(MassDriver_AP,2),
						MACRO_NEW_MAG(SuperSaber_40mm,140),
						MACRO_NEW_MAG(SuperSaber_40mm,140),
						MACRO_NEW_MAG(SuperSaber_40mm,140),
					    MACRO_NEW_MAG(SuperSaber_40mm,140),
						MACRO_NEW_MAG(SuperSaber_40mm,140),
				 };

			};
			class Mainturret_top : Mainturret_super
			{
				turretInfoType = "RscOptics_MBT_01_commander";
				class OpticsIn : Optics_Commander_01
				{
					class Wide : Wide
					{
					};
					class Medium : Medium
					{
					};
					class Narrow : Narrow
					{
					};
				};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
			};
			class CargoTurret_01 : CargoTurret_01
			{

			};
			class CargoTurret_02 : CargoTurret_02
			{

			};
			class CargoTurret_03 : CargoTurret_03
			{

			};
			class CargoTurret_04 : CargoTurret_04
			{

			};
		};
	};
};