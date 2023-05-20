params ["_medic", "_patient", "_bodyPart", "_classname"];

if (!alive _patient) exitWith {};


_handle = [_counter, _patient, _medic] spawn {

	params ["_counter", "_patient", "_medic"];
	
	_counter = 0;
	
	_BruisesStart = _patient getVariable ["ace_medical_openWounds", []];
	
	_BruisesAmount = count _BruisesStart;

	while {_counter < _BruisesAmount} do {
		
		_BruisesStart deleteAt (count _BruisesStart - 1);
		
		_patient setVariable ["ace_medical_openWounds", _BruisesStart];
		
		_counter = _counter + 1;
		
		_medicname = name _medic;

		_UsedItemStr = format ["%1 cured some of bruises", _medicname];
		
		[_patient, "activity", _UsedItemStr, [[_medic, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;
		
		sleep 3;
	};
	
	_patient setVariable ["ace_medical_bodyPartDamage",[0,0,0,0,0,0],true];

};

