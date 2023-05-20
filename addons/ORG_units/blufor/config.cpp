#include "../../ORG_main/macros/main.hpp"

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

            MACRO_NEW_UNIT(infantry,recruit),
            MACRO_NEW_UNIT(infantry,trooper),
            MACRO_NEW_UNIT(infantry,veteran),
            MACRO_NEW_UNIT(infantry,specialist),
            MACRO_NEW_UNIT(infantry,nco),
            //MACRO_NEW_UNIT(infantry,officer),

            //MACRO_NEW_UNIT(airborne,trooper),
            //MACRO_NEW_UNIT(airborne,senior_trooper),
            //MACRO_NEW_UNIT(airborne,veteran_trooper),
            //MACRO_NEW_UNIT(airborne,specialist),
            //MACRO_NEW_UNIT(airborne,corporal),
            //MACRO_NEW_UNIT(airborne,sergeant),

            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer),
            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer_1),
            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer_2),
            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer_3),
            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer_4),
            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer_5),
            //MACRO_NEW_UNIT(cwo,ORG_warrant_officer_6),

            //MACRO_NEW_UNIT(aviation,ORG_flight_cadet),
            //MACRO_NEW_UNIT(aviation,ORG_flight_ensign),
            //MACRO_NEW_UNIT(aviation,ORG_flight_senior_ensign),
            //MACRO_NEW_UNIT(aviation,ORG_flight_technician),
            //MACRO_NEW_UNIT(aviation,ORG_flight_officer),
            //MACRO_NEW_UNIT(aviation,ORG_flight_jr_lieutenant),
            //MACRO_NEW_UNIT(aviation,ORG_flight_captain),

            //MACRO_NEW_UNIT(mech,ORG_mechanized_trooper),
            //MACRO_NEW_UNIT(mech,ORG_mechanized_senior),
            //MACRO_NEW_UNIT(mech,ORG_mechanized_vet),
            //MACRO_NEW_UNIT(mech,ORG_mechanized_spec),
            //MACRO_NEW_UNIT(mech,ORG_mechanized_corp),
            //MACRO_NEW_UNIT(mech,ORG_mechanized_serg),

            //MACRO_NEW_UNIT(arfbase,ORG_arfbase_trooper),
            //MACRO_NEW_UNIT(arfbase,ORG_arfbase_senior),
            //MACRO_NEW_UNIT(arfbase,ORG_arfbase_veteran),
            //MACRO_NEW_UNIT(arfbase,ORG_arfbase_spec),
            //MACRO_NEW_UNIT(arfbase,ORG_arfbase_corp),
            //MACRO_NEW_UNIT(arfbase,ORG_arfbase_serg),

            //MACRO_NEW_UNIT(arfdes,ORG_arfdes_trooper),
            //MACRO_NEW_UNIT(arfdes,ORG_arfdes_senior),
            //MACRO_NEW_UNIT(arfdes,ORG_arfdes_veteran),
            //MACRO_NEW_UNIT(arfdes,ORG_arfdes_spec),
            //MACRO_NEW_UNIT(arfdes,ORG_arfdes_corp),
            //MACRO_NEW_UNIT(arfdes,ORG_arfdes_serg),

            //MACRO_NEW_UNIT(arfjung,ORG_arfjung_trooper),
            //MACRO_NEW_UNIT(arfjung,ORG_arfjung_senior),
            //MACRO_NEW_UNIT(arfjung,ORG_arfjung_veteran),
            //MACRO_NEW_UNIT(arfjung,ORG_arfjung_spec),
            //MACRO_NEW_UNIT(arfjung,ORG_arfjung_corp),
            //MACRO_NEW_UNIT(arfjung,ORG_arfjung_serg),

            //MACRO_NEW_UNIT(arfsnow,ORG_arfsnow_trooper),
            //MACRO_NEW_UNIT(arfsnow,ORG_arfsnow_senior),
            //MACRO_NEW_UNIT(arfsnow,ORG_arfsnow_veteran),
            //MACRO_NEW_UNIT(arfsnow,ORG_arfsnow_spec),
            //MACRO_NEW_UNIT(arfsnow,ORG_arfsnow_corp),
            //MACRO_NEW_UNIT(arfsnow,ORG_arfsnow_serg),

            //MACRO_NEW_UNIT(arfurb,ORG_arfurb_trooper),
            //MACRO_NEW_UNIT(arfurb,ORG_arfurb_senior),
            //MACRO_NEW_UNIT(arfurb,ORG_arfurb_veteran),
            //MACRO_NEW_UNIT(arfurb,ORG_arfurb_spec),
            //MACRO_NEW_UNIT(arfurb,ORG_arfurb_corp),
            //MACRO_NEW_UNIT(arfurb,ORG_arfurb_serg),

            //MACRO_NEW_UNIT(arfwood,ORG_arfwood_trooper),
            //MACRO_NEW_UNIT(arfwood,ORG_arfwood_senior),
            //MACRO_NEW_UNIT(arfwood,ORG_arfwood_veteran),
            //MACRO_NEW_UNIT(arfwood,ORG_arfwood_spec),
            //MACRO_NEW_UNIT(arfwood,ORG_arfwood_corp),
            //MACRO_NEW_UNIT(arfwood,ORG_arfwood_serg),

            MACRO_NEW_UNIT(scenario,scenario_104th),
            MACRO_NEW_UNIT(scenario,scenario_187th),
            MACRO_NEW_UNIT(scenario,scenario_212th),
            MACRO_NEW_UNIT(scenario,scenario_327th),
            MACRO_NEW_UNIT(scenario,scenario_41st),
            MACRO_NEW_UNIT(scenario,scenario_442nd),
            MACRO_NEW_UNIT(scenario,scenario_501st),
            MACRO_NEW_UNIT(scenario,scenario_5th),
            MACRO_NEW_UNIT(scenario,scenario_91st),
            MACRO_NEW_UNIT(scenario,scenario_CG),
            MACRO_NEW_UNIT(scenario,scenario_DC),
            MACRO_NEW_UNIT(scenario,scenario_HC),
            MACRO_NEW_UNIT(scenario,scenario_KC),
            MACRO_NEW_UNIT(scenario,scenario_OS),
            MACRO_NEW_UNIT(scenario,scenario_Purge),
            MACRO_NEW_UNIT(scenario,scenario_Shadow),

            //MACRO_NEW_UNIT(captain,ORG_captain),

            //MACRO_NEW_UNIT(assault,ORG_assault_Vet_trooper),
            //MACRO_NEW_UNIT(assault,ORG_assault_trooper),
            //MACRO_NEW_UNIT(assault,ORG_assault_senior),
            //MACRO_NEW_UNIT(assault,ORG_assault_spec),
            //MACRO_NEW_UNIT(assault,ORG_assault_corporal),
            //MACRO_NEW_UNIT(assault,ORG_assault_sergeant),


            //Custom ------------------------

		};
		weapons[] = {

            MACRO_NEW_UNIFORM(infantry,recruit),
            MACRO_NEW_UNIFORM(infantry,trooper),
            MACRO_NEW_UNIFORM(infantry,veteran),
            MACRO_NEW_UNIFORM(infantry,specialist),
            MACRO_NEW_UNIFORM(infantry,nco),
            //MACRO_NEW_UNIFORM(infantry,officer),

            //MACRO_NEW_UNIFORM(airborne,trooper),
            //MACRO_NEW_UNIFORM(airborne,senior_trooper),
            //MACRO_NEW_UNIFORM(airborne,veteran_trooper),
            //MACRO_NEW_UNIFORM(airborne,specialist),
            //MACRO_NEW_UNIFORM(airborne,corporal),
            //MACRO_NEW_UNIFORM(airborne,sergeant),

            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer),
            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer_1),
            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer_2),
            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer_3),
            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer_4),
            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer_5),
            //MACRO_NEW_UNIFORM(cwo,ORG_warrant_officer_6),

            //MACRO_NEW_UNIFORM(aviation,ORG_flight_cadet),
            //MACRO_NEW_UNIFORM(aviation,ORG_flight_ensign),
            //MACRO_NEW_UNIFORM(aviation,ORG_flight_senior_ensign),
            //MACRO_NEW_UNIFORM(aviation,ORG_flight_technician),
            //MACRO_NEW_UNIFORM(aviation,ORG_flight_officer),
            //MACRO_NEW_UNIFORM(aviation,ORG_flight_jr_lieutenant),
            //MACRO_NEW_UNIFORM(aviation,ORG_flight_captain),

            //MACRO_NEW_UNIFORM(mech,ORG_mechanized_trooper),
            //MACRO_NEW_UNIFORM(mech,ORG_mechanized_senior),
            //MACRO_NEW_UNIFORM(mech,ORG_mechanized_vet),
            //MACRO_NEW_UNIFORM(mech,ORG_mechanized_spec),
            //MACRO_NEW_UNIFORM(mech,ORG_mechanized_corp),
            //MACRO_NEW_UNIFORM(mech,ORG_mechanized_serg),

            //MACRO_NEW_UNIFORM(arfbase,ORG_arfbase_trooper),
            //MACRO_NEW_UNIFORM(arfbase,ORG_arfbase_senior),
            //MACRO_NEW_UNIFORM(arfbase,ORG_arfbase_veteran),
            //MACRO_NEW_UNIFORM(arfbase,ORG_arfbase_spec),
            //MACRO_NEW_UNIFORM(arfbase,ORG_arfbase_corp),
            //MACRO_NEW_UNIFORM(arfbase,ORG_arfbase_serg),

            //MACRO_NEW_UNIFORM(arfdes,ORG_arfdes_trooper),
            //MACRO_NEW_UNIFORM(arfdes,ORG_arfdes_senior),
            //MACRO_NEW_UNIFORM(arfdes,ORG_arfdes_veteran),
            //MACRO_NEW_UNIFORM(arfdes,ORG_arfdes_spec),
            //MACRO_NEW_UNIFORM(arfdes,ORG_arfdes_corp),
            //MACRO_NEW_UNIFORM(arfdes,ORG_arfdes_serg),

            //MACRO_NEW_UNIFORM(arfjung,ORG_arfjung_trooper),
            //MACRO_NEW_UNIFORM(arfjung,ORG_arfjung_senior),
            //MACRO_NEW_UNIFORM(arfjung,ORG_arfjung_veteran),
            //MACRO_NEW_UNIFORM(arfjung,ORG_arfjung_spec),
            //MACRO_NEW_UNIFORM(arfjung,ORG_arfjung_corp),
            //MACRO_NEW_UNIFORM(arfjung,ORG_arfjung_serg),

            //MACRO_NEW_UNIFORM(arfsnow,ORG_arfsnow_trooper),
            //MACRO_NEW_UNIFORM(arfsnow,ORG_arfsnow_senior),
            //MACRO_NEW_UNIFORM(arfsnow,ORG_arfsnow_veteran),
            //MACRO_NEW_UNIFORM(arfsnow,ORG_arfsnow_spec),
            //MACRO_NEW_UNIFORM(arfsnow,ORG_arfsnow_corp),
            //MACRO_NEW_UNIFORM(arfsnow,ORG_arfsnow_serg),

            //MACRO_NEW_UNIFORM(arfurb,ORG_arfurb_trooper),
            //MACRO_NEW_UNIFORM(arfurb,ORG_arfurb_senior),
            //MACRO_NEW_UNIFORM(arfurb,ORG_arfurb_veteran),
            //MACRO_NEW_UNIFORM(arfurb,ORG_arfurb_spec),
            //MACRO_NEW_UNIFORM(arfurb,ORG_arfurb_corp),
            //MACRO_NEW_UNIFORM(arfurb,ORG_arfurb_serg),

            //MACRO_NEW_UNIFORM(arfwood,ORG_arfwood_trooper),
            //MACRO_NEW_UNIFORM(arfwood,ORG_arfwood_senior),
            //MACRO_NEW_UNIFORM(arfwood,ORG_arfwood_veteran),
            //MACRO_NEW_UNIFORM(arfwood,ORG_arfwood_spec),
            //MACRO_NEW_UNIFORM(arfwood,ORG_arfwood_corp),
            //MACRO_NEW_UNIFORM(arfwood,ORG_arfwood_serg),

            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_104th),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_187th),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_212th),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_327th),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_41st),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_442nd),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_501st),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_5th),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_91st),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_CG),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_DC),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_HC),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_KC),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_OS),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_Purge),
            //MACRO_NEW_UNIFORM(scenario,ORG_scenario_Shadow),

            //MACRO_NEW_UNIFORM(captain,ORG_captain),

            //MACRO_NEW_UNIFORM(assault,ORG_assault_Vet_trooper),
            //MACRO_NEW_UNIFORM(assault,ORG_assault_trooper),
            //MACRO_NEW_UNIFORM(assault,ORG_assault_senior),
            //MACRO_NEW_UNIFORM(assault,ORG_assault_spec),
            //MACRO_NEW_UNIFORM(assault,ORG_assault_corporal),
            //MACRO_NEW_UNIFORM(assault,ORG_assault_sergeant),


            //Custom ------------------------

            // ----- nvgs -----
			 MACRO_NEW_NVG(Trooper_NVG),
			 

            // ---- bino -----
            MACRO_NEW_BINO(basic),
		};
	};
};

