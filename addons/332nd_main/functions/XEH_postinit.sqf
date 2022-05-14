["ace_medical_woundReceived", {

    params ["_unit", "_bodyPart", "_damage", "", "_typeOfDamage"];
    if (isPlayer _unit || {ace_medical_fatalDamageSource isEqualTo 0}) exitWith {};
	
    [{
        params ["_unit", "_bodyPart", "_damage", "_typeOfDamage"];
        private _bodyPartN = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find toLower _bodyPart;
		
        if (_bodyPartN < 2) exitWith {};

        if ((_typeOfDamage isEqualTo "") || {isNil {ace_medical_damage_allDamageTypesData getVariable _typeOfDamage}}) then 
		{
            _typeOfDamage = "unknown";
        };
		
        private _damageTypeInfo = [ace_medical_damage_allDamageTypesData getVariable _typeOfDamage] param [0, [[], false, []]];
        _damageTypeInfo params ["_thresholds"];

        (_unit getVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]]) params ["", "", "_leftarmDamage", "_rightarmDamage", "_leftlegDamage", "_rightlegDamage"];
		
        {
            _x params ["_thresholdMinDam", "_thresholdWoundCount"];
            if (_damage > _thresholdMinDam) exitWith 
			{
                private _woundDamage = _damage / (_thresholdWoundCount max 1);
                private _limbThreshhold = 1 * ace_medical_AIDamageThreshold;
                private _vitalDamage = ((_leftarmDamage + _rightarmDamage + _leftlegDamage + _rightlegDamage) - _limbThreshhold) max 0;
                private _chanceFatal = 1 - exp -((_vitalDamage/ace_medical_const_fatalSumDamageWeibull_L)^ace_medical_const_fatalSumDamageWeibull_K);

                if (_chanceFatal > random 1) then 
				{
                    ["ace_medical_FatalInjury", _unit] call CBA_fnc_localEvent;
                };
            };
			
        } forEach _thresholds;
		
    }, [_unit, _bodyPart, _damage, _typeOfDamage]] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;

["vehicle", {_this call Aux332nd_MPS_fnc_handlePlayerVehicleChanged;}, true] call CBA_fnc_addPlayerEventHandler;

