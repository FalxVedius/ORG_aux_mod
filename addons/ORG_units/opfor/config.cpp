#include "../../ORG_main/macros/main.hpp"

class CfgPatches
{
    class MACRO_PATCH_NAME(opfor_units)
    {
        author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(units);
        requiredAddons[] =
        {
            MACRO_PATCH_NAME(units)
        };
        requiredVersion = 0.1;
        units[] = {
            MACRO_NEW_UNIT(cisb1,ORG_CIS_B1),
            MACRO_NEW_UNIT(cisb1jumppack,ORG_CIS_B1_Jumppack),
            MACRO_NEW_UNIT(cisb1breach,ORG_CIS_B1_Breacher),
            MACRO_NEW_UNIT(cisb1ar,ORG_CIS_B1_Support),
            MACRO_NEW_UNIT(cisb1at,ORG_CIS_B1_AT),
			MACRO_NEW_UNIT(cisb1aa,ORG_CIS_B1_AA),
            MACRO_NEW_UNIT(cisb1sniper,ORG_CIS_B1_Sniper),
            MACRO_NEW_UNIT(cisb1crew,ORG_CIS_B1_Crew),
            MACRO_NEW_UNIT(cisb1comm,ORG_CIS_B1_Commander),
            MACRO_NEW_UNIT(cisb1marine,ORG_CIS_B1_Marine),
            MACRO_NEW_UNIT(cisb1sec,ORG_CIS_B1_Security),
            MACRO_NEW_UNIT(cisb1pilot,ORG_CIS_B1_Pilot),

			MACRO_NEW_UNIT(cisbx,ORG_CIS_BX),
			MACRO_NEW_UNIT(cisbxcapt,ORG_CIS_BX_Captain),
			MACRO_NEW_UNIT(cisbxsec,ORG_CIS_BX_Security),
			MACRO_NEW_UNIT(cisbxdiplo,ORG_CIS_BX_Diplomat),
			MACRO_NEW_UNIT(cisbxassassin,ORG_CIS_BX_Assassin),
			MACRO_NEW_UNIT(cisbxmelee,ORG_CIS_BX_Melee),
			MACRO_NEW_UNIT(cisbxmeleerush,ORG_CIS_BX_MeleeRush),
			MACRO_NEW_UNIT(cisbxar,ORG_CIS_BX_Support),
			MACRO_NEW_UNIT(cisbxat,ORG_CIS_BX_AT),
			MACRO_NEW_UNIT(cisbxbreach,ORG_CIS_BX_BREACHER),
			MACRO_NEW_UNIT(cisbxhybridcomm,ORG_CIS_BX_Hybrid_Commander),
			MACRO_NEW_UNIT(cisbxhybrid,ORG_CIS_BX_Hybrid),

			MACRO_NEW_UNIT(cisdroideka,ORG_CIS_HEAVY_Droideka),
			MACRO_NEW_UNIT(cisdroidekamoveable,ORG_CIS_HEAVY_Droideka_Moveable),
			MACRO_NEW_UNIT(cissniperdroideka,ORG_CIS_HEAVY_Sniper_Droideka),
			MACRO_NEW_UNIT(cissniperdroidekamoveable,ORG_CIS_HEAVY_Sniper_Droideka_Moveable),
			MACRO_NEW_UNIT(cisb2,ORG_CIS_B2),
        };
        weapons[] = {
            MACRO_NEW_UNIFORM(cisb1,ORG_CIS_B1),
            MACRO_NEW_UNIFORM(cisb1jumppack,ORG_CIS_B1_Jumppack),
            MACRO_NEW_UNIFORM(cisb1crew,ORG_CIS_B1_Crew),
            MACRO_NEW_UNIFORM(cisb1comm,ORG_CIS_B1_Commander),
            MACRO_NEW_UNIFORM(cisb1marine,ORG_CIS_B1_Marine),
            MACRO_NEW_UNIFORM(cisb1sec,ORG_CIS_B1_Security),
            MACRO_NEW_UNIFORM(cisb1pilot,ORG_CIS_B1_Pilot),

			MACRO_NEW_UNIFORM(cisbx,ORG_CIS_BX),
			MACRO_NEW_UNIFORM(cisbxcapt,ORG_CIS_BX_Captain),
			MACRO_NEW_UNIFORM(cisbxsec,ORG_CIS_BX_Security),
			MACRO_NEW_UNIFORM(cisbxdiplo,ORG_CIS_BX_Diplomat),

			MACRO_NEW_UNIFORM(cisb2,ORG_CIS_B2),
        };
    };
};

