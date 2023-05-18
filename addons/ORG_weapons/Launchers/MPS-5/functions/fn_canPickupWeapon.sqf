#include "script_component.hpp"

params ["_target", "_player"];

((secondaryWeapon _player) == "") && 
{(crew _target) isEqualTo []}
