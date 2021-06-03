// ============================================================================== Configuration

	#define MACRO_AUTHOR "332nd Aux Team"
	#define MACRO_AUTHOR_PPL "Halligan, Poseidon, Namenai"
	#define MACRO_MODNAME 332nd_aux
	#define MACRO_MODNAME_SCRIPT aux_332nd
	#define MACRO_MOD_VERSION 5.13.21a

	#define MACRO_HELMET_TEXTURES_PATH \332nd_helmets\_textures
	#define MACRO_UNIFORM_TEXTURES_PATH \332nd_units\_textures
	#define MACRO_VEST_TEXTURES_PATH \332nd_units\_textures
	#define MACRO_BACKPACK_TEXTURES_PATH \332nd_backpacks\_textures
	#define MACRO_VEHICLE_TEXTURES_PATH \332nd_vehicles\_textures
	#define MACRO_HUD_CHANGER_ICONS 332nd_main\textures\interaction_Icons
	#define MACRO_WEAPON_TEXTURES_PATH \332nd_weapons\_textures

	#define MACRO_SCRIPT_PATH 332nd_main\functions
// ============================================================================== Macro Functions
	#define MACRO_QUOTE(thing) #thing

	#define MACRO_FNC_NAME(title) MACRO_MODNAME_SCRIPT##_fnc_##title

	#define MACRO_UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2

	// 
	#define MACRO_ADD_PREFIX(NAME) MACRO_UNDERSCORE_CONCAT(MACRO_MODNAME,NAME)

	//
	#define MACRO_PATCH_NAME(component) MACRO_MODNAME##_patch_##component

	//classnames for stuff
	#define MACRO_NEW_HELMET(group,name) MACRO_MODNAME##_##group##_helmet_##name
	#define MACRO_NEW_UNIT(group,name) MACRO_MODNAME##_##group##_unit_##name
	#define MACRO_NEW_UNIFORM(group,name) MACRO_MODNAME##_##group##_uniform_##name
	#define MACRO_NEW_VEST(group,name) MACRO_MODNAME##_##group##_vest_##name
	#define MACRO_NEW_BACKPACK(side,name) MACRO_MODNAME##_##side##_backpack_##name##
	#define MACRO_NEW_VEHICLE(mode,family,variant) MACRO_MODNAME##_vehicle_##mode##_##family##_##variant
	#define MACRO_NEW_WEAPON(name) MACRO_MODNAME##_weapon_##name
	#define MACRO_NEW_MAG(name,count) MACRO_MODNAME##_magazine_##name##_x##count
	#define MACRO_NEW_AMMO(name) MACRO_MODNAME##_ammo_##name
	#define MACRO_NEW_NVG(name) MACRO_MODNAME##_nvg_##name
	#define MACRO_NEW_BINO(name) MACRO_MODNAME##_bino_##name

	//displayname
	#define MACRO_ITEM_DISPLAYNAME(type,name) [332nd] type ('##name##');
	#define MACRO_WEAPON_DISPLAYNAME(name) [332nd] name;
	#define MACRO_AMMO_DISPLAYNAME(name,count) [332nd] name mag, count##rnd;
