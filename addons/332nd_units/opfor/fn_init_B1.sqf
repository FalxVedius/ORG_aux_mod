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
					[_obj,["B1_incGrenade_1_332nd", 150, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 1): 
				{
					[_obj,["B1_incGrenade_2_332nd", 150, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 2): 
				{
					[_obj,["B1_incGrenade_3_332nd", 150, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 3): 
				{
					[_obj,["B1_incGrenade_4_332nd", 150, 1]] remoteExec ["say3D",0,true];
				};
			
				default { [_obj,["B1_incGrenade_1_332nd", 150, 1]] remoteExec ["say3D",0,true]; };
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
					[_obj,["B1_EnemyKilled_1_332nd", 150, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 1): 
				{
					[_obj,["B1_EnemyKilled_2_332nd", 150, 1]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 2): 
				{
					[_obj,["BX_EnemyDown_1_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 3): 
				{
					[_obj,["BX_EnemyDown_2_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 4): 
				{
					[_obj,["BX_EnemyDown_3_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 5): 
				{
					[_obj,["BX_EnemyDown_4_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 6): 
				{
					[_obj,["BX_EnemyHit_1_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 7): 
				{
					[_obj,["BX_EnemyHit_2_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 8): 
				{
					[_obj,["BX_EnemyHit_3_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
				case (_rndSound == 9): 
				{
					[_obj,["BX_EnemyHit_4_332nd", 150, 1.2]] remoteExec ["say3D",0,true];
				};
			
				default { [_obj,["B1_EnemyKilled_1_332nd", 150, 1]] remoteExec ["say3D",0,true]; };
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
