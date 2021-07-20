#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Z6)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(Z6)
		};
	};
};


class Mode_FullAuto;

class cfgWeapons
{
	class Rifle_Long_Base_F;
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	}

	class JLTS_Z6: LMG_Mk200_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		}
	}

	class MACRO_NEW_WEAPON(Z6): JLTS_Z6
	{
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(Z6)
		reloadTime=0.1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_lim";
		recoilprone="recoil_mx";
		canShootInWater=1;
		baseweapon="";
		cursor="332_DOT";
		cursoraim="332_Z6";
		modes[]=  {
			"FullAuto",
			"Supercharge"
		};
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
        
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
                opticsZoomMax=1.1;
                opticsZoomInit=0.75;
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
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1000};
                distanceZoomMin=100;
                distanceZoomMax=1000;
                modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
            };
        };
		
		magazines[]=
		{
			MACRO_NEW_MAG(Z6,200),
			MACRO_NEW_MAG(Z6,125)
		};
		
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"332nd_weapons\Z6\sounds\Z1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"332nd_weapons\Z6\sounds\Z2.wss",
					1,
					1,
					2000
				};
				begin3[]=
				{
					"332nd_weapons\Z6\sounds\Z3.wss",
					1,
					1,
					2000
				};
				begin4[]=
				{
					"332nd_weapons\Z6\sounds\Z4.wss",
					1,
					1,
					2000
				};
				begin5[]=
				{
					"332nd_weapons\Z6\sounds\Z5.wss",
					1,
					1,
					2000
				};
				begin6[]=
				{
					"332nd_weapons\Z6\sounds\Z6.wss",
					1,
					1,
					2000
				};
				begin7[]=
				{
					"332nd_weapons\Z6\sounds\Z7.wss",
					1,
					1,
					2000
				};
				begin8[]=
				{
					"332nd_weapons\Z6\sounds\Z8.wss",
					1,
					1,
					2000
				};
				begin9[]=
				{
					"332nd_weapons\Z6\sounds\Z9.wss",
					1,
					1,
					2000
				};
				begin10[]=
				{
					"332nd_weapons\Z6\sounds\Z10.wss",
					1,
					1,
					2000
				};
				begin11[]=
				{
					"332nd_weapons\Z6\sounds\Z11.wss",
					1,
					1,
					2000
				};
				begin12[]=
				{
					"332nd_weapons\Z6\sounds\Z12.wss",
					1,
					1,
					2000
				};
				begin13[]=
				{
					"332nd_weapons\Z6\sounds\Z13.wss",
					1,
					1,
					2000
				};
				begin14[]=
				{
					"332nd_weapons\Z6\sounds\Z14.wss",
					1,
					1,
					2000
				};
				begin15[]=
				{
					"332nd_weapons\Z6\sounds\Z15.wss",
					1,
					1,
					2000
				};
				begin16[]=
				{
					"332nd_weapons\Z6\sounds\Z16.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1,
					"begin2",
					1,
					"begin3",
					1,
					"begin4",
					1,
					"begin5",
					1,
					"begin6",
					1,
					"begin7",
					1,
					"begin8",
					1,
					"begin9",
					1,
					"begin10",
					1,
					"begin11",
					1,
					"begin12",
					1,
					"begin13",
					1,
					"begin14",
					1,
					"begin15",
					1,
					"begin16",
					1,
				};
			};
			displayname="FullAuto";
			reloadTime=0.11;
			dispersion=0.003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		class Supercharge: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",
					1.2,
					1.2,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			displayname="Supercharge";
			reloadTime=0.05;
			dispersion=0.01;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			textureType="fastAuto";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				displayName="Pointer Slot";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
		};
	}
}

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class MACRO_NEW_MAG(Z6,200): 30rnd_762x39_AK12_Mag_F //Z6 Box magazine
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		mass=30;
		initspeed=1200;
		displayName=MACRO_AMMO_DISPLAYNAME(Z6 Medium,200)
		displayNameShort="Med Power 200rnd";
		descriptionShort="332nd Medium Power Round";
		ammo="ls_ammo_762_blue";
		tracersEvery=1;
	};
	class MACRO_NEW_MAG(Z6,125): MACRO_NEW_MAG(Z6,200)
	{
		count=125;
		mass=15;
		displayName=MACRO_AMMO_DISPLAYNAME(Z6 Medium,125)
		displayNameShort="Med Power 125rnd";
	};
}
