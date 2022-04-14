if (!is3DEN) then {

        private ["_v", "_speed","_fr","_fl","_mr","_ml","_br","_bl"];

        _v = _this select 0;
        _speed = 0;
		_fr = "FR";
		_fl = "FL";
		_mr = "MR";
		_ml = "ML";
		_br = "BR";
		_bl = "BL";

        while {alive _v} do {

            if (count crew _v > 0 and canMove _v) then {

                while {isEngineOn _v} do {

                    _speed = speed _v;// positive and negative speed to check if vehicle is going forwards or backwards

                    if (_speed >= 0.1 || _speed <= -0.1) then {
                        
						if(_speed >= 0.1) then {
						
							_v animateSource ["Walk",2,2.7];
	
							sleep 0.75;
							
							//Front Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _fr];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS1a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _fr)), 2,1,800];
							};
							
							//Middle Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _mr];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS2a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _mr)), 2,1,800];
							};
							
							//Back Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _bl];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS3a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _bl)), 2,1,800];
							};
							
							sleep 0.75;
							
							//Front Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _fl];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS1a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _fl)), 2,1,800];
							};
							//Middle Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _ml];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS2a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _ml)), 2,1,800];
							};
							
							//Back Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _br];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS3a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _br)), 2,1,800];
							};
	
							_v animateSource ["Walk",0,10000];
							
							sleep 0.05;
						};
						
						if(_speed <= -0.1) then {
						
							_v animateSource ["Walk",2,10000];
							
							sleep 0.05;
						
							_v animateSource ["Walk",0,2.7];
	
							sleep 0.75;
							
							//Front Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _fl];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS1a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _fl)), 2,1,800];
							};
							//Middle Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _ml];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS2a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _ml)), 2,1,800];
							};
							
							//Back Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _br];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS3a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _br)), 2,1,800];
							};
							
							sleep 0.75;
							
							//Front Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _fr];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS1a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _fr)), 2,1,800];
							};
							
							//Middle Right
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _mr];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS2a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _mr)), 2,1,800];
							};
							
							//Back Left
							_footprint = "3as_ATTE_Footprint" createVehicleLocal (position _v);
							_footprint attachTo [_v, [0,0,0], _bl];
							_footprint setdamage 1;
							detach _footprint;
							
							if (isServer) then {
								playSound3D ["3AS\3as_ATTE\Sounds\ATTE_FS3a.ogg", _v, false, (_v modelToWorld (_v selectionPosition _bl)), 2,1,800];
							};
							
						};
						
                    } else {
                        _v animateSource ["Walk",0];// sets legs to starting position
                        sleep 0.25;
                    };
                };
                sleep 0.5;
            } else {
                sleep 2;
            };
        };
};