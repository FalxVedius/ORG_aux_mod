#include "../../../332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(laat)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(air_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(air_vehicles)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base),
            MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_lights_base),
            MACRO_NEW_VEHICLE(air,LAAT,mk2_332nd_base),
            MACRO_NEW_VEHICLE(air,LAAT,mk2_332nd_lights_base)
        };
		weapons[] = {};
	};
};

class CfgVehicles
{   
    #include "_inheritance.hpp"

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_base):3as_LAAT_Mk1
    {
        displayName = "[332nd] LAAT Mk1 (Armed)";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Wings_Doors_co.paa,
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Base_co.paa
        };

        weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            "3as_LAAT_Missile_AGM",
            "3as_LAAT_Missile_AA",
            "ParticleBeamCannon_F"
        };
		magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3as_LAAT_8Rnd_Missile_AGM",
            "Laser_Battery_F","Laser_Battery_F","Laser_Battery_F"
        };

        class Turrets: Turrets
        {
            class Copilot: Copilot
            {
                weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon"
                    
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
            class LeftDoorgun: LeftDoorgun
            {
               weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon"
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
            class RightDoorGun: RightDoorGun
            {
                weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon_R"
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
        }
    }

    class MACRO_NEW_VEHICLE(air,LAAT,mk1_332nd_lights_base): 3as_LAAT_Mk1Lights
    {
        displayName = "[332nd] LAAT Mk1 (Lights)";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Wings_Doors_co.paa,
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Base_co.paa
        };

        weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            "3as_LAAT_Missile_AGM",
            "3as_LAAT_Missile_AA",
            "ParticleBeamCannon_F"
        };
		magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3as_LAAT_8Rnd_Missile_AGM",
            "Laser_Battery_F","Laser_Battery_F","Laser_Battery_F"
        };

        class Turrets: Turrets
        {
            class Copilot: Copilot
            {
                weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon"
                    
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
        }

        #include "_lights.hpp"
    }

    class MACRO_NEW_VEHICLE(air,LAAT,mk2_332nd_base): 3as_LAAT_Mk2
    {
        displayName = "[332nd] LAAT Mk2";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Wings_Doors_co.paa,
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Base_co.paa
        };

        weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            "3as_LAAT_Missile_AGM",
            "3as_LAAT_Missile_AA",
            "ParticleBeamCannon_F"
        };
		magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3as_LAAT_8Rnd_Missile_AGM",
            "Laser_Battery_F","Laser_Battery_F","Laser_Battery_F"
        };

        class Turrets: Turrets
        {
            class Copilot: Copilot
            {
                weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon"
                    
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
        }
    }

    class MACRO_NEW_VEHICLE(air,LAAT,mk2_332nd_lights_base): 3as_LAAT_Mk2Lights
    {
        displayName = "[332nd] LAAT Mk2 (Lights)";
        hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Wings_Doors_co.paa,
            MACRO_VEHICLE_TEXTURES_PATH\air\LAAT\LAAT_Base_co.paa
        };

        weapons[] = {
            MACRO_AIR_COMMON_WEAPS,
            "3as_LAAT_Missile_AGM",
            "3as_LAAT_Missile_AA",
            "ParticleBeamCannon_F"
        };
		magazines[] = {
            MACRO_AIR_COMMON_MAGS,
            "3as_PylonMissile_LAAT_8Rnd_Missile_AA",
            "3as_LAAT_8Rnd_Missile_AGM",
            "Laser_Battery_F","Laser_Battery_F","Laser_Battery_F"
        };

        class Turrets: Turrets
        {
            class Copilot: Copilot
            {
                weapons[] = {
                    MACRO_AIR_COMMON_WEAPS,
                    "ParticleBeamCannon"
                    
                };
                magazines[] = {
                    MACRO_AIR_COMMON_MAGS,
                    "Laser_Battery_F","Laser_Battery_F"
                };
            }
        }

        #include "_lights.hpp"
    }
}