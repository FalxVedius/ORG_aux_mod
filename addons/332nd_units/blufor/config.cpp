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
            MACRO_NEW_UNIT(infantry,332nd_specialist),
            MACRO_NEW_UNIT(infantry,332nd_corporal),
            MACRO_NEW_UNIT(infantry,332nd_sergeant),
            MACRO_NEW_UNIT(infantry,332nd_officer),
            MACRO_NEW_UNIT(infantry,332nd_deserter),

            MACRO_NEW_UNIT(rto,332nd_rto_cadet),
            MACRO_NEW_UNIT(rto,332nd_rto_trooper),
            MACRO_NEW_UNIT(rto,332nd_rto_senior_trooper),
            MACRO_NEW_UNIT(rto,332nd_rto_veteran_trooper),
            MACRO_NEW_UNIT(rto,332nd_rto_specialist),
            MACRO_NEW_UNIT(rto,332nd_rto_corporal),

            MACRO_NEW_UNIT(medic,332nd_medic_cadet),
            MACRO_NEW_UNIT(medic,332nd_medic_trooper),
            MACRO_NEW_UNIT(medic,332nd_medic_senior_trooper),
            MACRO_NEW_UNIT(medic,332nd_medic_veteran_trooper),
            MACRO_NEW_UNIT(medic,332nd_medic_specialist),
            MACRO_NEW_UNIT(medic,332nd_medic_corporal),

            MACRO_NEW_UNIT(cwo,332nd_warrant_officer),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_1),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_2),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_3),
            MACRO_NEW_UNIT(cwo,332nd_warrant_officer_4),

            MACRO_NEW_UNIT(aviation,332nd_flight_cadet),
            MACRO_NEW_UNIT(aviation,332nd_flight_ensign),
            MACRO_NEW_UNIT(aviation,332nd_flight_senior_ensign),
            MACRO_NEW_UNIT(aviation,332nd_flight_technician),
            MACRO_NEW_UNIT(aviation,332nd_flight_officer),
            MACRO_NEW_UNIT(aviation,332nd_flight_jr_lieutenant),
            MACRO_NEW_UNIT(aviation,332nd_flight_lieutenant),
            MACRO_NEW_UNIT(aviation,332nd_flight_captain),

            MACRO_NEW_UNIT(mech,332nd_mechanized_trooper),

            MACRO_NEW_UNIT(arfbase,332nd_arfbase_trooper),
            MACRO_NEW_UNIT(arfbase,332nd_arfbase_senior),
            MACRO_NEW_UNIT(arfbase,332nd_arfbase_veteran),
            MACRO_NEW_UNIT(arfbase,332nd_arfbase_corp),
            MACRO_NEW_UNIT(arfbase,332nd_arfbase_serg),

            MACRO_NEW_UNIT(arfdes,332nd_arfdes_trooper),
            MACRO_NEW_UNIT(arfdes,332nd_arfdes_senior),
            MACRO_NEW_UNIT(arfdes,332nd_arfdes_veteran),
            MACRO_NEW_UNIT(arfdes,332nd_arfdes_corp),
            MACRO_NEW_UNIT(arfdes,332nd_arfdes_serg),

            MACRO_NEW_UNIT(arfjung,332nd_arfjung_trooper),
            MACRO_NEW_UNIT(arfjung,332nd_arfjung_senior),
            MACRO_NEW_UNIT(arfjung,332nd_arfjung_veteran),
            MACRO_NEW_UNIT(arfjung,332nd_arfjung_corp),
            MACRO_NEW_UNIT(arfjung,332nd_arfjung_serg),

            MACRO_NEW_UNIT(arfsnow,332nd_arfsnow_trooper),
            MACRO_NEW_UNIT(arfsnow,332nd_arfsnow_senior),
            MACRO_NEW_UNIT(arfsnow,332nd_arfsnow_veteran),
            MACRO_NEW_UNIT(arfsnow,332nd_arfsnow_corp),
            MACRO_NEW_UNIT(arfsnow,332nd_arfsnow_serg),

            MACRO_NEW_UNIT(arfurb,332nd_arfurb_trooper),
            MACRO_NEW_UNIT(arfurb,332nd_arfurb_senior),
            MACRO_NEW_UNIT(arfurb,332nd_arfurb_veteran),
            MACRO_NEW_UNIT(arfurb,332nd_arfurb_corp),
            MACRO_NEW_UNIT(arfurb,332nd_arfurb_serg),

            MACRO_NEW_UNIT(arfwood,332nd_arfwood_trooper),
            MACRO_NEW_UNIT(arfwood,332nd_arfwood_senior),
            MACRO_NEW_UNIT(arfwood,332nd_arfwood_veteran),
            MACRO_NEW_UNIT(arfwood,332nd_arfwood_corp),
            MACRO_NEW_UNIT(arfwood,332nd_arfwood_serg),

            MACRO_NEW_UNIT(scenario,332nd_scenario_104th),
            MACRO_NEW_UNIT(scenario,332nd_scenario_187th),
            MACRO_NEW_UNIT(scenario,332nd_scenario_212th),
            MACRO_NEW_UNIT(scenario,332nd_scenario_327th),
            MACRO_NEW_UNIT(scenario,332nd_scenario_41st),
            MACRO_NEW_UNIT(scenario,332nd_scenario_442nd),
            MACRO_NEW_UNIT(scenario,332nd_scenario_501st),
            MACRO_NEW_UNIT(scenario,332nd_scenario_5th),
            MACRO_NEW_UNIT(scenario,332nd_scenario_91st),
            MACRO_NEW_UNIT(scenario,332nd_scenario_CG),
            MACRO_NEW_UNIT(scenario,332nd_scenario_DC),
            MACRO_NEW_UNIT(scenario,332nd_scenario_HC),
            MACRO_NEW_UNIT(scenario,332nd_scenario_KC),
            MACRO_NEW_UNIT(scenario,332nd_scenario_OS),
            MACRO_NEW_UNIT(scenario,332nd_scenario_Purge),
            MACRO_NEW_UNIT(scenario,332nd_scenario_Shadow),
		};
		weapons[] = {
            MACRO_NEW_UNIFORM(recruit,332nd_recruit),

		 	MACRO_NEW_UNIFORM(infantry,332nd_cadet),
            MACRO_NEW_UNIFORM(infantry,332nd_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_senior_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_veteran_trooper),
            MACRO_NEW_UNIFORM(infantry,332nd_specialist),
            MACRO_NEW_UNIFORM(infantry,332nd_corporal),
            MACRO_NEW_UNIFORM(infantry,332nd_sergeant),
            MACRO_NEW_UNIFORM(infantry,332nd_officer),
            MACRO_NEW_UNIFORM(infantry,332nd_original),
            MACRO_NEW_UNIFORM(infantry,332nd_deserter),

            MACRO_NEW_UNIFORM(rto,332nd_rto_cadet),
            MACRO_NEW_UNIFORM(rto,332nd_rto_trooper),
            MACRO_NEW_UNIFORM(rto,332nd_rto_senior_trooper),
            MACRO_NEW_UNIFORM(rto,332nd_rto_veteran_trooper),
            MACRO_NEW_UNIFORM(rto,332nd_rto_specialist),
            MACRO_NEW_UNIFORM(rto,332nd_rto_corporal),

            MACRO_NEW_UNIFORM(medic,332nd_medic_cadet),
            MACRO_NEW_UNIFORM(medic,332nd_medic_trooper),
            MACRO_NEW_UNIFORM(medic,332nd_medic_senior_trooper),
            MACRO_NEW_UNIFORM(medic,332nd_medic_veteran_trooper),
            MACRO_NEW_UNIFORM(medic,332nd_medic_specialist),
            MACRO_NEW_UNIFORM(medic,332nd_medic_corporal),

            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_1),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_2),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_3),
            MACRO_NEW_UNIFORM(cwo,332nd_warrant_officer_4),

            MACRO_NEW_UNIFORM(aviation,332nd_flight_cadet),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_ensign),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_senior_ensign),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_technician),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_officer),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_jr_lieutenant),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_lieutenant),
            MACRO_NEW_UNIFORM(aviation,332nd_flight_captain),

            MACRO_NEW_UNIFORM(mech,332nd_mechanized_trooper),

            MACRO_NEW_UNIFORM(arfbase,332nd_arfbase_trooper),
            MACRO_NEW_UNIFORM(arfbase,332nd_arfbase_senior),
            MACRO_NEW_UNIFORM(arfbase,332nd_arfbase_veteran),
            MACRO_NEW_UNIFORM(arfbase,332nd_arfbase_corp),
            MACRO_NEW_UNIFORM(arfbase,332nd_arfbase_serg),

            MACRO_NEW_UNIFORM(arfdes,332nd_arfdes_trooper),
            MACRO_NEW_UNIFORM(arfdes,332nd_arfdes_senior),
            MACRO_NEW_UNIFORM(arfdes,332nd_arfdes_veteran),
            MACRO_NEW_UNIFORM(arfdes,332nd_arfdes_corp),
            MACRO_NEW_UNIFORM(arfdes,332nd_arfdes_serg),

            MACRO_NEW_UNIFORM(arfjung,332nd_arfjung_trooper),
            MACRO_NEW_UNIFORM(arfjung,332nd_arfjung_senior),
            MACRO_NEW_UNIFORM(arfjung,332nd_arfjung_veteran),
            MACRO_NEW_UNIFORM(arfjung,332nd_arfjung_corp),
            MACRO_NEW_UNIFORM(arfjung,332nd_arfjung_serg),

            MACRO_NEW_UNIFORM(arfsnow,332nd_arfsnow_trooper),
            MACRO_NEW_UNIFORM(arfsnow,332nd_arfsnow_senior),
            MACRO_NEW_UNIFORM(arfsnow,332nd_arfsnow_veteran),
            MACRO_NEW_UNIFORM(arfsnow,332nd_arfsnow_corp),
            MACRO_NEW_UNIFORM(arfsnow,332nd_arfsnow_serg),

            MACRO_NEW_UNIFORM(arfurb,332nd_arfurb_trooper),
            MACRO_NEW_UNIFORM(arfurb,332nd_arfurb_senior),
            MACRO_NEW_UNIFORM(arfurb,332nd_arfurb_veteran),
            MACRO_NEW_UNIFORM(arfurb,332nd_arfurb_corp),
            MACRO_NEW_UNIFORM(arfurb,332nd_arfurb_serg),

            MACRO_NEW_UNIFORM(arfwood,332nd_arfwood_trooper),
            MACRO_NEW_UNIFORM(arfwood,332nd_arfwood_senior),
            MACRO_NEW_UNIFORM(arfwood,332nd_arfwood_veteran),
            MACRO_NEW_UNIFORM(arfwood,332nd_arfwood_corp),
            MACRO_NEW_UNIFORM(arfwood,332nd_arfwood_serg),

            MACRO_NEW_UNIFORM(scenario,332nd_scenario_104th),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_187th),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_212th),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_327th),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_41st),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_442nd),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_501st),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_5th),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_91st),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_CG),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_DC),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_HC),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_KC),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_OS),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_Purge),
            MACRO_NEW_UNIFORM(scenario,332nd_scenario_Shadow),

            // ----- nvgs -----
             MACRO_NEW_NVG(Specialist_Visor),
			 MACRO_NEW_NVG(Specialist_Visor_black),
			 MACRO_NEW_NVG(Commander_visor_NVG),
			 MACRO_NEW_NVG(Trooper_NVG),
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

    class MACRO_NEW_UNIFORM(arfbase,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfdes,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfjung,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfsnow,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfurb,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfwood,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(mech,base) : JLTS_CloneArmor
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(scenario,base) : JLTS_CloneArmor
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
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_specialist,Specialist,332nd_specialist)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_corporal,Corporal,332nd_corporal)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_sergeant,Sergeant,332nd_sergeant)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_officer,Officer,332nd_officer)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_original,Original,332nd_original)
    MACRO_NEW_INF_UNIFORM_ITEM(332nd_deserter,Deserter,332nd_deserter)

    //RTO
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_cadet,Cadet,332nd_rto_cadet)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_trooper,Trooper,332nd_rto_trooper)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_senior_trooper,Senior Trooper,332nd_rto_senior_trooper)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_veteran_trooper,Veteran Trooper,332nd_rto_veteran_trooper)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_specialist,Specialist,332nd_rto_specialist)
    MACRO_NEW_RTO_UNIFORM_ITEM(332nd_rto_corporal,Corporal,332nd_rto_corporal)

    //Medic
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_cadet,Cadet,332nd_medic_cadet)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_trooper,Trooper,332nd_medic_trooper)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_senior_trooper,Senior Trooper,332nd_medic_senior_trooper)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_veteran_trooper,Veteran Trooper,332nd_medic_veteran_trooper)
    MACRO_NEW_MEDIC_UNIFORM_ITEM(332nd_medic_specialist,Specialist,332nd_medic_specialist)
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
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_technician,Flight Technician,332nd_flight_technician)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_officer,Flight Officer,332nd_flight_officer)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_jr_lieutenant,Flight Jr Lieutenant,332nd_flight_jr_lieutenant)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_lieutenant,Flight Lieutenant,332nd_flight_lieutenant)
    MACRO_NEW_AVI_UNIFORM_ITEM(332nd_flight_captain,Flight Captain,332nd_flight_captain)

    //ARF Base
    MACRO_NEW_ARF_BASE_UNIFORM_ITEM(332nd_arfbase_trooper,Trooper,332nd_arfbase_trooper)
    MACRO_NEW_ARF_BASE_UNIFORM_ITEM(332nd_arfbase_senior,Senior,332nd_arfbase_senior)
    MACRO_NEW_ARF_BASE_UNIFORM_ITEM(332nd_arfbase_veteran,Veteran,332nd_arfbase_veteran)
    MACRO_NEW_ARF_BASE_UNIFORM_ITEM(332nd_arfbase_corp,Corporal,332nd_arfbase_corp)
    MACRO_NEW_ARF_BASE_UNIFORM_ITEM(332nd_arfbase_serg,Sergeant,332nd_arfbase_serg)

    //ARF Desert
    MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(332nd_arfdes_trooper,Trooper,332nd_arfdes_trooper)
    MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(332nd_arfdes_senior,Senior,332nd_arfdes_senior)
    MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(332nd_arfdes_veteran,Veteran,332nd_arfdes_veteran)
    MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(332nd_arfdes_corp,Corporal,332nd_arfdes_corp)
    MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(332nd_arfdes_serg,Sergeant,332nd_arfdes_serg)

    //ARF Jungle
    MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(332nd_arfjung_trooper,Trooper,332nd_arfjung_trooper)
    MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(332nd_arfjung_senior,Senior,332nd_arfjung_senior)
    MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(332nd_arfjung_veteran,Veteran,332nd_arfjung_veteran)
    MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(332nd_arfjung_corp,Corporal,332nd_arfjung_corp)
    MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(332nd_arfjung_serg,Sergeant,332nd_arfjung_serg)

    //ARF Snow
    MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(332nd_arfsnow_trooper,Trooper,332nd_arfsnow_trooper)
    MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(332nd_arfsnow_senior,Senior,332nd_arfsnow_senior)
    MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(332nd_arfsnow_veteran,Veteran,332nd_arfsnow_veteran)
    MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(332nd_arfsnow_corp,Corporal,332nd_arfsnow_corp)
    MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(332nd_arfsnow_serg,Sergeant,332nd_arfsnow_serg)

    //ARF Urban
    MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(332nd_arfurb_trooper,Trooper,332nd_arfurb_trooper)
    MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(332nd_arfurb_senior,Senior,332nd_arfurb_senior)
    MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(332nd_arfurb_veteran,Veteran,332nd_arfurb_veteran)
    MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(332nd_arfurb_corp,Corporal,332nd_arfurb_corp)
    MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(332nd_arfurb_serg,Sergeant,332nd_arfurb_serg)

    //ARF Woodland
    MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(332nd_arfwood_trooper,Trooper,332nd_arfwood_trooper)
    MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(332nd_arfwood_senior,Senior,332nd_arfwood_senior)
    MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(332nd_arfwood_veteran,Veteran,332nd_arfwood_veteran)
    MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(332nd_arfwood_corp,Corporal,332nd_arfwood_corp)
    MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(332nd_arfwood_serg,Sergeant,332nd_arfwood_serg)

    //Mechanized
    MACRO_NEW_MECHANIZED_UNIFORM_ITEM(332nd_mechanized_trooper,Trooper,332nd_mechanized_trooper)

    //Scenario Armor
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_104th,104th,332nd_scenario_104th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_187th,187th,332nd_scenario_187th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_212th,212th,332nd_scenario_212th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_327th,327th,332nd_scenario_327th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_41st,41st,332nd_scenario_41st)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_442nd,442nd,332nd_scenario_442nd)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_501st,501st,332nd_scenario_501st)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_5th,5th,332nd_scenario_5th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_91st,91st,332nd_scenario_91st)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_CG,CG,332nd_scenario_CG)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_DC,DC,332nd_scenario_DC)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_HC,HC,332nd_scenario_HC)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_KC,KC,332nd_scenario_KC)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_OS,OS,332nd_scenario_OS)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_Purge,Purge,332nd_scenario_Purge)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(332nd_scenario_Shadow,Shadow,332nd_scenario_Shadow)


    #include "_nvg.hpp"
    #include "_bino.hpp"
};

