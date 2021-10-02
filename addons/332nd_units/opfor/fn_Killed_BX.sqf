params ["_unit", "_killer", "_instigator", "_useEffects"];


_rndAnim = selectRandom ["B1_Droid_die_1","B1_Droid_die_2","B1_Droid_die_3", "NoAnim"];

if (_rndAnim != "NoAnim") then {

	[_unit, _rndAnim] remoteExec ["switchMove", 0];
	
	_unit playActionNow "Disable_Gesture";
	
	if (_rndAnim == "B1_Droid_die_2") then {
	
		[_unit, 0.8] remoteExec ["setAnimSpeedCoef", 0];
	};
	
	if (_rndAnim == "B1_Droid_die_3") then {
	
		[_unit, 0.5] remoteExec ["setAnimSpeedCoef", 0];
	};
};

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
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-1.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 1): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-2.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 2): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-3.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 3): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-4.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 4): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-5.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 5): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-6.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 6): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-7.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 7): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-8.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 8): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-9.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 9): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-10.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 10): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-11.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 11): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-12.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 12): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-13.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 13): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-14.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 14): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-15.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 15): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-16.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 16): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-17.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 17): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-18.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 18): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-19.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 19): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-20.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 20): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-21.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 21): 
			{
				playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-22.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
			};
			case (_rndSound == 22): 
			{
				_rndYoda = floor(random 100);
				
				switch (true) do {
				
					case (_rndYoda <= 5): 
					{
						playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-23.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125];
					};
					case (_rndYoda >= 6): 
					{
						playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-1.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125]; 
					};
					
					default {};
				};
				
			};
			
			default { playSound3D ["332nd_units\opfor\DeathSounds\B1-Death-Sound-1.ogg", _obj, false, getPosASL _obj, 5, 0.8, 125]; };
		};

	};
	
	//70% chance of playing no sound
	case (_rndNum >= 5): {};
	default {};
};


{
	if (!(_x == _unit) and (alive _x) and !(lifeState _x == "INCAPACITATED")) then {
	
		friendlyUnitPos = _x;
	};
} forEach nearestObjects [_unit,
[
"332nd_aux_cisbx_unit_332nd_CIS_BX",
"332nd_aux_cisbxcapt_unit_332nd_CIS_BX_Captain",
"332nd_aux_cisbxsec_unit_332nd_CIS_BX_Security",
"332nd_aux_cisbxdiplo_unit_332nd_CIS_BX_Diplomat",
"332nd_aux_cisbxassassin_unit_332nd_CIS_BX_Assassin",
"332nd_aux_cisbxmelee_unit_332nd_CIS_BX_Melee",
"332nd_aux_cisbxmeleerush_unit_332nd_CIS_BX_MeleeRush",
"332nd_aux_cisbxar_unit_332nd_CIS_BX_Support",
"332nd_aux_cisbxat_unit_332nd_CIS_BX_AT",
"332nd_aux_cisbxbreach_unit_332nd_CIS_BX_BREACHER"
],15];


_rndNum = floor(random 10);
_rndSound = floor(random 4);

switch (true) do {

	case (_rndNum <= 4): 
	{ 
		switch (true) do {
		
			case (_rndSound == 0): 
			{
				playSound3D ["332nd_units\opfor\VoiceSounds\FriendlyDown_03.wav", friendlyUnitPos, false, getPosASL friendlyUnitPos, 5, 1, 125];
			};
			case (_rndSound == 1): 
			{
				playSound3D ["332nd_units\opfor\VoiceSounds\FriendlyDown_05.wav", friendlyUnitPos, false, getPosASL friendlyUnitPos, 5, 1, 125];
			};
			case (_rndSound == 2): 
			{
				playSound3D ["332nd_units\opfor\VoiceSounds\FriendlyDown_06.wav", friendlyUnitPos, false, getPosASL friendlyUnitPos, 5, 1, 125];
			};
			case (_rndSound == 3): 
			{
				playSound3D ["332nd_units\opfor\VoiceSounds\FriendlyDown_21.wav", friendlyUnitPos, false, getPosASL friendlyUnitPos, 5, 1, 125];
			};
		
			default { playSound3D ["332nd_units\opfor\VoiceSounds\FriendlyDown_03.wav", friendlyUnitPos, false, getPosASL friendlyUnitPos, 5, 1, 125]; };
		};
	};
	
	case (_rndNum >= 5): {};
	default {};
};


deleteVehicle _obj;