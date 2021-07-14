params ["_medic", "_patient"];
//TRACE_2("cprSuccess",_medic,_patient);

systemChat "Got into Success";
_patient setVariable ["ace_medical_CPR_provider", objNull, true];



if (alive _patient && {_patient getVariable ["ace_medical_inCardiacArrest", false]}) then {
    //TRACE_1("sending cprLocal event",_patient);
	systemChat "Calling Restart Heart Local";
	
	systemChat format["Medic:%1, Patient:%2", _ma, _pa];

    ["Aux332nd_evh_RestartHeartLocal", [_medic, _patient], _patient] call CBA_fnc_targetEvent;
} else {
    //TRACE_1("not alive or in cardiac arrest",_patient);
};