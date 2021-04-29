// ============================================================================== Configuration

	#define MACRO_AUTHOR "332nd Aux Team"
	#define MACRO_AUTHOR_PPL "Namenai, Poseidon"
	#define MACRO_MODNAME 332nd_aux
	#define MACRO_MODNAME_SCRIPT aux_332nd

	#define MACRO_HELMET_TEXTURES_PATH \332nd_helmets\_textures
	#define MACRO_UNIFORM_TEXTURES_PATH \332nd_units\_textures
	#define MACRO_VEST_TEXTURES_PATH \332nd_units\_textures
	#define MACRO_BACKPACK_TEXTURES_PATH \332nd_backpacks\_textures
	#define MACRO_VEHICLE_TEXTURES_PATH \332nd_vehicles\_textures
	#define MACRO_HUD_CHANGER_ICONS 332nd_main\textures\interaction_Icons

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

	//displayname
	#define MACRO_ITEM_DISPLAYNAME(type,name) [332nd] type ('##name##');
// ============================================================================== Macro Predefined Classes Function

	// ---- Helmets ---- 
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