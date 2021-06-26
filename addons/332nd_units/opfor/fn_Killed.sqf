params ["_unit", "_killer", "_instigator", "_useEffects"];


_rndNum = floor(random 10);

switch (true) do {

	//30% chance of playing a death sound
	case (_rndNum <= 4): 
	{ 
		_rndSound = floor(random 23);
		_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
		_obj attachTo [_unit,[0,0,1.5]];
		
		switch (true) do {
		
			case (_rndSound == 0): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-1.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 1): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-2.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 2): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-3.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 3): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-4.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 4): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-5.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 5): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-6.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 6): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-7.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 7): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-8.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 8): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-9.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 9): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-10.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 10): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-11.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 11): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-12.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 12): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-13.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 13): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-14.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 14): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-15.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 15): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-16.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 16): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-17.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 17): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-18.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 18): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-19.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 19): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-20.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 20): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-21.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 21): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-22.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
			};
			case (_rndSound == 22): 
			{
				_rndYoda = floor(random 100);
				
				switch (true) do {
				
					case (_rndYoda == 0): 
					{
						playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-23.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
					};
					case (_rndYoda >= 1): 
					{
						playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-1.ogg", _obj, false, getPosASL _obj, 5, 1, 125]; 
					};
					
					default {};
				};
				
			};
			
			default { playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-1.ogg", _obj, false, getPosASL _obj, 5, 1, 125]; };
		};

	};
	
	//70% chance of playing no sound
	case (_rndNum >= 5): {};
	default {};
};


deleteVehicle _obj;