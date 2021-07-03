#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(PLX_1)
	{
		author = MACRO_AUTHOR_PPL
        addonRootClass = MACRO_PATCH_NAME(weapons)
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(PLX_1)
		};
	};
};

class CfgWeapons
{
	class launch_Titan_short_base; //external class reference
	
	class SWLW_PLX1: launch_Titan_short_base
    {
        class WeaponSlotsInfo;
    };
	class MACRO_NEW_WEAPON(PLX_1): SWLW_PLX1
    {
	    displayName=MACRO_WEAPON_DISPLAYNAME(PLX-1 Missile Launcher)
		author="Halligan";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		canLock = 2;
		weaponLockDelay = 1.5;
		weaponLockSystem = 12;
		ace_overpressure_angle=45;
		ace_overpressure_damage=0;
		ace_overpresssure_priority=1;
		ace_overpressure_range=5;
	    model = "\MRC\JLTS\weapons\PLX1\PLX1.p3d";
		ace_reloadlaunchers_enabled=1;
		canLock=2;
        cursor="RocketLauncher_Test";
		magazines[]=
		{
			MACRO_NEW_MAG(PLX1_ATMag,2),
			MACRO_NEW_MAG(PLX1_HEMag,2),
			MACRO_NEW_MAG(PLX1_AAMag,2)
			
		};
		class OpticsModes
        {
            class sight
            {
                opticsID=1;
                useModelOptics=1;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera2",
                    "OpticsBlur3"
                };
                opticsZoomMin=0.0300;
                opticsZoomMax=0.125;
                opticsZoomInit=0.125;
                memoryPointCamera="optic_view";
                opticsFlare=1;
                opticsDisablePeripherialVision=1;
                visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = {0, 1};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
				discretefov[] = {0.125,0.0625,0.0310};
                distanceZoomMin=100;
                distanceZoomMax=500;
                cameraDir="";
            };
        };
	};
}
