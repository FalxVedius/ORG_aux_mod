params ["_unit", "_killer", "_instigator", "_useEffects"];

_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
_obj attachTo [_unit,[0,0,1.5]];

playSound3D ["332nd_units\opfor\DeathSounds\B1_Death1.ogg", _obj, false, getPosASL _obj, 5, 1, 10];

deleteVehicle _obj;