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
            MACRO_NEW_UNIT(recruit,332nd_recruit),

			MACRO_NEW_UNIT(infantry,332nd_cadet),
            MACRO_NEW_UNIT(infantry,332nd_trooper),
            MACRO_NEW_UNIT(infantry,332nd_senior_trooper),
            MACRO_NEW_UNIT(infantry,332nd_veteran_trooper),
            MACRO_NEW_UNIT(infantry,332nd_specialist_one),
            MACRO_NEW_UNIT(infantry,332nd_specialist_two),
            MACRO_NEW_UNIT(infantry,332nd_specialist_three),
            MACRO_NEW_UNIT(infantry,332nd_specialist_four),
            MACRO_NEW_UNIT(infantry,332nd_corporal),
            MACRO_NEW_UNIT(infantry,332nd_sergeant),
            MACRO_NEW_UNIT(infantry,332nd_officer),

            MACRO_NEW_UNIT(rto,332nd_rto_cadet),
            MACRO_NEW_UNIT(rto,332nd_rto_trooper),
            MACRO_NEW_UNIT(rto,332nd_rto_senior_trooper),
            MACRO_NEW_UNIT(rto,332nd_rto_veteran_trooper),
            MACRO_NEW_UNIT(rto,332nd_rto_specialist_one),
            MACRO_NEW_UNIT(rto,332nd_rto_specialist_two),
            MACRO_NEW_UNIT(rto,332nd_rto_specialist_three),
            MACRO_NEW_UNIT(rto,332nd_rto_specialist_four),
            MACRO_NEW_UNIT(rto,332nd_rto_corporal),

            MACRO_NEW_UNIT(medic,332nd_medic_cadet),
            MACRO_NEW_UNIT(medic,332nd_medic_trooper),
            MACRO_NEW_UNIT(medic,332nd_medic_senior_trooper),
            MACRO_NEW_UNIT(medic,332nd_medic_veteran_trooper),
            MACRO_NEW_UNIT(medic,332nd_medic_specialist_one),
            MACRO_NEW_UNIT(medic,332nd_medic_specialist_two),
            MACRO_NEW_UNIT(medic,332nd_medic_specialist_three),
            MACRO_NEW_UNIT(medic,332nd_medic_specialist_four),
            MACRO_NEW_UNIT(medic,332nd_medic_corporal),

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
            MACRO_NEW_UNIFORM(recruit,332nd_recruit),

		 	MACRO_NEW_UNIFORM(infantry,332nd_cadet),
            MACRO_NEW_UNIFORM(infantry,332nd_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_senior_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_veteran_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_specialist_one),
            MACRO_NEW_UNIFORM(infantry,332nd_specialist_two),
            MACRO_NEW_UNIFORM(infantry,332nd_specialist_three),
            MACRO_NEW_UNIFORM(infantry,332nd_specialist_four),
            MACRO_NEW_UNIFORM(infantry,332nd_corporal),
            MACRO_NEW_UNIFORM(infantry,332nd_sergeant),
            MACRO_NEW_UNIFORM(infantry,332nd_officer),

            MACRO_NEW_UNIFORM(rto,332nd_rto_cadet),
            MACRO_NEW_UNIFORM(rto,332nd_rto_trooper),
            MACRO_NEW_UNIFORM(rto,332nd_rto_senior_trooper),
            MACRO_NEW_UNIFORM(rto,332nd_rto_veteran_trooper),
            MACRO_NEW_UNIFORM(rto,332nd_rto_specialist_one),
            MACRO_NEW_UNIFORM(rto,332nd_rto_specialist_two),
            MACRO_NEW_UNIFORM(rto,332nd_rto_specialist_three),
            MACRO_NEW_UNIFORM(rto,332nd_rto_specialist_four),
            MACRO_NEW_UNIFORM(rto,332nd_rto_corporal),

            MACRO_NEW_UNIFORM(medic,332nd_medic_cadet),
            MACRO_NEW_UNIFORM(medic,332nd_medic_trooper),
            MACRO_NEW_UNIFORM(medic,332nd_medic_senior_trooper),
            MACRO_NEW_UNIFORM(medic,332nd_medic_veteran_trooper),
            MACRO_NEW_UNIFORM(medic,332nd_medic_specialist_one),
            MACRO_NEW_UNIFORM(medic,332nd_medic_specialist_two),
            MACRO_NEW_UNIFORM(medic,332nd_medic_specialist_three),
            MACRO_NEW_UNIFORM(medic,332nd_medic_specialist_four),
            MACRO_NEW_UNIFORM(medic,332nd_medic_corporal),

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

            // ----- nvgs -----
             MACRO_NEW_NVG(Specialist_Visor),
			 MACRO_NEW_NVG(Specialist_Visor_black),
			 MACRO_NEW_NVG(Commander_visor_NVG),
			 MACRO_NEW_NVG(Trooper_NVG),
			 MACRO_NEW_NVG(Specialist_Visor_332),
			 MACRO_NEW_NVG(Leadership_Visor_332),
			 MACRO_NEW_NVG(Leadership_Visor_black),
			 MACRO_NEW_NVG(Leadership_Visor),
			 

            // ---- bino -----
            MACRO_NEW_BINO(basic),
		};
	};
};

