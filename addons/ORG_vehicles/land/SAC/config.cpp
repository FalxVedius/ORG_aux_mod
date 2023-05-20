 #include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(SAC)
	{
		author = "ORG Aux Team";
        addonRootClass = MACRO_PATCH_NAME(land_vehicles);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(land_vehicles),
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_VEHICLE(Land,CIS,SAC_CIS),
        };
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank : LandVehicle
    {

    };
    
    class Tank_F : Tank
    {

    };
    
    class 3AS_Assualt_Base : Tank_F
    {

    }; 

    class 3AS_SAC_Trade : 3AS_Assualt_Base
    {

    };

    class MACRO_NEW_VEHICLE(Land,CIS,SAC_CIS) : 3AS_SAC_Trade
    {
        displayName = "Squad Assault Craft (CIS)";
        scope = 2;
        scopeCurator = 2;
        faction = "EdCat_ORGCIS";
        editorSubcategory = "EdSubcat_ORG_CAR";
        crew = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";

        armor = 300;
        armorStructural = 1;
    };
};