class CfgVehicles
{
    class MACRO_NEW_UNIT(recruit,base);
    class MACRO_NEW_UNIT(infantry,base);
    class MACRO_NEW_UNIT(aviation,base);
    class MACRO_NEW_UNIT(mech,base);
    class MACRO_NEW_UNIT(cwo,base);
    class MACRO_NEW_UNIT(rto,base);
    class MACRO_NEW_UNIT(medic,base);

    class MACRO_NEW_UNIT(arfbase,base);
    class MACRO_NEW_UNIT(arfdes,base);
    class MACRO_NEW_UNIT(arfjung,base);
    class MACRO_NEW_UNIT(arfsnow,base);
    class MACRO_NEW_UNIT(arfurb,base);
    class MACRO_NEW_UNIT(arfwood,base);

    class MACRO_NEW_UNIT(scenario,base);


    //Recruit
    MACRO_NEW_RECRUIT_UNIT(332nd_recruit,Clone Recruit,332nd_recruit)

    //Infantry
    MACRO_NEW_INF_UNIT(332nd_cadet,Clone Cadet,332nd_cadet,cadet\Cadet_Upper.paa,cadet\Cadet_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_trooper,Clone Trooper,332nd_trooper,trooper\Trooper_Upper.paa,trooper\Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_senior_trooper,Clone Senior Trooper,332nd_senior_trooper,senior_trooper\Senior_Trooper_Upper.paa,senior_trooper\Senior_Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_veteran_trooper,Clone Veteran Trooper,332nd_veteran_trooper,veteran_trooper\Veteran_Trooper_Upper.paa,veteran_trooper\Veteran_Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_specialist,Clone Specialist,332nd_specialist,specialist_four\csp4_Upper.paa,specialist_four\csp4_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_corporal,Clone Corporal,332nd_corporal,corporal\Corporal_Upper.paa,corporal\Corporal_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_sergeant,Clone Sergeant,332nd_sergeant,sergeant\Sergeant_Upper.paa,sergeant\Sergeant_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_officer,Clone Officer,332nd_officer,officer\Officer_Upper.paa,officer\Officer_Lower.paa)
    MACRO_NEW_INF_UNIT(332nd_original,Clone Original Armor,332nd_original,trooper\332nd_Original_Upper_Armor.paa,trooper\332nd_Original_Lower_Armor.paa)
    MACRO_NEW_INF_UNIT(332nd_deserter,Clone Deserter,332nd_deserter,clone_deserter\332nd_Rebal_Armor_upper_ca.paa,clone_deserter\332nd_Rebal_lower_ca.paa)

