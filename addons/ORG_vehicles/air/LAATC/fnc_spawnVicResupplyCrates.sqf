_obj = _this select 0;

_laat = _obj select 0;
_vehcrate = _this select 1;


[_vehcrate, _laat] call ace_cargo_fnc_addCargoItem;
[_vehcrate, _laat] call ace_cargo_fnc_addCargoItem;

missionNamespace setVariable ["ACE_maxWeightDrag", 50000];
missionNamespace setVariable ["ACE_maxWeightCarry", 50000];