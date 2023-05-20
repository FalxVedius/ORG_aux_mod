/*
 * Author: PabstMirror
 * Tests if player can select the magazine by checking if player has it's base class in inventory.
 *
 * Arguments:
 * 0: Magazine Classname <STRING>
 *
 * Return Value:
 * <BOOL>
 *
 * Example:
 * ["potato_vz99_he"] call potato_vz99_fnc_canSelectNextMagazine
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_magazineClassname"];

_magazineClassname in (magazines ace_player)
