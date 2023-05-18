#include "../../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(DC15k_Sounds)
	{
		author = "ORG Aux Team";
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
//"ORG_weapons\DC\15a\sounds\DC15p.wss",

class cfgSoundShaders 
{
	class ORG_Suppressed_DC15k_SoundShader
	{
		samples[] = {{"ORG_weapons\Westar_M5\sounds\WestarM5close.wss",1}};
		volume = 0.9;
		range = 300;
		rangeCurve[] = {{0,1},{300,0}};
	};
	class ORG_Suppressed_DC15k_distShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Westar_M5\sounds\WestarM5distant.wss",1}};
		volume = 1;
		range = 1000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	

	class ORG_Suppresed_DC15k_Shot_SoundSet
	{
		soundShaders[] = {"ORG_Suppressed_DC15k_SoundShader","ORG_Suppressed_DC15k_distShot_SoundShader","ORG_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 0.6;
		frequencyRandomizermin = 0.25;
		volumeCurve = "ORG_weapons_basic_volumecurve";
		sound3DProcessingType = "ORG_weapons_3dprocessor";
		distanceFilter = "ORG_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
};