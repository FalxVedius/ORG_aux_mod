/*
 * Author: PabstMirror
 * Reloads the weapon with the selected shell type.
 *
 * Arguments:
 * 0: Target (mortar) <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [mortar, player] call potato_vz99_fnc_doReload
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_mortarVeh", "_player"];

//If we have a round loaded, exit
private _loadedFull = magazinesAmmoFull _mortarVeh;
if (!(_loadedFull isEqualTo [])) exitWith {};

//Make sure empty mag is removed so it "autoloads"
private _loadedEmpty = _mortarVeh magazinesTurret [0];
if (!(_loadedEmpty isEqualTo [])) then {
    _mortarVeh removeMagazinesTurret [(_loadedEmpty select 0), [0]];
};

private _magToLoad = GVAR(nextReload);
if (_magToLoad == "") exitWith {};

if (!(_magToLoad in (magazines _player))) exitWith {
    ["No Ammo"] call ACEFUNC(common,displayTextStructured);
};

_player removeMagazine _magToLoad;

_mortarVeh addMagazineTurret [_magToLoad, [0]];
