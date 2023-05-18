#include "../../ORG_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Z6)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			"A3_Data_F",
		    "A3_Weapons_F",
			"JLTS_weapons_Z6",
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
			MACRO_NEW_WEAPON(Z6)
		};
	};
};

class BaseSoundModeType;
class Mode_FullAuto;
class mode_SemiAuto;
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
	};
	class JLTS_stun_muzzle;
	class MACRO_NEW_WEAPON(Z6): JLTS_Z6
	{
		scope=2;
	    displayName=MACRO_WEAPON_DISPLAYNAME(Z6 [Support])
		reloadTime=0.1;
		ACE_Overheating_mrbs=300000;
		recoil="recoil_lim";
		recoilprone="recoil_mx";
		canShootInWater=1;
		baseweapon="";
		cursor="332_DOT";
		cursoraim="332_Z6";
		modes[]=  {
			"FullAuto"
		};
		modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
        muzzles[]=
		{
			"this",
			"332_Z6Supercharge"
		};
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
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				discreteInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 700;
                discreteDistance[]={100,200,300,400,500,600,700};
                discreteDistanceInitIndex=0;
                memoryPointCamera="eye";
                visionMode[]={};
                opticsFlare="true";
                cameraDir="";
            };
        };
		
		magazines[]=
		{
			MACRO_NEW_MAG(Z6,200),
			MACRO_NEW_MAG(Z6,125)
		};
		
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_Z6_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};

			displayname="FullAuto";
			reloadTime=0.06;
			dispersion=0.001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
		};
		
        class 332_Z6Supercharge: JLTS_stun_muzzle
		{
			displayName="Supercharge";
			descriptionShort="Z6 Supercharge";
			reloadTime=1;
			cursor="332_DOT";
            cursoraim="332_DC17";
			showtoplayer=1;
			modes[] = {"Single"};
			discreteDistance[]={100,200,300,400};
			memoryPointCamera="eye";
			

			class Single: mode_SemiAuto
		{
		    sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"332_Z6_Supercharge_Shot_SoundSet","332_DC15a_Tail_SoundSet"};
			};
		};
			
		    magazineWell[]={};
			magazines[]= 
				{
				MACRO_NEW_MAG(Z6_Supercharge,1)
				};
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistanceInitIndex=0;
			reloadMagazineSound[]=
			{
				"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
				1,
				1,
				10
			};
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
	};
};




class cfgAmmo
{
  class ls_ammo_127x108_blue;
  class MACRO_NEW_AMMO(Z6_Supercharge): ls_ammo_127x108_blue
    {
    hit = 120;
	indirecthit=8;
	indirectHitRange = 1;
	caliber=20;
	effectfly="332nd_aux_effects_RPS4_blue";
	explosionEffects = "ImpactPlasmaExpBlue";
	class HitEffects
		{
			Hit_Foliage_green = "3AS_ImpactPlasma";
			Hit_Foliage_Dead = "3AS_ImpactPlasma";
			Hit_Foliage_Green_big = "3AS_ImpactPlasma";
			Hit_Foliage_Palm = "3AS_ImpactPlasma";
			Hit_Foliage_Pine = "3AS_ImpactPlasma";
			hitFoliage = "3AS_ImpactPlasma";
			hitGlass = "3AS_ImpactPlasma";
			hitGlassArmored = "3AS_ImpactPlasma";
			hitWood = "3AS_ImpactPlasma";
			hitMetal = "3AS_ImpactPlasma";
			hitMetalPlate = "3AS_ImpactPlasma";
			hitBuilding = "3AS_ImpactPlasma";
			hitPlastic = "3AS_ImpactPlasma";
			hitRubber = "3AS_ImpactPlasma";
			hitTyre = "3AS_ImpactPlasma";
			hitConcrete = "3AS_ImpactPlasma";
			hitMan = "3AS_ImpactPlasma";
			hitGroundSoft = "3AS_ImpactPlasma";
			hitGroundRed = "3AS_ImpactPlasma";
			hitGroundHard = "3AS_ImpactPlasma";
			hitWater = "3AS_ImpactPlasma";
			hitVirtual = "3AS_ImpactPlasma";
			default_mat = "3AS_ImpactPlasma";
		};
	};
};



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
		displayName=MACRO_AMMO_DISPLAYNAME(Z6 Low,200)
		displayNameShort="Low Power 200rnd";
		descriptionShort="332nd Low Power Round";
		ammo=MACRO_NEW_AMMO(65_Blue);
		tracersEvery=1;
	};
	class MACRO_NEW_MAG(Z6,125): MACRO_NEW_MAG(Z6,200)
	{
		count=125;
		mass=15;
		displayName=MACRO_AMMO_DISPLAYNAME(Z6 Low,125)
		displayNameShort="Low Power 125rnd";
	};

	class MACRO_NEW_MAG(Z6_Supercharge,1): 30rnd_762x39_AK12_Mag_F //DW-32S
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=1;
		mass=3;
		tracerscale = 6;
		initspeed=400;
		displayName=MACRO_AMMO_DISPLAYNAME(Z6 Supercharge,1)
		displayNameShort="Conc-Med Power Tracer 20rnd";
		descriptionShort="332nd Concentrated-Medium Power Tracer Round";
		ammo=MACRO_NEW_AMMO(Z6_Supercharge);
		tracersEvery=1;
	};
};
