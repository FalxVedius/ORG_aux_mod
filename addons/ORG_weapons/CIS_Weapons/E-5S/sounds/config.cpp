#include "../../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(E5S_sounds)
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
	class ORG_E5S_Closure_SoundShader
	{
		samples[] = {{"ORG_weapons\CIS_Weapons\E-5S\sounds\E5sClose.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
		limitation= 0;
	};
	class ORG_E5S_closeShot_SoundShader
	{
		samples[] = {{"ORG_weapons\CIS_Weapons\E-5S\sounds\E5sClose.wss",1}};
		volume = 0.9;
		range = 20;
		limitation= 0;
		rangeCurve = "closeShotCurve";
	};
	class ORG_E5S_midShot_SoundShader
	{
		samples[] = {{"ORG_weapons\CIS_Weapons\E-5S\sounds\E5sClose.wss",1}};
		volume =0.9;
		range = 1800;
		limitation= 0;
		rangeCurve[] = {{0,0.2},{20,1},{50,1},{300,0},{1800,0}};
	};
	class ORG_E5S_distShot_SoundShader
	{
		samples[] = {{"ORG_weapons\CIS_Weapons\E-5S\sounds\E5sFar.wss",1}};
		volume = 1.5;
		range = 4000;
		limitation= 0;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class ORG_E5S_Shot_SoundSet
	{
		soundShaders[] = {"ORG_E5S_Closure_SoundShader","ORG_E5S_closeShot_SoundShader","ORG_E5S_midShot_SoundShader","ORG_E5S_distShot_SoundShader","ORG_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1.1;
		frequencyRandomizer = 1;
		frequencyRandomizer = 0.35;
		volumeCurve = "ORG_weapons_basic_volumecurve";
		sound3DProcessingType = "ORG_weapons_3dprocessor";
		distanceFilter = "ORG_weapons_lowpass_filter";
		occlusionFactor=0.15;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
};