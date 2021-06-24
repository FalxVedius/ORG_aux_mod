params ["_unit", "_killer", "_instigator", "_useEffects"];


_rndNum = floor(random 10);

switch (true) do {

	//30% chance of playing a death sound
	case (_rndNum <= 2): 
	{ 
		_rndSound = floor(random 4);
		
		switch (true) do {
		
			case (_rndSound <= 3): 
			{
				_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
				_obj attachTo [_unit,[0,0,1.5]];

				playSound3D ["332nd_units\opfor\DeathSounds\B1_Death1.ogg", _obj, false, getPosASL _obj, 5, 1, 10]; 
			};
		
			default {};
		};

	};
	
	//70% chance of playing no sound
	case (_rndNum >= 3): {};
	default {};
};


deleteVehicle _obj;