class CfgWeapons
{
    class JLTS_CloneArmor;
    class MACRO_NEW_UNIFORM(recruit,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };
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

    class MACRO_NEW_UNIFORM(medic,base): JLTS_CloneArmor
    {
        class ItemInfo;
    };

    //Recruit
    MACRO_NEW_RECRUIT_UNIFORM_ITEM(332nd_recruit,Recruit,332nd_recruit)

    //Infantry
 	MACRO_NEW_INF_UNIFORM_ITEM(332nd_cadet,Cadet,332nd_cadet)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_trooper,Trooper,332nd_trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_senior_trooper,Senior,332nd_senior_trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_veteran_trooper,Veteran,332nd_veteran_trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_specialist_one,Specialist One,332nd_specialist_one)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_specialist_two,Specialist Two,332nd_specialist_two)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_specialist_three,Specialist Three,332nd_specialist_three)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_specialist_four,Specialist Four,332nd_specialist_four)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_corporal,Corporal,332nd_corporal)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_sergeant,Sergeant,332nd_sergeant)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_officer,Officer,332nd_officer)

    //RTO
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_cadet,Cadet,332nd_rto_cadet)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_trooper,Trooper,332nd_rto_trooper)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_senior_trooper,Senior Trooper,332nd_rto_senior_trooper)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_veteran_trooper,Veteran Trooper,332nd_rto_veteran_trooper)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_specialist_one,Specialist One,332nd_rto_specialist_one)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_specialist_two,Specialist Two,332nd_rto_specialist_two)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_specialist_three,Specialist Three,332nd_rto_specialist_three)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_specialist_four,Specialist Four,332nd_rto_specialist_four)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_corporal,Corporal,332nd_rto_corporal)

    //Medic
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_cadet,Cadet,332nd_medic_cadet)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_trooper,Trooper,332nd_medic_trooper)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_senior_trooper,Senior Trooper,332nd_medic_senior_trooper)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_veteran_trooper,Veteran Trooper,332nd_medic_veteran_trooper)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_specialist_one,Specialist One,332nd_medic_specialist_one)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_specialist_two,Specialist Two,332nd_medic_specialist_two)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_specialist_three,Specialist Three,332nd_medic_specialist_three)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_specialist_four,Specialist Four,332nd_medic_specialist_four)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_corporal,Corporal,332nd_medic_corporal)

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

    #include "_nvg.hpp"
    #include "_bino.hpp"
};

class CfgVehicles
{
    class MACRO_NEW_UNIT(recruit,base);
    class MACRO_NEW_UNIT(infantry,base);
    class MACRO_NEW_UNIT(aviation,base);
    class MACRO_NEW_UNIT(cwo,base);
    class MACRO_NEW_UNIT(rto,base);
    class MACRO_NEW_UNIT(medic,base);

    //Recruit
    MACRO_NEW_RECRUIT_UNIT(332nd_recruit,Clone Recruit,332nd_recruit)