class CfgWeapons
{
    class JLTS_DroidB1;
    class JLTS_DroidB1_Rocket;
    class JLTS_DroidB1_Crew;
    class JLTS_DroidB1_Commander;
    class JLTS_DroidB1_Marine;
    class JLTS_DroidB1_Security;
    class JLTS_DroidB1_Pilot;
	class lsd_cis_bxDroid_uniform;
	class lsd_cis_bxCaptainDroid_uniform;
	class lsd_cis_bxSecurityDroid_uniform;
	class lsd_cis_bxDiplomatDroid_uniform;
	class lsd_cis_b2Droid_uniform;

	//B1
    class MACRO_NEW_UNIFORM(cisb1,base) : JLTS_DroidB1
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1jumppack,base) : JLTS_DroidB1_Rocket
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1crew,base) : JLTS_DroidB1_Crew
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1comm,base) : JLTS_DroidB1_Commander
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1marine,base) : JLTS_DroidB1_Marine
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1sec,base) : JLTS_DroidB1_Security
    {
        class ItemInfo;
    };
    class MACRO_NEW_UNIFORM(cisb1pilot,base) : JLTS_DroidB1_Pilot
    {
        class ItemInfo;
    };

	//BX
	class MACRO_NEW_UNIFORM(cisbx,base) : lsd_cis_bxDroid_uniform
	{
		class ItemInfo;
	};
	class MACRO_NEW_UNIFORM(cisbxcapt,base) : lsd_cis_bxCaptainDroid_uniform
	{
		class ItemInfo;
	};
	class MACRO_NEW_UNIFORM(cisbxsec,base) : lsd_cis_bxSecurityDroid_uniform
	{
		class ItemInfo;
	};
	class MACRO_NEW_UNIFORM(cisbxdiplo,base) : lsd_cis_bxDiplomatDroid_uniform
	{
		class ItemInfo;
	};

	//B2
	class MACRO_NEW_UNIFORM(cisb2,base) : lsd_cis_b2Droid_uniform
	{
		class ItemInfo;
	};

    //CISB1
    MACRO_NEW_CISB1_UNIFORM_ITEM(ORG_CIS_B1,B1,ORG_CIS_B1)
    MACRO_NEW_CISB1JUMPPACK_UNIFORM_ITEM(ORG_CIS_B1_Jumppack,Jumppack B1,ORG_CIS_B1_Jumppack)
    MACRO_NEW_CISB1CREW_UNIFORM_ITEM(ORG_CIS_B1_Crew,Crew B1,ORG_CIS_B1_Crew)
    MACRO_NEW_CISB1COMM_UNIFORM_ITEM(ORG_CIS_B1_Commander,Commander B1,ORG_CIS_B1_Commander)
    MACRO_NEW_CISB1MARINE_UNIFORM_ITEM(ORG_CIS_B1_Marine,Marine B1,ORG_CIS_B1_Marine)
    MACRO_NEW_CISB1SEC_UNIFORM_ITEM(ORG_CIS_B1_Security,Security B1,ORG_CIS_B1_Security)
    MACRO_NEW_CISB1PILOT_UNIFORM_ITEM(ORG_CIS_B1_Pilot,Pilot B1,ORG_CIS_B1_Pilot)

	//CISBX
	MACRO_NEW_CISBX_UNIFORM_ITEM(ORG_CIS_BX,BX,ORG_CIS_BX)
	MACRO_NEW_CISBXCAPT_UNIFORM_ITEM(ORG_CIS_BX_Captain,BX Captain,ORG_CIS_BX_Captain)
	MACRO_NEW_CISBXSEC_UNIFORM_ITEM(ORG_CIS_BX_Security,BX Security,ORG_CIS_BX_Security)
	MACRO_NEW_CISBXDIPLO_UNIFORM_ITEM(ORG_CIS_BX_Diplomat,BX Diplomat,ORG_CIS_BX_Diplomat)

	//CISB2
	MACRO_NEW_CISB2_UNIFORM_ITEM(ORG_CIS_B2,B2,ORG_CIS_B2)
};

