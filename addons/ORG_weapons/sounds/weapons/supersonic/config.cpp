

#include "../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Supersonic_sounds)
	{
		author = "332nd Aux Team";
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
		    
			"A3_Data_F",
		    "A3_Weapons_F",
			MACRO_PATCH_NAME(weapons)
		};
		units[]={};
		weapons[]={};
		requiredVersion = 0.1;
	};
};


class cfgSoundShaders 
{
	//###################################### SHOTS ######################################
	class 332nd_Supersonic_soundshader
	{
		samples[]=
		{
			{
				"332nd_weapons\sounds\weapons\supersonic\NoSound.wss",
				1
			},
		};
		volume=0;
		range=0;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
		class 332nd_Supersonic_soundset
	{
		soundshaders[]=
		{
			"332nd_Supersonic_soundshader"
		};
		volumefactor=0;
	};
};