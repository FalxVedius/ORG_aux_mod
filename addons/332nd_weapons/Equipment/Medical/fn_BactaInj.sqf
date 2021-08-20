params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];


[_patient, _usedItem] call ace_medical_fnc_addToTriageCard;
[_patient, "activity", STR_ACE_medical_Activity_usedItem, [[_medic, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;


["Aux332nd_evh_BactaInjLocal", [_medic, _patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;