_trooper = player;

_markerName = format ["_USER_DEFINED dotmarker%1", floor random 50000 ];

_marker = createMarker [_markerName, _trooper, 1];
_marker setMarkerType "hd_dot";

playSound "TacticalPing";