class CfgVehicles
{
    class MACRO_NEW_UNIT(cisb1,base);
    class MACRO_NEW_UNIT(cisb1jumppack,base);
    class MACRO_NEW_UNIT(cisb1breach,base);
    class MACRO_NEW_UNIT(cisb1ar,base);
    class MACRO_NEW_UNIT(cisb1at,base);
	class MACRO_NEW_UNIT(cisb1aa,base);
    class MACRO_NEW_UNIT(cisb1sniper,base);
    class MACRO_NEW_UNIT(cisb1crew,base);
    class MACRO_NEW_UNIT(cisb1comm,base);
    class MACRO_NEW_UNIT(cisb1marine,base);
    class MACRO_NEW_UNIT(cisb1sec,base);
    class MACRO_NEW_UNIT(cisb1pilot,base);

	class MACRO_NEW_UNIT(cisbx,base);
	class MACRO_NEW_UNIT(cisbxcapt,base);
	class MACRO_NEW_UNIT(cisbxsec,base);
	class MACRO_NEW_UNIT(cisbxdiplo,base);
	class MACRO_NEW_UNIT(cisbxassassin,base);
	class MACRO_NEW_UNIT(cisbxmelee,base);
	class MACRO_NEW_UNIT(cisbxmeleerush,base);
	class MACRO_NEW_UNIT(cisbxar,base);
	class MACRO_NEW_UNIT(cisbxat,base);
	class MACRO_NEW_UNIT(cisbxbreach,base);
	class MACRO_NEW_UNIT(cisbxhybridcomm,base);
	class MACRO_NEW_UNIT(cisbxhybrid,base);

	class MACRO_NEW_UNIT(cisdroideka,base);
	class MACRO_NEW_UNIT(cisdroidekamoveable,base);
	class MACRO_NEW_UNIT(cissniperdroideka,base);
	class MACRO_NEW_UNIT(cissniperdroidekamoveable,base);
	class MACRO_NEW_UNIT(cisb2,base);

    //B1
    MACRO_NEW_CISB1_UNIT(ORG_CIS_B1,B1 Battle Droid,ORG_CIS_B1)
    MACRO_NEW_CISB1JUMPPACK_UNIT(ORG_CIS_B1_Jumppack,B1 Jumppack Battle Droid,ORG_CIS_B1_Jumppack)
    MACRO_NEW_CISB1BREACHER_UNIT(ORG_CIS_B1_Breacher,B1 Breacher Battle Droid,ORG_CIS_B1)
    MACRO_NEW_CISB1SUPPORT_UNIT(ORG_CIS_B1_Support,B1 Support Battle Droid,ORG_CIS_B1)
    MACRO_NEW_CISB1AT_UNIT(ORG_CIS_B1_AT,B1 Anti-Tank Battle Droid,ORG_CIS_B1)
	MACRO_NEW_CISB1AA_UNIT(ORG_CIS_B1_AA,B1 Anti - Air Battle Droid,ORG_CIS_B1)
    MACRO_NEW_CISB1SNIPER_UNIT(ORG_CIS_B1_Sniper,B1 Sniper Battle Droid,ORG_CIS_B1)
    MACRO_NEW_CISB1CREW_UNIT(ORG_CIS_B1_Crew,B1 Crew Battle Droid,ORG_CIS_B1_Crew)
    MACRO_NEW_CISB1COMM_UNIT(ORG_CIS_B1_Commander,B1 Commander Battle Droid,ORG_CIS_B1_Commander)
    MACRO_NEW_CISB1MARINE_UNIT(ORG_CIS_B1_Marine,B1 Marine Battle Droid,ORG_CIS_B1_Marine)
    MACRO_NEW_CISB1SEC_UNIT(ORG_CIS_B1_Security,B1 Security Battle Droid,ORG_CIS_B1_Security)
    MACRO_NEW_CISB1PILOT_UNIT(ORG_CIS_B1_Pilot,B1 Pilot Battle Droid,ORG_CIS_B1_Pilot)

