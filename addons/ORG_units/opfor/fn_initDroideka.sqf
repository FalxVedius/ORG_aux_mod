params ["_entity"];

if (is3DEN) exitWith {

};

if (isServer) then {

	_obj = _this select 0;
	_unit = _obj select 0;

	_coolDownTimer = 0;
	_timer = 0;
	_endTime = 1;
	_shield = nil;
	
	
	while {alive _unit} do {
		
		if((getDammage _unit) > 0) then
		{
			switch (true) do
			{
				case (_timer == 0): 
				{ 
					_shield = "Droideka_Shield" createVehicle getPos _unit;
					_shield attachTo [_unit, [-0.05, 0.06,-0.8]];
					
					playSound3D ["3AS\3AS_Shield\shield_grenade\enable.ogg", _unit, false, getPos _unit, 5, 0.7, 100];
				
					_timer = diag_tickTime;
					_endTime = diag_tickTime + 30;
					_coolDownTimer = diag_tickTime + 80;
				};
				case (diag_tickTime >= _endTime): 
				{ 
					deleteVehicle _shield;
					_endTime = diag_tickTime + 60;
					
					_coolDownTimer = diag_tickTime + 15;
				};
				case (diag_tickTime >= _coolDownTimer): 
				{ 
					_timer = 0;
				};
				
				default {};
			};
			
		}
		else 
		{
			_coolDownTimer = 0;
			_timer = 0;
			_endTime = 1;
			
			if(!(isNil "_shield")) then
			{
				deleteVehicle _shield;
			};
			_shield = nil;
		};
	
	};
	
	if(!(isNil "_shield")) then
	{
		deleteVehicle _shield;
	};
	_shield = nil;
};