    //RTO
    MACRO_NEW_RTO_UNIT(332nd_rto_cadet,RTO Cadet,332nd_rto_cadet,cadet\rto_cadet_upper.paa,cadet\rto_cadet_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_trooper,RTO Trooper,332nd_rto_trooper,trooper\rto_trooper_upper.paa,trooper\rto_trooper_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_senior_trooper,RTO Senior Trooper,332nd_rto_senior_trooper,senior_trooper\rto_senior_trooper_upper.paa,senior_trooper\rto_senior_trooper_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_specialist,RTO Specialist,332nd_rto_specialist,specialist_four\rto_csp4_upper.paa,specialist_four\rto_csp4_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_veteran_trooper,RTO Veteran Trooper,332nd_rto_veteran_trooper,veteran_trooper\rto_veteran_trooper_upper.paa,veteran_trooper\rto_veteran_trooper_lower.paa)
    MACRO_NEW_RTO_UNIT(332nd_rto_corporal,RTO Corporal,332nd_rto_corporal,corporal\rto_corporal_upper.paa,corporal\rto_corporal_lower.paa)


    //Medic
    MACRO_NEW_MEDIC_UNIT(332nd_medic_cadet,Medic Cadet,332nd_medic_cadet,cadet\Cadet_Medic_Upper.paa,cadet\Cadet_Medic_Lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_trooper,Medic Trooper,332nd_medic_trooper,trooper\medic_trooper_upper.paa,trooper\medic_trooper_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_senior_trooper,Medic Senior Trooper,332nd_medic_senior_trooper,senior_trooper\medic_senior_trooper_upper.paa,senior_trooper\medic_senior_trooper_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_veteran_trooper,Medic Veteran Trooper,332nd_medic_veteran_trooper,veteran_trooper\medic_veteran_trooper_upper.paa,veteran_trooper\medic_veteran_trooper_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_specialist,Medic Specialist,332nd_medic_specialist,specialist_four\medic_csp4_upper.paa,specialist_four\medic_csp4_lower.paa)
    MACRO_NEW_MEDIC_UNIT(332nd_medic_corporal,Medic Corporal,332nd_medic_corporal,corporal\medic_corporal_upper.paa,corporal\medic_corporal_lower.paa)

