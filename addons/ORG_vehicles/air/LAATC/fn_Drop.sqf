params ["_LAAT"];

_vehicles = _LAAT getVariable "TAS_Loaded";

_LAAT allowDamage false;
playSound "TAS_Clamps";
_LAAT animatesource ["Clamp_hinges",-0.2,2];
sleep 0.5;
{
	_x allowDamage false;
	detach _x;
	_vehPos = getPosATL _x;
	_vehstring = str _vehPos;
	systemChat _vehstring;
	_NewPos = _vehPos vectorDiff [0, 0, 1];
	_x setVehiclePosition [ _NewPos,[],0,"CAN_COLLIDE"];
	_vehPos = getPosATL _x;
	_vehstring = str _vehPos;
	systemChat _vehstring;
	_x setVelocity [0,0,-1];
	sleep 0.5;
	_x allowDamage true;
} forEach _vehicles;

_LAAT allowDamage true;
_LAAT setVariable ["TAS_Loaded", [], true];
_LAAT animatesource ["Clamp_hinges",0,2];
_laat animatesource ["Clamp", 0.35, 1];