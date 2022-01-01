// ============================================================================== Configuration

	#define MACRO_AUTHOR "332nd Aux Team"
	#define MACRO_AUTHOR_PPL "Halligan, Falx, Poseidon, Namenai"
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
	#define MACRO_NEW_MEDICAL_ITEM(name) MACRO_MODNAME##_medical_##name

	//displayname
	#define MACRO_MEDICAL_ITEM_DISPLAYNAME(name) [332nd] name;
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
		#define MACRO_NEW_ARF_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(arf,classname): MACRO_NEW_HELMET(arf,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Recon Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\arf\##texture};\
		};
		#define MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(arfcustom,classname): MACRO_NEW_HELMET(arfcustom,base)\
		{\
			scope = 2;\
			scopeArsenal = 0;\
			displayName = [332nd] Recon Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\arf\##texture};\
		};
		#define MACRO_NEW_BARC_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(barc,classname): MACRO_NEW_HELMET(barc,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Barc Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\barc\##texture};\
		};
	#define MACRO_NEW_SCENARIO_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(scenario,classname): MACRO_NEW_HELMET(scenario,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Scenario Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {##texture};\
		};
	#define MACRO_NEW_ARC_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(arc,classname): MACRO_NEW_HELMET(arc,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Arc Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\arc\##texture};\
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

	#define MACRO_NEW_AIRBORNE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(airborne,classname): MACRO_NEW_UNIFORM(airborne,base)\
		{\
			displayName = [332nd] Airborne Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(airborne,uniformClassname);\
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
	#define MACRO_NEW_ARF_BASE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfbase,classname): MACRO_NEW_UNIFORM(arfbase,base)\
		{\
			displayName = [332nd] Recon Base Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfbase,uniformClassname);\
			};\
		};
	#define MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfdes,classname): MACRO_NEW_UNIFORM(arfdes,base)\
		{\
			displayName = [332nd] Recon Desert Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfdes,uniformClassname);\
			};\
		};
	#define MACRO_NEW_ARF_JUNGLE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfjung,classname): MACRO_NEW_UNIFORM(arfjung,base)\
		{\
			displayName = [332nd] Recon Jungle Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfjung,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_ARF_SNOW_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfsnow,classname): MACRO_NEW_UNIFORM(arfsnow,base)\
		{\
			displayName = [332nd] Recon Snow Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfsnow,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_ARF_URBAN_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfurb,classname): MACRO_NEW_UNIFORM(arfurb,base)\
		{\
			displayName = [332nd] Recon Urban/Night-Ops Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfurb,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_ARF_WOODLAND_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfwood,classname): MACRO_NEW_UNIFORM(arfwood,base)\
		{\
			displayName = [332nd] Recon Woodland Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfwood,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_MECHANIZED_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(mech,classname): MACRO_NEW_UNIFORM(mech,base)\
		{\
			displayName = [332nd] Mechanized Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(mech,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_SCENARIO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(scenario,classname): MACRO_NEW_UNIFORM(scenario,base)\
		{\
			displayName = [332nd] Scenario Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(scenario,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_CAPTAIN_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(captain,classname): MACRO_NEW_UNIFORM(captain,base)\
		{\
			displayName = [332nd] Captain Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(captain,uniformClassname); \
			}; \
		};


	// --- Opfor Uniforms ---
	#define MACRO_NEW_CISB1_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1,classname): MACRO_NEW_UNIFORM(cisb1,base)\
		{\
			displayName = [332nd] CIS Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1JUMPPACK_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1jumppack,classname): MACRO_NEW_UNIFORM(cisb1jumppack,base)\
		{\
			displayName = [332nd] CIS Juumppack Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1jumppack,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1CREW_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1crew,classname): MACRO_NEW_UNIFORM(cisb1crew,base)\
		{\
			displayName = [332nd] CIS Crew Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1crew,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1COMM_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1comm,classname): MACRO_NEW_UNIFORM(cisb1comm,base)\
		{\
			displayName = [332nd] CIS Commander Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1comm,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1MARINE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1marine,classname): MACRO_NEW_UNIFORM(cisb1marine,base)\
		{\
			displayName = [332nd] CIS Marine Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1marine,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1SEC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1sec,classname): MACRO_NEW_UNIFORM(cisb1sec,base)\
		{\
			displayName = [332nd] CIS Security Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1sec,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1PILOT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1pilot,classname): MACRO_NEW_UNIFORM(cisb1pilot,base)\
		{\
			displayName = [332nd] CIS Pilot Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1pilot,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBX_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbx,classname): MACRO_NEW_UNIFORM(cisbx,base)\
		{\
			displayName = [332nd] CIS BX Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbx,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBXCAPT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbxcapt,classname): MACRO_NEW_UNIFORM(cisbxcapt,base)\
		{\
			displayName = [332nd] CIS BX Captain Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbxcapt,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBXSEC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbxsec,classname): MACRO_NEW_UNIFORM(cisbxsec,base)\
		{\
			displayName = [332nd] CIS BX Security Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbxsec,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBXDIPLO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbxdiplo,classname): MACRO_NEW_UNIFORM(cisbxdiplo,base)\
		{\
			displayName = [332nd] CIS BX Diplomat Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbxdiplo,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB2_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb2,classname): MACRO_NEW_UNIFORM(cisb2,base)\
		{\
			displayName = [332nd] CIS B2 Battle droid ('##displayname##');\
			scope = 2;\
			JLTS_hasStunProtection = 1;\
			JLTS_isDroid = 1;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb2,uniformClassname);\
			};\
		};
	// --- End Opfor Uniforms ---

// ---- START REBEL UNIFORM ----

#define MACRO_NEW_REBEL_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel,classname): MACRO_NEW_UNIFORM(rebel,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_AT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_AT,classname): MACRO_NEW_UNIFORM(rebel_AT,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_AT,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_SNIPER_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Sniper,classname): MACRO_NEW_UNIFORM(rebel_Sniper,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Sniper,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_MEDIC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Medic,classname): MACRO_NEW_UNIFORM(rebel_Medic,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Medic,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_HEAVY_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Heavy,classname): MACRO_NEW_UNIFORM(rebel_Heavy,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Heavy,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_SL_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_SL,classname): MACRO_NEW_UNIFORM(rebel_SL,base)\
	{\
		displayName = [332nd] Rebel Squad Leader Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_SL,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_FL_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_FL,classname): MACRO_NEW_UNIFORM(rebel_FL,base)\
	{\
		displayName = [332nd] Rebel Fireteam Leader Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_FL,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_AA_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_AA,classname): MACRO_NEW_UNIFORM(rebel_AA,base)\
	{\
		displayName = [332nd] Rebel AA Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_AA,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_SPOTTER_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Spotter,classname): MACRO_NEW_UNIFORM(rebel_Spotter,base)\
	{\
		displayName = [332nd] Rebel Squad Leader Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Spotter,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_SHOCKER_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Shocker,classname): MACRO_NEW_UNIFORM(rebel_Shocker,base)\
	{\
		displayName = [332nd] Rebel Shocker Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Shocker,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_BREACHER_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Breacher,classname): MACRO_NEW_UNIFORM(rebel_Breacher,base)\
	{\
		displayName = [332nd] Rebel Breacher Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Breacher,uniformClassname);\
		}; \
	};