// ============================================================================== Macro Predefined Classes Function

	// ---- Helmets ---- 
	#define MACRO_NEW_INF_HELMET_ITEM_RECRUIT(classname,displayname)\
		class MACRO_NEW_HELMET(infantry,classname): MACRO_NEW_HELMET(infantry,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Helmet ('##displayname##');\
		};


	#define MACRO_NEW_INF_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(infantry,classname): MACRO_NEW_HELMET(infantry,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\infantry\##texture};\
		};

	#define MACRO_NEW_AB_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(airborne,classname): MACRO_NEW_HELMET(airborne,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Airborne Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\airborne\##texture};\
		};
	#define MACRO_NEW_AVIATION_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(aviation,classname): MACRO_NEW_HELMET(aviation,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Pilot Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\aviation\##texture};\
		};
	#define MACRO_NEW_WARDEN_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(warden,classname): MACRO_NEW_HELMET(warden,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Warden Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\aviation\warden\##texture};\
		};

	// ---- Uniforms ---- 
	#define MACRO_NEW_RECRUIT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(recruit,classname): MACRO_NEW_UNIFORM(recruit,base)\
		{\
			displayName = [332nd] Recruit Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(recruit,uniformClassname);\
			};\
		};

	#define MACRO_NEW_INF_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(infantry,classname): MACRO_NEW_UNIFORM(infantry,base)\
		{\
			displayName = [332nd] Infantry Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(infantry,uniformClassname);\
			};\
		};

	#define MACRO_NEW_RTO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(rto,classname): MACRO_NEW_UNIFORM(rto,base)\
		{\
			displayName = [332nd] RTO Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(rto,uniformClassname);\
			};\
		};

	#define MACRO_NEW_MEDIC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(medic,classname): MACRO_NEW_UNIFORM(medic,base)\
		{\
			displayName = [332nd] Medic Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(medic,uniformClassname);\
			};\
		};

	#define MACRO_NEW_AVI_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(aviation,classname): MACRO_NEW_UNIFORM(aviation,base)\
		{\
			displayName = [332nd] Aviation Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(aviation,uniformClassname);\
			};\
		};

	#define MACRO_NEW_CWO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cwo,classname): MACRO_NEW_UNIFORM(cwo,base)\
		{\
			displayName = [332nd] Warrant Officer Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cwo,uniformClassname);\
			};\
		};

	//units for uniforms
	#define MACRO_NEW_RECRUIT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(recruit,classname): MACRO_NEW_UNIT(recruit,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = [332nd] displayname;\
			uniformClass = MACRO_NEW_UNIFORM(recruit,uniformClassname);\
		}

	#define MACRO_NEW_INF_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(infantry,classname): MACRO_NEW_UNIT(infantry,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = [332nd] displayname;\
			uniformClass = MACRO_NEW_UNIFORM(infantry,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##lower\
			};\
		}

	#define MACRO_NEW_RTO_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(rto,classname): MACRO_NEW_UNIT(rto,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = [332nd] displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rto,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\rto\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\rto\##lower\
			};\
		}

	#define MACRO_NEW_MEDIC_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(medic,classname): MACRO_NEW_UNIT(medic,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = [332nd] displayname;\
			uniformClass = MACRO_NEW_UNIFORM(medic,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\medic\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\medic\##lower\
			};\
		}

	#define MACRO_NEW_CWO_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(cwo,classname): MACRO_NEW_UNIT(cwo,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = [332nd] displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cwo,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\warrant_officer\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\warrant_officer\##lower\
			};\
		}

	#define MACRO_NEW_AVI_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(aviation,classname): MACRO_NEW_UNIT(aviation,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = [332nd] displayname;\
			uniformClass = MACRO_NEW_UNIFORM(aviation,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\aviation\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\aviation\uniforms\##lower\
			};\
		}


	// ---- Vests ---- 

	#define MACRO_NEW_TROOPER_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trooper,classname): MACRO_NEW_VEST(trooper,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Trooper Belt ('##displayname##');\
		};
	#define MACRO_NEW_TROOPERHOLSTER_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trooperholster,classname): MACRO_NEW_VEST(trooperholster,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Trooper Holster ('##displayname##');\
		};
	#define MACRO_NEW_VET_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(vettrooper,classname): MACRO_NEW_VEST(vettrooper,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_VET_VEST_ALT_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(vettrooperalt,classname): MACRO_NEW_VEST(vettrooperalt,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_CSP1_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(csp1,classname): MACRO_NEW_VEST(csp1,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_CSP2_CSP3_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(csp2csp3,classname): MACRO_NEW_VEST(csp2csp3,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_CSP4_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(csp4,classname): MACRO_NEW_VEST(csp4,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_CORP_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(corp,classname): MACRO_NEW_VEST(corp,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_CORP_ALT_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(corpalt,classname): MACRO_NEW_VEST(corpalt,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_SERG_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(serg,classname): MACRO_NEW_VEST(serg,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_SERG_MAJ_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(sergmaj,classname): MACRO_NEW_VEST(sergmaj,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_FLIGHT_SENIOR_ENSIGN_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(seniorensign,classname): MACRO_NEW_VEST(seniorensign,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Flight Vest ('##displayname##');\
		};
	#define MACRO_NEW_FLIGHT_OFFICER_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(flightofficer,classname): MACRO_NEW_VEST(flightofficer,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Flight Vest ('##displayname##');\
		};
	#define MACRO_NEW_FLIGHT_JRLT_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(flightjrlt,classname): MACRO_NEW_VEST(flightjrlt,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Flight Vest ('##displayname##');\
		};
	#define MACRO_NEW_RESERVE_OFFICER_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(reserveofficer,classname): MACRO_NEW_VEST(reserveofficer,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Reserve Officer Vest ('##displayname##');\
		};
	#define MACRO_NEW_INF_KAMA_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(infantry,classname): MACRO_NEW_VEST(infantry,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Kama ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
		};
	#define MACRO_NEW_ARC_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(arc,classname): MACRO_NEW_VEST(arc,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Arc Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\arc\vests\##texture};\
		};

// ============================================================================== Macro Predefined Equipments

	#define MACRO_AIR_COMMON_WEAPS "Laserdesignator_pilotCamera","CMFlareLauncher"
	#define MACRO_AIR_COMMON_MAGS "Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"

// ============================================================================== Macro XEH
	//---XEH prep---
	#define MACRO_PREP_XEH(Script,name)\
	[MACRO_QUOTE(MACRO_SCRIPT_PATH\Script),MACRO_QUOTE(MACRO_FNC_NAME(name))] call CBA_fnc_compileFunction;
	
	#define MACRO_PREP(Script,Name)\
	MACRO_FNC_NAME(Name) = compile preprocessFileLineNumbers MACRO_QUOTE(MACRO_SCRIPT_PATH\Script)