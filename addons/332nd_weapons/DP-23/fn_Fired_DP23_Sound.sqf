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

systemChat "Entered DP23 Sound";

_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
_obj attachTo [_unit,[0,0,1.5]];

sleep 0.45;

systemChat "Playing DP23 Sound";
playSound3D ["332nd_weapons\DP-23\sounds\DP-23Bolt.ogg", _obj, false, getPosASL _obj, 5, 1, 20];
			
sleep 2;

deleteVehicle _obj;

systemChat "Ending DP23 Sound";