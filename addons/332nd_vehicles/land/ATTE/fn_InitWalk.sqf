if (!is3DEN) then {
    if (isServer) then {

        private ["_v", "_speed"];

        _v = _this select 0;
        _speed = 0;

        while {alive _v} do {

            if (count crew _v > 0 and canMove _v) then {

                while {isEngineOn _v} do {

                    _speed = speed _v;// positive and negative speed to check if vehicle is going forwards or backwards

                    if (_speed >= 0.1 || _speed <= -0.1) then {
                        
						"Starting Animation" remoteExec ["hint"];
                        _v animateSource ["Walk",2,2.7];

						sleep 1.5;
						
                        "Reseting Animation" remoteExec ["hint"];

                        _v animateSource ["Walk",0,10000];
						"Animation Reset" remoteExec ["hint"];
						
						sleep 0.05;
						
						
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
};