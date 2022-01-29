
_obj = _this select 0;
_unit = _obj select 0;

while {alive _unit} do {


		private _possibleTargets = (getPos _unit) nearObjects ["Air", 2000];

		private _enemyTargets = [];
		
		_isEnemyEast = [east, west] call BIS_fnc_sideIsEnemy;
		_isEnemyRes = [resistance, west] call BIS_fnc_sideIsEnemy;
		
		if (_isEnemyEast) then {{if (side _x == east) then {_enemyTargets pushBack _x;};} forEach _possibleTargets;};
		if (_isEnemyRes) then {{if (side _x == resistance) then {_enemyTargets pushBack _x;};} forEach _possibleTargets;};

	
	if (count _enemyTargets > 0) then  {	
	
		private _currentTarget = selectRandom _enemyTargets;
		private	_zz = getpos _currentTarget select 2;
		
		if (_zz > 80) then {
		
			private _flakExplosion = _currentTarget getPos [random 200, random 360];
			_flakExplosion set [2, (getPos _currentTarget # 2) - 100 + random (2*100)];
			"Flak_Round_332nd" createVehicle _flakExplosion;	
			
		};
		
		_rndNum = selectRandom [2.0,2.2,2.4,2.6,2.8,3];
		
		sleep _rndNum;
	};
	
	_rndNum2 = selectRandom [2.0,2.2,2.4,2.6,2.8,3];
	
	sleep _rndNum2;	
};
