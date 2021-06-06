_obj = _this select 0;

_laat = _obj select 0;
_ammocrate = _this select 1;
_medicalcrate = _this select 2;


[_ammocrate, _laat] call ace_cargo_fnc_addCargoItem;
[_medicalcrate, _laat] call ace_cargo_fnc_addCargoItem;