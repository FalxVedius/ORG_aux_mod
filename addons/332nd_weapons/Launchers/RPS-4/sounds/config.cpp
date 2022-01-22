#include "../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Launchers_RPS4_sounds)
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
//"332nd_weapons\Launchers\RPS-4\sounds\Launchers15p.wss",

class cfgSoundShaders 
{
	//###################################### SHOTS ######################################
	class 332_RPS4_Closure_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RPS4Close.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class 332_RPS4_closeShot_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RPS4Close.wss",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 332_RPS4_midShot_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RPS4Distant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class 332_RPS4_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RPS4Far.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
	//###################################### TAILS ######################################
	class 332_RPS4_tailInterior_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RocketTail.wss",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 332_RPS4_tailTrees_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RocketTail.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class 332_RPS4_tailForest_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RocketTail.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class 332_RPS4_tailMeadows_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RocketTail.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class 332_RPS4_tailHouses_SoundShader
	{
		samples[] = {{"332nd_weapons\Launchers\RPS-4\Sounds\RocketTail.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class 332_RPS4_Shot_SoundSet
	{
		soundShaders[] = {"332_RPS4_Closure_SoundShader","332_RPS4_closeShot_SoundShader","332_RPS4_midShot_SoundShader","332_RPS4_distShot_SoundShader"};
		volumeFactor = 1.3;
		frequencyRandomizer = 1;
		frequencyRandomizer = 0.35;
		volumeCurve = "332_weapons_basic_volumecurve";
		sound3DProcessingType = "332_weapons_3dprocessor";
		distanceFilter = "332_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class 332_Rocket_Tail_SoundSet
	{
		soundShaders[] = {"332_RPS4_tailTrees_SoundShader","332_RPS4_tailForest_SoundShader","332_RPS4_tailMeadows_SoundShader","332_RPS4_tailHouses_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "332_wpn_vl_sin";
		frequencyRandomizer = 1;
		sound3DProcessingType = "332_weapons_tails_3dprocessor";
		distanceFilter = "332_wpn_echo_lp_dia";
		spatial = 1;
		occlusionFactor=0.25;
        obstructionFactor=0;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
};

