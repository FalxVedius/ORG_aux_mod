

#include "../../../../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(Blaster_Flyby_sounds)
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
	class 332nd_blaster_flyby_soundshader
	{
		samples[]=
		{
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby1.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby2.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby3.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby4.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby5.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby6.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby7.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby8.wss",
				1
			},
			
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby9.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby10.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby11.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby12.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby13.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby14.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby15.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby16.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby17.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby18.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby19.wss",
				1
			},
			{
				"332nd_weapons\sounds\weapons\flybys\blaster\Flyby20.wss",
				1
			}
			
		};
		volume=0.4;
		range=200;
	};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
		class 332nd_blaster_flyby_soundset
	{
		soundshaders[]=
		{
			"332nd_blaster_flyby_soundshader"
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
		rangecurve="jsrs_weapons_basic_volumecurve";
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