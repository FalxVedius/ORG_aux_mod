params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];



_obj= "HeliHEmpty" createVehicleLocal [0,0,0]; 
_obj attachTo [_unit,[0,0,1.5]];

sleep 2;
		
playSound3D ["332nd_weapons\DP-23\sounds\DP-23Bolt.wss", _obj, false, getPosASL _obj, 5, 1, 10];
			


deleteVehicle _obj;