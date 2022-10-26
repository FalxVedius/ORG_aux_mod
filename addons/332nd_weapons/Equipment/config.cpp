#include "..\..\332nd_main\macros\main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(equipment)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_VEHICLE(Air,CRD,4)
		};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class Aux_Emara
	{
		class Emara_Functions
		{
			file = "\332nd_weapons\Equipment\functions";
			class place
			{
			};
			class pickup
			{
			};
		};
	};
};

class CfgAmmo
{
	class SWLW_clones_spec_demo_ammo;
	class MACRO_NEW_AMMO(Demo_charge): SWLW_clones_spec_demo_ammo
	{
		hit = 70000;
		indirectHit = 70000;
		indirectHitRange = 10;
	};
	class 442_impact;
	class MACRO_NEW_AMMO(332_HEDP): 442_impact
	{
		hit = 250;
		indirectHit = 250;
		indirectHitRange = 1;
		explosionTime = 2;
		ace_frag_enabled = 0;
	};
	class 442_thermal_det;
	class MACRO_NEW_AMMO(332_FRAG): 442_thermal_det
	{
		hit = 30;
		indirectHit = 30;
		indirectHitRange = 10;
	};
	class MACRO_NEW_AMMO(332_AT_Grenade): MACRO_NEW_AMMO(332_HEDP)
	{
		hit = 30000;
		caliber=10;
		deflection=0;
		explosionTime = 5;
		deflectionSlowDown = 0.1;
		model = "\MRC\JLTS\weapons\Explosives\explosive.p3d";
		indirectHit = 30000;
		indirectHitRange = 1;
	};
	class 3AS_SonicDetonator;
	class MACRO_NEW_AMMO(332_FLASH): 3AS_SonicDetonator
	{
		explosionTime = 2;
		ace_grenades_flashbangBangs=4;
		ace_grenades_flashbangInterval=0.2;
		ace_grenades_flashbangIntervalMaxDeviation=0;
	};
	class 3AS_SmokeShellBase;
	class MACRO_NEW_AMMO(332_Impact_white): 3AS_SmokeShellBase
	{
		explosionTime = -1;
	};
	class 3AS_SmokeShellBlue;
	class MACRO_NEW_AMMO(332_Impact_blue): 3AS_SmokeShellBlue
	{
		explosionTime = -1;
	};
	class 3AS_SmokeShellGreen;
	class MACRO_NEW_AMMO(332_Impact_green): 3AS_SmokeShellGreen
	{
		explosionTime = -1;
	};
	class 3AS_SmokeShellRed;
	class MACRO_NEW_AMMO(332_Impact_red): 3AS_SmokeShellRed
	{
		explosionTime = -1;
	};
	class 3AS_SmokeShellPurple;
	class MACRO_NEW_AMMO(332_Impact_purple): 3AS_SmokeShellPurple
	{
		explosionTime = -1;
	};
	class 3AS_SmokeShellYellow;
	class MACRO_NEW_AMMO(332_Impact_yellow): 3AS_SmokeShellYellow
	{
		explosionTime = -1;
	};
	class 3AS_SmokeShellOrange;
	class MACRO_NEW_AMMO(332_Impact_orange): 3AS_SmokeShellOrange
	{
		explosionTime = -1;
	};

