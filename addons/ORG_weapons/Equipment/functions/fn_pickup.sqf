#include "script_component.hpp"


params ["_dron", "_unit"];

if ((_unit call CBA_fnc_getUnitAnim) select 0 == "stand") then 
{
    _unit playMove "Acts_TreatingWounded_loop";
};

private _uspech = 
{
	// adding drone to inventory
	(_this select 0) params ["_dron", "_unit"];
	[_unit, "332nd_aux_weapon_CRD_4_Emara"] call ace_common_fnc_addToInventory;
	
	// removing drone
	(_this select 0) params ["_dron", "_unit"];
	deleteVehicle _dron;
};

[5, [_dron, _unit], _uspech, {Hint "Unable to pick up drone"}, "Retrieving drone"] call ACEFUNC(common,progressBar);