// ---- END REBEL ----

// ---- START REBEL HUMAN ----

#define MACRO_NEW_REBEL_HUMAN_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Human,classname): MACRO_NEW_UNIFORM(rebel_Human,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Human,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_HUMAN_AT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Human_AT,classname): MACRO_NEW_UNIFORM(rebel_Human_AT,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Human_AT,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_HUMAN_SNIPER_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Human_Sniper,classname): MACRO_NEW_UNIFORM(rebel_Human_Sniper,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Human_Sniper,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_HUMAN_MEDIC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Human_Medic,classname): MACRO_NEW_UNIFORM(rebel_Human_Medic,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Human_Medic,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_HUMAN_HEAVY_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Human_Heavy,classname): MACRO_NEW_UNIFORM(rebel_Human_Heavy,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Human_Heavy,uniformClassname);\
		}; \
	};

#define MACRO_NEW_REBEL_HUMAN_SPOTTER_UNIFORM_ITEM(classname,displayname,uniformClassname)\
	class MACRO_NEW_UNIFORM(rebel_Human_Spotter,classname): MACRO_NEW_UNIFORM(rebel_Human_Spotter,base)\
	{\
		displayName = [332nd] Rebel Uniform ('##displayname##');\
		scope = 2;\
		class ItemInfo : ItemInfo\
		{\
			uniformClass = MACRO_NEW_UNIT(rebel_Human_Spotter,uniformClassname);\
		}; \
	};
