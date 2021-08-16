params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if (_muzzle == "HandGrenadeMuzzle") then
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
					playSound3D ["WebKnightsRobotics\sounds\ThrowingGrenade_03.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 1): 
				{
					playSound3D ["WebKnightsRobotics\sounds\ThrowingGrenade_05.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 2): 
				{
					playSound3D ["WebKnightsRobotics\sounds\ThrowingGrenade_06.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
			
				default { playSound3D ["WebKnightsRobotics\sounds\ThrowingGrenade_03.wav", _obj, false, getPosASL _obj, 5, 1, 150]; };
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
	
		case (_rndNum <= 49): 
		{ 
			_rndSound = floor(random 4);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unit,[0,0,1.5]];
			
			switch (true) do {
			
				case (_rndSound == 0): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_shooting_1.ogg", _obj, false, getPosASL _obj, 5, 0.8, 150];
				};
				case (_rndSound == 1): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_shooting_2.ogg", _obj, false, getPosASL _obj, 5, 0.8, 150];
				};
				case (_rndSound == 2): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_shooting_3.ogg", _obj, false, getPosASL _obj, 5, 0.8, 150];
				};
				case (_rndSound == 3): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_shooting_4.ogg", _obj, false, getPosASL _obj, 5, 0.8, 150];
				};
				
				default { playSound3D ["WebKnightsRobotics\sounds\B1_shooting_1.ogg", _obj, false, getPosASL _obj, 5, 0.8, 150]; };
			};
	
		};
		
	
		case (_rndNum >= 50): {};
		default {};
	};
	
	
	deleteVehicle _obj;
};