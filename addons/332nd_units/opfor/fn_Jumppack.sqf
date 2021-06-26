/*
Credits to Battlestad and the 40k Team
*/

params ["_unit", "_searchRange", "_target", "_cooldown", "_jumpDistMin", "_jumpDistMax", "_jumpTime", "_oldPos", "_posTargetNew", "_newPos", "_diffTime"];

_obj = _this select 0;
_unit = _obj select 0;

_searchRange = 250;
_cooldown = 10;
_cooldownMove = 2;

_jumpDistMin = 50;
_jumpDistMax = 100;

_jumpTime = -10;
_oldPos = "";

if (isServer) then {
	while {alive _unit} do {

		_target = _unit findNearestEnemy _unit;

		if ((_unit distance _target <= _searchRange) && (_unit knowsAbout _target > 0) && (alive _target)) then {

			_unit SetUnitPos "Up";
			_unit SetSpeedMode "Full";

			_posTargetNew = getPosATL _target;
			_newPos = ((_posTargetNew select 0) + (_posTargetNew select 1) + (_posTargetNew select 2)) toFixed 0;

			if (_newPos != _oldPos) then {
				_unit doMove getPos _target;
			};

			sleep 2;

			_diffTime = time - _jumpTime;

			if (_diffTime > _cooldown) then {
				if (_unit distance _target > _jumpDistMin && _unit distance _target < _jumpDistMax) then {
					_cooldown = 10;

					_backpack = unitBackpack _unit;
					
					_x = selectRandom [-4,-3,-2,-1,0,1,2,3,4];
					_y = selectRandom [15,16,17,18,19,20,21,22,23,24,25];
					_z = selectRandom [15,16,17,18,19,20,21,22,23,24,25];
					
					_crazyVel = [70,75,80,85,90,95];
					
					_ranDir = floor random 2;
					
					if (_ranDir == 1) then {
						_y = selectRandom _crazyVel;
					} else {
						if (_ranDir == 2) then {
							_z = selectRandom _crazyVel;
						} else {
							_x = selectRandom [-7,-8,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7];
							_y = selectRandom _crazyVel;
							_z = selectRandom _crazyVel;
						};
					};
					
					_unit setVelocityModelSpace [_x,_y,_z];
					
					
					_i = 0;
					while{_i < 60} do {
						_section = floor random 5;
						_backpack setObjectTexture [_section,"a3\data_f\proxies\muzzle_flash\data\muzzleflash_rocket_set01_ca.paa"];
						sleep 0.05;
					
						_backpack setObjectTexture [_section,""];
						_i = _i + 1;
					};
					
					_damage = getDammage _unit;
					
					while { ((getPosATL _unit) select 2) > 0.5 and !isTouchingGround _unit } do {
					
						_height = ((getPosATL _unit) select 2);
					
						if ((_height > 2 and _height < 4) and !isTouchingGround _unit) then {
					
							_unit allowDamage false;
							sleep 2;
							
						} else {
							sleep 0.001;
						};
					
					};
					
					_unit allowDamage true;
					
					_damageNew = getDammage _unit;
					_diffDmg = _damage - _damageNew;
					
					if (_diffDmg > 0) then {
						_unit setDamage _damage;
					};
					_jumpTime = time;
				};
			};

			_oldPos = _newPos;
		} else {
			sleep 2;
		};
	};
};
