params ["_unit", "_source", "_damage", "_instigator"];

systemChat "Droideka Shield Hit Called";


_ShieldHealth = _unit getVariable ["ShieldHealth",nil];

if (_ShieldHealth > 0) then
{
	_health = (1 - (damage _unit / .00001)) * 100;
	_ShieldHealth = _unit getVariable ["ShieldHealth",nil];
	_diff = _ShieldHealth - (100 - _health);
	_unit setVariable ["_ShieldHealth", _diff];
	_unit setDamage 0;
};

if (_ShieldHealth <= 0) then
{
	deleteVehicle _unit;
};		