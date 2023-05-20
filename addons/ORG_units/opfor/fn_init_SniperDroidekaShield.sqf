params ["_entity"];

if (is3DEN) exitWith {

};

if (isServer) then {

	_obj = _this select 0;
	_unit = _obj select 0;
	
	_unit setVariable ["ShieldHealth",600];
	
	_unit addEventHandler ["Hit",{
	
		params ["_unit", "_source", "_damage", "_instigator"];
		
		
		_ShieldHealth = _unit getVariable ["ShieldHealth",nil];
		
		if (_ShieldHealth > 0) then
		{
			_ShieldHealth = _unit getVariable ["ShieldHealth",nil];
			
			_magazineClass = currentMagazine _instigator;
			_ammoClass = getText ( configFile >> "CfgMagazines" >> _magazineClass >> "ammo" );
			_dmgHit = getNumber ( configFile >> "CfgAmmo" >> _ammoClass >> "hit" );
			_dmgCal = getNumber ( configFile >> "CfgAmmo" >> _ammoClass >> "caliber" );
			
			_dmgUnequalized = _dmgCal * _dmgHit;
	
			_dmg = _dmgUnequalized * 0.5;
			
			_diff = _ShieldHealth - _dmg;
			_unit setVariable ["ShieldHealth", _diff];
			
			_unit setDamage 0;
			
		};
		
		if (_ShieldHealth <= 0) then
		{
			deleteVehicle _unit;
		};
		
	}];
};