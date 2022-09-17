params ["_laat"];
scopeName "main";

private _veh = _laat;
private _cfigV = [];
private _max = _laat getVariable ["TAS_LoadMax",3];
private _load = _laat getVariable ["TAS_Loaded",[]];
private _slot = count _load;

if (_slot >= _max) exitwith {hint "No spaces left"};

{ //scan for nearby vics
	if (_load find _x > -1) then {continue;}; //skip if already loaded
	
	if ((configFile >> "CfgVehicles" >> (typeOf _x) >> "tas_canBlift") call BIS_fnc_getCfgDataBool) then {
		
		if (_slot >= ((configFile >> "CfgVehicles" >> (typeOf _x) >> "tas_canBlift") call BIS_fnc_getCfgData)) then {
			hint "Too many vehicles loaded to fit " + str(typeOf _x);
			sleep 1;
			continue;
		}else{
			_veh = _x;
			breakTo "main";
		};
	};
}forEach nearestObjects [_laat modelToWorld [0,-6,-4],["LandVehicle"],TAS_lcLoadDist];
if (_veh == _laat) exitwith {hint "No compatible vehicles in range"};

_cfigV = parseSimpleArray ([configFile >> "CfgVehicles" >> (typeOf _veh), "tas_liftVars",[[[0,-3.7,-7.8]], [0], [0]]] call BIS_fnc_returnConfigEntry);
_cfigV params ["_pos","_hinge","_clamp"];

if (count _hinge < _max) then {
	_laat setVariable ["TAS_LoadMax", _max, true];
};
_laat setVariable ["TAS_Loaded", _load + [_veh], true];

playSound "TAS_Clamps";
_laat animatesource ["Clamp_hinges",_hinge select _slot, 1];
_laat animatesource ["Clamp",_clamp select _slot, 1];
sleep 0.8;

{ //reorganize previously loaded vics
	_x attachTo [_laat,(_pos select _slot) select _forEachIndex];
	sleep 0.1;
}forEach _load;

_veh attachTo [_laat,(_pos select _slot) select _slot];
sleep 0.1;