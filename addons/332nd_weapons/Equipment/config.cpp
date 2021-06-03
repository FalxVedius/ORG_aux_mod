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
		units[] = {};
		weapons[] = {};
	};
};

class CfgAmmo
{
	class SWLW_clones_spec_demo_ammo;
	class MACRO_NEW_AMMO(Demo_charge): SWLW_clones_spec_demo_ammo
	{
		hit = 8500;
		indirectHit = 4500;
		indirectHitRange = 10;
	};
	class 442_impact;
	class MACRO_NEW_AMMO(332_HEDP): 442_impact
	{
		hit = 250;
		indirectHit = 250;
		indirectHitRange = 1;
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
		hit = 5000;
		caliber=10;
		deflection=0;
		explosionTime = 6;
		deflectionSlowDown = 0.1;
		model = "\MRC\JLTS\weapons\Explosives\explosive.p3d";
		indirectHit = 5000;
		indirectHitRange = 1;
	};
	class 3AS_SonicDetonator;
	class MACRO_NEW_AMMO(332_FLASH): 3AS_SonicDetonator
	{
		ace_grenades_flashbangBangs=4;
		ace_grenades_flashbangInterval=0.5;
		ace_grenades_flashbangIntervalMaxDeviation=0;
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
		picture = "\MRC\JLTS\weapons\grenades\data\ui\grenade_emp_ui_ca.paa";
		mass=20;
	};
	class SWLW_clones_spec_demo_mag;
	class MACRO_NEW_MAG(332_DemoCharge,1): SWLW_clones_spec_demo_mag
	{
		displayName="[332nd] Demolition Charge";
		mass=40;
		ammo=MACRO_NEW_AMMO(Demo_charge)
    };
	class 442_impact_mag;
	class MACRO_NEW_MAG(332_HEDP,1): 442_impact_mag
	{
		displayName="[332nd] HEDP Impact Imploder";
		mass=8;
		displayNameShort="HEDP Impact";
		picture = "\87th_weapons\data\textures\ammo\ImpactGrenade.paa";
		ammo=MACRO_NEW_AMMO(332_HEDP)
    };
	class 442_thermal_det_mag;
	class MACRO_NEW_MAG(332_FRAG,1): 442_thermal_det_mag
	{
		displayName="[332nd] Thermal Detonator";
		displayNameShort="Thermal Det";
		mass=8;
		picture = "\87th_weapons\data\textures\ammo\CAThermalDet.paa";
		ammo=MACRO_NEW_AMMO(332_FRAG)
    };
	class ACE_M14;
	class MACRO_NEW_MAG(332_INCENDIARY,1): ACE_M14
	{
		displayName="[332nd] AT Charge";
		mass=16;
		displayNameShort="AT Charge";
		initspeed=6;
		picture = "\87th_weapons\data\textures\ammo\ExpCha.paa";
		ammo=MACRO_NEW_AMMO(332_AT_Grenade)
    };
	class 3AS_SonicDet;
	class MACRO_NEW_MAG(332_FLASH,1): 3AS_SonicDet
	{
		displayName="[332nd] 4-flash sonic detonator";
		displayNameShort="4-bang sonic det";
		picture = "\z\ace\addons\grenades\UI\ace_cts9_x_ca.paa";
		mass=4;
		ammo=MACRO_NEW_AMMO(332_FLASH)
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
			"332_FLASH_Muzzle"
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

	}; 
	class put: default
	{
		muzzles[]=
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
};

class CfgVehicles
{
	class ACE_Explosives_Place;
    class 332nd_DemoPack_Placeable: ACE_Explosives_Place
	{
		model = "SWLW_clones_spec\explosives\demo.p3d";
	};
}

	