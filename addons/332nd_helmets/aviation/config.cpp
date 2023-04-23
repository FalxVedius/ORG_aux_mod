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
			MACRO_NEW_HELMET(aviation,FlightJrLt),
			MACRO_NEW_HELMET(aviation,FlightOfficer),
			MACRO_NEW_HELMET(aviation,FlightTechi),
			MACRO_NEW_HELMET(aviation,SeniorEnsign),
			MACRO_NEW_HELMET(aviation,Recruit),
        };
		weapons[] = {};
	};
};

class CfgWeapons
{
    // ---- Helmets ----

    class MACRO_NEW_HELMET(aviation,base);

	//pilots
    MACRO_NEW_AVIATION_HELMET_ITEM(332nd_pilot,Ensign,Pilot.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(FlightJrLt,Jr Lieutenant,FlightJrLt.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(FlightOfficer,Officer,FlightOfficer.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(FlightTechi,Technician,FlightTechi.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(SeniorEnsign,Senior Ensign,SeniorEnsign.paa)
	MACRO_NEW_AVIATION_HELMET_ITEM(Recruit,Recruit,Recruit.paa)
	
}