// ----- END REBEL HUMAN -----


	//units for uniforms
	#define MACRO_NEW_RECRUIT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(recruit,classname): MACRO_NEW_UNIT(recruit,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(recruit,uniformClassname);\
		}

	#define MACRO_NEW_INF_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(infantry,classname): MACRO_NEW_UNIT(infantry,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(infantry,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##lower\
			};\
		}

	#define MACRO_NEW_AIRBORNE_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(airborne,classname): MACRO_NEW_UNIT(airborne,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(airborne,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\airborne\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\airborne\uniforms\##lower\
			};\
		}

	#define MACRO_NEW_RTO_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(rto,classname): MACRO_NEW_UNIT(rto,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
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
			displayName = displayname;\
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
			displayName = displayname;\
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
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(aviation,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\aviation\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\aviation\uniforms\##lower\
			};\
		}

	#define MACRO_NEW_ARF_BASE_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(arfbase,classname): MACRO_NEW_UNIT(arfbase,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(arfbase,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Base\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Base\##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};\
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};\
		}

	#define MACRO_NEW_ARF_DESERT_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(arfdes,classname): MACRO_NEW_UNIT(arfdes,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(arfdes,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Desert\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Desert\##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
		}

	#define MACRO_NEW_ARF_JUNGLE_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(arfjung,classname): MACRO_NEW_UNIT(arfjung,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(arfjung,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Jungle\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Jungle\##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
		}

	#define MACRO_NEW_ARF_SNOW_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(arfsnow,classname): MACRO_NEW_UNIT(arfsnow,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(arfsnow,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Snow\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Snow\##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
		}

	#define MACRO_NEW_ARF_URBAN_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(arfurb,classname): MACRO_NEW_UNIT(arfurb,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(arfurb,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Urban\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Urban\##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
		}

	#define MACRO_NEW_ARF_WOODLAND_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(arfwood,classname): MACRO_NEW_UNIT(arfwood,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(arfwood,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Woodland\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\arf\uniforms\Woodland\##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
		}
	#define MACRO_NEW_MECHANIZED_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(mech,classname): MACRO_NEW_UNIT(mech,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(mech,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\mechanized\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\mechanized\uniforms\##lower\
			};\
		}
	#define MACRO_NEW_SCENARIO_UNIT(classname,displayname,uniformClassname,upper,lower,helmet)\
		class MACRO_NEW_UNIT(scenario,classname): MACRO_NEW_UNIT(scenario,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(scenario,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","insignia"};\
			hiddenSelectionsTextures[] = {\
				##upper,\
				##lower\
			};\
			linkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" }; \
			respawnLinkedItems[] = { helmet,"332nd_aux_trooper_vest_332nd_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","332nd_aux_nvg_Trooper_NVG" }; \
		}
	#define MACRO_NEW_CAPTAIN_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(captain,classname): MACRO_NEW_UNIT(captain,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(captain,uniformClassname);\
			hiddenSelections[] = {"camo1","camo2","camo3"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##lower,\
				"\MRC\JLTS\characters\CloneArmor\data\Clone_rank_co.paa"\
			};\
		}


	// ----Opfor Units ----
	#define MACRO_NEW_CISB1_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1,classname): MACRO_NEW_UNIT(cisb1,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1,uniformClassname);\
		}
	#define MACRO_NEW_CISB1JUMPPACK_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1jumppack,classname): MACRO_NEW_UNIT(cisb1jumppack,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1jumppack,uniformClassname);\
		}
	#define MACRO_NEW_CISB1BREACHER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1breach,classname): MACRO_NEW_UNIT(cisb1breach,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1,uniformClassname);\
		}
	#define MACRO_NEW_CISB1SUPPORT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1ar,classname): MACRO_NEW_UNIT(cisb1ar,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1,uniformClassname);\
		}
	#define MACRO_NEW_CISB1AT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1at,classname): MACRO_NEW_UNIT(cisb1at,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1,uniformClassname);\
		}
	#define MACRO_NEW_CISB1SNIPER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1sniper,classname): MACRO_NEW_UNIT(cisb1sniper,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1,uniformClassname);\
		}
	#define MACRO_NEW_CISB1CREW_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1crew,classname): MACRO_NEW_UNIT(cisb1crew,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1crew,uniformClassname);\
		}
	#define MACRO_NEW_CISB1COMM_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1comm,classname): MACRO_NEW_UNIT(cisb1comm,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1comm,uniformClassname);\
		}
	#define MACRO_NEW_CISB1MARINE_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1marine,classname): MACRO_NEW_UNIT(cisb1marine,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1marine,uniformClassname);\
		}
	#define MACRO_NEW_CISB1SEC_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1sec,classname): MACRO_NEW_UNIT(cisb1sec,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1sec,uniformClassname);\
		}
	#define MACRO_NEW_CISB1PILOT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1pilot,classname): MACRO_NEW_UNIT(cisb1pilot,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb1pilot,uniformClassname);\
		}
	#define MACRO_NEW_CISBX_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbx,classname): MACRO_NEW_UNIT(cisbx,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXCAPT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxcapt,classname): MACRO_NEW_UNIT(cisbxcapt,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbxcapt,uniformClassname);\
		}
	#define MACRO_NEW_CISBXASSASSIN_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxassassin,classname): MACRO_NEW_UNIT(cisbxassassin,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXSEC_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxsec,classname): MACRO_NEW_UNIT(cisbxsec,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbxsec,uniformClassname);\
		}
	#define MACRO_NEW_CISBXDIPLO_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxdiplo,classname): MACRO_NEW_UNIT(cisbxdiplo,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbxdiplo,uniformClassname);\
		}
	#define MACRO_NEW_CISBXMELEE_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxmelee,classname): MACRO_NEW_UNIT(cisbxmelee,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXMELEERUSH_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxmeleerush,classname): MACRO_NEW_UNIT(cisbxmeleerush,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXHYBRIDCOMM_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxhybridcomm,classname): MACRO_NEW_UNIT(cisbxhybridcomm,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbxcapt,uniformClassname);\
		}
	#define MACRO_NEW_CISBXHYBRID_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxhybrid,classname): MACRO_NEW_UNIT(cisbxhybrid,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXAT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxat,classname): MACRO_NEW_UNIT(cisbxat,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXSUPPORT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxar,classname): MACRO_NEW_UNIT(cisbxar,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISBXBREACH_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisbxbreach,classname): MACRO_NEW_UNIT(cisbxbreach,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisbx,uniformClassname);\
		}
	#define MACRO_NEW_CISB2_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb2,classname): MACRO_NEW_UNIT(cisb2,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(cisb2,uniformClassname);\
		}
	#define MACRO_NEW_CISDROIDEKA_UNIT(classname,displayname)\
		class MACRO_NEW_UNIT(cisdroideka,classname): MACRO_NEW_UNIT(cisdroideka,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
		}
	#define MACRO_NEW_CISDROIDEKA_MOVE_UNIT(classname,displayname)\
		class MACRO_NEW_UNIT(cisdroidekamoveable,classname): MACRO_NEW_UNIT(cisdroidekamoveable,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
		}
	#define MACRO_NEW_CIS_SNIPER_DROIDEKA_UNIT(classname,displayname)\
		class MACRO_NEW_UNIT(cissniperdroideka,classname): MACRO_NEW_UNIT(cissniperdroideka,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
		}
	#define MACRO_NEW_CIS_SNIPER_DROIDEKA_MOVE_UNIT(classname,displayname)\
		class MACRO_NEW_UNIT(cissniperdroidekamoveable,classname): MACRO_NEW_UNIT(cissniperdroidekamoveable,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
		}


