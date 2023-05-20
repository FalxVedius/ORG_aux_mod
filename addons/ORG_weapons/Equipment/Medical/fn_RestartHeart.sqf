params ["_medic", "_patient"];
//TRACE_2("cprSuccess",_medic,_patient);

_patient setVariable ["ace_medical_CPR_provider", objNull, true];



if (alive _patient && {_patient getVariable ["ace_medical_inCardiacArrest", false]}) then {
    //TRACE_1("sending cprLocal event",_patient);

    ["AuxORG_evh_RestartHeartLocal", [_medic, _patient], _patient] call CBA_fnc_targetEvent;
} else {
    //TRACE_1("not alive or in cardiac arrest",_patient);
};