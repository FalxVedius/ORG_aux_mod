

#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(WestarM5_Sounds)
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
//"332nd_weapons\DC\15a\sounds\DC15p.wss",

class cfgSoundShaders 
{
	class 332_Suppressed_WestarM5_SoundShader
	{
		samples[] = {{"332nd_weapons\Westar_M5\sounds\WestarM5close.wss",1}};
		volume = 0.9;
		range = 300;
		rangeCurve[] = {{0,1},{300,0}};
	};
	class 332_Suppressed_WestarM5_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\Westar_M5\sounds\WestarM5distant.wss",1}};
		volume = 1;
		range = 1000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	

	class 332_Suppresed_WestarM5_Shot_SoundSet
	{
		soundShaders[] = {"332_Suppressed_WestarM5_SoundShader","332_Suppressed_WestarM5_distShot_SoundShader","332_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 0.6;
		frequencyRandomizermin = 0.25;
		volumeCurve = "332_weapons_basic_volumecurve";
		sound3DProcessingType = "332_weapons_3dprocessor";
		distanceFilter = "332_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
};