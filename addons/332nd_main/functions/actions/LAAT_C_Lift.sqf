#include "\a3\editor_f\Data\Scripts\dikCodes.h"

params[
	["_vic", vehicle player, [vehicle player]]
];

//Lift
[["3AS Mod","LAAT/C Lift"],"TAS_liftNear",["Lift Nearest Vehicle","Lift Nearest Vehicle"],{
	if(((configFile >> "CfgVehicles" >> (typeOf (vehicle JLTS_playerControlled)) >> "tas_canLift") call BIS_fnc_getCfgDataBool) AND (speed vehicle JLTS_playerControlled < 5) AND (JLTS_playerControlled == currentPilot vehicle JLTS_playerControlled)) then {
		[vehicle JLTS_playerControlled] spawn TAS_fnc_Maglift;
	};
] call ace_common_fnc_displayTextStructured

[["3AS Mod","LAAT/C Lift"],"TAS_liftDrop",["Drop Loaded Vehicles","Drop Loaded Vehicles"],{
	if(count(vehicle JLTS_playerControlled getVariable ["TAS_Loaded",[]]) > 0) then {
		[vehicle JLTS_playerControlled] spawn TAS_fnc_MagDrop;
	};
},{},[DIK_V, [false, true, false]], false] call cba_fnc_addKeybind;