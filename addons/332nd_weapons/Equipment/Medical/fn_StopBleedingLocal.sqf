params ["_patient", "_bodyPart", "_classname"];

if (!alive _patient) exitWith {};

_counter = 0;
_currentBloodVolume = _patient getVariable ["ace_medical_bloodVolume", 6.0];



private _painReduce             = 0;
private _timeInSystem           = 60;
private _timeTillMaxEffect      = 30;
private _maxDose                = 4;
private _viscosityChange        = -10;

private _hrIncreaseLow          = [-5,-10];
private _hrIncreaseNormal       = [-5,-20];
private _hrIncreaseHigh         = [-5,-20];
private _incompatibleMedication = [];

private _heartRate = _patient getVariable ["ace_medical_heartRate", 80];

private _hrIncrease = [_hrIncreaseLow, _hrIncreaseNormal, _hrIncreaseHigh] select (floor ((0 max _heartRate min 110) / 55));
_hrIncrease params ["_minIncrease", "_maxIncrease"];
private _heartRateChange = _minIncrease + random (_maxIncrease - _minIncrease);

[_patient, _className, _timeTillMaxEffect, _timeInSystem, _heartRateChange, _painReduce, _viscosityChange] call ace_medical_status_fnc_addMedicationAdjustment;



_handle = [_counter, _currentBloodVolume, _patient] spawn {

	params ["_counter", "_currentBloodVolume", "_patient"];

	while {true} do {

		scopeName "StopBleedingLoop_Local";
	
		if(_counter < 30) then
		{
			_patient setVariable ["ace_medical_bloodVolume", _currentBloodVolume];
			_counter = _counter + 1;
			sleep 1;
		}
		else
		{
			breakOut "StopBleedingLoop_Local";
		};

	};

};