class CfgWeapons
{
    class ls_gar_phase2_uniform;
    class JLTS_CloneArmorMC;
    class 3as_U_rep_katarn_armor;

    class MACRO_NEW_UNIFORM(recruit,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(infantry,base): ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(airborne,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(aviation,base): ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(cwo,base): ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfbase,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfdes,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfjung,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfsnow,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfurb,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(arfwood,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(mech,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(scenario,base) : ls_gar_phase2_uniform
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(captain,base) : JLTS_CloneArmorMC
    {
        class ItemInfo;
    };

    class MACRO_NEW_UNIFORM(assault,base) : 3as_U_rep_katarn_armor
    {
        class ItemInfo;
    };



    //Infantry
    MACRO_NEW_INF_UNIFORM_ITEM(recruit,Recruit,recruit)
    MACRO_NEW_INF_UNIFORM_ITEM(trooper,Trooper,trooper)
    MACRO_NEW_INF_UNIFORM_ITEM(veteran,Veteran,veteran)
    MACRO_NEW_INF_UNIFORM_ITEM(specialist,Specialist,specialist)
    MACRO_NEW_INF_UNIFORM_ITEM(nco,NCO,nco)
    //MACRO_NEW_INF_UNIFORM_ITEM(officer,Officer,officer)

    ////Airborne
    //MACRO_NEW_AIRBORNE_UNIFORM_ITEM(trooper,Trooper,trooper)
    //MACRO_NEW_AIRBORNE_UNIFORM_ITEM(senior_trooper,Senior,senior_trooper)
    //MACRO_NEW_AIRBORNE_UNIFORM_ITEM(veteran_trooper,Veteran,veteran_trooper)
    //MACRO_NEW_AIRBORNE_UNIFORM_ITEM(specialist,Specialist,specialist)
    //MACRO_NEW_AIRBORNE_UNIFORM_ITEM(corporal,Corporal,corporal)
    //MACRO_NEW_AIRBORNE_UNIFORM_ITEM(sergeant,Sergeant,sergeant)

    ////Warrant Officer
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer,CW,ORG_warrant_officer)
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer_1,CW-E,ORG_warrant_officer_1)
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer_2,CW-V,ORG_warrant_officer_2)
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer_3,CW-T,ORG_warrant_officer_3)
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer_4,CW-P,ORG_warrant_officer_4)
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer_5,CW-S,ORG_warrant_officer_5)
    //MACRO_NEW_CWO_UNIFORM_ITEM(ORG_warrant_officer_6,CW Officer,ORG_warrant_officer_6)

    ////Aviation
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_cadet,Flight Ensign,ORG_flight_cadet)
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_ensign,Flight Senior Ensign,ORG_flight_ensign)
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_senior_ensign,Flight Veteran Ensign,ORG_flight_senior_ensign)
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_technician,Flight Technician,ORG_flight_technician)
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_officer,Flight Lieutenant,ORG_flight_officer)
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_jr_lieutenant,Flight Major,ORG_flight_jr_lieutenant)
    //MACRO_NEW_AVI_UNIFORM_ITEM(ORG_flight_captain,Flight Officer,ORG_flight_captain)

    ////ARF Base
    //MACRO_NEW_ARF_BASE_UNIFORM_ITEM(ORG_arfbase_trooper,Trooper,ORG_arfbase_trooper)
    //MACRO_NEW_ARF_BASE_UNIFORM_ITEM(ORG_arfbase_senior,Senior,ORG_arfbase_senior)
    //MACRO_NEW_ARF_BASE_UNIFORM_ITEM(ORG_arfbase_veteran,Veteran,ORG_arfbase_veteran)
    //MACRO_NEW_ARF_BASE_UNIFORM_ITEM(ORG_arfbase_spec,Specialist,ORG_arfbase_spec)
    //MACRO_NEW_ARF_BASE_UNIFORM_ITEM(ORG_arfbase_corp,Corporal,ORG_arfbase_corp)
    //MACRO_NEW_ARF_BASE_UNIFORM_ITEM(ORG_arfbase_serg,Sergeant,ORG_arfbase_serg)

    ////ARF Desert
    //MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(ORG_arfdes_trooper,Trooper,ORG_arfdes_trooper)
    //MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(ORG_arfdes_senior,Senior,ORG_arfdes_senior)
    //MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(ORG_arfdes_veteran,Veteran,ORG_arfdes_veteran)
    //MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(ORG_arfdes_spec,Specialist,ORG_arfdes_spec)
    //MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(ORG_arfdes_corp,Corporal,ORG_arfdes_corp)
    //MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(ORG_arfdes_serg,Sergeant,ORG_arfdes_serg)

    ////ARF Jungle
    //MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(ORG_arfjung_trooper,Trooper,ORG_arfjung_trooper)
    //MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(ORG_arfjung_senior,Senior,ORG_arfjung_senior)
    //MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(ORG_arfjung_veteran,Veteran,ORG_arfjung_veteran)
    //MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(ORG_arfjung_spec,Specialist,ORG_arfjung_spec)
    //MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(ORG_arfjung_corp,Corporal,ORG_arfjung_corp)
    //MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(ORG_arfjung_serg,Sergeant,ORG_arfjung_serg)

    ////ARF Snow
    //MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(ORG_arfsnow_trooper,Trooper,ORG_arfsnow_trooper)
    //MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(ORG_arfsnow_senior,Senior,ORG_arfsnow_senior)
    //MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(ORG_arfsnow_veteran,Veteran,ORG_arfsnow_veteran)
    //MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(ORG_arfsnow_spec,Specialist,ORG_arfsnow_spec)
    //MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(ORG_arfsnow_corp,Corporal,ORG_arfsnow_corp)
    //MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(ORG_arfsnow_serg,Sergeant,ORG_arfsnow_serg)

    ////ARF Urban
    //MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(ORG_arfurb_trooper,Trooper,ORG_arfurb_trooper)
    //MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(ORG_arfurb_senior,Senior,ORG_arfurb_senior)
    //MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(ORG_arfurb_veteran,Veteran,ORG_arfurb_veteran)
    //MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(ORG_arfurb_spec,Specialist,ORG_arfurb_spec)
    //MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(ORG_arfurb_corp,Corporal,ORG_arfurb_corp)
    //MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(ORG_arfurb_serg,Sergeant,ORG_arfurb_serg)

    ////ARF Woodland
    //MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(ORG_arfwood_trooper,Trooper,ORG_arfwood_trooper)
    //MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(ORG_arfwood_senior,Senior,ORG_arfwood_senior)
    //MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(ORG_arfwood_veteran,Veteran,ORG_arfwood_veteran)
    //MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(ORG_arfwood_spec,Specialist,ORG_arfwood_spec)
    //MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(ORG_arfwood_corp,Corporal,ORG_arfwood_corp)
    //MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(ORG_arfwood_serg,Sergeant,ORG_arfwood_serg)

    ////Mechanized
    //MACRO_NEW_MECHANIZED_UNIFORM_ITEM(ORG_mechanized_trooper,Trooper,ORG_mechanized_trooper)
    //MACRO_NEW_MECHANIZED_UNIFORM_ITEM(ORG_mechanized_senior,Senior,ORG_mechanized_senior)
    //MACRO_NEW_MECHANIZED_UNIFORM_ITEM(ORG_mechanized_vet,Veteran,ORG_mechanized_vet) 
    //MACRO_NEW_MECHANIZED_UNIFORM_ITEM(ORG_mechanized_spec,Specialist,ORG_mechanized_spec) 
    //MACRO_NEW_MECHANIZED_UNIFORM_ITEM(ORG_mechanized_corp,Corporal,ORG_mechanized_corp) 
    //MACRO_NEW_MECHANIZED_UNIFORM_ITEM(ORG_mechanized_serg,Sergeant,ORG_mechanized_serg) 

    //Scenario Armor
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_104th,104th,scenario_104th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_187th,187th,scenario_187th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_212th,212th,scenario_212th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_327th,327th,scenario_327th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_41st,41st,scenario_41st)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_442nd,442nd,scenario_442nd)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_501st,501st,scenario_501st)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_5th,5th,scenario_5th)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_91st,91st,scenario_91st)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_CG,CG,scenario_CG)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_DC,DC,scenario_DC)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_HC,HC,scenario_HC)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_KC,KC,scenario_KC)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_OS,OS,scenario_OS)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_Purge,Purge,scenario_Purge)
    MACRO_NEW_SCENARIO_UNIFORM_ITEM(scenario_Shadow,Shadow,scenario_Shadow)

    ////Captain Armor
    //MACRO_NEW_CAPTAIN_UNIFORM_ITEM(ORG_captain,Captain,ORG_captain)

    ////Assault Armor
    //MACRO_NEW_ASSAULT_UNIFORM_ITEM(ORG_assault_Vet_trooper,Veteran Trooper,ORG_assault_Vet_trooper)
    //MACRO_NEW_ASSAULT_UNIFORM_ITEM(ORG_assault_trooper,Trooper,ORG_assault_trooper)
    //MACRO_NEW_ASSAULT_UNIFORM_ITEM(ORG_assault_senior,Senior Trooper,ORG_assault_senior)
    //MACRO_NEW_ASSAULT_UNIFORM_ITEM(ORG_assault_Spec,Specialist,ORG_assault_Spec)
    //MACRO_NEW_ASSAULT_UNIFORM_ITEM(ORG_assault_corporal,Corporal,ORG_assault_corporal)
    //MACRO_NEW_ASSAULT_UNIFORM_ITEM(ORG_assault_sergeant,Sergeant,ORG_assault_sergeant)


    //Custom ----------------------------------------

    #include "_nvg.hpp"
    #include "_bino.hpp"
};

