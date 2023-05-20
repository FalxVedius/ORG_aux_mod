#include "../../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15s_sounds)
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
	//###################################### SHOTS ######################################
	class ORG_DC15s_Closure_SoundShader
	{
		samples[] = {{"ORG_weapons\DC\15s\sounds\DC15sClose.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class ORG_DC15s_closeShot_SoundShader
	{
		samples[] = {{"ORG_weapons\DC\15s\sounds\DC15sClose.wss",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ORG_DC15s_midShot_SoundShader
	{
		samples[] = {{"ORG_weapons\DC\15s\sounds\DC15sDistant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class ORG_DC15s_distShot_SoundShader
	{
		samples[] = {{"ORG_weapons\DC\15s\sounds\DC15sFar.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class ORG_DC15s_Shot_SoundSet
	{
		soundShaders[] = {"ORG_DC15s_Closure_SoundShader","ORG_DC15s_closeShot_SoundShader","ORG_DC15s_midShot_SoundShader","ORG_DC15s_distShot_SoundShader"};
		volumeFactor = 1.2;
		frequencyRandomizer = 0.75;
		frequencyRandomizer = 0.25;
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