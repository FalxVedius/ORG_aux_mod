#include "script_component.hpp"


params["_unit", "_dronItem"];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then
{
	_unit playMove "Acts_TreatingWounded_loop";
};

private _uspech = 
{
	// removing drone from inventory
	(_this select 0) params["_unit", "_dronItem"];
	_unit removeItem _dronItem;


	// prevent collision damage
	[QEGVAR(common,fixCollision), _unit] call CBA_fnc_localEvent;

	// finding position to place drone
	private _direction = getDir _unit;
	private _position = (getPosASL _unit) vectorAdd[0.8 * sin(_direction), 0.8 * cos(_direction), 0];
	private _vectorUp = [0, 0, 1];
	private _intersections = lineIntersectsSurfaces[_position vectorAdd[0, 0, 1.5], _position vectorDiff[0, 0, 1.5], _unit, objNull, true, 1, "GEOM", "FIRE"];

	if (_intersections isEqualTo[]) then 
	{
		TRACE_1("No intersections",_intersections);
	}
	else
	{
		 (_intersections select 0) params["_touchingPoint", "_surfaceNormal"];
		 _position = _touchingPoint vectorAdd[0, 0, 0.05];
		_vectorUp = _surfaceNormal;
	};

	// placing drone
	(_this select 0) params["_unit", "_dronItem"];
	private _condition = side _unit;
	private _dron;
	switch (_condition) do 
	{
		case WEST: 
		{
			_dron = "ORG_aux_vehicle_Air_CRD_4_Emara" createVehicle[0, 0, 0];
			createVehicleCrew _dron;
			_dron setDir _direction;
			_dron setPosASL _position;
			_dron setVectorUp _vectorUp;
			[QEGVAR(common,fixPosition), _dron, _dron] call CBA_fnc_targetEvent;
			[QEGVAR(common,fixFloating), _dron, _dron] call CBA_fnc_targetEvent;

			// finishing placement
			(_this select 0) params["_unit", "_dronItem"];
			_unit reveal _dron;
		};
		default {};
	};
};

[5, [_unit, _dronItem], _uspech, { Hint "Unable to place drone" }, "Placing drone"] call ACEFUNC(common,progressBar);