	class MACRO_NEW_AMMO(332_GL_White): 3AS_SmokeShellBase
	{
		explosionTime=1;
		simulation = "shotSmoke";
		defelcting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
	class MACRO_NEW_AMMO(332_GL_Red): 3AS_SmokeShellRed
	{
		explosionTime=1;
		simulation = "shotSmoke";
		deflecting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
	class MACRO_NEW_AMMO(332_GL_Green): 3AS_SmokeShellGreen
	{
		explosionTime=1;
		simulation = "shotSmoke";
		deflecting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
	class MACRO_NEW_AMMO(332_GL_Yellow): 3AS_SmokeShellYellow
	{
		explosionTime=1;
		simulation = "shotSmoke";
		deflecting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
	class MACRO_NEW_AMMO(332_GL_Purple): 3AS_SmokeShellPurple
	{
		explosionTime=1;
		simulation = "shotSmoke";
		deflecting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
	class MACRO_NEW_AMMO(332_GL_Blue): 3AS_SmokeShellBlue
	{
		explosionTime=1;
		simulation = "shotSmoke";
		deflecting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
	class MACRO_NEW_AMMO(332_GL_Orange): 3AS_SmokeShellOrange
	{
		explosionTime=1;
		simulation = "shotSmoke";
		deflecting = 10;
		deflectionSlowDown=0.1;
		deflectionDirDistribution=0.1;
		deflectionSlowDown = 0.1;
	};
};

class CfgMagazines
{
	class SquadShieldMagazine;
	class MACRO_NEW_MAG(332_SquadShield,1): SquadShieldMagazine
	{
		author = "Halligan, Namenai, Falx";
		displayName="[332nd] Squad Shield";
		displayNameShort="Squad Shield";
		picture = "\332nd_weapons\equipment\data\332Squadshield.paa";
		mass=20;
	};
	class SWLW_clones_spec_demo_mag;
	class MACRO_NEW_MAG(332_DemoCharge,1): SWLW_clones_spec_demo_mag
	{
		displayName="[332nd] Demo Charge";
		mass=40;
		ammo=MACRO_NEW_AMMO(Demo_charge)
    };
	class 442_impact_mag;
	class MACRO_NEW_MAG(332_HEDP,1): 442_impact_mag
	{
		displayName="[332nd] HEDP Impact Imploder";
		mass=8;
		displayNameShort="HEDP Impact";
		picture = "\332nd_weapons\equipment\data\332ImpactGrenade.paa";
		ammo=MACRO_NEW_AMMO(332_HEDP)
    };
	class 442_thermal_det_mag;
	class MACRO_NEW_MAG(332_FRAG,1): 442_thermal_det_mag
	{
		displayName="[332nd] Thermal Detonator";
		displayNameShort="Thermal Det";
		mass=8;
		picture = "\332nd_weapons\equipment\data\332ThermalDetonator.paa";
		ammo=MACRO_NEW_AMMO(332_FRAG)
    };
	class ACE_M14;
	class MACRO_NEW_MAG(332_INCENDIARY,1): ACE_M14
	{
		displayName="[332nd] AT Charge";
		mass=16;
		displayNameShort="AT Charge";
		initspeed=12;
		picture = "\SWLW_clones_spec\explosives\data\ui\breach_ui_ca.paa";
		ammo=MACRO_NEW_AMMO(332_AT_Grenade)
    };
	class 3AS_SonicDet;
	class MACRO_NEW_MAG(332_FLASH,1): 3AS_SonicDet
	{
		displayName="[332nd] 4-flash Sonic Detonator";
		displayNameShort="Sonic Det";
		picture = "\332nd_weapons\equipment\data\3324Flashbang.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_FLASH)
    };
	class 3AS_Smoke_Base;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_WHITE,1): 3AS_Smoke_Base
	{
		displayName="[332nd] Impact Smk White";
		displayNameShort="White Impact Smk";
		picture = "\332nd_weapons\equipment\data\332WhiteSmoke.paa";
		mass=4;
		scopeArsenal = 2;
		ammo=MACRO_NEW_AMMO(332_Impact_white)
    };
	class 3AS_SmokeBlue;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_BLUE,1): 3AS_SmokeBlue
	{
		displayName="[332nd] Impact Smk Blue";
		displayNameShort="Blue Impact Smk";
		picture = "\332nd_weapons\equipment\data\332BlueSmoke.paa";
		mass=4;
		ammo= MACRO_NEW_AMMO(332_Impact_blue)
    };
	class 3AS_SmokeGreen;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_GREEN,1): 3AS_SmokeGreen
	{
		displayName="[332nd] Impact Smk Green";
		displayNameShort="Green Impact Smk";
		picture = "\332nd_weapons\equipment\data\332GreenSmoke.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_Impact_green)
    };
	class 3AS_SmokeRed;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_RED,1): 3AS_SmokeRed
	{
		displayName="[332nd] Impact Smk Red";
		displayNameShort="Red Impact Smk";
		picture = "\332nd_weapons\equipment\data\332RedSmoke.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_Impact_red)
    };
	class 3AS_SmokePurple;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_PURPLE,1): 3AS_SmokePurple
	{
		displayName="[332nd] Impact Smk Purple";
		displayNameShort="Purple Impact Smk";
		picture = "\332nd_weapons\equipment\data\332PurpleSmoke.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_Impact_purple)
    };
	class 3AS_SmokeYellow;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_YELLOW,1): 3AS_SmokeYellow
	{
		displayName="[332nd] Impact Smk Yellow";
		displayNameShort="Yellow Impact Smk";
		picture = "\332nd_weapons\equipment\data\332YellowSmoke.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_Impact_yellow)
    };
	class 3AS_SmokeOrange;
	class MACRO_NEW_MAG(332_SMOKE_IMPACT_ORANGE,1): 3AS_SmokeOrange
	{
		displayName="[332nd] Impact Smk Orange";
		displayNameShort="Orange Impact Smk";
		picture = "\332nd_weapons\equipment\data\332OrangeSmoke.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_Impact_orange)
    };
	class 3Rnd_Smoke_Grenade_shell;
	class 3Rnd_SmokeRed_Grenade_shell;
	class 3Rnd_SmokeGreen_Grenade_shell;
	class 3Rnd_SmokeYellow_Grenade_shell;
	class 3Rnd_SmokePurple_Grenade_shell;
	class 3Rnd_SmokeBlue_Grenade_shell;
	class 3Rnd_SmokeOrange_Grenade_shell;

