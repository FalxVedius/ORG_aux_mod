params["_target","_shooter","_ammo"];

if (_target == _shooter) exitWith {false;};

if (getText(configFile>>"CfgVehicles">> typeOf _target >> "simulation") == "UAVPilot") exitWith {false;};

[_shooter,_target] call Aux332nd_fnc_RestartHeart;

[_shooter,_target, "RightArm", "Epinephrine", objNull, "ACE_epinephrine"] call ace_medical_treatment_fnc_medication;


