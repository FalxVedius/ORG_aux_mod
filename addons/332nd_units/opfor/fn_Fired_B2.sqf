params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];


_rndNum = floor(random 100);

switch (true) do {

	case (_rndNum <= 2): 
	{ 
		_rndSound = floor(random 5);
		_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
		_obj attachTo [_unit,[0,0,1.5]];
		
		switch (true) do {
		
			case (_rndSound == 0): 
			{
				[_obj,["WBK_b2_firing_1_332nd", 200, 1]] remoteExec ["say3D",0,true];
			};
			case (_rndSound == 1): 
			{
				[_obj,["WBK_b2_firing_2_332nd", 200, 1]] remoteExec ["say3D",0,true];
			};
			case (_rndSound == 2): 
			{
				[_obj,["WBK_b2_firing_3_332nd", 200, 1]] remoteExec ["say3D",0,true];
			};
			case (_rndSound == 3): 
			{
				[_obj,["WBK_b2_firing_4_332nd", 200, 1]] remoteExec ["say3D",0,true];
			};
			case (_rndSound == 4): 
			{
				[_obj,["WBK_b2_firing_5_332nd", 200, 1]] remoteExec ["say3D",0,true];
			};
			
			default { [_obj,["WBK_b2_firing_1_332nd", 200, 1]] remoteExec ["say3D",0,true]; };
		};

	};
	

	case (_rndNum >= 3): {};
	default {};
};


deleteVehicle _obj;