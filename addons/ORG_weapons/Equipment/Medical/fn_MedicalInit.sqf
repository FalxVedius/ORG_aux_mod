["AuxORG_evh_RestartHeartLocal", { _this call AuxORG_fnc_RestartHeartLocal }] call CBA_fnc_addEventHandler;
["AuxORG_evh_StopBleedingLocal", { _this call AuxORG_fnc_StopBleedingLocal }] call CBA_fnc_addEventHandler;
["AuxORG_evh_BactaLocal", { _this call AuxORG_fnc_BactaLocal }] call CBA_fnc_addEventHandler;
["AuxORG_evh_KoltoLocal", { _this call AuxORG_fnc_KoltoLocal }] call CBA_fnc_addEventHandler;
["AuxORG_evh_BactaInjLocal", { _this call AuxORG_fnc_BactaInjLocal }] call CBA_fnc_addEventHandler;
["AuxORG_evh_KoltoInjLocal", { _this call AuxORG_fnc_KoltoInjLocal }] call CBA_fnc_addEventHandler;
["AuxORG_evh_ProteinLocal", { _this call AuxORG_fnc_ProteinLocal }] call CBA_fnc_addEventHandler;

["AuxORG_evh_BandageLocal", { _this call ace_medical_treatment_fnc_bandage }] call CBA_fnc_addEventHandler;
["AuxORG_evh_StitchLocal", { _this call ace_medical_treatment_fnc_surgicalKitProgress }] call CBA_fnc_addEventHandler;