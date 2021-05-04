#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15s)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(DC_15s)
		};
	};
};

class cfgWeapons
{
	class arifle_MX_Base_F;
	class JLTS_DC15S:arifle_MX_Base_F
	{
		class FullAuto;
		class Single;
	}
	class MACRO_NEW_WEAPON(DC_15s):JLTS_DC15S
	{
		displayName = MACRO_WEAPON_DISPLAYNAME(DC 15s)

		canShootInWater=1;
		recoil="recoil_smg_02";
		recoilprone="recoil_smg_02";
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
		class FullAuto: FullAuto
		{
			reloadTime=0.095;
			dispersion=0.0008;
		}
		class Single: Single
		{
			reloadTime=0.20;
			dispersion=0.00009;
		}

		 class OpticsModes
        {
            class sight
            {
                opticsID=2;
                useModelOptics=0;
                opticsPPEffects[]=
                {
                    "OpticsCHAbera5",
                    "OpticsBlur5"
                };
                opticsDisablePeripherialVision=0.67000002;
                opticsZoomMin=0.375;
                opticsZoomMax=0.9; //1.1
                opticsZoomInit=0.600;
                discreteInitIndex=0;
                distanceZoomMin=100;
                distanceZoomMax=700;
                discreteDistance[]={100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
            class scope: sight
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
                visionMode[] = {"Normal", "NVG"};
                discretefov[] = {0.125,0.0625};
                discreteInitIndex = 0;
                discreteDistanceInitIndex = 0;
                discreteDistance[] = {100,200,300,400,500,600,700,800};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };
	
	}
}