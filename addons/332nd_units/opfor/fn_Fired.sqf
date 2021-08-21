params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];


if (_muzzle == "332nd_FRAG_Muzzle" || _muzzle == "332nd_HEDP_Muzzle") then
{
	_rndNum = floor(random 10);

	switch (true) do {

		case (_rndNum <= 9): 
		{ 
			_rndSound = floor(random 3);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unit,[0,0,1.5]];
		
			switch (true) do {
		
				case (_rndSound == 0): 
				{
					[_obj,["BX_ThrowingGrenade_1_332nd", 200, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 1): 
				{
					[_obj,["BX_ThrowingGrenade_2_332nd", 200, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 2): 
				{
					[_obj,["BX_ThrowingGrenade_3_332nd", 200, 1.2]] remoteExec ["say3D",0,true];
				};
			
				default { [_obj,["BX_ThrowingGrenade_1_332nd", 200, 1.2]] remoteExec ["say3D",0,true]; };
			};
	};
	

		case (_rndNum >= 10): {};
		default {};
	};


	deleteVehicle _obj;

}
else
{
	
	_rndNum = floor(random 100);
	
	switch (true) do {
	
		case (_rndNum <= 4): 
		{ 
			_rndSound = floor(random 4);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unit,[0,0,1.5]];
			
			switch (true) do {
			
				case (_rndSound == 0): 
				{
					[_obj,["B1_shooting_1_332nd", 200, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 1): 
				{
					[_obj,["B1_shooting_2_332nd", 200, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 2): 
				{
					[_obj,["B1_shooting_3_332nd", 200, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 3): 
				{
					[_obj,["B1_shooting_4_332nd", 200, 1]] remoteExec ["say3D",0,true];
				};
				
				default { [_obj,["B1_shooting_1_332nd", 200, 1]] remoteExec ["say3D",0,true]; };
			};
	
		};
		
	
		case (_rndNum >= 5): {};
		default {};
	};
	
	
	deleteVehicle _obj;
};