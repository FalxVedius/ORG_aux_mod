#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_Series)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;
	class SWLW_mag_40mm_1rnd;

	class MACRO_NEW_MAG(DC_15a_Medium,30): 30rnd_762x39_AK12_Mag_F //Medium Mag for DC15A/UGL
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		mass=10;
		initspeed=1400;
		displayName=MACRO_AMMO_DISPLAYNAME(15a Medium,30)
		displayNameShort="Med Power rnd";
		descriptionShort="332nd Medium Power Round";
		ammo="ls_ammo_762_blue";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15a_Low,60): MACRO_NEW_MAG(DC_15a_Medium,30) //Low Mag for DC15A
	{
		count=60;
		mass=10;
		initspeed=1400;
		displayName=MACRO_AMMO_DISPLAYNAME(15a Low,60)
		displayNameShort="Low Power 60rnd";
		descriptionShort="332nd Low Power Round";
		ammo="ls_ammo_556_blue";
	};

	class MACRO_NEW_MAG(DC_15a_High,10): MACRO_NEW_MAG(DC_15a_Medium,30)//High Mag for DC15A | Not on the 15A UGL
	{
		count=10;
		mass=20
		initspeed=1600;
		displayName=MACRO_AMMO_DISPLAYNAME(15a High,10)
		displayNameShort="High Power 10rnd";
		descriptionShort="332nd High Power Round";
		ammo="ls_ammo_127x108_green";
	};
	
	class MACRO_NEW_MAG(DC_15s,60): 30rnd_762x39_AK12_Mag_F //15S
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		mass=15;
		initspeed=1400;
		displayName=MACRO_AMMO_DISPLAYNAME(15s,60)
		displayNameShort="Med Power 60rnd";
		descriptionShort="332nd Medium Power Round";
		ammo="ls_ammo_762_blue";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15L,125): 30rnd_762x39_AK12_Mag_F //DC-15L
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=125;
		mass=75;
		initspeed=1500;
		displayName=MACRO_AMMO_DISPLAYNAME(15L,125)
		displayNameShort="High Power 125rnd";
		descriptionShort="332nd High Power Round";
		ammo="ls_ammo_127x108_blue";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15x,2): 30rnd_762x39_AK12_Mag_F //15X
	{
	    modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=2;
		mass=25
		initspeed=1200;
		displayName=MACRO_AMMO_DISPLAYNAME(15x Super High,2)
		displayNameShort="Super High Energy 2rnd";
		descriptionShort="332nd High Power-High Velocity Round";
		ammo="ls_50mm_laat_apfsds";
		tracersEvery=1;
	};
	class MACRO_NEW_MAG(DC_15x,10): MACRO_NEW_MAG(DC_15x,2) //15X
	{
		count=10;
		mass=25
		initspeed=2100;
		displayName=MACRO_AMMO_DISPLAYNAME(15x High Power,10)
		displayNameShort="High PowerHv 10rnd";
		descriptionShort="332nd High Power-High Velocity Round";
		ammo="ls_ammo_127x108_green";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_17,15): 30rnd_762x39_AK12_Mag_F //DC-17
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=15;
		mass=1;
		initspeed=1550;
		displayName=MACRO_AMMO_DISPLAYNAME(17 ,15)
		displayNameShort="Med Power 15rnd";
		descriptionShort="332nd Medium Power Round";
		ammo="ls_ammo_762_blue";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15_UGL_AP,2): SWLW_mag_40mm_1rnd //15A UGL - 40mm
	{
		scope=2;
		displayName=MACRO_AMMO_DISPLAYNAME(AP Plasma Cell ,2)
		ammo=MACRO_NEW_AMMO(40mm_AP)
		count=2;
		mass=12
		initspeed=80;
	};
	class MACRO_NEW_MAG(DC_15_UGL_HE,4): SWLW_mag_40mm_1rnd //15A UGL - 40mm
	{
		scope=2;
		ammo=MACRO_NEW_AMMO(40mm_HE)
		displayName=MACRO_AMMO_DISPLAYNAME(HE Plasma Cell ,4)
		count=4;
		mass=12
		initspeed=80;
	};
	
};

class CfgAmmo
{
	class SWLW_ammo_40mm_green;
	class MACRO_NEW_AMMO(40mm_HE): SWLW_ammo_40mm_green
	{
		hit=25;
		indirecthit=20;
		indirectHitRange=6;
		 effectsMissile = "332nd_aux_effects_RPS4_green";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,500};
	};
	class SWLW_ammo_40mm_at;
	class MACRO_NEW_AMMO(40mm_AP): SWLW_ammo_40mm_at
	{
		 effectsMissile = "332nd_aux_effects_RPS4_blue";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",3,1,500};
	};
}