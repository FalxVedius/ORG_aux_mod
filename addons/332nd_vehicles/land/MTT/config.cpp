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

            };
            class MainTurret2 : MainTurret2
            {

            };
        };
    };
};