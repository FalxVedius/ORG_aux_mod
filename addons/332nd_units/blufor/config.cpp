#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(blufor_units)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(units);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(units)
		};
		requiredVersion = 0.1;
		units[] = {
			MACRO_NEW_UNIT(infantry,332nd_cadet),
            MACRO_NEW_UNIT(infantry,332nd_trooper),
            MACRO_NEW_UNIT(infantry,332nd_senior_trooper),
            MACRO_NEW_UNIT(infantry,332nd_veteran_trooper),
            MACRO_NEW_UNIT(infantry,332nd_corporal),
            MACRO_NEW_UNIT(infantry,332nd_sergeant),
            MACRO_NEW_UNIT(infantry,332nd_officer),

            MACRO_NEW_UNIT(rto,332nd_rto_cadet),

            MACRO_NEW_UNIT(cwo,332nd_warrant_officer),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_1),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_2),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_3),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_4),

            MACRO_NEW_UNIT(aviation,332nd_flight_cadet),
            MACRO_NEW_UNIT(aviation,332nd_flight_ensign),
            MACRO_NEW_UNIT(aviation,332nd_flight_senior_ensign),
            MACRO_NEW_UNIT(aviation,332nd_flight_officer),
            MACRO_NEW_UNIT(aviation,332nd_flight_jr_lieutenant),
            MACRO_NEW_UNIT(aviation,332nd_flight_lieutenant),
            MACRO_NEW_UNIT(aviation,332nd_flight_captain),
		};
		weapons[] = {
		 	MACRO_NEW_UNIFORM(infantry,332nd_cadet),
            MACRO_NEW_UNIFORM(infantry,332nd_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_senior_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_veteran_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_corporal),
            MACRO_NEW_UNIFORM(infantry,332nd_sergeant),
            MACRO_NEW_UNIFORM(infantry,332nd_officer),

            MACRO_NEW_UNIFORM(rto,332nd_rto_cadet),

            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_1),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_2),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_3),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_4),

            MACRO_NEW_UNIFORM(aviation,332nd_flight_cadet),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_ensign),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_senior_ensign),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_officer),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_jr_lieutenant),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_lieutenant),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_captain),
		};
	};
};

class CfgWeapons
{
    class JLTS_CloneArmor;
    class MACRO_NEW_UNIFORM(infantry,base): JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(aviation,base): JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(cwo,base): JLTS_CloneArmor
    {
        class ItemInfo;
    };
    
    class MACRO_NEW_UNIFORM(rto,base): JLTS_CloneArmor
    {
        class ItemInfo;
    };

    //Infantry
 	MACRO_NEW_INF_UNIFORM_ITEM(332nd_cadet,Cadet,332nd_cadet)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_trooper,Trooper,332nd_trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_senior_trooper,Senior,332nd_senior_trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_veteran_trooper,Veteran,332nd_veteran_trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_corporal,Corporal,332nd_corporal)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_sergeant,Sergeant,332nd_sergeant)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_officer,Officer,332nd_officer)

    //RTO
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_cadet,Cadet,332nd_rto_cadet)


    //Warrant Officer
    MACRO_NEW_CWO_UNIFORM_ITEM(332nd_warrant_officer,CWO,332nd_warrant_officer)
    MACRO_NEW_CWO_UNIFORM_ITEM(332nd_warrant_officer_1,CWO-1,332nd_warrant_officer_1)
    MACRO_NEW_CWO_UNIFORM_ITEM(332nd_warrant_officer_2,CWO-2,332nd_warrant_officer_2)
    MACRO_NEW_CWO_UNIFORM_ITEM(332nd_warrant_officer_3,CWO-3,332nd_warrant_officer_3)
    MACRO_NEW_CWO_UNIFORM_ITEM(332nd_warrant_officer_4,CWO-4,332nd_warrant_officer_4)

    //Aviation
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_cadet,Flight Cadet,332nd_flight_cadet)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_ensign,Flight Ensign,332nd_flight_ensign)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_senior_ensign,Flight Senior Ensign,332nd_flight_senior_ensign)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_officer,Flight Officer,332nd_flight_officer)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_jr_lieutenant,Flight Jr Lieutenant,332nd_flight_jr_lieutenant)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_lieutenant,Flight Lieutenant,332nd_flight_lieutenant)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_captain,Flight Captain,332nd_flight_captain)
};

class CfgVehicles
{
    class MACRO_NEW_UNIT(infantry,base);
    class MACRO_NEW_UNIT(aviation,base);
    class MACRO_NEW_UNIT(cwo,base);
    class MACRO_NEW_UNIT(rto,base);

    //Infantry
    MACRO_NEW_INF_UNIT(332nd_cadet,Clone Cadet,332nd_cadet,cadet\Cadet_Upper.paa,cadet\Cadet_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_trooper,Clone Trooper,332nd_trooper,trooper\Trooper_Upper.paa,trooper\Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_senior_trooper,Clone Senior Trooper,332nd_senior_trooper,senior_trooper\Senior_Trooper_Upper.paa,senior_trooper\Senior_Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_veteran_trooper,Clone Veteran Trooper,332nd_veteran_trooper,veteran_trooper\Veteran_Trooper_Upper.paa,veteran_trooper\Veteran_Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_corporal,Clone Corporal,332nd_corporal,corporal\Corporal_Upper.paa,corporal\Corporal_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_sergeant,Clone Sergeant,332nd_sergeant,sergeant\Sergeant_Upper.paa,sergeant\Sergeant_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_officer,Clone Officer,332nd_officer,officer\Officer_Upper.paa,officer\Officer_Lower.paa)

    //RTO
    MACRO_NEW_RTO_UNIT(332nd_rto_cadet,RTO Cadet,332nd_rto_cadet,cadet\rto_cadet_upper.paa,cadet\rto_cadet_lower.paa)

    //Warrant Officer
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer,CWO,332nd_warrant_officer,warrant_officer\cwo_top.paa,warrant_officer\cwo_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_1,CWO 1,332nd_warrant_officer_1,warrant_officer_1\cwo1_top.paa,warrant_officer_1\cwo1_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_2,CWO 2,332nd_warrant_officer_2,warrant_officer_2\cwo2_top.paa,warrant_officer_2\cwo2_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_3,CWO 3,332nd_warrant_officer_3,warrant_officer_3\cwo3_top.paa,warrant_officer_3\cwo3_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_4,CWO 4,332nd_warrant_officer_4,warrant_officer_4\cwo4_top.paa,warrant_officer_4\cwo4_bottom.paa)

    //Aviation
    MACRO_NEW_AVI_UNIT(332nd_flight_cadet,Flight Cadet,332nd_flight_cadet,flight_cadet\cadet_upper.paa,flight_cadet\cadet_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_ensign,Flight Ensign,332nd_flight_ensign,ensign\ensign_upper.paa,ensign\ensign_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_senior_ensign,Flight Senior Ensign,332nd_flight_senior_ensign,snr_ensign\senior_ensign_upper.paa,snr_ensign\senior_ensign_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_officer,Flight Officer,332nd_flight_officer,flight_officer\flight_officer_upper.paa,flight_officer\flight_officer_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_jr_lieutenant,Flight Jr Lieutenant,332nd_flight_jr_lieutenant,jr_lieutenant\jr_lieutenant_upper.paa,jr_lieutenant\jr_lieutenant_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_lieutenant,Flight Lieutenant,332nd_flight_lieutenant,lieutenant\lieutenant_upper.paa,lieutenant\lieutenant_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_captain,Flight Captain,332nd_flight_captain,captain\captain_upper.paa,captain\captain_lower.paa)
};