class CfgVehicles
{
    class MACRO_NEW_UNIT(recruit,base);
    class MACRO_NEW_UNIT(infantry,base);
    class MACRO_NEW_UNIT(airborne,base);
    class MACRO_NEW_UNIT(aviation,base);
    class MACRO_NEW_UNIT(mech,base);
    class MACRO_NEW_UNIT(cwo,base);
    class MACRO_NEW_UNIT(captain,base);

    class MACRO_NEW_UNIT(arfbase,base);
    class MACRO_NEW_UNIT(arfdes,base);
    class MACRO_NEW_UNIT(arfjung,base);
    class MACRO_NEW_UNIT(arfsnow,base);
    class MACRO_NEW_UNIT(arfurb,base);
    class MACRO_NEW_UNIT(arfwood,base);

    class MACRO_NEW_UNIT(scenario,base);

    class MACRO_NEW_UNIT(assault,base);


    //Recruit
    MACRO_NEW_INF_UNIT(recruit,Clone Recruit,ORG_recruit,recruit\Recruit_Upper.paa,recruit\Recruit_Lower.paa)

    //Infantry
    MACRO_NEW_INF_UNIT(trooper,Clone Trooper,trooper,trooper\Trooper_Upper.paa,trooper\Trooper_Lower.paa)
    MACRO_NEW_INF_UNIT(veteran,Clone Veteran Trooper,veteran,veteran\Veteran_Upper.paa,veteran\Veteran_Lower.paa)
    MACRO_NEW_INF_UNIT(specialist,Clone Specialist,specialist,specialist\Specialist_Upper.paa,specialist\Specialist_Lower.paa)
    MACRO_NEW_INF_UNIT(nco,Clone NCO,nco,nco\Nco_Upper.paa,nco\Nco_Lower.paa)
    //MACRO_NEW_INF_UNIT(officer,Clone Officer,officer,officer\Officer_Upper.paa,officer\Officer_Lower.paa)

