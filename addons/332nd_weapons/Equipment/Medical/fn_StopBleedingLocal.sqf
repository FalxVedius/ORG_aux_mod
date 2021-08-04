params ["_patient", "_bodyPart", "_classname"];

if (!alive _patient) exitWith {};

_counter = 0;
_currentBloodVolume = _patient getVariable ["ace_medical_bloodVolume", 6.0];


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

