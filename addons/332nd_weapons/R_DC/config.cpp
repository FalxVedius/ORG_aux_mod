#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(R_DC_Series)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons),
			MACRO_PATCH_NAME(Effects)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines
{
	class 30rnd_762x39_AK12_Mag_F;

	class MACRO_NEW_MAG(R_DC_15s,60): 30rnd_762x39_AK12_Mag_F //15S
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		mass=15;
		initspeed=1400;
		displayName=MACRO_AMMO_DISPLAYNAME(R_15s,60)
		displayNameShort="Green 60rnd";
		descriptionShort="332nd Green Medium Power Round";
		ammo=MACRO_NEW_AMMO(R_762_green);
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(R_Valken38x,15) : 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 15;
		mass = 15;
		initspeed = 2000;
		displayName = MACRO_AMMO_DISPLAYNAME(Valken - 38x Refined Medium Magazine,15)
		displayNameShort = "Refined Medium Magazine x15";
		descriptionShort = "Refined Medium Magazine x15";
		ammo = MACRO_NEW_AMMO(408_Green_T);
		tracersEvery = 1;
	};


	
};
	

class CfgAmmo
{
	class JLTS_bullet_carbine_green;
	class MACRO_NEW_AMMO(R_762_green) :JLTS_bullet_carbine_green
	{

	}

	class JLTS_bullet_rifle_green;
	class  MACRO_NEW_AMMO(408_Green_T) : JLTS_bullet_rifle_green
	{
		effectfly = "332nd_aux_effects_green_bullet";
		soundFly[] = { "SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0.8,0.6,200 };
	};

};