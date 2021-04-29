
params[
	["_Red",0.0,[0.0]],
	["_Green",0.0,[0.0]],
	["_Blu",0.0,[0.0]],
	["_Alpha",0.0,[0.0]],
	["_vic",(vehicle player), [(vehicle player)]]
];



_Red = [_Red,0,255] call BIS_fnc_clamp;
_Green = [_Green,0,255] call BIS_fnc_clamp;
_Blu = [_Blu,0,255] call BIS_fnc_clamp;
_Alpha = [_Alpha,0,1] call BIS_fnc_clamp;

(_vic) setUserMFDvalue [0, _Red]; 
(_vic) setUserMFDvalue [1, _Green]; 
(_vic) setUserMFDvalue [2, _Blu]; 
(_vic) setUserMFDvalue [3, _Alpha];
