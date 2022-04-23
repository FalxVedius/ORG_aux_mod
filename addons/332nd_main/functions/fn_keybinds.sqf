#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "script_component.hpp"

// Reset Animation
[
	["332nd Aux", "Animations"], 											// mod name (modify to whatevs)
	"ResetAnimation_332nd_key", 											// action ID
	["Reset Animation", "Resets the current animation of the player"], 	// Action name
	{ false call aux_332nd_fnc_resetAnimation }, 									// For keypressdown
	""													// for keypressup
] call CBA_fnc_addKeybind;


GVAR(nextReload) = QGVAR(HE);
// Add keybinds
["332nd Aux", "Weapons", "Reload MPS-5",
{
    private _mortarVeh = vehicle ACE_player;
    if ((_mortarVeh == ACE_player) || {!(_mortarVeh isKindOf "332nd_aux_MPS_5_unit_Deployed")}) exitWith {false};
    if !([ACE_player, _mortarVeh, []] call ACEFUNC(common,canInteractWith)) exitWith {false};
    
    [_mortarVeh, ACE_player] call Aux332nd_MPS_fnc_doReload;

    true
},
{false},
[19, [false, false, false]], false] call CBA_fnc_addKeybind; //R Key
