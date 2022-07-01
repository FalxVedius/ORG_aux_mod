params ["_unit", "_killer", "_instigator", "_useEffects"];


private _localUnit = _unit;
[_localUnit] spawn
{
	params ["_localUnit"];
	
	sleep 1;
	
	_localUnit enableSimulation false;
};


if (isPlayer _killer) then {

	_killer addPlayerScores [0, 0, 1, 0, 0];

};
