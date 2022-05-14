#include "../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(DC44h_sounds)
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
	class 332_DC44h_Closure_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15l\sounds\DC15lClose.wss",1}}; 
		volume = 0.25; 
		range = 5;
	};
	class 332_DC44h_closeShot_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15l\sounds\DC15lClose.wss",1}};
		volume = 0.5;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 332_DC44h_midShot_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15l\sounds\DC15lClose.wss",1}};
		volume = 0.6943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class 332_DC44h_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15l\sounds\DC15lClose.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class 332_DC44h_Shot_SoundSet
	{
		soundShaders[] = {"332_DC44h_Closure_SoundShader","332_DC44h_closeShot_SoundShader","332_DC44h_midShot_SoundShader","332_DC44h_distShot_SoundShader"}; 
		volumeFactor = 1.1;
		frequencyRandomizer = 1;
		frequencyRandomizer = 0.35;
		volumeCurve = "332_weapons_basic_volumecurve";
		sound3DProcessingType = "332_weapons_3dprocessor";
		distanceFilter = "332_weapons_lowpass_filter";
		spatial = 1;
		doppler = 0;
	    occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		loop = 0;
	};
};