// ---- START REBEL UNITS ----
#define MACRO_NEW_REBEL_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel,classname): MACRO_NEW_UNIT(rebel,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel,uniformClassname);\
		}

#define MACRO_NEW_REBEL_AT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_AT,classname): MACRO_NEW_UNIT(rebel_AT,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_AT,uniformClassname);\
		}

#define MACRO_NEW_REBEL_SNIPER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Sniper,classname): MACRO_NEW_UNIT(rebel_Sniper,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Sniper,uniformClassname);\
		}

#define MACRO_NEW_REBEL_MEDIC_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Medic,classname): MACRO_NEW_UNIT(rebel_Medic,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Medic,uniformClassname);\
		}

#define MACRO_NEW_REBEL_HEAVY_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Heavy,classname): MACRO_NEW_UNIT(rebel_Heavy,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Heavy,uniformClassname);\
		}

#define MACRO_NEW_REBEL_SL_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_SL,classname): MACRO_NEW_UNIT(rebel_SL,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_SL,uniformClassname);\
		}

#define MACRO_NEW_REBEL_FL_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_FL,classname): MACRO_NEW_UNIT(rebel_FL,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_FL,uniformClassname);\
		}

#define MACRO_NEW_REBEL_AA_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_AA,classname): MACRO_NEW_UNIT(rebel_AA,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_AA,uniformClassname);\
		}

#define MACRO_NEW_REBEL_SPOTTER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Spotter,classname): MACRO_NEW_UNIT(rebel_Spotter,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Spotter,uniformClassname);\
		}

