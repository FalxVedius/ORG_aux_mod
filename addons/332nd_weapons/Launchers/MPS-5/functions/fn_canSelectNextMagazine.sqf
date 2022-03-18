#include "script_component.hpp"

params ["_magazineClassname"];

private _baseMag = getText (configFile >> "CfgMagazines" >> _magazineClassname >> "Aux332nd_MPS_5_base");

_msg = str _baseMag;

systemChat _msg;

_baseMag in (magazines ace_player)
