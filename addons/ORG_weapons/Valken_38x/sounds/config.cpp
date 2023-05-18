#include "../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Valken38x_Sounds)
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
	class ORG_Valken38x_Closure_SoundShader
	{
		samples[] = {{"ORG_weapons\Valken_38x\sounds\Valken38xClose.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class ORG_Valken38x_closeShot_SoundShader 
	{
		samples[] = {{"ORG_weapons\Valken_38x\sounds\Valken38xClose.wss",1}};
		volume = 0.9;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ORG_Valken38x_midShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Valken_38x\sounds\Valken38xDistant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class ORG_Valken38x_distShot_SoundShader
	{
		samples[] = {{"ORG_weapons\Valken_38x\sounds\Valken38xFar.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class ORG_Valken38x_Shot_SoundSet
	{
		soundShaders[] = {"ORG_Valken38x_Closure_SoundShader","ORG_Valken38x_closeShot_SoundShader","ORG_Valken38x_midShot_SoundShader","ORG_Valken38x_distShot_SoundShader","ORG_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.35;
		frequencyFactor = 0.95;
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