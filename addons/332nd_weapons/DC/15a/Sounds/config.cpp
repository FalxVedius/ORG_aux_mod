#include "../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(DC_15a_sounds)
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
	class 332_DC15a_Closure_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aClose1.wss",1}}; 
		volume = 0.4466836; 
		range = 5;
	};
	class 332_DC15a_closeShot_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aClose1.wss",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 332_DC15a_midShot_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aDistant1.wss",1}};
		volume = 0.7943282;
		range = 1800;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
	};
	class 332_DC15a_distShot_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aFar1.wss",1}};
		volume = 1.0;
		range = 4000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{4000,1}};
	};
	//###################################### TAILS ######################################
	class 332_DC15a_tailInterior_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aTailIIndoor.wss",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class 332_DC15a_tailTrees_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aTailWoods.wss",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 1800;
		limitation = 1;
	};
	class 332_DC15a_tailForest_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aTailWoods.wss",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 1800;
		limitation = 1;
	};
	class 332_DC15a_tailMeadows_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aOurdoors.wss",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 1800;
		limitation = 1;
	};
	class 332_DC15a_tailHouses_SoundShader
	{
		samples[] = {{"332nd_weapons\DC\15a\Sounds\DC15aTailHouse.wss",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 1200;
		limitation = 1;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
	class 332_DC15a_Shot_SoundSet
	{
		soundShaders[] = {"332_DC15a_Closure_SoundShader","332_DC15a_closeShot_SoundShader","332_DC15a_midShot_SoundShader","332_DC15a_distShot_SoundShader"};
		volumeFactor = 1;
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
	class 332_DC15a_Tail_SoundSet
	{
		soundShaders[] = {"332_DC15a_tailTrees_SoundShader","332_DC15a_tailForest_SoundShader","332_DC15a_tailMeadows_SoundShader","332_DC15a_tailHouses_SoundShader"};
		volumeFactor = 1;
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

class Cfgsound3dprocessors
{
	class 332_weapons_3dprocessor
    {
        type="panner";
        innerrange=5;
        range=500;
        rangecurve="332_weapons_processorcurve";
    };

    class j332_weapons_tails_3dprocessor
    {
        type="panner";
        innerrange=0;
        range=100;
        rangecurve="332_basic_processorcurve";
    };
};

class cfgdistancefilters
{
   class 332_weapons_lowpass_filter
    {
        type="lowpassfilter";
        mincutofffrequency=750;
        qfactor=1;
        innerrange=0;
        range=900;
        powerfactor=55;
    };
    class 332_wpn_echo_lp_dia
    {
        type="lowpassfilter";
        mincutofffrequency=2500;
        qfactor=1;
        innerrange=30;
        range=300;
        powerfactor=75;
    };
};

class Cfgsoundcurves
{
	class 332_weapons_basic_volumecurve
    {
        points[]=
        {
            {0,1},
            {0.1,0.75},
            {0.2,0.5},
            {0.30000001,0.2},
            {0.40000001,0.1},
            {0.5,0.050000001},
            {0.60000002,0.0099999998},
            {0.69999999,0.0074999998},
            {0.80000001,0.0024999999},
            {0.89999998,0.001},
            {1,0}
        };
    };
    class 332_wpn_vl_sin
    {
        points[]=
        {
            {0,1},
            {0.1,0.5},
            {0.2,0.32499999},
            {0.30000001,0.25},
            {0.40000001,0.2},
            {0.5,0.175},
            {0.60000002,0.15000001},
            {0.69999999,0.125},
            {0.80000001,0.1},
            {0.89999998,0.050000001},
            {1,0}
        };
    };
	class 332_basic_processorcurve
    {
        points[]=
        {
            {0,1},
            {0.1,0.97000003},
            {0.2,0.94999999},
            {0.30000001,0.85000002},
            {0.40000001,0.70999998},
            {0.5,0.51999998},
            {0.60000002,0.31999999},
            {0.69999999,0.18000001},
            {0.80000001,0.1},
            {0.89999998,0.029999999},
            {1,0}
        };
    };
    class 332_weapons_processorcurve
    {
        points[]=
        {
            {0,1},
            {0.0049999999,0.75},
            {0.0099999998,0.025},
            {1,0.0099999998}
        };
    };
};