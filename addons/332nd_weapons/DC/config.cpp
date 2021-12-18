#include "../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(DC_Series)
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
	class SWLW_mag_40mm_1rnd;

	class MACRO_NEW_MAG(DC_15a_Medium,30): 30rnd_762x39_AK12_Mag_F //Medium Mag for DC15A/UGL
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		mass=10;
		initspeed=1800;
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
		initspeed=1800;
		displayName=MACRO_AMMO_DISPLAYNAME(15a Low,60)
		displayNameShort="Low Power 60rnd";
		descriptionShort="332nd Low Power Round";
		ammo="ls_ammo_556_blue";
	};

	class MACRO_NEW_MAG(DC_15a_High,10): MACRO_NEW_MAG(DC_15a_Medium,30)//High Mag for DC15A | Not on the 15A UGL
	{
		count=15;
		mass=20;
		initspeed=1600;
		displayName=MACRO_AMMO_DISPLAYNAME(15a High,15)
		displayNameShort="High Power 15rnd";
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

	class MACRO_NEW_MAG(DC_15L,200): 30rnd_762x39_AK12_Mag_F //DC-15L
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		mass=145;
		initspeed=1500;
		displayName=MACRO_AMMO_DISPLAYNAME(15L,200)
		displayNameShort="High Power 200rnd";
		descriptionShort="332nd High Power Round";
		ammo="ls_ammo_127x108_blue";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15L_T,200): MACRO_NEW_MAG(DC_15L,200) //DC-15L
	{
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		displayName=MACRO_AMMO_DISPLAYNAME(15L (T),200 Tracer)
		displayNameShort="High Power Tracer 200rnd";
		descriptionShort="332nd (T) High Power Round Tracer";
		ammo=MACRO_NEW_AMMO(127x108_Blue_T);
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
	class MACRO_NEW_MAG(DC_15c_Medium,45): 30rnd_762x39_AK12_Mag_F //Medium Mag for DC15A/UGL
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=45;
		mass=10;
		initspeed=1600;
		displayName=MACRO_AMMO_DISPLAYNAME(15C Medium,45)
		displayNameShort="Med Power rnd";
		descriptionShort="332nd Medium Power Round";
		ammo="ls_ammo_762_blue";
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(E5Low,50): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\E5\data\ui\E5_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\E5\E5_mag.p3d";
		count=50;
		mass=10;
		initspeed=900;
		displayName="E5 50rnd Low";
		descriptionShort="50rnd Magazine for the E-5";
		displayNameShort="E5 50rnd Low ";
		ammo=MACRO_NEW_AMMO(556_Red);
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(DC_15b,60): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		mass=15;
		initspeed=1500;
		displayName=MACRO_AMMO_DISPLAYNAME(DC-15b "barker",60)
		displayNameShort="Refined Medium Magazine x15";
		descriptionShort="Refined Medium Magazine x15";
		ammo=MACRO_NEW_AMMO(338_Blue);
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(Deka_MAG,30) : 30rnd_762x39_AK12_Mag_F
	{
		scope = 1;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 30;
		mass = 15;
		initspeed = 1500;
		displayName=MACRO_AMMO_DISPLAYNAME(Droideka Cannon,30)
		displayNameShort = "Droideka Cannon Magazine x30";
		descriptionShort = "Droideka Cannon Magazine x30";
		ammo=MACRO_NEW_AMMO(338_Red);
		tracersEvery = 1;
	};

	class MACRO_NEW_MAG(Valken38x,15): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=15;
		mass=15;
		initspeed=2000;
		displayName=MACRO_AMMO_DISPLAYNAME(Valken-38x Refined Medium Magazine,15)
		displayNameShort="Refined Medium Magazine x15";
		descriptionShort="Refined Medium Magazine x15";
		ammo=MACRO_NEW_AMMO(408_Blue);
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(Valken38x_T,15): MACRO_NEW_MAG(Valken38x,15) 
	{
		displayName=MACRO_AMMO_DISPLAYNAME(Valken-38x Refined Medium Tracer Magazine ,15)
		displayNameShort="Refined Medium Tracer Magazine x15";
		descriptionShort="Refined Medium Tracer Magazine x15";
		ammo=MACRO_NEW_AMMO(408_Blue_T);
		tracersEvery=1;
	};

	class MACRO_NEW_MAG(Westar_M5,40): 30rnd_762x39_AK12_Mag_F
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=35;
		mass=10;
		initspeed=800;
		displayName=MACRO_AMMO_DISPLAYNAME(Westar M-5 Suppressed Medium,35)
		displayNameShort="Westar suppressed medium magazine";
		descriptionShort="Westar suppressed medium magazine";
		ammo=MACRO_NEW_AMMO(Medium_Westar);
		tracersEvery=1;
	}; 
	class JLTS_DC15X_mag;
	class MACRO_NEW_MAG(DC_15x,3): JLTS_DC15X_mag
	{
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=2;
		mass=50;
		initspeed=5000;
		displayName=MACRO_AMMO_DISPLAYNAME(15x Anti-Tank Magazine,2)
		displayNameShort="2 rnd 15x AT Magazine";
		descriptionShort="2 rnd 15x AT Magazine";
		ammo=MACRO_NEW_AMMO(DC_15xATR);
		tracersEvery=1;
	};

	class JLTS_stun_mag_long;
	class MACRO_NEW_MAG(Stun,10): 30rnd_762x39_AK12_Mag_F
	{
		count=10;
		mass=6;
		JLTS_stunDuration = 30;
		initspeed=250;
		ammo = MACRO_NEW_AMMO(Stun);
		displayName=MACRO_AMMO_DISPLAYNAME(10rnd Stun (30sec) Magazine,10)
		displayNameShort="332nd 30 sec stun magazine";
		descriptionShort="332nd 30 sec stun magazine";
		model = "\MRC\JLTS\weapons\Core\stun_mag.p3d";
		picture = "\MRC\JLTS\weapons\Core\data\ui\stun_mag_ui_ca.paa";
		tracersEvery=1;
	};
};
	

