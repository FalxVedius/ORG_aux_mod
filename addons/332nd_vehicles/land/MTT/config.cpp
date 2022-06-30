 #include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(MTT)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles),
            "A3_Armor_F_Beta"
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,MTT_CIS),
        };
	};
};

class CfgVehicles
{
    class 3as_MTT_Base;
       
    class 3as_MTT_01_Base : 3as_MTT_Base
    {
        class Turrets;
    };
    
    class 3as_MTT : 3as_MTT_01_Base
    {
        class Turrets : Turrets
        {
            class MainTurret;
            class MainTurret1;
            class MainTurret2;
        };
    };

    class MACRO_NEW_VEHICLE(Land,CIS,MTT_CIS) : 3as_MTT
    {

        displayName = "MTT (CIS)";
        scope = 2;
        scopeCurator = 2;
        faction = "EdCat_332ndCIS";
        editorSubcategory = "EdSubcat_332nd_TANK";
        crew = "332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew";

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {

            };
            class MainTurret1 : MainTurret1
            {
                weapons[] =
				{
				  MACRO_NEW_WEAPON(MTT_Cannon)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(MTT_HE,46),
                  MACRO_NEW_MAG(MTT_HE,46),
                  MACRO_NEW_MAG(MTT_HE,46),
                  MACRO_NEW_MAG(MTT_HE,46)
				};
            };
            class MainTurret2 : MainTurret2
            {
                weapons[] =
				{
				  MACRO_NEW_WEAPON(MTT_Cannon)
				};
				magazines[] =
				{
				  MACRO_NEW_MAG(MTT_HE,46),
                  MACRO_NEW_MAG(MTT_HE,46),
                  MACRO_NEW_MAG(MTT_HE,46),
                  MACRO_NEW_MAG(MTT_HE,46)
				};
            };
        };
    };
};

class CfgAmmo
{
    class MACRO_NEW_AMMO(MTT_HE) : 3AS_MTT_redPlasma_HEAT
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
	};
}

class CfgMagazine
{
    class MACRO_NEW_MAG(MTT_HE,46) : 3AS_40Rnd_MTT_HEAT
	{
		displayName = "MTT HE";
		ammo = MACRO_NEW_AMMO(MTT_HE)
	};
}

class CfgWeapons
{
    class 3as_MTTCannon;
    
    class MACRO_NEW_WEAPON(MTT_Cannon) : 3AS_MTTCannon
	{
		magazineWell[] = {};
		magazines[] = 
		{
			MACRO_NEW_MAG(MTT_HE,46)
		};
	};

};
