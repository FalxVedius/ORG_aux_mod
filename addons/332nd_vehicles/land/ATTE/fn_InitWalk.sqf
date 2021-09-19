if (!is3DEN) then {
	private ["_vic", "_speed","_start","_end","_walkSpeed","_fr","_fl","_mr","_ml","_br","_bl"];

	_vic = _this select 0;
	_fr = "FR";
	_fl = "FL";
	_mr = "MR";
	_ml = "ML";
	_br = "BR";
	_bl = "BL";
	while {alive _vic} do {
		if (count crew _vic > 0 and canMove _vic) then {
			while {isEngineOn _vic} do {

				_speed = speed _vic; // check if vehicle is moving
				_al = 0.75;

				if (abs (_speed) >= 0.1) then {
				
					if (abs (_speed) >= 4) 
					then {_walkSpeed = abs (_speed) / 8;}
					else {_walkSpeed = 0.75;};

					if(_walkSpeed > 3.5) then
					{
						_walkSpeed = 3.5;
					};
					
					if(_walkSpeed < 0.75) then
					{
						_walkSpeed = 0.75;
					};
					
					
					private _msg2 = format ["WalkSpeed: %1", _walkSpeed];
					[driver vehicle _vic,_msg2] remoteExec ["globalChat",0];
					
					if(_speed > 0) then 
					{
						_end = 2;	//forward movement
						_start = 0;
						private _msg = format ["Phase: %1", _vic animationSourcePhase "Walk"];
						[driver vehicle _vic,_msg] remoteExec ["globalChat",0];
						
						if (_vic animationSourcePhase "Walk" >= _end && isServer) then 
						{ 
							private _msg4 = "ATTE Reset to first Frame Forward";
							[driver vehicle _vic,_msg4] remoteExec ["globalChat",0];							
							_vic animateSource ["Walk",_start,true];
						};
						
						if (_vic animationSourcePhase "Walk" == _start) then
						{	//Front Right
							private _msg4 = "ATTE First Frame Footprints";
							[driver vehicle _vic,_msg4] remoteExec ["globalChat",0];
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _vic);
							_footprint attachTo [_vic, [0,0,0], _fr];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS1a.ogg", _vic, false, (_vic modelToWorld (_vic selectionPosition _fr)), 2,1,800];
							};
							//Middle Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _vic);
							_footprint attachTo [_vic, [0,0,0], _mr];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS2a.ogg", _vic, false, (_vic modelToWorld (_vic selectionPosition _mr)), 2,1,800];
							};
							//Black Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _vic);
							_footprint attachTo [_vic, [0,0,0], _bl];
							_footprint setdamage 1;
							detach _footprint;
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS3a.ogg", _vic, false, (_vic modelToWorld (_vic selectionPosition _bl)), 2,1,800];
							};
						};
						
						if (_vic animationSourcePhase "Walk" > 0.98 && _vic animationSourcePhase "Walk" < 1.01) then
						{
							private _msg4 = "ATTE Mid Frame Footprints";
							[driver vehicle _vic,_msg4] remoteExec ["globalChat",0];
							//Front Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _vic);
							_footprint attachTo [_vic, [0,0,0], _fl];
							_footprint setdamage 1;
							detach _footprint;
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS1a.ogg", _vic, false, (_vic modelToWorld (_vic selectionPosition _fl)), 2,1,800];
							};
							//Middle Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _vic);
							_footprint attachTo [_vic, [0,0,0], _ml];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS2a.ogg", _vic, false, (_vic modelToWorld (_vic selectionPosition _ml)), 2,1,800];
							};
							//Back Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _vic);
							_footprint attachTo [_vic, [0,0,0], _br];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS3a.ogg", _vic, false, (_vic modelToWorld (_vic selectionPosition _br)), 2,1,800];
							};
						};
						
					} 
					else 
					{
						_end = 0;	//backward movement
						_start = 2;
						
						if (_vic animationSourcePhase "Walk" <= _end && isServer) then 
						{
							
							private _msg4 = "ATTE Reset to first Frame Backwards";
							[driver vehicle _vic,_msg4] remoteExec ["globalChat",0];
							_vic animateSource ["Walk",_start,true];
							
						};
					};

					if(isServer) then
					{
						_vic animateSource ["Walk",(parseNumber ((_end * 0.75) toFixed 2)),_walkSpeed];
					};
				} 
				else 
				{
					if(isServer) then
					{
						private _msg3 = "ATTE trying to standstill";
						[driver vehicle _vic,_msg3] remoteExec ["globalChat",0];
						_end = round((_vic animationSourcePhase "Walk")*2)/2; //find closest standing animation (0,0.5,1,1.5,2)
						_vic animateSource ["Walk",_end,20];
					};

				};
			};
			sleep 0.5;		//check for engine start every half sec
		} else {sleep 2;};	//check for new crew members every 2 sec
	};
};