class CfgAmmo
{
	class SWLW_ammo_40mm_green;
	class MACRO_NEW_AMMO(40mm_HE): SWLW_ammo_40mm_green
	{
		hit=25;
		indirecthit=20;
		fuseDistance=15;
		indirectHitRange=6;
		//effectfly="332nd_aux_effects_RPS4_green";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",2,1,500};
	};
	class SWLW_ammo_40mm_at;
	class MACRO_NEW_AMMO(40mm_AP): SWLW_ammo_40mm_at
	{
		 //effectfly="332nd_aux_effects_RPS4_blue";
		 fuseDistance=15;
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",2,1,500};
	};
	class ls_ammo_338_blue;
	class MACRO_NEW_AMMO(338_Blue_T): ls_ammo_338_blue
	{
	     hit = 20;
		 effectfly="332nd_aux_effects_blue_bullet";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,2,500};
	};
	class ls_ammo_338_red;
	class MACRO_NEW_AMMO(338_Red) : ls_ammo_338_red
	{
		hit = 20;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		explosionSoundEffect = "DefaultExplosion";
		explosioneffects = "ExploAmmoExplosion";
		model = "kobra\442_turrets\Droideka\Doublelaserred.p3d";
		soundFly[] = { "SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,2,500 };

		class CamShakeExplode
		{
			power = "(20*0.2)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((1 + 20^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 20;
			duration = "((round (20^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.0099999998;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class ls_ammo_127x108_blue;
	class MACRO_NEW_AMMO(127x108_Blue_T): ls_ammo_127x108_blue
	{
		 effectfly="332nd_aux_effects_blue_bullet";
	};
	class ls_ammo_338_green;
	class MACRO_NEW_AMMO(338_Green_T):  ls_ammo_338_green
	{
	    hit = 20;
	    effectfly="332nd_aux_effects_green_bullet";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,2,500};
	}

	class MACRO_NEW_AMMO(338_Green):  ls_ammo_338_green
	{
	    hit = 20;
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,2,500};
	}

	class MACRO_NEW_AMMO(338_Blue): ls_ammo_338_blue
	{
	     hit = 20;
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,2,500};
	};
	class ls_ammo_127x108_green;
    class MACRO_NEW_AMMO(127x108_green_T): ls_ammo_127x108_green
	{
		 effectfly="332nd_aux_effects_green_bullet";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,2,500};
	};
	class ls_ammo_65_red;
	class  MACRO_NEW_AMMO(556_Red): ls_ammo_65_red
	{
		//soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0.8,0.6,100};
		supersonicCrackFar[] = {"\332nd_weapons\sounds\WhizNear.wss",1,100};
		supersonicCrackNear[] = {"\332nd_weapons\sounds\WhizNear.wss",1,500};
		//soundFly[] = {"\332nd_weapons\sounds\WhizNear.wss",1.5,0.3,300};
	};
	class ls_ammo_408_blue;
	class  MACRO_NEW_AMMO(408_Blue): ls_ammo_408_blue
	{
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0.8,0.6,200};
	};
	class  MACRO_NEW_AMMO(408_Blue_T): ls_ammo_408_blue
	{
	    effectfly="332nd_aux_effects_blue_bullet";
		soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",0.8,0.6,200};
	};
	class ls_ammo_762_blue;
	class MACRO_NEW_AMMO(Medium_Westar): ls_ammo_762_blue
	{
       audibleFire = 2;
       ACE_bulletMass = 3;
       visibleFireTime = 3;
	   visibleFire = 1;
	   cartridge = "";
	};

    class MACRO_NEW_AMMO(DC_15xATR): ls_ammo_127x108_green
	{
		effectfly="332nd_aux_effects_RPS4_green";
        soundFly[] = {"SWLB_core\data\sounds\vehicles\mortar\weapon\mortar_fly.wss",1,0.9,1500};
		caliber = 10;
		hit = 700;
		typicalSpeed=5000;
		explosionEffects = "ImpactPlasmaExpGreen";
		tracerscale = 3;
		airFriction = -0.000005;
			class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 10;
		};
		class CamShakePlayerFire
		{
			power = 0.06;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 100;
			duration = 1;
			frequency = 20;
		};
	};
	 
	class JLTS_bullet_stun;
	class MACRO_NEW_AMMO(Stun): JLTS_bullet_stun
	{
	   JLTS_isStunAmmo = 1;
       audibleFire = 2;
       visibleFireTime = 3;
	   visibleFire = 1;
	   cartridge = "";
	};
};