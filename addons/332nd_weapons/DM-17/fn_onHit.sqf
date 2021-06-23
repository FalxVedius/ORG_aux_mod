params["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if (isNil{_ammo select 4}) exitWith {};

if (!alive _target) exitWith {};

private _ammoUsed = _ammo select 4;

if (getNumber(configFile >> "CfgAmmo" >> _ammoUsed >> "Aux332nd_IsMedicRound") == 1) then {[_target,_shooter,_ammoUsed] call Aux332nd_fnc_onHitMedic};