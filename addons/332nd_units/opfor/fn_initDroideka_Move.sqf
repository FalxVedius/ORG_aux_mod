params ["_entity"];

if (is3DEN) exitWith {

};

_obj = _this select 0;
_unit = _obj select 0;

_vr = "O_Soldier_VR_F" createUnit [position _unit,[]];
_vr allowDamage false;
_vr hideObjectGlobal true;

_vr setUnitPos "DOWN";
_vr setUnitCombatMode "BLUE";
_vr setCombatBehaviour "CARELESS";

_d = direction _unit;
_vr setDir _d;

_unit attachTo [_vr];


if (isServer) then {

	while {alive _unit} do {
		
	
	};
	
	
	deleteVehicle _vr;
};