    //Warrant Officer
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer,CWO,332nd_warrant_officer,warrant_officer\cwo_top.paa,warrant_officer\cwo_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_1,CWO 1,332nd_warrant_officer_1,warrant_officer_1\cwo1_top.paa,warrant_officer_1\cwo1_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_2,CWO 2,332nd_warrant_officer_2,warrant_officer_2\cwo2_top.paa,warrant_officer_2\cwo2_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_3,CWO 3,332nd_warrant_officer_3,warrant_officer_3\cwo3_top.paa,warrant_officer_3\cwo3_bottom.paa)
    MACRO_NEW_CWO_UNIT(332nd_warrant_officer_4,CWO 4,332nd_warrant_officer_4,warrant_officer_4\cwo4_top.paa,warrant_officer_4\cwo4_bottom.paa)

    //Mechanized
    MACRO_NEW_MECHANIZED_UNIT(332nd_mechanized_trooper,Trooper,332nd_mechanized_trooper,trooper\Mechanizedupper_ca.paa,trooper\Mechanizedlower_ca.paa)

    //Aviation
    MACRO_NEW_AVI_UNIT(332nd_flight_cadet,Flight Cadet,332nd_flight_cadet,flight_cadet\cadet_upper.paa,flight_cadet\cadet_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_ensign,Flight Ensign,332nd_flight_ensign,ensign\ensign_upper.paa,ensign\ensign_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_senior_ensign,Flight Senior Ensign,332nd_flight_senior_ensign,snr_ensign\senior_ensign_upper.paa,snr_ensign\senior_ensign_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_technician,Flight Technician,332nd_flight_technician,technician\technician_upper.paa,technician\technician_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_officer,Flight Officer,332nd_flight_officer,flight_officer\flight_officer_upper.paa,flight_officer\flight_officer_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_jr_lieutenant,Flight Jr Lieutenant,332nd_flight_jr_lieutenant,jr_lieutenant\jr_lieutenant_upper.paa,jr_lieutenant\jr_lieutenant_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_lieutenant,Flight Lieutenant,332nd_flight_lieutenant,lieutenant\lieutenant_upper.paa,lieutenant\lieutenant_lower.paa)
    MACRO_NEW_AVI_UNIT(332nd_flight_captain,Flight Captain,332nd_flight_captain,captain\captain_upper.paa,captain\captain_lower.paa)

    //ARF Base
    MACRO_NEW_ARF_BASE_UNIT(332nd_arfbase_trooper,Recon Base Trooper,332nd_arfbase_trooper,Trooper\arf_trooper_upper_ca.paa,Trooper\arf_trooper_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon)
    MACRO_NEW_ARF_BASE_UNIT(332nd_arfbase_senior,Recon Base Senior Trooper,332nd_arfbase_senior,Senior_Trooper\arf_snrtrooper_upper_ca.paa,Senior_Trooper\arf_snrtrooper_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon)
    MACRO_NEW_ARF_BASE_UNIT(332nd_arfbase_veteran,Recon Base Veteran Trooper,332nd_arfbase_veteran,Veteran_Trooper\arf_vettrooper_upper_ca.paa,Veteran_Trooper\arf_vettrooper_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran)
    MACRO_NEW_ARF_BASE_UNIT(332nd_arfbase_corp,Recon Base Corporal,332nd_arfbase_corp,Corporal\arf_corporal_upper_ca.paa,Corporal\arf_corporal_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran)
    MACRO_NEW_ARF_BASE_UNIT(332nd_arfbase_serg,Recon Base Sergeant,332nd_arfbase_serg,Sergeant\arf_sergeant_upper_ca.paa,Sergeant\arf_sergeant_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran)

    //ARF Desert
    MACRO_NEW_ARF_DESERT_UNIT(332nd_arfdes_trooper,Recon Desert Trooper,332nd_arfdes_trooper,Trooper\arf_trooper_desert_upper_ca.paa,Trooper\arf_trooper_desert_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_desert)
    MACRO_NEW_ARF_DESERT_UNIT(332nd_arfdes_senior,Recon Desert Senior Trooper,332nd_arfdes_senior,Senior_Trooper\arf_snrtrooper_desert_upper_ca.paa,Senior_Trooper\arf_snrtrooper_desert_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_desert)
    MACRO_NEW_ARF_DESERT_UNIT(332nd_arfdes_veteran,Recon Desert Veteran Trooper,332nd_arfdes_veteran,Veteran_Trooper\arf_vettrooper_desert_upper_ca.paa,Veteran_Trooper\arf_vettrooper_desert_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_desert)
    MACRO_NEW_ARF_DESERT_UNIT(332nd_arfdes_corp,Recon Desert Corporal,332nd_arfdes_corp,Corporal\arf_corporal_desert_upper_ca.paa,Corporal\arf_corporal_desert_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_desert)
    MACRO_NEW_ARF_DESERT_UNIT(332nd_arfdes_serg,Recon Desert Sergeant,332nd_arfdes_serg,Sergeant\arf_sergeant_desert_upper_ca.paa,Sergeant\arf_sergeant_desert_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_desert)

    //ARF Jungle
    MACRO_NEW_ARF_JUNGLE_UNIT(332nd_arfjung_trooper,Recon Jungle Trooper,332nd_arfjung_trooper,Trooper\arf_trooper_jungle_upper_ca.paa,Trooper\arf_trooper_jungle_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_jungle)
    MACRO_NEW_ARF_JUNGLE_UNIT(332nd_arfjung_senior,Recon Jungle Senior Trooper,332nd_arfjung_senior,Senior_Trooper\arf_snrtrooper_jungle_upper_ca.paa,Senior_Trooper\arf_snrtrooper_jungle_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_jungle)
    MACRO_NEW_ARF_JUNGLE_UNIT(332nd_arfjung_veteran,Recon Jungle Veteran Trooper,332nd_arfjung_veteran,Veteran_Trooper\arf_vettrooper_jungle_upper_ca.paa,Veteran_Trooper\arf_vettrooper_jungle_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_jungle)
    MACRO_NEW_ARF_JUNGLE_UNIT(332nd_arfjung_corp,Recon Jungle Corporal,332nd_arfjung_corp,Corporal\arf_corporal_jungle_upper_ca.paa,Corporal\arf_corporal_jungle_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_jungle)
    MACRO_NEW_ARF_JUNGLE_UNIT(332nd_arfjung_serg,Recon Jungle Sergeant,332nd_arfjung_serg,Sergeant\arf_sergeant_jungle_upper_ca.paa,Sergeant\arf_sergeant_jungle_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_jungle)

    //ARF Snow
    MACRO_NEW_ARF_SNOW_UNIT(332nd_arfsnow_trooper,Recon Snow Trooper,332nd_arfsnow_trooper,Trooper\arf_trooper_snow_upper_ca.paa,Trooper\arf_trooper_snow_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_snow)
    MACRO_NEW_ARF_SNOW_UNIT(332nd_arfsnow_senior,Recon Snow Senior Trooper,332nd_arfsnow_senior,Senior_Trooper\arf_snrtrooper_snow_upper_ca.paa,Senior_Trooper\arf_snrtrooper_snow_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_snow)
    MACRO_NEW_ARF_SNOW_UNIT(332nd_arfsnow_veteran,Recon Snow Veteran Trooper,332nd_arfsnow_veteran,Veteran_Trooper\arf_vettrooper_snow_upper_ca.paa,Veteran_Trooper\arf_vettrooper_snow_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_snow)
    MACRO_NEW_ARF_SNOW_UNIT(332nd_arfsnow_corp,Recon Snow Corporal,332nd_arfsnow_corp,Corporal\arf_corporal_snow_upper_ca.paa,Corporal\arf_corporal_snow_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_snow)
    MACRO_NEW_ARF_SNOW_UNIT(332nd_arfsnow_serg,Recon Snow Sergeant,332nd_arfsnow_serg,Sergeant\arf_sergeant_snow_upper_ca.paa,Sergeant\arf_sergeant_snow_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_snow)

    //ARF Urban
    MACRO_NEW_ARF_URBAN_UNIT(332nd_arfurb_trooper,Recon Urban/Night-Ops Trooper,332nd_arfurb_trooper,Trooper\arf_trooper_urban_upper_ca.paa,Trooper\arf_trooper_urban_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_urban)
    MACRO_NEW_ARF_URBAN_UNIT(332nd_arfurb_senior,Recon Urban/Night-Ops Senior Trooper,332nd_arfurb_senior,Senior_Trooper\arf_snrtrooper_urban_upper_ca.paa,Senior_Trooper\arf_snrtrooper_urban_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_urban)
    MACRO_NEW_ARF_URBAN_UNIT(332nd_arfurb_veteran,Recon Urban/Night-Ops Veteran Trooper,332nd_arfurb_veteran,Veteran_Trooper\arf_vettrooper_urban_upper_ca.paa,Veteran_Trooper\arf_vettrooper_urban_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_urban)
    MACRO_NEW_ARF_URBAN_UNIT(332nd_arfurb_corp,Recon Urban/Night-Ops Corporal,332nd_arfurb_corp,Corporal\arf_corporal_urban_upper_ca.paa,Corporal\arf_corporal_urban_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_urban)
    MACRO_NEW_ARF_URBAN_UNIT(332nd_arfurb_serg,Recon Urban/Night-Ops Sergeant,332nd_arfurb_serg,Sergeant\arf_sergeant_urban_upper_ca.paa,Sergeant\arf_sergeant_urban_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_urban)

    //ARF Woodland
    MACRO_NEW_ARF_WOODLAND_UNIT(332nd_arfwood_trooper,Recon Woodland Trooper,332nd_arfwood_trooper,Trooper\arf_trooper_woodland_upper_ca.paa,Trooper\arf_trooper_woodland_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_woodland)
    MACRO_NEW_ARF_WOODLAND_UNIT(332nd_arfwood_senior,Recon Woodland Senior Trooper,332nd_arfwood_senior,Senior_Trooper\arf_snrtrooper_woodland_upper_ca.paa,Senior_Trooper\arf_snrtrooper_woodland_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_woodland)
    MACRO_NEW_ARF_WOODLAND_UNIT(332nd_arfwood_veteran,Recon Woodland Veteran Trooper,332nd_arfwood_veteran,Veteran_Trooper\arf_vettrooper_woodland_upper_ca.paa,Veteran_Trooper\arf_vettrooper_woodland_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_woodland)
    MACRO_NEW_ARF_WOODLAND_UNIT(332nd_arfwood_corp,Recon Woodland Corporal,332nd_arfwood_corp,Corporal\arf_corporal_woodland_upper_ca.paa,Corporal\arf_corporal_woodland_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_woodland)
    MACRO_NEW_ARF_WOODLAND_UNIT(332nd_arfwood_serg,Recon Woodland Sergeant,332nd_arfwood_serg,Sergeant\arf_sergeant_woodland_upper_ca.paa,Sergeant\arf_sergeant_woodland_lower_ca.paa,332nd_aux_arf_helmet_332nd_recon_veteran_woodland)

    //Scenario Armors
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_104th,Clone (104th),332nd_scenario_104th,\MRC\JLTS\characters\CloneLegions\data\Clone_104thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_104thTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_104th)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_187th,Clone (187th),332nd_scenario_187th,\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_187th)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_212th,Clone (212th),332nd_scenario_212th,\MRC\JLTS\characters\CloneLegions\data\Clone_212thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_212thTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_212th)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_327th,Clone (327th),332nd_scenario_327th,\MRC\JLTS\characters\CloneLegions\data\Clone_327thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_327thTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_327th)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_41st,Clone (41st),332nd_scenario_41st,\MRC\JLTS\characters\CloneLegions\data\Clone_41stTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_41stTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_327th)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_442nd,Clone (442nd),332nd_scenario_442nd,\MRC\JLTS\characters\CloneLegions\data\Clone_442ndTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_442ndTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_442nd)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_501st,Clone (501st),332nd_scenario_501st,\MRC\JLTS\characters\CloneLegions\data\Clone_501stTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_501stTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_501st)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_5th,Clone (5th),332nd_scenario_5th,\MRC\JLTS\characters\CloneLegions\data\Clone_5thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_5thTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_5th)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_91st,Clone (91st),332nd_scenario_91st,\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_91st)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_CG,Clone (CG),332nd_scenario_CG,\MRC\JLTS\characters\CloneLegions\data\Clone_CGTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_CGTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_CG)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_DC,Clone (DC),332nd_scenario_DC,\MRC\JLTS\characters\CloneLegions\data\Clone_DCTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_DCTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_DC)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_HC,Clone (HC),332nd_scenario_HC,\MRC\JLTS\characters\CloneLegions\data\Clone_HCTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_HCTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_HC)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_KC,Clone (KC),332nd_scenario_KC,\MRC\JLTS\characters\CloneLegions\data\Clone_KCTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_KCTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_KC)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_KS,Clone (KS),332nd_scenario_KS,\MRC\JLTS\characters\CloneLegions\data\Clone_KSTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_KSTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_KS)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_OS,Clone (OS),332nd_scenario_OS,\MRC\JLTS\characters\CloneArmor\data\Clone_eod_armor1_co.paa,\MRC\JLTS\characters\CloneArmor\data\Clone_eod_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_OS)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_Purge,Clone (Purge),332nd_scenario_Purge,\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_Purge)
    MACRO_NEW_SCENARIO_UNIT(332nd_scenario_Shadow,Clone (Shadow),332nd_scenario_Shadow,\MRC\JLTS\characters\CloneLegions\data\Clone_ShadowTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_ShadowTrooper_armor2_co.paa,332nd_aux_scenario_helmet_332nd_scenario_Shadow)
};