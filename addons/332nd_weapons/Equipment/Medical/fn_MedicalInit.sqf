["Aux332nd_evh_RestartHeartLocal", { _this call Aux332nd_fnc_RestartHeartLocal }] call CBA_fnc_addEventHandler;
["Aux332nd_evh_StopBleedingLocal", { _this call Aux332nd_fnc_StopBleedingLocal }] call CBA_fnc_addEventHandler;
["Aux332nd_evh_BactaLocal", { _this call Aux332nd_fnc_BactaLocal }] call CBA_fnc_addEventHandler;
["Aux332nd_evh_KoltoLocal", { _this call Aux332nd_fnc_KoltoLocal }] call CBA_fnc_addEventHandler;
["Aux332nd_evh_BactaInjLocal", { _this call Aux332nd_fnc_BactaInjLocal }] call CBA_fnc_addEventHandler;
["Aux332nd_evh_KoltoInjLocal", { _this call Aux332nd_fnc_KoltoInjLocal }] call CBA_fnc_addEventHandler;

["Aux332nd_evh_BandageLocal", { _this call ace_medical_treatment_fnc_bandage }] call CBA_fnc_addEventHandler;
["Aux332nd_evh_StitchLocal", { _this call ace_medical_treatment_fnc_surgicalKitProgress }] call CBA_fnc_addEventHandler;