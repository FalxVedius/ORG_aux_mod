params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];


[_patient, _usedItem] call ace_medical_treatment_fnc_addToTriageCard;

_medicname = name _medic;

_UsedItemStr = format ["%1 used Bacta Tank", _medicname];

[_patient, "activity", _UsedItemStr, [[_medic, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;


["Aux332nd_evh_BactaLocal", [_medic, _patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;