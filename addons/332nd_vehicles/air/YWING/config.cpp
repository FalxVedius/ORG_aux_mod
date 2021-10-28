#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(YWING)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,Y,WING),
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
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};


class CfgVehicles
{
	class Air;
	class Plane : Air
	{
		class NewTurret;
		class ViewPilot;
		class HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Base_F : Plane
	{
		class AnimationSources;
		class Components;
	};
	class Plane_Fighter_03_base_F : Plane_Base_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F : Plane_Fighter_03_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
		class pilotCamera;
	};

	class BTL_Base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};

	class 3AS_BTLB_Bomber : BTL_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{

			};
		};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};

	class MACRO_NEW_VEHICLE(air,Y,WING) : 3AS_BTLB_Bomber
	{
		displayName = "Y-Wing *WIP*";
		scope = 2;
		scopeCurator = 2;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_PLANE";

		crew = "332nd_aux_aviation_unit_332nd_flight_ensign";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerType = "332nd_aux_aviation_unit_332nd_flight_ensign";
			};
		};

		class Components : Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "3as\3as_arc170\data\plane_arc_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] =
						{
							"B_BOMB_PYLON",
							"ARC_EMP_RAIL"
						};
						attachment = "PylonMissile_1Rnd_Bomb_04_F";
						priority = 10;
						maxweight = 2500;
						UIposition[] = { 0.5,0.25 };
					};
					class pylons2 : pylons1
					{
						UIposition[] = { 0.15000001,0.25 };
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						attachment = "PylonMissile_1Rnd_Bomb_04_F";
						priority = 9;
						maxweight = 2500;
						UIposition[] = { 0.55000001,0.34999999 };
					};
					class pylons4 : pylons3
					{
						UIposition[] = { 0.1,0.34999999 };
						mirroredMissilePos = 3;
					};
					class pylons5 : pylons1
					{
						hardpoints[] =
						{
							"B_BIM9X_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL",
							"ARC_AGM_PYLON"
						};
						attachment = "PylonRack_Missile_AGM_02_x2";
						priority = 7;
						maxweight = 5000;
						UIposition[] = { 0.60000002,0.44999999 };
					};
					class pylons6 : pylons5
					{
						UIposition[] = { 0.050000001,0.44999999 };
						mirroredMissilePos = 5;
					};
					class pylons7 : pylons1
					{
						attachment = "PylonMissile_1Rnd_Bomb_04_F";
						priority = 9;
						maxweight = 2500;
						UIposition[] = { 0.44999999,0.40000001 };
					};
					class pylons8 : pylons3
					{
						UIposition[] = { 0.2,0.40000001 };
						mirroredMissilePos = 7;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
				};
			};
		};
	};
};