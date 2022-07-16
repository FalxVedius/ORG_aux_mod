#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(TX155)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,TX,155_Transport),
			MACRO_NEW_VEHICLE(Land,TX,155_Supply),
        };
		weapons[] = {};
	};
};

class CfgVehicles
 {
	class NewTurret;
	class Car_F;

	class SC_Saurus_Base : Car_F
	{
		class HitPoints;
		class Turrets;
	};

	class SC_SaurusAPC_Unarmed_SE : SC_Saurus_Base
	{

		class HitPoints : HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitLBWheel;
			class HitLF2Wheel;
			class HitLFWheel;
			class HitLGlass;
			class HitLMWheel;
			class HitRBWheel;
			class HitRF2Wheel;
			class HitRFWheel;
			class HitRGlass;
			class HitRMWheel;
		};

		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

    class MACRO_NEW_VEHICLE(Land,TX,155_Transport) : SC_SaurusAPC_Unarmed_SE
    {
        displayName = "Minotaur Transport";
        scope = 2;
		side=1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		armor = 150;
		armorStructural = 5;

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\TX155\body_co.paa",
			"332nd_vehicles\_textures\land\TX155\details_co.paa",
			"\sc_wheeled\data\saurus_apc\textures\camera_co.paa"
		};
		
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";

				turretInfoType = "RscOptics_MBT_01_gunner";

				stabilizedInAxes = 3;
			};
		};

		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{

			};
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitGlass1 : HitGlass1
			{

			};
			class HitGlass2 : HitGlass2
			{

			};
			class HitGlass3 : HitGlass3
			{

			};
			class HitGlass4 : HitGlass4
			{

			};
			class HitGlass5 : HitGlass5
			{

			};
			class HitGlass6 : HitGlass6
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLBWheel : HitLBWheel
			{

			};
			class HitLF2Wheel : HitLF2Wheel
			{

			};
			class HitLFWheel : HitLFWheel
			{

			};
			class HitLGlass : HitLGlass
			{

			};
			class HitLMWheel : HitLMWheel
			{

			};
			class HitRBWheel : HitRBWheel
			{

			};
			class HitRF2Wheel : HitRF2Wheel
			{

			};
			class HitRFWheel : HitRFWheel
			{

			};
			class HitRGlass : HitRGlass
			{

			};
			class HitRMWheel : HitRMWheel
			{

			};
		};
	};

	class MACRO_NEW_VEHICLE(Land,TX,155_Supply) : SC_SaurusAPC_Unarmed_SE
	{
		displayName = "Minotaur Supply";
		scope = 2;
		side = 1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_CAR";
		crew = "332nd_aux_infantry_unit_332nd_trooper";

		hiddenSelectionsTextures[] =
		{
			"332nd_vehicles\_textures\land\TX155\body_co.paa",
			"332nd_vehicles\_textures\land\TX155\details_co.paa",
			"\sc_wheeled\data\saurus_apc\textures\camera_co.paa"
		};

		armor = 150;
		armorStructural = 5;
		transportSoldier = 0;

		attendant = true;
		ace_rearm_defaultSupply = 300000;
		ace_refuel_fuelCargo = 3000;
		ace_repair_canRepair = 1;
		ace_refuel_fuelCapacity = 1400;
		ace_refuel_flowRate = 4;
		ace_refuel_canReceive = 1;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";

				turretInfoType = "RscOptics_MBT_01_gunner";

				stabilizedInAxes = 3;
			};
		};

		class HitPoints : HitPoints
		{
			class HitBody : HitBody
			{

			};
			class HitEngine : HitEngine
			{

			};
			class HitFuel : HitFuel
			{

			};
			class HitGlass1 : HitGlass1
			{

			};
			class HitGlass2 : HitGlass2
			{

			};
			class HitGlass3 : HitGlass3
			{

			};
			class HitGlass4 : HitGlass4
			{

			};
			class HitGlass5 : HitGlass5
			{

			};
			class HitGlass6 : HitGlass6
			{

			};
			class HitHull : HitHull
			{

			};
			class HitLBWheel : HitLBWheel
			{

			};
			class HitLF2Wheel : HitLF2Wheel
			{

			};
			class HitLFWheel : HitLFWheel
			{

			};
			class HitLGlass : HitLGlass
			{

			};
			class HitLMWheel : HitLMWheel
			{

			};
			class HitRBWheel : HitRBWheel
			{

			};
			class HitRF2Wheel : HitRF2Wheel
			{

			};
			class HitRFWheel : HitRFWheel
			{

			};
			class HitRGlass : HitRGlass
			{

			};
			class HitRMWheel : HitRMWheel
			{

			};
		};
	};
};