	class MACRO_NEW_MAG(332_GL_SMOKE_WHITE,1): 3Rnd_Smoke_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke White";
		displayNameShort="GL Impact Smoke(white)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_White)
	};
	class MACRO_NEW_MAG(332_GL_SMOKE_RED,1): 3Rnd_SmokeRed_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke Red";
		displayNameShort="GL Impact Smoke(red)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_Red)
	};
	class MACRO_NEW_MAG(332_GL_SMOKE_GREEN,1): 3Rnd_SmokeGreen_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke Green";
		displayNameShort="GL Impact Smoke(green)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_Green)
	};
	class MACRO_NEW_MAG(332_GL_SMOKE_YELLOW,1): 3Rnd_SmokeYellow_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke Yellow";
		displayNameShort="GL Impact Smoke(yellow)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_Yellow)
	};
	class MACRO_NEW_MAG(332_GL_SMOKE_PURPLE,1): 3Rnd_SmokePurple_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke Purple";
		displayNameShort="GL Impact Smoke(purple)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_Purple)
	};
	class MACRO_NEW_MAG(332_GL_SMOKE_BLUE,1): 3Rnd_SmokeBlue_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke Blue";
		displayNameShort="GL Impact Smoke(blue)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_Blue)
	};
	class MACRO_NEW_MAG(332_GL_SMOKE_ORANGE,1): 3Rnd_SmokeOrange_Grenade_shell
	{
		displayName="[332nd] 1rnd GL Smoke Orange";
		displayNameShort="GL Impact Smoke(orange)";
		count=1;
		ammo=MACRO_NEW_AMMO(332_GL_Orange)
	};

};

