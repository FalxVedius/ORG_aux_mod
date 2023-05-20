params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];

switch (true) do {

	_Mag = _newMagazine select 0;
	
	
	case (_Mag == "ORG_aux_magazine_DC_17m_rifle_x42"): 
	{ 
		_unit addPrimaryWeaponItem "ORG_DC_17m_Rifle_Muz";
	};
	case (_Mag == "ORG_aux_magazine_DC_17m_marks_x10"): 
	{ 
		_unit addPrimaryWeaponItem "ORG_DC_17m_Marks_Muz";
	};
	case (_Mag == "ORG_aux_magazine_DC_17m_grend_x1"): 
	{ 
		_unit addPrimaryWeaponItem "ORG_DC_17m_Grend_Muz";
	};
};