#define MACRO_NEW_REBEL_SHOCKER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Shocker,classname): MACRO_NEW_UNIT(rebel_Shocker,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Shocker,uniformClassname);\
		}

#define MACRO_NEW_REBEL_BREACHER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Breacher,classname): MACRO_NEW_UNIT(rebel_Breacher,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Breacher,uniformClassname);\
		}


	// ---- END REBEL ----

#define MACRO_NEW_REBEL_HUMAN_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Human,classname): MACRO_NEW_UNIT(rebel_Human,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Human,uniformClassname);\
		}

#define MACRO_NEW_REBEL_HUMAN_AT_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Human_AT,classname): MACRO_NEW_UNIT(rebel_Human_AT,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Human_AT,uniformClassname);\
		}

#define MACRO_NEW_REBEL_HUMAN_SNIPER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Human_Sniper,classname): MACRO_NEW_UNIT(rebel_Human_Sniper,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Human_Sniper,uniformClassname);\
		}

#define MACRO_NEW_REBEL_HUMAN_MEDIC_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Human_Medic,classname): MACRO_NEW_UNIT(rebel_Human_Medic,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Human_Medic,uniformClassname);\
		}

#define MACRO_NEW_REBEL_HUMAN_HEAVY_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Human_Heavy,classname): MACRO_NEW_UNIT(rebel_Human_Heavy,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Human_Heavy,uniformClassname);\
		}

#define MACRO_NEW_REBEL_HUMAN_SPOTTER_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(rebel_Human_Spotter,classname): MACRO_NEW_UNIT(rebel_Human_Spotter,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(rebel_Human_Spotter,uniformClassname);\
		}
	// ---- END REBEL HUMAN ----

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
	#define MACRO_NEW_CSP_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(csp,classname): MACRO_NEW_VEST(csp,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Specialist Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {"",MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
		};
	#define MACRO_NEW_CORP_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(corp,classname): MACRO_NEW_VEST(corp,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
		};
	#define MACRO_NEW_CORP_ALT_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(corpalt,classname): MACRO_NEW_VEST(corpalt,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_SERG_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(serg,classname): MACRO_NEW_VEST(serg,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture,"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};\
		};
	#define MACRO_NEW_SERG_MAJ_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(sergmaj,classname): MACRO_NEW_VEST(sergmaj,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
		};
	#define MACRO_NEW_FLIGHT_SENIOR_ENSIGN_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(seniorensign,classname): MACRO_NEW_VEST(seniorensign,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Flight Vest ('##displayname##');\
		};
	#define MACRO_NEW_FLIGHT_OFFICER_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(flightofficer,classname): MACRO_NEW_VEST(flightofficer,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Flight Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
		};
	#define MACRO_NEW_FLIGHT_JRLT_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(flightjrlt,classname): MACRO_NEW_VEST(flightjrlt,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Flight Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture,"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};\
		};
	#define MACRO_NEW_RESERVE_OFFICER_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(reserveofficer,classname): MACRO_NEW_VEST(reserveofficer,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Reserve Officer Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
		};
	#define MACRO_NEW_CAPTAIN_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(captain,classname): MACRO_NEW_VEST(captain,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture};\
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
	#define MACRO_NEW_AIRBORNE_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(airborne,classname): MACRO_NEW_VEST(airborne,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Airborne Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture,"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};\
		};
	#define MACRO_NEW_AIRBORNE_NCO_VEST_ITEM(classname,displayname,texture)\
		class MACRO_NEW_VEST(airbornenco,classname): MACRO_NEW_VEST(airbornenco,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Airborne Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture,"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};\
		};
	#define MACRO_NEW_AIRBORNE_CSP_VEST_ITEM(classname,displayname,texture,texture2)\
		class MACRO_NEW_VEST(airbornecsp,classname): MACRO_NEW_VEST(airbornecsp,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Airborne Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture,MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture2};\
		};
	#define MACRO_NEW_MARSHAL_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(marshal,classname): MACRO_NEW_VEST(marshal,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Infantry Vest ('##displayname##');\
		};
	#define MACRO_NEW_PURGE_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(purge,classname): MACRO_NEW_VEST(purge,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] Scenario Vest ('##displayname##');\
		};
	#define MACRO_NEW_PURGE_CWO_VEST_ITEM(classname,displayname,texture,texture2)\
		class MACRO_NEW_VEST(purgecwo,classname): MACRO_NEW_VEST(purgecwo,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [332nd] CWO Vest ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture,MACRO_VEST_TEXTURES_PATH##\infantry\vests\##texture2};\
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