/*
 * Author: PabstMirror
 * Handles player getting into new vehicle.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: New Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, mortar] call potato_vz99_fnc_handlePlayerVehicleChanged
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_player", "_mortarVeh"];

if (isNull _player) exitWith {};
if (isNull _mortarVeh) exitWith {};
if (!(_mortarVeh isKindOf "332nd_aux_MPS_5_unit_Deployed")) exitWith {};

//Disable vehicle's NVG system based on if player is equiped
//Needed as we are in GUNNER view, so we need to use vehicle's vision system
_mortarVeh disableNVGEquipment ((hmd _player) == "");

[{
    params ["_args", "_pfID"];
    _args params ["_player", "_mortarVeh", "_levelCheck"];

    if ((!alive _player) || {!alive _mortarVeh} || {ACE_player != _player}) exitWith {

        [_pfID] call CBA_fnc_removePerFrameHandler;
    };

    if ((vehicle _player) != _mortarVeh) exitWith {

        [_pfID] call CBA_fnc_removePerFrameHandler;

        if (((_player distance _mortarVeh) < 5) &&
                {[_mortarVeh, _player] call Aux332nd_MPS_fnc_canPickupWeapon} &&
                {[_player, _mortarVeh, []] call ACEFUNC(common,canInteractWith)}) then {
            private _weaponDir = _mortarVeh weaponDirection (currentWeapon _mortarVeh);
            private _azimuth = (_weaponDir select 0) atan2 (_weaponDir select 1);

            _player setDir _azimuth;
            [_mortarVeh, _player] call Aux332nd_MPS_fnc_doPickupWeapon;
        };
    };
    
    //Check leveling system
    if (CBA_missionTime > _levelCheck) then {
        _args set [2, (CBA_missionTime + 5)];
        [_mortarVeh, false] call Aux332nd_MPS_fnc_levelToGround;
    };
    
}, 0, [_player, _mortarVeh, (CBA_missionTime + 1)]] call CBA_fnc_addPerFrameHandler;
