

#include "../../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(genericrocket_Flyby_sounds)
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


class cfgSoundShaders 
{
	//###################################### SHOTS ######################################
	class 332nd_genericrocket_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"332nd_weapons\sounds\weapons\flybys\genericrocket\RocketFlyby1.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\genericrocket\RocketFlyby2.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\genericrocket\RocketFlyby3.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\genericrocket\RocketFlyby4.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\genericrocket\RocketFlyby5.wss",
				1
			},	
		};
		volume=0.6;
		range=800;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
		class 332nd_genericrocket_flyby_soundset
	{
		soundshaders[]=
		{
			"332nd_genericrocket_flyby_soundshader"
		};
		volumefactor=1;
		soundshaderslimit=2;
		volumerandomizer=1;
		volumecurve="332nd_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="332nd_snaps_3dprocessor";
		distancefilter="332_weapons_lowpass_filter";
		frequencyrandomizer=1;
	};
};

class cfgsound3dprocessors
{
    class 332nd_snaps_3dprocessor
	{
		type="panner";
		innerrange=0;
		range=100;
		rangecurve="332nd_weapons_basic_volumecurve";
	};
};

class cfgsoundcurves
{
    class 332nd_basic_vl_sin
	{
		points[]=
		{
			{0,1},
			{0.1,0.75},
			{0.2,0.56},
			{0.30000001,0.41999999},
			{0.40000001,0.31999999},
			{0.5,0.22},
			{0.60000002,0.15000001},
			{0.69999999,0.079999998},
			{0.80000001,0.050000001},
			{0.89999998,0.015},
			{1,0}
		};
	};
};