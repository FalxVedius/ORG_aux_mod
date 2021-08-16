params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint"];


_rndNum = floor(random 50);

switch (true) do {

	case (_rndNum <= 4): 
	{ 
		_rndSound = floor(random 6);
		_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
		_obj attachTo [_unit,[0,0,1.5]];
		
		switch (true) do {
		
			case (_rndSound == 0): 
			{
				playSound3D ["WebKnightsRobotics\sounds\B1_hit_1.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 1): 
			{
				playSound3D ["WebKnightsRobotics\sounds\B1_hit_2.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 2): 
			{
				playSound3D ["WebKnightsRobotics\sounds\B1_hit_3.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 3): 
			{
				playSound3D ["WebKnightsRobotics\sounds\B1_hit_4.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 4): 
			{
				playSound3D ["WebKnightsRobotics\sounds\B1_hit_5.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 5): 
			{
				playSound3D ["WebKnightsRobotics\sounds\B1_hit_6.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			
			default { playSound3D ["WebKnightsRobotics\sounds\B1_hit_1.ogg", _obj, false, getPosASL _obj, 5, 1, 125]; };
		};

	};
	

	case (_rndNum >= 5): {};
	default {};
};


deleteVehicle _obj;