    ////Airborne
    //MACRO_NEW_AIRBORNE_UNIT(trooper,Clone Trooper,trooper,trooper\Trooper_Upper.paa,trooper\Trooper_Lower.paa)
    //MACRO_NEW_AIRBORNE_UNIT(senior_trooper,Clone Senior Trooper,senior_trooper,senior_trooper\Senior_Trooper_Upper.paa,senior_trooper\Senior_Trooper_Lower.paa)
    //MACRO_NEW_AIRBORNE_UNIT(veteran_trooper,Clone Veteran Trooper,veteran_trooper,veteran_trooper\Veteran_Trooper_Upper.paa,veteran_trooper\Veteran_Trooper_Lower.paa)
    //MACRO_NEW_AIRBORNE_UNIT(specialist,Clone Specialist,specialist,specialist\csp1_Upper.paa,specialist\csp1_Lower.paa)
    //MACRO_NEW_AIRBORNE_UNIT(corporal,Clone Corporal,corporal,corporal\Corporal_Upper.paa,corporal\Corporal_Lower.paa)
    //MACRO_NEW_AIRBORNE_UNIT(sergeant,Clone Sergeant,sergeant,sergeant\Sergeant_Upper.paa,sergeant\Sergeant_Lower.paa)

    ////Warrant Officer
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer,CW,ORG_warrant_officer,warrant_officer\cw_upper.paa,warrant_officer\cw_lower.paa)
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer_1,CW-E,ORG_warrant_officer_1,warrant_officer_1\cwe_upper.paa,warrant_officer_1\cwe_lower.paa)
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer_2,CW-V,ORG_warrant_officer_2,warrant_officer_2\cwv_upper.paa,warrant_officer_2\cwv_lower.paa)
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer_3,CW-T,ORG_warrant_officer_3,warrant_officer_3\cwt_upper.paa,warrant_officer_3\cwt_lower.paa)
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer_4,CW-P,ORG_warrant_officer_4,warrant_officer_4\cwp_upper.paa,warrant_officer_4\cwp_lower.paa)
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer_5,CW-S,ORG_warrant_officer_5,warrant_officer_5\cws_upper.paa,warrant_officer_5\cws_lower.paa)
    //MACRO_NEW_CWO_UNIT(ORG_warrant_officer_6,CW Officer,ORG_warrant_officer_6,warrant_officer_6\cwo_upper.paa,warrant_officer_6\cwo_lower.paa)

    ////Mechanized
    //MACRO_NEW_MECHANIZED_UNIT(ORG_mechanized_trooper,Trooper,ORG_mechanized_trooper,trooper\trooper_Upper.paa,trooper\trooper_Lower.paa)
    //MACRO_NEW_MECHANIZED_UNIT(ORG_mechanized_senior,Senior,ORG_mechanized_senior,senior\Senior_Upper.paa,senior\Senior_Lower.paa)
    //MACRO_NEW_MECHANIZED_UNIT(ORG_mechanized_vet,Veteran,ORG_mechanized_vet,veteran\vet_Upper.paa,veteran\vet_Lower.paa)
    //MACRO_NEW_MECHANIZED_UNIT(ORG_mechanized_spec,Specialist,ORG_mechanized_spec,specialist\Spec_Upper.paa,specialist\Spec_Lower.paa)
    //MACRO_NEW_MECHANIZED_UNIT(ORG_mechanized_corp,Corporal,ORG_mechanized_corp,corporal\Corporal_Upper.paa,corporal\Corporal_Lower.paa)
    //MACRO_NEW_MECHANIZED_UNIT(ORG_mechanized_serg,Sergeant,ORG_mechanized_serg,sergeant\Sergeant_Upper.paa,sergeant\Sergeant_Lower.paa)

    ////Aviation
    //MACRO_NEW_AVI_UNIT(ORG_flight_cadet,Flight Ensign,ORG_flight_cadet,flight_cadet\cadet_upper.paa,flight_cadet\cadet_lower.paa)
    //MACRO_NEW_AVI_UNIT(ORG_flight_ensign,Flight Senior Ensign,ORG_flight_ensign,ensign\ensign_upper.paa,ensign\ensign_lower.paa)
    //MACRO_NEW_AVI_UNIT(ORG_flight_senior_ensign,Flight Veteran Ensign,ORG_flight_senior_ensign,snr_ensign\senior_ensign_upper.paa,snr_ensign\senior_ensign_lower.paa)
    //MACRO_NEW_AVI_UNIT(ORG_flight_technician,Flight Technician,ORG_flight_technician,technician\technician_upper.paa,technician\technician_lower.paa)
    //MACRO_NEW_AVI_UNIT(ORG_flight_officer,Flight Lieutenant,ORG_flight_officer,flight_officer\flight_officer_upper.paa,flight_officer\flight_officer_lower.paa)
    //MACRO_NEW_AVI_UNIT(ORG_flight_jr_lieutenant,Flight Major,ORG_flight_jr_lieutenant,jr_lieutenant\jr_lieutenant_upper.paa,jr_lieutenant\jr_lieutenant_lower.paa)
    //MACRO_NEW_AVI_UNIT(ORG_flight_captain,Flight Officer,ORG_flight_captain,captain\captain_upper.paa,captain\captain_lower.paa)

    ////ARF Base
    //MACRO_NEW_ARF_BASE_UNIT(ORG_arfbase_trooper,Recon Base Trooper,ORG_arfbase_trooper,Trooper\arf_trooper_upper_ca.paa,Trooper\arf_trooper_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon)
    //MACRO_NEW_ARF_BASE_UNIT(ORG_arfbase_senior,Recon Base Senior Trooper,ORG_arfbase_senior,Senior_Trooper\arf_snrtrooper_upper_ca.paa,Senior_Trooper\arf_snrtrooper_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon)
    //MACRO_NEW_ARF_BASE_UNIT(ORG_arfbase_veteran,Recon Base Veteran Trooper,ORG_arfbase_veteran,Veteran_Trooper\arf_vettrooper_upper_ca.paa,Veteran_Trooper\arf_vettrooper_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_BASE_UNIT(ORG_arfbase_spec,Recon Base Specialist Trooper,ORG_arfbase_spec,Specialist\spec_Upper.paa,Specialist\spec_Lower.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_BASE_UNIT(ORG_arfbase_corp,Recon Base Corporal,ORG_arfbase_corp,Corporal\arf_corporal_upper_ca.paa,Corporal\arf_corporal_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_BASE_UNIT(ORG_arfbase_serg,Recon Base Sergeant,ORG_arfbase_serg,Sergeant\arf_sergeant_upper_ca.paa,Sergeant\arf_sergeant_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran)

    ////ARF Desert
    //MACRO_NEW_ARF_DESERT_UNIT(ORG_arfdes_trooper,Recon Desert Trooper,ORG_arfdes_trooper,Trooper\arf_trooper_desert_upper_ca.paa,Trooper\arf_trooper_desert_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_desert)
    //MACRO_NEW_ARF_DESERT_UNIT(ORG_arfdes_senior,Recon Desert Senior Trooper,ORG_arfdes_senior,Senior_Trooper\arf_snrtrooper_desert_upper_ca.paa,Senior_Trooper\arf_snrtrooper_desert_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_desert)
    //MACRO_NEW_ARF_DESERT_UNIT(ORG_arfdes_veteran,Recon Desert Veteran Trooper,ORG_arfdes_veteran,Veteran_Trooper\arf_vettrooper_desert_upper_ca.paa,Veteran_Trooper\arf_vettrooper_desert_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_desert)
    //MACRO_NEW_ARF_DESERT_UNIT(ORG_arfdes_spec,Recon Desert Specialist Trooper,ORG_arfdes_spec,Specialist\spec_Upper.paa,Specialist\spec_Lower.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_DESERT_UNIT(ORG_arfdes_corp,Recon Desert Corporal,ORG_arfdes_corp,Corporal\arf_corporal_desert_upper_ca.paa,Corporal\arf_corporal_desert_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_desert)
    //MACRO_NEW_ARF_DESERT_UNIT(ORG_arfdes_serg,Recon Desert Sergeant,ORG_arfdes_serg,Sergeant\arf_sergeant_desert_upper_ca.paa,Sergeant\arf_sergeant_desert_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_desert)

    ////ARF Jungle
    //MACRO_NEW_ARF_JUNGLE_UNIT(ORG_arfjung_trooper,Recon Jungle Trooper,ORG_arfjung_trooper,Trooper\arf_trooper_jungle_upper_ca.paa,Trooper\arf_trooper_jungle_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_jungle)
    //MACRO_NEW_ARF_JUNGLE_UNIT(ORG_arfjung_senior,Recon Jungle Senior Trooper,ORG_arfjung_senior,Senior_Trooper\arf_snrtrooper_jungle_upper_ca.paa,Senior_Trooper\arf_snrtrooper_jungle_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_jungle)
    //MACRO_NEW_ARF_JUNGLE_UNIT(ORG_arfjung_veteran,Recon Jungle Veteran Trooper,ORG_arfjung_veteran,Veteran_Trooper\arf_vettrooper_jungle_upper_ca.paa,Veteran_Trooper\arf_vettrooper_jungle_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_jungle)
    //MACRO_NEW_ARF_JUNGLE_UNIT(ORG_arfjung_spec,Recon Jungle Specialist Trooper,ORG_arfjung_spec,Specialist\spec_Upper.paa,Specialist\spec_Lower.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_JUNGLE_UNIT(ORG_arfjung_corp,Recon Jungle Corporal,ORG_arfjung_corp,Corporal\arf_corporal_jungle_upper_ca.paa,Corporal\arf_corporal_jungle_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_jungle)
    //MACRO_NEW_ARF_JUNGLE_UNIT(ORG_arfjung_serg,Recon Jungle Sergeant,ORG_arfjung_serg,Sergeant\arf_sergeant_jungle_upper_ca.paa,Sergeant\arf_sergeant_jungle_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_jungle)

    ////ARF Snow
    //MACRO_NEW_ARF_SNOW_UNIT(ORG_arfsnow_trooper,Recon Snow Trooper,ORG_arfsnow_trooper,Trooper\arf_trooper_snow_upper_ca.paa,Trooper\arf_trooper_snow_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_snow)
    //MACRO_NEW_ARF_SNOW_UNIT(ORG_arfsnow_senior,Recon Snow Senior Trooper,ORG_arfsnow_senior,Senior_Trooper\arf_snrtrooper_snow_upper_ca.paa,Senior_Trooper\arf_snrtrooper_snow_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_snow)
    //MACRO_NEW_ARF_SNOW_UNIT(ORG_arfsnow_veteran,Recon Snow Veteran Trooper,ORG_arfsnow_veteran,Veteran_Trooper\arf_vettrooper_snow_upper_ca.paa,Veteran_Trooper\arf_vettrooper_snow_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_snow)
    //MACRO_NEW_ARF_SNOW_UNIT(ORG_arfsnow_spec,Recon Snow Specialist Trooper,ORG_arfsnow_spec,Specialist\spec_Upper.paa,Specialist\spec_Lower.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_SNOW_UNIT(ORG_arfsnow_corp,Recon Snow Corporal,ORG_arfsnow_corp,Corporal\arf_corporal_snow_upper_ca.paa,Corporal\arf_corporal_snow_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_snow)
    //MACRO_NEW_ARF_SNOW_UNIT(ORG_arfsnow_serg,Recon Snow Sergeant,ORG_arfsnow_serg,Sergeant\arf_sergeant_snow_upper_ca.paa,Sergeant\arf_sergeant_snow_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_snow)

    ////ARF Urban
    //MACRO_NEW_ARF_URBAN_UNIT(ORG_arfurb_trooper,Recon Urban/Night-Ops Trooper,ORG_arfurb_trooper,Trooper\arf_trooper_urban_upper_ca.paa,Trooper\arf_trooper_urban_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_urban)
    //MACRO_NEW_ARF_URBAN_UNIT(ORG_arfurb_senior,Recon Urban/Night-Ops Senior Trooper,ORG_arfurb_senior,Senior_Trooper\arf_snrtrooper_urban_upper_ca.paa,Senior_Trooper\arf_snrtrooper_urban_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_urban)
    //MACRO_NEW_ARF_URBAN_UNIT(ORG_arfurb_veteran,Recon Urban/Night-Ops Veteran Trooper,ORG_arfurb_veteran,Veteran_Trooper\arf_vettrooper_urban_upper_ca.paa,Veteran_Trooper\arf_vettrooper_urban_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_urban)
    //MACRO_NEW_ARF_URBAN_UNIT(ORG_arfurb_spec,Recon Urban/Night-Ops Specialist Trooper,ORG_arfurb_spec,Specialist\spec_Upper.paa,Specialist\spec_Lower.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_URBAN_UNIT(ORG_arfurb_corp,Recon Urban/Night-Ops Corporal,ORG_arfurb_corp,Corporal\arf_corporal_urban_upper_ca.paa,Corporal\arf_corporal_urban_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_urban)
    //MACRO_NEW_ARF_URBAN_UNIT(ORG_arfurb_serg,Recon Urban/Night-Ops Sergeant,ORG_arfurb_serg,Sergeant\arf_sergeant_urban_upper_ca.paa,Sergeant\arf_sergeant_urban_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_urban)

    ////ARF Woodland
    //MACRO_NEW_ARF_WOODLAND_UNIT(ORG_arfwood_trooper,Recon Multi-cam Trooper,ORG_arfwood_trooper,Trooper\arf_trooper_woodland_upper_ca.paa,Trooper\arf_trooper_woodland_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_woodland)
    //MACRO_NEW_ARF_WOODLAND_UNIT(ORG_arfwood_senior,Recon Multi-cam Senior Trooper,ORG_arfwood_senior,Senior_Trooper\arf_snrtrooper_woodland_upper_ca.paa,Senior_Trooper\arf_snrtrooper_woodland_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_woodland)
    //MACRO_NEW_ARF_WOODLAND_UNIT(ORG_arfwood_veteran,Recon Multi-cam Veteran Trooper,ORG_arfwood_veteran,Veteran_Trooper\arf_vettrooper_woodland_upper_ca.paa,Veteran_Trooper\arf_vettrooper_woodland_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_woodland)
    //MACRO_NEW_ARF_WOODLAND_UNIT(ORG_arfwood_spec,Recon Multi-cam Specialist Trooper,ORG_arfwood_spec,Specialist\spec_Upper.paa,Specialist\spec_Lower.paa,ORG_aux_arf_helmet_ORG_recon_veteran)
    //MACRO_NEW_ARF_WOODLAND_UNIT(ORG_arfwood_corp,Recon Multi-cam Corporal,ORG_arfwood_corp,Corporal\arf_corporal_woodland_upper_ca.paa,Corporal\arf_corporal_woodland_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_woodland)
    //MACRO_NEW_ARF_WOODLAND_UNIT(ORG_arfwood_serg,Recon Multi-cam Sergeant,ORG_arfwood_serg,Sergeant\arf_sergeant_woodland_upper_ca.paa,Sergeant\arf_sergeant_woodland_lower_ca.paa,ORG_aux_arf_helmet_ORG_recon_veteran_woodland)

    //Scenario Armors
    MACRO_NEW_SCENARIO_UNIT(scenario_104th,Clone (104th),scenario_104th,\MRC\JLTS\characters\CloneLegions\data\Clone_104thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_104thTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_104th)
    MACRO_NEW_SCENARIO_UNIT(scenario_187th,Clone (187th),scenario_187th,\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_187th)
    MACRO_NEW_SCENARIO_UNIT(scenario_212th,Clone (212th),scenario_212th,\MRC\JLTS\characters\CloneLegions\data\Clone_212thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_212thTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_212th)
    MACRO_NEW_SCENARIO_UNIT(scenario_327th,Clone (327th),scenario_327th,\MRC\JLTS\characters\CloneLegions\data\Clone_327thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_327thTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_327th)
    MACRO_NEW_SCENARIO_UNIT(scenario_41st,Clone (41st),scenario_41st,\MRC\JLTS\characters\CloneLegions\data\Clone_41stTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_41stTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_327th)
    MACRO_NEW_SCENARIO_UNIT(scenario_442nd,Clone (442nd),scenario_442nd,\MRC\JLTS\characters\CloneLegions\data\Clone_442ndTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_442ndTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_442nd)
    MACRO_NEW_SCENARIO_UNIT(scenario_501st,Clone (501st),scenario_501st,\MRC\JLTS\characters\CloneLegions\data\Clone_501stTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_501stTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_501st)
    MACRO_NEW_SCENARIO_UNIT(scenario_5th,Clone (5th),scenario_5th,\MRC\JLTS\characters\CloneLegions\data\Clone_5thTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_5thTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_5th)
    MACRO_NEW_SCENARIO_UNIT(scenario_91st,Clone (91st),scenario_91st,\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_91stTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_91st)
    MACRO_NEW_SCENARIO_UNIT(scenario_CG,Clone (CG),scenario_CG,\MRC\JLTS\characters\CloneLegions\data\Clone_CGTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_CGTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_CG)
    MACRO_NEW_SCENARIO_UNIT(scenario_DC,Clone (DC),scenario_DC,\MRC\JLTS\characters\CloneLegions\data\Clone_DCTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_DCTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_DC)
    MACRO_NEW_SCENARIO_UNIT(scenario_HC,Clone (HC),scenario_HC,\MRC\JLTS\characters\CloneLegions\data\Clone_HCTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_HCTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_HC)
    MACRO_NEW_SCENARIO_UNIT(scenario_KC,Clone (KC),scenario_KC,\MRC\JLTS\characters\CloneLegions\data\Clone_KCTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_KCTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_KC)
    MACRO_NEW_SCENARIO_UNIT(scenario_KS,Clone (KS),scenario_KS,\MRC\JLTS\characters\CloneLegions\data\Clone_KSTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_KSTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_KS)
    MACRO_NEW_SCENARIO_UNIT(scenario_OS,Clone (OS),scenario_OS,\MRC\JLTS\characters\CloneArmor\data\Clone_eod_armor1_co.paa,\MRC\JLTS\characters\CloneArmor\data\Clone_eod_armor2_co.paa,ORG_aux_scenario_helmet_scenario_OS)
    MACRO_NEW_SCENARIO_UNIT(scenario_Purge,Clone (Purge),scenario_Purge,\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_Purge)
    MACRO_NEW_SCENARIO_UNIT(scenario_Shadow,Clone (Shadow),scenario_Shadow,\MRC\JLTS\characters\CloneLegions\data\Clone_ShadowTrooper_armor1_co.paa,\MRC\JLTS\characters\CloneLegions\data\Clone_ShadowTrooper_armor2_co.paa,ORG_aux_scenario_helmet_scenario_Shadow)

    ////Captain
    //MACRO_NEW_CAPTAIN_UNIT(ORG_captain,Clone Captain,ORG_captain,captain\Captain_Upper.paa,captain\Captain_Lower.paa)

    ////Assault
    //MACRO_NEW_ASSAULT_UNIT(ORG_assault_Vet_trooper,Veteran Trooper,ORG_assault_Vet_trooper,veteran_trooper\Veteran_Trooper.paa)
    //MACRO_NEW_ASSAULT_UNIT(ORG_assault_trooper,Trooper,ORG_assault_trooper,trooper\Trooper.paa)
    //MACRO_NEW_ASSAULT_UNIT(ORG_assault_senior,Senior Trooper,ORG_assault_senior,senior_trooper\Senior.paa)
    //MACRO_NEW_ASSAULT_UNIT(ORG_assault_Spec,Specialist,ORG_assault_Spec,specialist_four\Specialist.paa)
    //MACRO_NEW_ASSAULT_UNIT(ORG_assault_corporal,Corporal,ORG_assault_corporal,corporal\Corporal.paa)
    //MACRO_NEW_ASSAULT_UNIT(ORG_assault_sergeant,Sergeant,ORG_assault_sergeant,sergeant\Sergeant.paa)


    //Custom ----------------------------------------
 
};