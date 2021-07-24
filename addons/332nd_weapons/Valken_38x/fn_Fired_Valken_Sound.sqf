params
[
	"_unit",
	"_weapon",
	"_muzzle",
	["_ammo","",[""]]
];

// exit for non local units
if(!(local _unit))exitWith{};

// exit if it was last round
if((_unit ammo _weapon) isEqualTo 0)exitWith{};

systemChat "Entered Valekn Sound";

_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
_obj attachTo [_unit,[0,0,1.5]];

sleep 0.4;

systemChat "Playing Valekn Sound";
playSound3D ["332nd_weapons\Valken_38x\sounds\ValkenBolt.ogg", _obj, false, getPosASL _obj, 5, 1, 20];
			

sleep 2;

deleteVehicle _obj;

systemChat "Ending Valekn Sound";