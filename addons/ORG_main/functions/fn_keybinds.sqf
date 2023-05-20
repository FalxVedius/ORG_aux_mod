#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "script_component.hpp"

// Reset Animation
[
	["ORG Aux", "Animations"], 											// mod name (modify to whatevs)
	"ResetAnimation_ORG_key", 											// action ID
	["Reset Animation", "Resets the current animation of the player"], 	// Action name
	{ false call aux_ORG_fnc_resetAnimation }, 									// For keypressdown
	""													// for keypressup
] call CBA_fnc_addKeybind;

// Place Map Marker
[
	["ORG Aux", "Map Markers"], 											// mod name (modify to whatevs)
	"PlaceMarker_ORG_key", 											// action ID
	["Place Dot Marker", "Places a black dot on your location"], 	// Action name
	{ false call aux_ORG_fnc_placeMarker }, 									// For keypressdown
	""													// for keypressup
] call CBA_fnc_addKeybind;


GVAR(nextReload) = QGVAR(HE);
// Add keybinds
["ORG Aux", "Weapons", "Reload MPS-5",
{
    private _mortarVeh = vehicle ACE_player;
    if ((_mortarVeh == ACE_player) || {!(_mortarVeh isKindOf "ORG_aux_MPS_5_unit_Deployed")}) exitWith {false};
    if !([ACE_player, _mortarVeh, []] call ACEFUNC(common,canInteractWith)) exitWith {false};
    
    [_mortarVeh, ACE_player] call AuxORG_MPS_fnc_doReload;

    true
},
{false},
[19, [false, false, false]], false] call CBA_fnc_addKeybind; //R Key
