params ["_medic", "_patient"];
//TRACE_2("cprLocal",_medic,_patient);

[_patient, "activity", "STR_ACE_medical_Activity_CPR", [[_medic, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;



if (true) then {
    //TRACE_1("CPR random success",GVAR(cprSuccessChance));
	systemChat "Calling Local event for CPR succeeded";
	
	_pa = toString _patient;
	systemChat "Local Patient:"
	systemChat _pa;
    ["ace_medical_CPRSucceeded", _patient] call CBA_fnc_localEvent;
	_patient setVariable ["ace_medical_heartRate",50, true];
} else {
    //TRACE_1("CPR random fail",GVAR(cprSuccessChance));
};