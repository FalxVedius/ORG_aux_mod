#include "script_component.hpp"

if (!hasInterface) exitWith {};

GVAR(nextReload) = QGVAR(HE);

// Add keybinds
["332nd Aux", "MPS-5 Reload", "Reload MPS-5",
{
    private _mortarVeh = vehicle ACE_player;
    if ((_mortarVeh == ACE_player) || {!(_mortarVeh isKindOf "332nd_aux_MPS_5_unit_Deployed")}) exitWith {false};
    if !([ACE_player, _mortarVeh, []] call ACEFUNC(common,canInteractWith)) exitWith {false};
    
    [_mortarVeh, ACE_player] call Aux332nd_MPS_fnc_doReload;

    true
},
{false},
[19, [false, false, false]], false] call CBA_fnc_addKeybind; //R Key

["vehicle", {_this call Aux332nd_MPS_fnc_handlePlayerVehicleChanged;}, true] call CBA_fnc_addPlayerEventHandler;
