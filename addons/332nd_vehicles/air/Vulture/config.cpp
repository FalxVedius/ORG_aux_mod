#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Vulture)
	{
		author = "Falx";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,CIS,Vulture_CAP),
			MACRO_NEW_VEHICLE(air,CIS,Vulture_CAS),
			MACRO_NEW_VEHICLE(air,CIS,Vulture_GUN),
        };
		weapons[] = {};
	};
};

class AnimationSources;
class UserActions;
class Eventhandlers;
class HitPoints;
class HitHull;
class MarkerLights;
class Components;
class EjectionSystem;
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
	class Plane_Fighter_03_dynamicLoadout_base_F;
	class MFD
	{
	};
	class 3as_vulture_dynamicLoadout_base : Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components;
	};
	class 3as_Vulture_dynamicLoadout : 3as_vulture_dynamicLoadout_base
	{
		class Components;
	};

	class MACRO_NEW_VEHICLE(air,CIS,Vulture_CAP) : 3as_Vulture_dynamicLoadout
	{
		  displayName = "CAP Vulture Droid";
		  scope = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332ndCIS";
		  editorSubcategory = "EdSubcat_332nd_PLANE";

		  crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		  weapons[] = 
		  {
			  "3as_vulture_Light_AOE_cannon",
			  "3as_vulture_Light_AOE_cannon",
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  "3as_60Rnd_Vulture_Light_shells",
			  "3as_60Rnd_Vulture_Light_shells",
			  "3as_60Rnd_Vulture_Light_shells",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
		  };

		  class Components : Components
		  {
			  class TransportPylonsComponent
			  {
				  uiPicture = "a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				  class Pylons
				  {
					  class Pylons1
					  {
						  hardpoints[] =
						  {
							  "vulture_AA"
						  };
						  attachment = "3as_PylonMissle_Vulture_2Rnd_Missile_AA";
						  priority = 5;
						  maxweight = 1200;
						  UIposition[] = { 0.34999999,0.15000001 };
					  };
					  class Pylons2 : Pylons1
					  {
						  maxweight = 1200;
						  UIposition[] = { 0.34999999,-0.15000001 };
					  };
					  class Pylons3 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0.30000001 };
						  mirroredMissilePos = 2;
					  };
					  class Pylons4 : Pylons2
					  {
						  UIposition[] = { 0.34999999,-0.30000001 };
						  mirroredMissilePos = 1;
					  };
					  class Pylons5 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0 };
						  priority = 4;
						  hardpoints[] =
						  {
							  "Vulture_Missile"
						  };
						  attachment = "";
					  };
					  class Pylons6 : Pylons5
					  {
						  UIposition[] = { 0.34999999,0.5 };
						  mirroredMissilePos = 5;
					  };
					  class Pylons7 : Pylons1
					  {
						  priority = 10;
						  attachment = "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells";
						  maxweight = 1200;
						  UIposition[] = { 0.1,0.27000001 };
						  hardpoints[] =
						  {
							  "3as_Vulture_AOE_Cannon"
						  };
					  };
				  };
				  class Presets
				  {
					  class Empty
					  {
						  displayName = "Empty";
						  attachment[] = {};
					  };
					  class Default
					  {
						  displayName = "Default";
						  attachment[] =
						  {
							  "3as_PylonMissle_Vulture_2Rnd_Missile_AA",
							  "3as_PylonMissle_Vulture_2Rnd_Missile_AA",
							  "3as_PylonMissle_Vulture_2Rnd_Missile_AA",
							  "3as_PylonMissle_Vulture_2Rnd_Missile_AA",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
						  };
					  };
				  };
			  };
		  };
	};

	class MACRO_NEW_VEHICLE(air,CIS,Vulture_CAS) : 3as_Vulture_dynamicLoadout
	{
		  displayName = "CAS Vulture Droid";
		  scope = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332ndCIS";
		  editorSubcategory = "EdSubcat_332nd_PLANE";

		  crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		  weapons[] =
		  {
			  "3as_vulture_Light_AOE_cannon",
			  "3as_vulture_Light_AOE_cannon",
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  "3as_60Rnd_Vulture_Light_shells",
			  "3as_60Rnd_Vulture_Light_shells",
			  "3as_60Rnd_Vulture_Light_shells",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
		  };

		  class Components : Components
		  {
			  class TransportPylonsComponent
			  {
				  uiPicture = "a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				  class Pylons
				  {
					  class Pylons1
					  {
						  hardpoints[] =
						  {
							  "vulture_AA"
						  };
						  attachment = "";
						  priority = 5;
						  maxweight = 1200;
						  UIposition[] = { 0.34999999,0.15000001 };
					  };
					  class Pylons2 : Pylons1
					  {
						  maxweight = 1200;
						  UIposition[] = { 0.34999999,-0.15000001 };
					  };
					  class Pylons3 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0.30000001 };
						  mirroredMissilePos = 2;
					  };
					  class Pylons4 : Pylons2
					  {
						  UIposition[] = { 0.34999999,-0.30000001 };
						  mirroredMissilePos = 1;
					  };
					  class Pylons5 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0 };
						  priority = 4;
						  hardpoints[] =
						  {
							  "Vulture_Missile"
						  };
						  attachment = "3as_PylonRack_Vulture_7Rnd_Missle_AGM";
					  };
					  class Pylons6 : Pylons5
					  {
						  UIposition[] = { 0.34999999,0.5 };
						  mirroredMissilePos = 5;
					  };
					  class Pylons7 : Pylons1
					  {
						  priority = 10;
						  attachment = "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells";
						  maxweight = 1200;
						  UIposition[] = { 0.1,0.27000001 };
						  hardpoints[] =
						  {
							  "3as_Vulture_AOE_Cannon"
						  };
					  };
				  };
				  class Presets
				  {
					  class Empty
					  {
						  displayName = "Empty";
						  attachment[] = {};
					  };
					  class Default
					  {
						  displayName = "Default";
						  attachment[] =
						  {
							  "3as_PylonRack_Vulture_7Rnd_Missle_AGM",
							  "3as_PylonRack_Vulture_7Rnd_Missle_AGM",
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
						  };
					  };
				  };
			  };
		  };
	};

	class MACRO_NEW_VEHICLE(air,CIS,Vulture_GUN) : 3as_Vulture_dynamicLoadout
	{
		  displayName = "Vulture Droid";
		  scope = 2;
		  scopeCurator = 2;
		  faction = "EdCat_332ndCIS";
		  editorSubcategory = "EdSubcat_332nd_PLANE";

		  crew = "332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot";

		  weapons[] =
		  {
			  "3as_vulture_Light_AOE_cannon",
			  "3as_vulture_Light_AOE_cannon",
			  "CMFlareLauncher",
		  };
		  magazines[] =
		  {
			  "3as_60Rnd_Vulture_Light_shells",
			  "3as_60Rnd_Vulture_Light_shells",
			  "3as_60Rnd_Vulture_Light_shells",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
			  "120Rnd_CMFlare_Chaff_Magazine",
		  };

		  class Components : Components
		  {
			  class TransportPylonsComponent
			  {
				  uiPicture = "a3\air_f_gamma\plane_fighter_03\data\ui\plane_a143_3den_ca.paa";
				  class Pylons
				  {
					  class Pylons1
					  {
						  hardpoints[] =
						  {
							  "vulture_AA"
						  };
						  attachment = "";
						  priority = 5;
						  maxweight = 1200;
						  UIposition[] = { 0.34999999,0.15000001 };
					  };
					  class Pylons2 : Pylons1
					  {
						  maxweight = 1200;
						  UIposition[] = { 0.34999999,-0.15000001 };
					  };
					  class Pylons3 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0.30000001 };
						  mirroredMissilePos = 2;
					  };
					  class Pylons4 : Pylons2
					  {
						  UIposition[] = { 0.34999999,-0.30000001 };
						  mirroredMissilePos = 1;
					  };
					  class Pylons5 : Pylons1
					  {
						  UIposition[] = { 0.34999999,0 };
						  priority = 4;
						  hardpoints[] =
						  {
							  "Vulture_Missile"
						  };
						  attachment = "";
					  };
					  class Pylons6 : Pylons5
					  {
						  UIposition[] = { 0.34999999,0.5 };
						  mirroredMissilePos = 5;
					  };
					  class Pylons7 : Pylons1
					  {
						  priority = 10;
						  attachment = "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells";
						  maxweight = 1200;
						  UIposition[] = { 0.1,0.27000001 };
						  hardpoints[] =
						  {
							  "3as_Vulture_AOE_Cannon"
						  };
					  };
				  };
				  class Presets
				  {
					  class Empty
					  {
						  displayName = "Empty";
						  attachment[] = {};
					  };
					  class Default
					  {
						  displayName = "Default";
						  attachment[] =
						  {
							  "3as_PylonWeapon_40Rnd_Vulture_Heavy_shells"
						  };
					  };
				  };
			  };
		  };
	};
};