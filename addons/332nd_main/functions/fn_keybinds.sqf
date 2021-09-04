#include "\a3\editor_f\Data\Scripts\dikCodes.h"

// Reset Animation
[
	["332nd Aux", "Animations"], 											// mod name (modify to whatevs)
	"ResetAnimation_332nd_key", 											// action ID
	["Reset Animation", "Resets the current animation of the player"], 	// Action name
	{ false call aux_332nd_fnc_resetAnimation }, 									// For keypressdown
	""													// for keypressup
] call CBA_fnc_addKeybind;
