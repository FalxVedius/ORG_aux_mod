#include "../../../../ORG_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class MACRO_PATCH_NAME(ARC170_sounds)
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
		class ORG_ARC170_EngineLowExt_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_low_ext.wss",
				1
			}
		};
		frequency="1.0 min (rpm + 0.5)*(rpm factor[0, 1])";
		volume="0.6 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0.75, 0])";
		range=1200;
	};
	class ORG_ARC170_EngineHighExt_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_high_ext.wss",
				1
			}
		};
		frequency="1.0 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
		volume="0.6 * machcone*engineOn*camPos*(rpm factor[0, 1])*(thrust factor[0, 0.75])";
		range=1300;
	};
	class ORG_ARC170_ForsageExt_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_forsage_ext.wss",
				1
			}
		};
		frequency=1.1;
		volume="0.6 * machcone*engineOn*camPos*(thrust factor[0.6, 1.0])";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{200,0.75},
			{1000,0.25},
			{1500,0}
		};
	};
	//class ORG_ARC170_WindNoiseExt_SoundShader
	//{
	//	samples[]=
	//	{
			
	//		{
	//			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\Shared\wind_open_in.wss",
	//			1
	//		}
	//	};
	//	frequency="3*(speed factor[1, 200])";
	//	volume="0.25 * machcone*4*camPos*(speed factor[1, 200])";
	//	range=200;
	//};
	class ORG_ARC170_EngineExt_Middle_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_middle.wss",
				1
			}
		};
		frequency=1;
		volume="0.6 * machcone*camPos*(rpm factor[0.5, 1])";
		range=4000;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{4000,1}
		};
	};
	class ORG_ARC170_EngineExt_Dist_Front_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_front.wss",
				1
			}
		};
		frequency=1;
		volume="0.6 * machcone*camPos*(rpm factor[0.5, 1])";
		range=5000;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{5000,1}
		};
	};
	class ORG_ARC170_EngineExt_Dist_Rear_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_back.wss",
				1
			}
		};
		frequency=1;
		volume="0.6 * machcone*camPos*(rpm factor[0.5, 1])";
		range=5000;
		rangeCurve[]=
		{
			{0,0},
			{50,1},
			{5000,1}
		};
	};
	class ORG_ARC170_EngineLowInt_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_low_int.wss",
				1
			}
		};
		frequency="1.0 min (rpm + 0.5)*(rpm factor[0, 1])";
		volume="1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])";
	};
	class ORG_ARC170_EngineHighInt_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_high_int.wss",
				1
			}
		};
		frequency="1.0 min (rpm + 0.25)*(rpm factor[0.25, 1.1])";
		volume="1 * engineOn*(1-camPos)*(rpm factor[0, 1])";
	};
	class ORG_ARC170_ForsageInt_SoundShader
	{
		samples[]=
		{
			
			{
				"ORG_weapons\sounds\vehicles\ARC170\ARC170_engine_forsage_int.wss",
				1
			}
		};
		frequency="1.0 min (rpm + 0.5)*(rpm factor[0, 1])";
		volume="1 * engineOn*(1-camPos)*(rpm factor[0.5, 1])*(thrust factor[0.5, 1.0])";
	};
	//class ORG_ARC170_WindNoiseInt_SoundShader
	//{
	//	samples[]=
	//	{
			
	//		{
	//			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\plane_cas_01\Plane_CAS_01_Int_Speed_high.ogg",
	//			1
	//		}
	//	};
	//	frequency="3*(speed factor[1, 200])";
	//	volume="1 * 3*(1-camPos)*(speed factor[1, 200])";
	//};
	//class ORG_ARC170_VelocityInt_SoundShader
	//{
	//	samples[]=
	//	{
			
	//		{
	//			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\air_vehicles\Shared\Jet_Stress_1.ogg",
	//			1
	//		}
	//	};
	//	frequency="0.75*(speed factor[1, 150])";
	//	volume="1 * (1-camPos)*(gmeterZ factor[1.5, 6])*(speed factor[1, 50])";
	//};
};

class cfgSoundSets //on more info about soundSets look at the [[Arma_3_Sound:_cfgSoundSets|relevant wiki page]]
{
		class ORG_ARC170_EngineLowExt_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineLowExt_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		loop=1;
		sound3DProcessingType="JetExt_Close_3DProcessingType";
	};
	class ORG_ARC170_EngineHighExt_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineHighExt_SoundShader"
		};
		volumeFactor=1.2;
		spatial=1;
		loop=1;
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.44999999;
		obstructionFactor=0.34999999;
	};
	class ORG_ARC170_ForsageExt_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_ForsageExt_SoundShader"
		};
		volumeFactor=1.25;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		sound3DProcessingType="JetExt_Close_3DProcessingType";
		occlusionFactor=0.44999999;
		obstructionFactor=0.34999999;
	};
	//class ORG_ARC170_WindNoiseExt_SoundSet
	//{
	//	soundShaders[]=
	//	{
	//		"ORG_ARC170_WindNoiseExt_SoundShader"
	//	};
	//	volumeFactor=1;
	//	spatial=1;
	//	loop=1;
	//	sound3DProcessingType="JetExt_Close_3DProcessingType";
	//};
	class ORG_ARC170_EngineExt_Middle_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineExt_Middle_SoundShader"
		};
		volumeFactor=1.4;
		spatial=1;
		loop=1;
		shape="FrontSemispace10";
		volumeCurve="InverseSquare3Curve";
		sound3DProcessingType="JetExt_Middle_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class ORG_ARC170_EngineExt_Dist_Front_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineExt_Dist_Front_SoundShader"
		};
		volumeFactor=1.3;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare3Curve";
		shape="FrontSemispace60";
		sound3DProcessingType="JetExt_Distant_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class ORG_ARC170_EngineExt_Dist_Rear_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineExt_Dist_Rear_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
		volumeCurve="InverseSquare1Curve";
		shape="RearSemispace20";
		sound3DProcessingType="JetExt_Distant_3DProcessingType";
		occlusionFactor=0.5;
		obstructionFactor=0;
	};
	class ORG_ARC170_EngineLowInt_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineLowInt_SoundShader"
		};
		volumeFactor=1.4;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
	};
	class ORG_ARC170_EngineHighInt_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_EngineHighInt_SoundShader"
		};
		volumeFactor=1.3;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
	};
	class ORG_ARC170_ForsageInt_SoundSet
	{
		soundShaders[]=
		{
			"ORG_ARC170_ForsageInt_SoundShader"
		};
		volumeFactor=1.35;
		spatial=0;
		loop=1;
		sound3DProcessingType="VehicleInt_Back_3DProcessingType";
	};
	//class ORG_ARC170_WindNoiseInt_SoundSet
	//{
	//	soundShaders[]=
	//	{
	//		"ORG_ARC170_WindNoiseInt_SoundShader"
	//	};
	//	volumeFactor=1;
	//	spatial=0;
	//	loop=1;
	//	sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	//};
	//class ORG_ARC170_VelocityInt_SoundSet
	//{
	//	soundShaders[]=
	//	{
	//		"ORG_ARC170_VelocityInt_SoundShader"
	//	};
	//	volumeFactor=1.25;
	//	spatial=0;
	//	loop=1;
	//	sound3DProcessingType="VehicleInt_Front_3DProcessingType";
	//};
};