class CfgWeapons
{
	class default;
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"332nd_SquadShield_Muzzle",
			"332nd_HEDP_Muzzle",
			"332nd_FRAG_Muzzle",
			"332nd_INCENDIARY_Muzzle",
			"332_FLASH_Muzzle",
			"332_Impact_white_Muzzle",
			"332_Impact_blue_Muzzle",
			"332_Impact_green_Muzzle",
			"332_Impact_red_Muzzle",
			"332_Impact_purple_Muzzle",
			"332_Impact_yellow_Muzzle",
			"332_Impact_orange_Muzzle",
		};
		class ThrowMuzzle;
		class 332nd_SquadShield_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_SquadShield,1)
			};
		};
		class 332nd_HEDP_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_HEDP,1)
			};
		};
		class 332nd_FRAG_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_FRAG,1)
			};
		};
		class 332nd_INCENDIARY_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_INCENDIARY,1)
			};
		};
		class 332_FLASH_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_FLASH,1)
			};
		};
		class 332_Impact_white_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_SMOKE_IMPACT_WHITE,1)
			};
		};
		class 332_Impact_blue_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				 MACRO_NEW_MAG(332_SMOKE_IMPACT_BLUE,1)
			};
		};
		class 332_Impact_green_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_SMOKE_IMPACT_GREEN,1)
			};
		};
		class 332_Impact_red_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_SMOKE_IMPACT_RED,1)
			};
		};
		class 332_Impact_purple_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_SMOKE_IMPACT_PURPLE,1)
			};
		};
		class 332_Impact_yellow_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
			    MACRO_NEW_MAG(332_SMOKE_IMPACT_YELLOW,1)
			};
		};
		class 332_Impact_orange_Muzzle: ThrowMuzzle
		{
			magazines[]=
			{
				MACRO_NEW_MAG(332_SMOKE_IMPACT_ORANGE,1)
			};
		};

	};

	class put : default
	{
		muzzles[] +=
		{
			"332_demoCharge_Muzzle"
		};
		displayName="$STR_A3_CfgWeapons_Put0";
		class PutMuzzle;
		class 332_DemoCharge_Muzzle: PutMuzzle
		{
			autoreload=0;
			enableAttack=1;
			magazines[]=
			{
				MACRO_NEW_MAG(332_DemoCharge,1)
			};
			multiSoundHit[]=
			{
				"soundHit1",
				0.5,
				"soundHit2",
				0.5
			};
			displayName="[332nd] Demolition Charge";
			showToPlayer=0;
		};
	};

	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class MACRO_NEW_WEAPON(CRD_4_Emara) : ACE_ItemCore
	{
		author = "Falx";
		scope = 2;
		displayName = "[332nd] CRD-4 'Emara'";
		descriptionShort = "UAV";
		picture = "\DRNP_main\DRNP\addons\main\UI\icon_dron.paa";
		model = "\A3\Weapons_F\Items\Toolkit";
		class ItemInfo : CBA_MiscItem_ItemInfo
		{
			mass = 30;
		};
	};
};

class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class Man;
	class CAManBase : Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class ace_drone_place_Emara
				{
					displayName = "Place CRD-4 drone";
					condition = "[_player,'332nd_aux_weapon_CRD_4_Emara'] call ace_common_fnc_hasItem";
					statement = "[_player,'332nd_aux_weapon_CRD_4_Emara'] call Aux_Emara_fnc_place";
					exceptions[] = {};
					icon = "\DRNP_main\DRNP\addons\main\UI\Icon_dron.paa";
				};
			};
		};
	};

	class Air;
	class Helicopter : Air
	{
		class Turrets;
		class HitPoints;
		class ACE_Actions;
	};
	class Helicopter_Base_F : Helicopter
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
		class HitPoints : HitPoints
		{
			class HitHRotor;
			class HitHull;
			class HitWinch;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewOptics;
		class ViewPilot;
		class Components;
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};

	class UAV_01_base_F : Helicopter_Base_F
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
			};
		};
	};

	class B_UAV_01_F : UAV_01_base_F
	{
		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
			};
		};
	};

	class MACRO_NEW_VEHICLE(Air,CRD_4,Emara) : B_UAV_01_F
	{
		author = "Falx";
		displayName = "CRD-4 'Emara'";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "EdCat_332nd";
		editorSubcategory = "EdSubcat_332nd_DRONE";

		crew = "B_UAV_AI";
		typicalCargo[] =
		{
			"B_UAV_AI"
		};

		fuelCapacity = 1000;
		accuracy = 0.5;


		class ACE_Actions : ACE_Actions
		{
			class ACE_MainActions : ACE_MainActions
			{
				selection = "main_turret_axis";
				class ACE_Pickup
				{
					selection = "";
					displayName = "Pickup drone";
					distance = 5;
					condition = "(!(isEngineOn _target) && alive _target)";
					statement = "[_target,_player] call Aux_Emara_fnc_pickup";
					showDisabled = 0;
					exceptions[] = {};
					icon = "\DRNP_main\DRNP\addons\main\UI\Icon_dron.paa";
				};
			};
		};

		class EventHandlers
		{
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
			{
			};
		};


	};

	class ACE_Explosives_Place;
	class 332nd_DemoPack_Placeable : ACE_Explosives_Place
	{
		model = "SWLW_clones_spec\explosives\demo.p3d";
	};
};
