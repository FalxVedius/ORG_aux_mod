params ["_entity"];

if (is3DEN) exitWith {

};

if (isServer) then {

	_obj = _this select 0;
	_unit = _obj select 0;
	_unit allowFleeing 0;
	_unit disableAI "MINEDETECTION";
	_unit disableAI "SUPPRESSION";
	_unit disableAI "COVER";

};
