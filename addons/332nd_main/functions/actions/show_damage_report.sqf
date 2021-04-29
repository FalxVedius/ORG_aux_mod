params[
	["_vic", vehicle player, [vehicle player]]
];

[
	[
		"<t color='#0099FF'> Hull Integrity is : %1%2</t>",
		((1-(damage (_vic)))*100),
		"%"
	], 
	1.5
] call ace_common_fnc_displayTextStructured