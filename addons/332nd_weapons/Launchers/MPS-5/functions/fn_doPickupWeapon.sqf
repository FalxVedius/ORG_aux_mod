/*
 * Author: PabstMirror
 * Picks up a deployed static weapon.
 *
 * Arguments:
 * 0: Target (mortar) <OBJECT>
 * 1: Player <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [mortar, player] call potato_vz99_fnc_doPickupWeapon
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_target", "_player"];
{
    _x params ["_xClassname", "_xAmmo"];
    if (_xAmmo > 0) then {
        private _baseMag = getText (configFile >> "CfgMagazines" >> _xClassname >> "Aux332nd_MPS_5_base");

        [_player, _baseMag, "", _xAmmo] call ACEFUNC(common,addToInventory);
    };
} forEach (magazinesAmmoFull _target);

deleteVehicle _target;
_player addWeapon "332nd_aux_weapon_MPS_5_Carry";

