

#include "../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Firepuncher_Sounds)
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
	class 332_Firepuncher_Closure_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\Firepuncher.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class 332_Firepuncher_closeShot_SoundShader 
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\Firepuncher.wss",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 332_Firepuncher_midShot_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherDistant.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class 332_Firepuncher_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherFar.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
	class 332_Suppressed_Firepuncher_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\SuppresedFirepuncher.wss",1}};
		volume = 0.9;
		range = 300;
		rangeCurve[] = {{0,1},{300,0}};
	};
	class 332_Suppressed_Firepuncher_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\SuppresedDistantFirepuncher.wss",1}};
		volume = 0.9;
		range = 1000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1000,1}};
	};
	//###################################### TAILS ######################################
	class 332_Firepuncher_tailInterior_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherTailIndoors.wss",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 332_Firepuncher_tailTrees_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherTailTree.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class 332_Firepuncher_tailForest_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherTailForest.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class 332_Firepuncher_tailMeadows_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherTailField.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class 332_Firepuncher_tailHouses_SoundShader
	{
		samples[] = {{"332nd_weapons\IQA_11\sounds\FirepuncherTailIndoor.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class 332_Firepuncher_Shot_SoundSet
	{
		soundShaders[] = {"332_Firepuncher_Closure_SoundShader","332_Firepuncher_closeShot_SoundShader","332_Firepuncher_midShot_SoundShader","332_Firepuncher_distShot_SoundShader","332_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.35;
		volumeCurve = "332_weapons_basic_volumecurve";
		sound3DProcessingType = "332_weapons_3dprocessor";
		distanceFilter = "332_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};

	class 332_Suppresed_Firepuncher_Shot_SoundSet
	{
		soundShaders[] = {"332_Suppressed_Firepuncher_SoundShader","332_Suppressed_Firepuncher_distShot_SoundShader","332_DC15a_tailInterior_SoundShader"};
		volumeFactor = 1;
		frequencyRandomizer = 1;
		frequencyRandomizermin = 0.35;
		volumeCurve = "332_weapons_basic_volumecurve";
		sound3DProcessingType = "332_weapons_3dprocessor";
		distanceFilter = "332_weapons_lowpass_filter";
		occlusionFactor=0.25;
        obstructionFactor=0.30000001;
		spatial = 1;
		doppler = 0;
	
		loop = 0;
	};
	
	class 332_Sniper_Tail_SoundSet
	{
		soundShaders[] = {"332_Firepuncher_tailTrees_SoundShader","332_Firepuncher_tailForest_SoundShader","332_Firepuncher_tailMeadows_SoundShader","332_Firepuncher_tailHouses_SoundShader"};
		volumeFactor = 1.1;
		frequencyRandomizer = 1;
		occlusionFactor=0.30000001;
        obstructionFactor=0;
		volumeCurve = "332_wpn_vl_sin";
		sound3DProcessingType = "j332_weapons_tails_3dprocessor";
		distanceFilter = "332_wpn_echo_lp_dia";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
};