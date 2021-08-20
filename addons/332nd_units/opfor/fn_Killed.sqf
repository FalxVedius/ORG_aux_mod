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
				
					case (_rndYoda <= 5): 
					{
						playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-23.ogg", _obj, false, getPosASL _obj, 5, 1, 125];
					};
					case (_rndYoda >= 6): 
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

_aliveDroids = nearestObjects [_unit,
[
"332nd_aux_cisb1_unit_332nd_CIS_B1",
"332nd_aux_cisb1breach_unit_332nd_CIS_B1_Breacher",
"332nd_aux_cisb1ar_unit_332nd_CIS_B1_Support",
"332nd_aux_cisb1at_unit_332nd_CIS_B1_AT",
"332nd_aux_cisb1comm_unit_332nd_CIS_B1_Commander",
"332nd_aux_cisb1sec_unit_332nd_CIS_B1_Security",
"332nd_aux_cisb1sniper_unit_332nd_CIS_B1_Sniper",
"332nd_aux_cisb1pilot_unit_332nd_CIS_B1_Pilot",
"332nd_aux_cisb1crew_unit_332nd_CIS_B1_Crew",
"332nd_aux_cisb1marine_unit_332nd_CIS_B1_Marine",
"332nd_aux_cisb1jumppack_unit_332nd_CIS_B1_Jumppack"
],5];

_friendlyUnitPos = _unit;

{
	if (!(_x == _unit) && (alive _x) && !(lifeState _x == "INCAPACITATED")) then {
	
		_friendlyUnitPos = _x;
		break;
	};
} forEach _aliveDroids;


_rndNum = floor(random 10);
_rndSound = floor(random 4);
_obj2= "HeliHEmpty" createVehicleLocal [0,0,0]; 
_obj2 attachTo [_friendlyUnitPos,[0,0,1.5]];

switch (true) do {

	case (_rndNum <= 49): 
	{ 
		switch (true) do {
		
			case (_rndSound == 0): 
			{
				[_obj,["BX_FriendlyDown_1_332nd", 150, 1.2]] remoteExec ["say3d",0,true];
			};
			case (_rndSound == 1): 
			{
				[_obj,["BX_FriendlyDown_2_332nd", 150, 1.2]] remoteExec ["say3d",0,true];
			};
			case (_rndSound == 2): 
			{
				[_obj,["BX_FriendlyDown_3_332nd", 150, 1.2]] remoteExec ["say3d",0,true];
			};
			case (_rndSound == 3): 
			{
				[_obj,["BX_FriendlyDown_4_332nd", 150, 1.2]] remoteExec ["say3d",0,true];
			};
		
			default { [_obj,["BX_FriendlyDown_1_332nd", 150, 1.2]] remoteExec ["say3d",0,true]; };
		};
	};
	
	case (_rndNum >= 50): {};
	default {};
};


deleteVehicle _obj;
deleteVehicle _obj2;