if (!is3DEN) then {
    if (isServer) then {

        private ["_v", "_speed"];

        _v = _this select 0;
        _speed = 0;

        while {alive _v} do {

            if (count crew _v > 0 and canMove _v) then {

                while {isEngineOn _v} do {

                    _speed = speed _v;// positive and negative speed to check if vehicle is going forwards or backwards

                    if (_speed >= 0.1 or _speed <= -0.1) then {
                        
                        // right leg forward, left leg back
                           _v animateSource ["walk",2,0.5];
                        waitUntil {
                            sleep 0.001;
                            if (!isEngineOn _v) exitWith {true};
                            _v animationSourcePhase "walk" >=2;
                        };
                        
						// reset
                        _v animateSource ["walk",0,10000];
                        waitUntil {
                            sleep 0.001;
                            if (!isEngineOn _v) exitWith {true};
                            _v animationSourcePhase "walk" <=0;
                        };
						
						
                    } else {
                        _v animateSource ["walk",0];// sets legs to starting position
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