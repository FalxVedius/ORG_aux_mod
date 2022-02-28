#include "../../332nd_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(aviation_helmets)
	{
		author = "Namenai";
		addonRootClass = MACRO_PATCH_NAME(helmets);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(helmets)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_HELMET(aviation,332nd_pilot),
			MACRO_NEW_HELMET(aviation,332nd_blast),
			MACRO_NEW_HELMET(aviation,Dragneel),
			MACRO_NEW_HELMET(aviation,Chopper),
			MACRO_NEW_HELMET(aviation,FlightJrLt),
			MACRO_NEW_HELMET(aviation,FlightOfficer),
			MACRO_NEW_HELMET(aviation,FlightTechi),
			MACRO_NEW_HELMET(aviation,SeniorEnsign),
			//MACRO_NEW_HELMET(aviation,Raven),
			MACRO_NEW_HELMET(aviation,Loyal),
			MACRO_NEW_HELMET(aviation,Cutter),
			MACRO_NEW_HELMET(aviation,Bugs),

			MACRO_NEW_HELMET(warden,FlightEngi),
			MACRO_NEW_HELMET(warden,FlightExpert),
			MACRO_NEW_HELMET(warden,FlightTechiEngi),
			MACRO_NEW_HELMET(warden,FlightOfficerEngi),
			MACRO_NEW_HELMET(warden,Hammer),

			MACRO_NEW_HELMET(aviation,Test1),
			MACRO_NEW_HELMET(aviation,Test2),
			MACRO_NEW_HELMET(aviation,Test3),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(aviation,base);
	class MACRO_NEW_HELMET(warden,base);

	//pilots
    MACRO_NEW_AVIATION_HELMET_ITEM(332nd_pilot,Ensign,Pilot.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(332nd_blast,Blast,Blast.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Dragneel,Dragneel,Dragneel.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Chopper,Chopper,Chopper.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(FlightJrLt,Jr Lieutenant,FlightJrLt.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(FlightOfficer,Officer,FlightOfficer.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(FlightTechi,Technician,FlightTechi.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(SeniorEnsign,Senior Ensign,SeniorEnsign.paa)
	//MACRO_NEW_AVIATION_HELMET_ITEM(Raven,Raven,Raven.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Loyal,Loyal,Loyal.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Cutter,Cutter,Cutter.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Bugs,Bugs,Bugs.paa)

	MACRO_NEW_AVIATION_HELMET_ITEM(Test1,Test1,Test1.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Test2,Test2,Test2.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Test3,Test3,Test3.paa)
	
	//warden
	MACRO_NEW_WARDEN_HELMET_ITEM(FlightEngi,Engineer,Engineer_ca.paa)
	MACRO_NEW_WARDEN_HELMET_ITEM(FlightExpert,Expert,Expert_ca.paa)
	MACRO_NEW_WARDEN_HELMET_ITEM(FlightTechiEngi,Technician,Techi_ca.paa)
	MACRO_NEW_WARDEN_HELMET_ITEM(FlightOfficerEngi,Officer,Officer_ca.paa)
	MACRO_NEW_WARDEN_HELMET_ITEM(Hammer,Hammer,Hammer_ca.paa)
}