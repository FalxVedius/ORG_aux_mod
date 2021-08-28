params ["_medic", "_patient", "_bodyPart", "_classname"];

if (!alive _patient) exitWith {};

_bloodVolume = _patient getVariable ["ace_medical_bloodVolume", 6.0];

_partIndex = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find toLower _bodyPart;

private _volume = 1;
private _type   = "Blood";

private _ivBags = _patient getVariable ["ace_medical_ivBags", []];
_ivBags pushBack [_volume, _type, _partIndex];
_patient setVariable ["ace_medical_ivBags", _ivBags, true];

_counter = 0;


_handle = [_counter, _patient, _medic] spawn {

	params ["_counter", "_patient", "_medic"];

	while {true} do {

		scopeName "BactaLoop_Local";
	
		if(_counter < 5) then
		{
			_wounds = _patient getVariable ["ace_medical_openWounds", []];
			_bandagedWounds = _patient getVariable ["ace_medical_bandagedWounds", []];
			_stitchedWounds = _patient getVariable ["ace_medical_stitchedWounds", []];
			
			if (_bandagedWounds isEqualTo [] && _wounds isEqualTo []) then { breakOut "BactaLoop_Local"; };
		
			["Aux332nd_evh_BandageLocal", [_medic, _patient, "head", "ElasticBandage"], _patient] call CBA_fnc_targetEvent;
			["Aux332nd_evh_StitchLocal", [[objNull, _patient], 12, 10], _patient] call CBA_fnc_targetEvent;
			
			sleep 3;
			
			["Aux332nd_evh_BandageLocal", [_medic, _patient, "body", "ElasticBandage"], _patient] call CBA_fnc_targetEvent;
			["Aux332nd_evh_StitchLocal", [[objNull, _patient], 12, 10], _patient] call CBA_fnc_targetEvent;
			
			sleep 3;
			
			["Aux332nd_evh_BandageLocal", [_medic, _patient, "leftarm", "ElasticBandage"], _patient] call CBA_fnc_targetEvent;
			["Aux332nd_evh_StitchLocal", [[objNull, _patient], 12, 10], _patient] call CBA_fnc_targetEvent;
			
			sleep 3;
			
			["Aux332nd_evh_BandageLocal", [_medic, _patient, "rightarm", "ElasticBandage"], _patient] call CBA_fnc_targetEvent;
			["Aux332nd_evh_StitchLocal", [[objNull, _patient], 12, 10], _patient] call CBA_fnc_targetEvent;
			
			sleep 3;
			
			["Aux332nd_evh_BandageLocal", [_medic, _patient, "leftleg", "ElasticBandage"], _patient] call CBA_fnc_targetEvent;
			["Aux332nd_evh_StitchLocal", [[objNull, _patient], 12, 10], _patient] call CBA_fnc_targetEvent;
			
			sleep 3;
			
			["Aux332nd_evh_BandageLocal", [_medic, _patient, "rightleg", "ElasticBandage"], _patient] call CBA_fnc_targetEvent;
			["Aux332nd_evh_StitchLocal", [[objNull, _patient], 12, 10], _patient] call CBA_fnc_targetEvent;
			
			sleep 3;
			
			_counter = _counter + 1;
		}
		else
		{
			breakOut "BactaLoop_Local";
		};

	};

};