	//BX
	MACRO_NEW_CISBX_UNIT(ORG_CIS_BX,BX Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXCAPT_UNIT(ORG_CIS_BX_Captain,BX Captain Battle Droid,ORG_CIS_BX_Captain)
	MACRO_NEW_CISBXSEC_UNIT(ORG_CIS_BX_Security,BX Security Battle Droid,ORG_CIS_BX_Security)
	MACRO_NEW_CISBXDIPLO_UNIT(ORG_CIS_BX_Diplomat,BX Diplomat Battle Droid,ORG_CIS_BX_Diplomat)
	MACRO_NEW_CISBXASSASSIN_UNIT(ORG_CIS_BX_Assassin,BX Assassin Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXMELEE_UNIT(ORG_CIS_BX_Melee,BX Melee Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXMELEERUSH_UNIT(ORG_CIS_BX_MeleeRush,BX Melee Rush Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXSUPPORT_UNIT(ORG_CIS_BX_Support,BX Support Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXAT_UNIT(ORG_CIS_BX_AT,BX Anti-Tank Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXBREACH_UNIT(ORG_CIS_BX_Breacher,BX Breacher Battle Droid,ORG_CIS_BX)
	MACRO_NEW_CISBXHYBRIDCOMM_UNIT(ORG_CIS_BX_Hybrid_Commander,BX Commander Hybrid Battle Droid,ORG_CIS_BX_Captain)
	MACRO_NEW_CISBXHYBRID_UNIT(ORG_CIS_BX_Hybrid,BX Hybrid Battle Droid,ORG_CIS_BX)

	//Heavy Droids
	MACRO_NEW_CISDROIDEKA_UNIT(ORG_CIS_HEAVY_Droideka,Droideka (Static))
	MACRO_NEW_CISDROIDEKA_MOVE_UNIT(ORG_CIS_HEAVY_Droideka_Moveable,Droideka (Moveable))
	MACRO_NEW_CIS_SNIPER_DROIDEKA_UNIT(ORG_CIS_HEAVY_Sniper_Droideka,Sniper Droideka(Static))
	MACRO_NEW_CIS_SNIPER_DROIDEKA_MOVE_UNIT(ORG_CIS_HEAVY_Sniper_Droideka_Moveable,Sniper Droideka(Moveable))
	MACRO_NEW_CISB2_UNIT(ORG_CIS_B2,B2 Battle Droid,ORG_CIS_B2)
};

class CfgGroups
{
	class East
	{
		class EdCat_ORGCIS
		{
			name = "ORG CIS";
			class B1Infantry
			{
				name = "B1 - Specialized Teams";
				class CIS_ORG_B1InfCommand
				{
					name = "Command Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1comm_unit_ORG_CIS_B1_Commander";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1sec_unit_ORG_CIS_B1_Security";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1sec_unit_ORG_CIS_B1_Security";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1sec_unit_ORG_CIS_B1_Security";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_B1InfSentry
				{
					name = "Sentry Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_B1InfSnipers
				{
					name = "Sniper Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1sniper_unit_ORG_CIS_B1_Sniper";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1sniper_unit_ORG_CIS_B1_Sniper";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_B1InfPilotCrew
				{
					name = "Pilot Crew";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1pilot_unit_ORG_CIS_B1_Pilot";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_B1InfVehicleCrew
				{
					name = "Vehicle Crew";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1crew_unit_ORG_CIS_B1_Crew";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
			};

			class B1FireTeams
			{
				name = "B1 - Fire Teams";
				class CIS_ORG_B1InfRifle_Teams
				{
					name = "Rifle Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_B1InfAssault_Teams
				{
					name = "Assault Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_B1InfWeapons_Teams
				{
					name = "Weapons Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "SERGEANT";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_B1InfAA_Teams
				{
					name = "Anti-Air Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1aa_unit_ORG_CIS_B1_AA";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1aa_unit_ORG_CIS_B1_AA";
						rank = "SERGEANT";
						position[] = { 0,-1,0 };
					};
				};
			};

			class B1Squads
			{
				name = "B1 - Squads";
				class CIS_ORG_B1InfRifle_Squads
				{
					name = "Rifle Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
				class CIS_ORG_B1InfAssault_Squads
				{
					name = "Assault Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
				class CIS_ORG_B1InfWeapons_Squads
				{
					name = "Weapons Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
			};

			class B1Sections
			{
				name = "B1 - Sections";
				class CIS_ORG_B1InfRifle_Sections
				{
					name = "Rifle Section";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_B1InfAssault_Sections
				{
					name = "Assault Section";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_B1InfWeapons_Sections
				{
					name = "Weapons Section";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
			};


			class BXInfantry
			{
				name = "BX - Specialized Teams";
				class CIS_ORG_BXInfCommand
				{
					name = "Command Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbxcapt_unit_ORG_CIS_BX_Captain";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_BXInfSentry
				{
					name = "Sentry Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_BXInfSnipers
				{
					name = "Sniper Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbxassassin_unit_ORG_CIS_BX_Assassin";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxassassin_unit_ORG_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_BXInfMelee
				{
					name = "Melee Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbxmelee_unit_ORG_CIS_BX_Melee";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxmelee_unit_ORG_CIS_BX_Melee";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_BXInfMeleeRUSH
				{
					name = "Rush Melee Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbxmeleerush_unit_ORG_CIS_BX_MeleeRush";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxmeleerush_unit_ORG_CIS_BX_MeleeRush";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
				};
				class CIS_ORG_BXInfDiplomats
				{
					name = "Diplomat Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbxcapt_unit_ORG_CIS_BX_Captain";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxdiplo_unit_ORG_CIS_BX_Diplomat";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbxdiplo_unit_ORG_CIS_BX_Diplomat";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxdiplo_unit_ORG_CIS_BX_Diplomat";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_BXInfSecurity
				{
					name = "Security Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbxcapt_unit_ORG_CIS_BX_Captain";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxsec_unit_ORG_CIS_BX_Security";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbxsec_unit_ORG_CIS_BX_Security";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxsec_unit_ORG_CIS_BX_Security";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
			};

			class BXFireTeams
			{
				name = "BX - Fire Teams";
				class CIS_ORG_BXInfRifle_Teams
				{
					name = "Rifle Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_BXInfAssault_Teams
				{
					name = "Assault Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
				};
				class CIS_ORG_BXInfWeapons_Teams
				{
					name = "Weapons Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "SERGEANT";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "SERGEANT";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "SERGEANT";
						position[] = { 0,-1,0 };
					};
				};
			};

			class BXSquads
			{
				name = "BX - Squads";
				class CIS_ORG_BXInfRifle_Squads
				{
					name = "Rifle Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
				class CIS_ORG_BXInfAssault_Squads
				{
					name = "Assault Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
				class CIS_ORG_BXInfWeapons_Squads
				{
					name = "Weapons Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
				};
			};

			class BXSections
			{
				name = "BX - Sections";
				class CIS_ORG_BXInfRifle_Sections
				{
					name = "Rifle Section";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_BXInfAssault_Sections
				{
					name = "Assault Section";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_BXInfWeapons_Sections
				{
					name = "Weapons Section";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
			};

			class MixedInfantry
			{
				name = "Mixed Droids - Sections";
				class CIS_ORG_MixedInfB2B1RifleSection
				{
					name = "B2 & B1 - Rifle";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_MixedInfB2B1AssaultSection
				{
					name = "B2 & B1 - Assault";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1breach_unit_ORG_CIS_B1_Breacher";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_MixedInfB2B1SupportSection
				{
					name = "B2 & B1 - Weapons";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1ar_unit_ORG_CIS_B1_Support";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisb1at_unit_ORG_CIS_B1_AT";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_MixedInfB2Team
				{
					name = "B2 Team";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb2_unit_ORG_CIS_B2";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
				};
				class CIS_ORG_MixedInfBXB1RifleSection
				{
					name = "BX & B1 - Rifle";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_MixedInfBXB1AssaultSection
				{
					name = "BX & B1 - Assault";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisbxbreach_unit_ORG_CIS_BX_Breacher";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
				class CIS_ORG_MixedInfBXB1SupportSection
				{
					name = "BX & B1 - Weapons";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_cisbx_unit_ORG_CIS_BX";
						rank = "CORPORAL";
						position[] = { 0,0,0 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { 0,1,0 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,0,0 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "PRIVATE";
						position[] = { 0,-1,0 };
					};
					class Unit4
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "CORPORAL";
						position[] = { -1,0,0 };
					};
					class Unit5
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 1,1,0 };
					};
					class Unit6
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { -1,-1,0 };
					};
					class Unit7
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 0,-2,0 };
					};
					class Unit8
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "CORPORAL";
						position[] = { -2,0,0 };
					};
					class Unit9
					{
						side = 0;
						vehicle = "ORG_aux_cisb1_unit_ORG_CIS_B1";
						rank = "PRIVATE";
						position[] = { 2,2,0 };
					};
					class Unit10
					{
						side = 0;
						vehicle = "ORG_aux_cisbxar_unit_ORG_CIS_BX_Support";
						rank = "PRIVATE";
						position[] = { -2,-2,0 };
					};
					class Unit11
					{
						side = 0;
						vehicle = "ORG_aux_cisbxat_unit_ORG_CIS_BX_AT";
						rank = "PRIVATE";
						position[] = { 0,-3,0 };
					};
				};
			};

			class VultureTeams
			{
				name = "Vulture Elements";
				class CIS_ORG_Vulture_CAP
				{
					name = "CAP Vulture Element";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_CAP";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,-20,50 };
					};
				};
				class CIS_ORG_Vulture_CAS
				{
					name = "CAS Vulture Element";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_CAS";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_CAS";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,-20,50 };
					};
				};
				class CIS_ORG_Vulture_GUN
				{
					name = "Gun Vulture Element";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
					class Unit3
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_GUN";
						rank = "PRIVATE";
						position[] = { 0,-20,50 };
					};
				};
				class CIS_ORG_Vulture_CAP
				{
					name = "CAP Vulture Squad";
					side = 0;
					faction = "EdCat_ORGCIS";
					class Unit0
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_CAP";
						rank = "CORPORAL";
						position[] = { 0,0,50 };
					};
					class Unit1
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_CAP";
						rank = "PRIVATE";
						position[] = { 0,20,50 };
					};
					class Unit2
					{
						side = 0;
						vehicle = "ORG_aux_vehicle_air_CIS_Vulture_CAP";
						rank = "PRIVATE";
						position[] = { 20,0,50 };
					};
				};
			};
		};
	};
};