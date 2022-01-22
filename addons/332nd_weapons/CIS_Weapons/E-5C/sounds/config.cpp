#include "../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(E5c_sounds)
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
	//###################################### SHOTS ######################################
	class 332_E5c_Closure_SoundShader
	{
		samples[] = {{"332nd_weapons\CIS_Weapons\E-5C\sounds\E5cClose.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class 332_E5c_closeShot_SoundShader
	{
		samples[] = {{"332nd_weapons\CIS_Weapons\E-5C\sounds\E5cClose.wss",1}};
		volume = 0.8;
		range = 20;
		rangeCurve = "closeShotCurve";
	};
	class 332_E5c_midShot_SoundShader
	{
		samples[] = {{"332nd_weapons\CIS_Weapons\E-5C\sounds\E5cDistant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{20,1},{50,1},{300,0},{1800,0}};
	};
	class 332_E5c_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\CIS_Weapons\E-5C\sounds\E5cFar.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class 332_E5c_Shot_SoundSet
	{
		soundShaders[] = {"332_E5c_Closure_SoundShader","332_E5c_closeShot_SoundShader","332_E5c_midShot_SoundShader","332_E5c_distShot_SoundShader"};
		volumeFactor = 1.1;
		frequencyRandomizer = 0.75;
		frequencyRandomizer = 0.30;
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