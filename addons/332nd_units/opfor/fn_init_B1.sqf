params ["_entity"];

if (is3DEN) exitWith {

};

if (isServer) then {

	_obj = _this select 0;
	_unit = _obj select 0;
	_unit allowFleeing 0;
	_unit disableAI "MINEDETECTION";
	_unit disableAI "SUPPRESSION";
	_unit disableAI "COVER";
	_unit setSpeaker "NoVoice";
	
	_GrenadeHandler = [{
	
		_obj = _this select 0;
		_unitLocal = _obj select 0;
		_grenades = count (_unitLocal nearObjects ["GrenadeHand", 4]);
		
		if ((_grenades >= 1)) then {
		
			_rndSound = floor(random 4);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unitLocal,[0,0,1.5]];
			
			switch (true) do {
		
				case (_rndSound == 0): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_incGrenade_1.ogg", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 1): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_incGrenade_2.ogg", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 2): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_incGrenade_3.ogg", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 3): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_incGrenade_4.ogg", _obj, false, getPosASL _obj, 5, 1, 150];
				};
			
				default { playSound3D ["WebKnightsRobotics\sounds\B1_shooting_1.ogg", _obj, false, getPosASL _obj, 5, 1, 150]; };
			};
		};
	
	}, 1, [_unit]] call CBA_fnc_addPerFrameHandler;
	
	
	
	_EnemyDownHandler = [{
	
		_obj = _this select 0;
		_unitLocal = _obj select 0;
		_unconList = nearestObjects [_unitLocal, ["CAManBase"], 15];
		
		_UnconFlag = false;
		
		{
			_isUncon = _x getVariable ["ACE_isUnconscious", false];
		
			if (_isUncon && (isPlayer _x)) then {

				_UnconFlag = true;
				break;
			};
			
		} forEach _unconList;
		
		if (_UnconFlag) then {
		
			_rndSound = floor(random 10);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unitLocal,[0,0,1.5]];
			
			switch (true) do {
		
				case (_rndSound == 0): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_EnemyKilled_1.ogg", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 1): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_EnemyKilled_2.ogg", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 2): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyDown_02.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 3): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyDown_08.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 4): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyDown_09.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 5): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyDown_25.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 6): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyHit_02.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 7): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyHit_03.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 8): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyHit_20.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
				case (_rndSound == 9): 
				{
					playSound3D ["WebKnightsRobotics\sounds\EnemyHit_24.wav", _obj, false, getPosASL _obj, 5, 1, 150];
				};
			
				default { playSound3D ["WebKnightsRobotics\sounds\B1_EnemyKilled_1.ogg", _obj, false, getPosASL _obj, 5, 1, 150]; };
			};
		};
	
	}, 30, [_unit]] call CBA_fnc_addPerFrameHandler;
	
	

	waitUntil {
		sleep 0.5; 
		if (isNull _unit) exitWith { true };
		(!(alive _unit))
	};
	[_GrenadeHandler] call CBA_fnc_removePerFrameHandler;
	[_EnemyDownHandler] call CBA_fnc_removePerFrameHandler;
};
