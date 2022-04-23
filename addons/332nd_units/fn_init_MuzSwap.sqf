params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];

if (isServer) then {

	switch (true) do {
	
		_Mag = _newMagazine select 0;
		
		
		case (_Mag == "332nd_aux_magazine_DC_17m_rifle_x60"): 
		{ 
			_unit addPrimaryWeaponItem "332nd_DC_17m_Rifle_Muz";
		};
		case (_Mag == "332nd_aux_magazine_DC_17m_marks_x5"): 
		{ 
			_unit addPrimaryWeaponItem "332nd_DC_17m_Marks_Muz";
		};
		case (_Mag == "332nd_aux_magazine_DC_17m_grend_x4"): 
		{ 
			_unit addPrimaryWeaponItem "332nd_DC_17m_Grend_Muz";
		};
	};
};