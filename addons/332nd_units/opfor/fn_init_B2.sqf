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
};