    //Infantry
    MACRO_NEW_INF_UNIT(332nd_cadet,Clone Cadet,332nd_cadet,cadet\Cadet_Upper.paa,cadet\Cadet_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_trooper,Clone Trooper,332nd_trooper,trooper\Trooper_Upper.paa,trooper\Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_senior_trooper,Clone Senior Trooper,332nd_senior_trooper,senior_trooper\Senior_Trooper_Upper.paa,senior_trooper\Senior_Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_veteran_trooper,Clone Veteran Trooper,332nd_veteran_trooper,veteran_trooper\Veteran_Trooper_Upper.paa,veteran_trooper\Veteran_Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_specialist_one,Clone Specialist One,332nd_specialist_one,specialist_one\csp1_Upper.paa,specialist_one\csp1_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_specialist_two,Clone Specialist Two,332nd_specialist_two,specialist_two\csp2_Upper.paa,specialist_two\csp2_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_specialist_three,Clone Specialist Three,332nd_specialist_three,specialist_three\csp3_Upper.paa,specialist_three\csp3_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_specialist_four,Clone Specialist Four,332nd_specialist_four,specialist_four\csp4_Upper.paa,specialist_four\csp4_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_corporal,Clone Corporal,332nd_corporal,corporal\Corporal_Upper.paa,corporal\Corporal_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_sergeant,Clone Sergeant,332nd_sergeant,sergeant\Sergeant_Upper.paa,sergeant\Sergeant_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_officer,Clone Officer,332nd_officer,officer\Officer_Upper.paa,officer\Officer_Lower.paa)

    //RTO
    MACRO_NEW_RTO_UNIT(332nd_rto_cadet,RTO Cadet,332nd_rto_cadet,cadet\rto_cadet_upper.paa,cadet\rto_cadet_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_trooper,RTO Trooper,332nd_rto_trooper,trooper\rto_trooper_upper.paa,trooper\rto_trooper_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_senior_trooper,RTO Senior Trooper,332nd_rto_senior_trooper,senior_trooper\rto_senior_trooper_upper.paa,senior_trooper\rto_senior_trooper_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_specialist_one,RTO Specialist 1,332nd_rto_specialist_one,specialist_one\rto_csp1_upper.paa,specialist_one\rto_csp1_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_specialist_two,RTO Specialist 2,332nd_rto_specialist_two,specialist_two\rto_csp2_upper.paa,specialist_two\rto_csp2_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_specialist_three,RTO Specialist 3,332nd_rto_specialist_three,specialist_three\rto_csp3_upper.paa,specialist_three\rto_csp3_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_specialist_four,RTO Specialist 4,332nd_rto_specialist_four,specialist_four\rto_csp4_upper.paa,specialist_four\rto_csp4_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_veteran_trooper,RTO Veteran Trooper,332nd_rto_veteran_trooper,veteran_trooper\rto_veteran_trooper_upper.paa,veteran_trooper\rto_veteran_trooper_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_corporal,RTO Corporal,332nd_rto_corporal,corporal\rto_corporal_upper.paa,corporal\rto_corporal_lower.paa)


    //Medic
    MACRO_NEW_MEDIC_UNIT(332nd_medic_cadet,Medic Cadet,332nd_medic_cadet,cadet\Cadet_Medic_Upper.paa,cadet\Cadet_Medic_Lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_trooper,Medic Trooper,332nd_medic_trooper,trooper\medic_trooper_upper.paa,trooper\medic_trooper_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_senior_trooper,Medic Senior Trooper,332nd_medic_senior_trooper,senior_trooper\medic_senior_trooper_upper.paa,senior_trooper\medic_senior_trooper_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_veteran_trooper,Medic Veteran Trooper,332nd_medic_veteran_trooper,veteran_trooper\medic_veteran_trooper_upper.paa,veteran_trooper\medic_veteran_trooper_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_specialist_one,Medic Specialist 1,332nd_medic_specialist_one,specialist_one\medic_csp1_upper.paa,specialist_one\medic_csp1_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_specialist_two,Medic Specialist 2,332nd_medic_specialist_two,specialist_two\medic_csp2_upper.paa,specialist_two\medic_csp2_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_specialist_three,Medic Specialist 3,332nd_medic_specialist_three,specialist_three\medic_csp3_upper.paa,specialist_three\medic_csp3_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_specialist_four,Medic Specialist 4,332nd_medic_specialist_four,specialist_four\medic_csp4_upper.paa,specialist_four\medic_csp4_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_corporal,Medic Corporal,332nd_medic_corporal,corporal\medic_corporal_upper.paa,corporal\medic_corporal_lower.paa)

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