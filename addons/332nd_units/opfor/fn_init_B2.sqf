params ["_entity"];

if (is3DEN) exitWith {

};

if (isServer) then {

	_obj = _this select 0;
	_unit = _obj select 0;
	_unit allowFleeing 0;
	_unit setSpeaker "NoVoice";
	_unit disableAI "MINEDETECTION";
	_unit disableAI "SUPPRESSION";
	_unit disableAI "COVER";
	_unit setUnitPos "UP";
	[_unit, "B2_SupperBattleDroid_idle"] remoteExec ["switchMove", 0];
	
	
	
	_unit addEventHandler ["PathCalculated",
	{ 
		_unit = _this select 0;
		
		_unit spawn 
		{
		
			sleep 0.5;
			_this playMoveNow "B2_SupperBattleDroid_walk";
		};
		
		_pathFindPoses = _this select 1;
		_arStart = _unit getVariable "WBK_DT_PathFindingObjects";
		
		if (!(isNil "_arStart")) then 
		{
			deleteVehicle _arStart;
		};
		
		_lastPoint = _pathFindPoses select (count _pathFindPoses - 1);
		
		_marker = "Sign_Arrow_Yellow_F" createVehicleLocal _lastPoint; 
		_marker hideObject true;
		
		_unit setVariable ["WBK_DT_PathFindingObjects",_marker];
		
		[_unit,_marker] spawn 
		{
			_unit = _this select 0;
			_marker = _this select 1;
			waitUntil 
			{
				sleep 0.2; 
				if ((isNull _unit) or (isNull _marker) or !(alive _unit)) exitWith { true };
				
				((_unit distance _marker) <= 2)
			};
			_unit playMoveNow "B2_SupperBattleDroid_idle";
		};
	}];
	
	
	
	
	_GrenadeHandler = [{
	
		_obj = _this select 0;
		_unitLocal = _obj select 0;
		_grenades = count (_unitLocal nearObjects ["GrenadeHand", 4]);
		
		if ((_grenades >= 1)) then {
		
			_rndSound = floor(random 2);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unitLocal,[0,0,1.5]];
			
			switch (true) do {
		
				case (_rndSound == 0): 
				{
					[_obj,["WBK_b2_incGrenade_1_332nd", 150, 0.8]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 1): 
				{
					[_obj,["WBK_b2_incGrenade_2_332nd", 150, 0.8]] remoteExec ["say3D",0,true];
				};
			
				default { [_obj,["WBK_b2_incGrenade_1_332nd", 150, 0.8]] remoteExec ["say3D",0,true]; };
			};
		};
	
	}, 1, [_unit]] call CBA_fnc_addPerFrameHandler;
	
	
	
	_EnemyDownHandler = [{
	
		_obj = _this select 0;
		_unitLocal = _obj select 0;
		_unconList = nearestObjects [_unitLocal, ["CAManBase"], 5];
		
		_UnconFlag = false;
		
		{
			_isUncon = _x getVariable ["ACE_isUnconscious", false];
		
			if (_isUncon && (isPlayer _x)) then {

				_UnconFlag = true;
				break;
			};
			
		} forEach _unconList;
		
		if (_UnconFlag) then {
		
		systemChat "Player found to be unconcious";
		
			_rndSound = floor(random 10);
			_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
			_obj attachTo [_unitLocal,[0,0,1.5]];
			
			switch (true) do {
		
				case (_rndSound == 0): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_EnemyKilled_1.ogg", _obj, false, getPosASL _obj, 5, 0.6, 125];
					
				};
				case (_rndSound == 1): 
				{
					playSound3D ["WebKnightsRobotics\sounds\B1_EnemyKilled_2.ogg", _obj, false, getPosASL _obj, 5, 0.6, 125];
				};
				case (_rndSound == 2): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyDown_02.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 3): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyDown_08.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 4): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyDown_09.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 5): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyDown_25.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 6): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyHit_02.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 7): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyHit_03.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 8): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyHit_20.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
				case (_rndSound == 9): 
				{
					playSound3D ["332nd_units\opfor\VoiceSounds\EnemyHit_24.wav", _obj, false, getPosASL _obj, 5, 0.8, 125];
				};
			
				default { playSound3D ["WebKnightsRobotics\sounds\B1_EnemyKilled_1.ogg", _obj, false, getPosASL _obj, 5, 0.6, 125]; };
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
