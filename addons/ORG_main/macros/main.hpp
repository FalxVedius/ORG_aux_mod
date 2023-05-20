// ============================================================================== Configuration

	#define MACRO_AUTHOR "ORG Aux Team"
	#define MACRO_AUTHOR_PPL "Halligan, Falx, Poseidon, Namenai"
	#define MACRO_MODNAME ORG_aux
	#define MACRO_MODNAME_SCRIPT aux_ORG
	#define MACRO_MOD_VERSION 5.17.23a

	#define MACRO_HELMET_TEXTURES_PATH \ORG_helmets\_textures
	#define MACRO_UNIFORM_TEXTURES_PATH \ORG_units\_textures
	#define MACRO_VEST_TEXTURES_PATH \ORG_units\_textures
	#define MACRO_BACKPACK_TEXTURES_PATH \ORG_backpacks\_textures
	#define MACRO_VEHICLE_TEXTURES_PATH \ORG_vehicles\_textures
	#define MACRO_HUD_CHANGER_ICONS ORG_main\textures\interaction_Icons
	#define MACRO_WEAPON_TEXTURES_PATH \ORG_weapons\_textures

	#define MACRO_SCRIPT_PATH ORG_main\functions
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
	#define MACRO_MEDICAL_ITEM_DISPLAYNAME(name) [ORG] name;
	#define MACRO_ITEM_DISPLAYNAME(type,name) [ORG] type ('##name##');
	#define MACRO_WEAPON_DISPLAYNAME(name) [ORG] name;
	#define MACRO_AMMO_DISPLAYNAME(name,count) [ORG] name mag, count##rnd;
// ============================================================================== Macro Predefined Classes Function
	// ---- Helmets ---- 
	#define MACRO_NEW_INF_HELMET_ITEM_RECRUIT(classname,displayname)\
		class MACRO_NEW_HELMET(infantry,classname): MACRO_NEW_HELMET(infantry,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Infantry Helmet ('##displayname##');\
		};


	#define MACRO_NEW_INF_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(infantry,classname): MACRO_NEW_HELMET(infantry,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Infantry P1 Helmet ('##displayname##');\
			hiddenSelections[] = {"camo1","visor","illum"};\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\infantry\##texture,"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};\
			hiddenSelectionsMaterials[] = {MACRO_HELMET_TEXTURES_PATH\helmet.rvmat,MACRO_HELMET_TEXTURES_PATH\visor.rvmat};\
		};

	#define MACRO_NEW_INF_P2_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(infantry_P2,classname): MACRO_NEW_HELMET(infantry_P2,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Infantry P2 Helmet ('##displayname##');\
			hiddenSelections[] = {"camo1","visor","illum"};\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\infantry\##texture,"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};\
			hiddenSelectionsMaterials[] = {MACRO_HELMET_TEXTURES_PATH\helmet_P2.rvmat,MACRO_HELMET_TEXTURES_PATH\visor.rvmat};\
		};

	#define MACRO_NEW_AB_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(airborne,classname): MACRO_NEW_HELMET(airborne,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Airborne P1 Helmet ('##displayname##');\
			hiddenSelections[] = {"camo1","visor","illum"};\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\airborne\##texture,"ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};\
			hiddenSelectionsMaterials[] = {MACRO_HELMET_TEXTURES_PATH\helmet.rvmat,MACRO_HELMET_TEXTURES_PATH\visor.rvmat};\
		};
	#define MACRO_NEW_AB_P2_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(airborne_P2,classname): MACRO_NEW_HELMET(airborne_P2,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Airborne P2 Helmet ('##displayname##');\
			hiddenSelections[] = {"camo1","visor","illum"};\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\airborne\##texture,"ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};\
			hiddenSelectionsMaterials[] = {MACRO_HELMET_TEXTURES_PATH\helmet_P2.rvmat,MACRO_HELMET_TEXTURES_PATH\visor.rvmat};\
		};
	#define MACRO_NEW_AVIATION_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(aviation,classname): MACRO_NEW_HELMET(aviation,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Aviation Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\aviation\##texture, MACRO_HELMET_TEXTURES_PATH##\aviation\##texture,"","3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",MACRO_HELMET_TEXTURES_PATH##\aviation\##texture,""};\
		};
	#define MACRO_NEW_ENGINEER_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(engineer,classname): MACRO_NEW_HELMET(engineer,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Engineer Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\infantry\##texture};\
		};
		#define MACRO_NEW_ARF_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(arf,classname): MACRO_NEW_HELMET(arf,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Recon Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\arf\##texture};\
		};
		#define MACRO_NEW_ARF_CUSTOM_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(arfcustom,classname): MACRO_NEW_HELMET(arfcustom,base)\
		{\
			scope = 2;\
			scopeArsenal = 0;\
			displayName = [ORG] Recon Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\arf\##texture};\
		};
		#define MACRO_NEW_BARC_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(barc,classname): MACRO_NEW_HELMET(barc,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Crewman Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\barc\##texture};\
		};
	#define MACRO_NEW_SCENARIO_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(scenario,classname): MACRO_NEW_HELMET(scenario,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Scenario Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {##texture};\
		};
	#define MACRO_NEW_ARC_HELMET_ITEM(classname,displayname,texture)\
		class MACRO_NEW_HELMET(arc,classname): MACRO_NEW_HELMET(arc,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Arc Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\arc\##texture};\
		};
	#define MACRO_NEW_ASSAULT_HELMET_ITEM(classname,displayname,texture,visor)\
		class MACRO_NEW_HELMET(assault,classname): MACRO_NEW_HELMET(assault,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Assault Helmet ('##displayname##');\
			hiddenSelectionsTextures[] = {MACRO_HELMET_TEXTURES_PATH##\assault\##texture,MACRO_HELMET_TEXTURES_PATH##\assault\##visor};\
			hiddenSelectionsMaterials[] = {"\3AS\3AS_Characters\Commando\data\Katarn_Helmet.rvmat","\ORG_helmets\assault\Assault_Visor.rvmat"};\
		};
	

	// ---- Uniforms ---- 
	#define MACRO_NEW_RECRUIT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(recruit,classname): MACRO_NEW_UNIFORM(recruit,base)\
		{\
			displayName = [ORG] Recruit Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(recruit,uniformClassname);\
			};\
		};

	#define MACRO_NEW_INF_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(infantry,classname): MACRO_NEW_UNIFORM(infantry,base)\
		{\
			displayName = [ORG] Infantry Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(infantry,uniformClassname);\
			};\
		};

	#define MACRO_NEW_AIRBORNE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(airborne,classname): MACRO_NEW_UNIFORM(airborne,base)\
		{\
			displayName = [ORG] Airborne Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(airborne,uniformClassname);\
			};\
		};

	#define MACRO_NEW_RTO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(rto,classname): MACRO_NEW_UNIFORM(rto,base)\
		{\
			displayName = [ORG] RTO Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(rto,uniformClassname);\
			};\
		};

	#define MACRO_NEW_MEDIC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(medic,classname): MACRO_NEW_UNIFORM(medic,base)\
		{\
			displayName = [ORG] Medic Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(medic,uniformClassname);\
			};\
		};

	#define MACRO_NEW_AVI_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(aviation,classname): MACRO_NEW_UNIFORM(aviation,base)\
		{\
			displayName = [ORG] Aviation Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(aviation,uniformClassname);\
			};\
		};

	#define MACRO_NEW_CWO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cwo,classname): MACRO_NEW_UNIFORM(cwo,base)\
		{\
			displayName = [ORG] Warrant Officer Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cwo,uniformClassname);\
			};\
		};
	#define MACRO_NEW_ARF_BASE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfbase,classname): MACRO_NEW_UNIFORM(arfbase,base)\
		{\
			displayName = [ORG] Recon Base Uniform ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(arfbase,uniformClassname);\
			};\
		};
	#define MACRO_NEW_ARF_DESERT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(arfdes,classname): MACRO_NEW_UNIFORM(arfdes,base)\
		{\
			displayName = [ORG] Recon Desert Uniform ('##displayname##');\
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
			displayName = [ORG] Recon Jungle Uniform ('##displayname##');\
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
			displayName = [ORG] Recon Snow Uniform ('##displayname##');\
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
			displayName = [ORG] Recon Urban/Night-Ops Uniform ('##displayname##');\
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
			displayName = [ORG] Recon Multi-cam Uniform ('##displayname##');\
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
			displayName = [ORG] Crewman Uniform ('##displayname##');\
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
			displayName = [ORG] Scenario Uniform ('##displayname##');\
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
			displayName = [ORG] Captain Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(captain,uniformClassname); \
			}; \
		};
	#define MACRO_NEW_ASSAULT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(assault,classname): MACRO_NEW_UNIFORM(assault,base)\
		{\
			displayName = [ORG] Assault Uniform ('##displayname##');\
			scope = 2;\
			scopeArsenal = 2;\
			class ItemInfo : ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(assault,uniformClassname); \
			}; \
		};


	// --- Opfor Uniforms ---
	#define MACRO_NEW_CISB1_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1,classname): MACRO_NEW_UNIFORM(cisb1,base)\
		{\
			displayName = [ORG] CIS Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1JUMPPACK_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1jumppack,classname): MACRO_NEW_UNIFORM(cisb1jumppack,base)\
		{\
			displayName = [ORG] CIS Juumppack Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1jumppack,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1CREW_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1crew,classname): MACRO_NEW_UNIFORM(cisb1crew,base)\
		{\
			displayName = [ORG] CIS Crew Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1crew,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1COMM_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1comm,classname): MACRO_NEW_UNIFORM(cisb1comm,base)\
		{\
			displayName = [ORG] CIS Commander Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1comm,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1MARINE_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1marine,classname): MACRO_NEW_UNIFORM(cisb1marine,base)\
		{\
			displayName = [ORG] CIS Marine Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1marine,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1SEC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1sec,classname): MACRO_NEW_UNIFORM(cisb1sec,base)\
		{\
			displayName = [ORG] CIS Security Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1sec,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB1PILOT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb1pilot,classname): MACRO_NEW_UNIFORM(cisb1pilot,base)\
		{\
			displayName = [ORG] CIS Pilot Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb1pilot,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBX_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbx,classname): MACRO_NEW_UNIFORM(cisbx,base)\
		{\
			displayName = [ORG] CIS BX Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbx,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBXCAPT_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbxcapt,classname): MACRO_NEW_UNIFORM(cisbxcapt,base)\
		{\
			displayName = [ORG] CIS BX Captain Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbxcapt,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBXSEC_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbxsec,classname): MACRO_NEW_UNIFORM(cisbxsec,base)\
		{\
			displayName = [ORG] CIS BX Security Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbxsec,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISBXDIPLO_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisbxdiplo,classname): MACRO_NEW_UNIFORM(cisbxdiplo,base)\
		{\
			displayName = [ORG] CIS BX Diplomat Battle droid ('##displayname##');\
			scope = 2;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisbxdiplo,uniformClassname);\
			};\
		};
	#define MACRO_NEW_CISB2_UNIFORM_ITEM(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIFORM(cisb2,classname): MACRO_NEW_UNIFORM(cisb2,base)\
		{\
			displayName = [ORG] CIS B2 Battle droid ('##displayname##');\
			scope = 2;\
			JLTS_hasStunProtection = 1;\
			JLTS_isDroid = 1;\
			class ItemInfo: ItemInfo\
			{\
				uniformClass = MACRO_NEW_UNIT(cisb2,uniformClassname);\
			};\
		};
	// --- End Opfor Uniforms ---

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
			hiddenSelections[]= {"camo1","camo2","undersuit","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\infantry\uniforms\##lower,\
				"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"\
			};\
			hiddenSelectionsMaterials[] = {MACRO_UNIFORM_TEXTURES_PATH\TrooperUpper.rvmat,MACRO_UNIFORM_TEXTURES_PATH\TrooperLower.rvmat,MACRO_UNIFORM_TEXTURES_PATH\undersuit.rvmat};\
		}

	#define MACRO_NEW_AIRBORNE_UNIT(classname,displayname,uniformClassname,upper,lower)\
		class MACRO_NEW_UNIT(airborne,classname): MACRO_NEW_UNIT(airborne,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(airborne,uniformClassname);\
			hiddenSelections[]= {"camo1","camo2","undersuit","insignia"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\airborne\uniforms\##upper,\
				MACRO_UNIFORM_TEXTURES_PATH\airborne\uniforms\##lower,\
				"ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"\
			};\
			hiddenSelectionsMaterials[] = {MACRO_UNIFORM_TEXTURES_PATH\TrooperUpper.rvmat,MACRO_UNIFORM_TEXTURES_PATH\TrooperLower.rvmat,MACRO_UNIFORM_TEXTURES_PATH\undersuit.rvmat};\
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};\
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"};\
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch"}; \
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
			linkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" }; \
			respawnLinkedItems[] = { helmet,"ORG_aux_trooper_vest_ORG_trooper_belt","ItemMap","JLTS_clone_comlink","ItemCompass","ItemWatch","ORG_aux_nvg_Trooper_NVG" }; \
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
	#define MACRO_NEW_ASSAULT_UNIT(classname,displayname,uniformClassname,uniclass)\
		class MACRO_NEW_UNIT(assault,classname): MACRO_NEW_UNIT(assault,base)\
		{\
			author = MACRO_AUTHOR;\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = displayname;\
			uniformClass = MACRO_NEW_UNIFORM(assault,uniformClassname);\
			hiddenSelections[] = {"Camo","Camo1"};\
			hiddenSelectionsTextures[] = {\
				MACRO_UNIFORM_TEXTURES_PATH\assault\uniforms\##uniclass,\
				"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"\
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
	#define MACRO_NEW_CISB1AA_UNIT(classname,displayname,uniformClassname)\
		class MACRO_NEW_UNIT(cisb1aa,classname): MACRO_NEW_UNIT(cisb1aa,base)\
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


	// ---- Vests ---- 

	#define MACRO_NEW_ARC_VEST_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(arc,classname): MACRO_NEW_VEST(arc,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Arc Vest ('##displayname##');\
		};
	#define MACRO_NEW_OFFICER_VEST_1_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(officer_1,classname): MACRO_NEW_VEST(officer_1,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Officer Vest ('##displayname##');\
		};
	#define MACRO_NEW_OFFICER_VEST_2_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(officer_2,classname): MACRO_NEW_VEST(officer_2,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Officer Vest ('##displayname##');\
		};
	#define MACRO_NEW_OFFICER_VEST_3_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(officer_3,classname): MACRO_NEW_VEST(officer_3,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Officer Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_1_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_1,classname): MACRO_NEW_VEST(nco_1,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_2_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_2,classname): MACRO_NEW_VEST(nco_2,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_3_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_3,classname): MACRO_NEW_VEST(nco_3,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_4_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_4,classname): MACRO_NEW_VEST(nco_4,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_5_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_5,classname): MACRO_NEW_VEST(nco_5,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_6_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_6,classname): MACRO_NEW_VEST(nco_6,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_NCO_VEST_7_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(nco_7,classname): MACRO_NEW_VEST(nco_7,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] NCO Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_1_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_1,classname): MACRO_NEW_VEST(trop_1,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_2_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_2,classname): MACRO_NEW_VEST(trop_2,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_3_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_3,classname): MACRO_NEW_VEST(trop_3,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_4_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_4,classname): MACRO_NEW_VEST(trop_4,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_5_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_5,classname): MACRO_NEW_VEST(trop_5,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_6_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_6,classname): MACRO_NEW_VEST(trop_6,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_7_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_7,classname): MACRO_NEW_VEST(trop_7,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_8_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_8,classname): MACRO_NEW_VEST(trop_8,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_9_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_9,classname): MACRO_NEW_VEST(trop_9,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_10_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_10,classname): MACRO_NEW_VEST(trop_10,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_11_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_11,classname): MACRO_NEW_VEST(trop_11,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_12_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_12,classname): MACRO_NEW_VEST(trop_12,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_13_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_13,classname): MACRO_NEW_VEST(trop_13,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_14_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_14,classname): MACRO_NEW_VEST(trop_14,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_15_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_15,classname): MACRO_NEW_VEST(trop_15,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_16_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_16,classname): MACRO_NEW_VEST(trop_16,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_17_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_17,classname): MACRO_NEW_VEST(trop_17,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_18_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_18,classname): MACRO_NEW_VEST(trop_18,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_19_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_19,classname): MACRO_NEW_VEST(trop_19,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_20_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_20,classname): MACRO_NEW_VEST(trop_20,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_21_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_21,classname): MACRO_NEW_VEST(trop_21,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_22_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_22,classname): MACRO_NEW_VEST(trop_22,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_23_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_23,classname): MACRO_NEW_VEST(trop_23,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};
	#define MACRO_NEW_TROOPER_VEST_24_ITEM(classname,displayname)\
		class MACRO_NEW_VEST(trop_24,classname): MACRO_NEW_VEST(trop_24,base)\
		{\
			scope = 2;\
			scopeArsenal = 2;\
			displayName = [ORG] Trooper Vest ('##displayname##');\
		};



// ============================================================================== Intercom Defines
	
	
	#define IntercomMacro class ACE_SelfActions : ACE_SelfActions { \
	    class TFAR_IntercomChannel { \
	        displayName = "Intercom"; \
	        condition = "true"; \
	        statement = ""; \
	        icon = ""; \
	        class TFAR_IntercomChannel_disabled { \
	            displayName = "Disabled"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							 if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != -1"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];"; \
	        }; \
	        class TFAR_IntercomChannel_1 { \
	            displayName = "Channel 1"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != 0"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];"; \
	        }; \
	        class TFAR_IntercomChannel_2 { \
	            displayName = "Channel 2"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != 1"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];"; \
	        }; \
			class TFAR_IntercomChannel_3 { \
	            displayName = "Crew"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							 if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != 2"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];"; \
	        }; \
	    }; \
	};

	#define IntercomMacroAIR \
	    class TFAR_IntercomChannel { \
	        displayName = "Intercom"; \
	        condition = "true"; \
	        statement = ""; \
	        icon = ""; \
	        class TFAR_IntercomChannel_disabled { \
	            displayName = "Disabled"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							 if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != -1"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];"; \
	        }; \
	        class TFAR_IntercomChannel_1 { \
	            displayName = "Channel 1"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != 0"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];"; \
	        }; \
	        class TFAR_IntercomChannel_2 { \
	            displayName = "Channel 2"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != 1"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];"; \
	        }; \
			class TFAR_IntercomChannel_3 { \
	            displayName = "Crew"; \
	            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];\
							 if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};\
							 _intercom != 2"; \
	            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];"; \
	        }; \
	    };

#define B1_Hitpoints \
		class HitPoints : HitPoints \
		{ \
			class HitFace \
			{ \
				armor = 1; \
				material = -1; \
				name = "face_hub"; \
				passThrough = 0.80000001; \
				radius = 0.079999998; \
				explosionShielding = 0.1; \
				minimalHit = 0.0099999998; \
			}; \
			class HitNeck : HitFace \
			{ \
				armor = 1; \
				material = -1; \
				name = "neck"; \
				passThrough = 0.80000001; \
				radius = 0.1; \
				explosionShielding = 0.5; \
				minimalHit = 0.0099999998; \
			}; \
			class HitHead : HitNeck \
			{ \
				armor = 1; \
				material = -1; \
				name = "head"; \
				passThrough = 0.80000001; \
				radius = 0.2; \
				explosionShielding = 0.5; \
				minimalHit = 0.0099999998; \
				depends = "HitFace max HitNeck"; \
			}; \
			class HitPelvis : HitHead \
			{ \
				armor = 6; \
				material = -1; \
				name = "pelvis"; \
				passThrough = 0.80000001; \
				radius = 0.23999999; \
				explosionShielding = 3; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
				depends = ""; \
			}; \
			class HitAbdomen : HitPelvis \
			{ \
				armor = 4; \
				material = -1; \
				name = "spine1"; \
				passThrough = 0.80000001; \
				radius = 0.16; \
				explosionShielding = 3; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitDiaphragm : HitAbdomen \
			{ \
				armor = 4; \
				material = -1; \
				name = "spine2"; \
				passThrough = 0.33000001; \
				radius = 0.18000001; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitChest : HitDiaphragm \
			{ \
				armor = 6; \
				material = -1; \
				name = "spine3"; \
				passThrough = 0.33000001; \
				radius = 0.18000001; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitBody : HitChest \
			{ \
				armor = 800; \
				material = -1; \
				name = "body"; \
				passThrough = 1; \
				radius = 0; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
			}; \
			class HitArms : HitBody \
			{ \
				armor = 4; \
				material = -1; \
				name = "arms"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 3; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
				depends = "0"; \
			}; \
			class HitHands : HitArms \
			{ \
				armor = 4; \
				material = -1; \
				name = "hands"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 1; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
				depends = "HitArms"; \
			}; \
			class HitLegs : HitHands \
			{ \
				armor = 4; \
				material = -1; \
				name = "legs"; \
				passThrough = 1; \
				radius = 0.14; \
				explosionShielding = 3; \
				visual = "injury_legs"; \
				minimalHit = 0.0099999998; \
				depends = "0"; \
			}; \
			class Incapacitated : HitLegs \
			{ \
				armor = 800; \
				material = -1; \
				name = "body"; \
				passThrough = 1; \
				radius = 0; \
				explosionShielding = 3; \
				visual = ""; \
				minimalHit = 0; \
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
			}; \
			class HitLeftArm \
			{ \
				armor = 4; \
				material = -1; \
				name = "hand_l"; \
				passThrough = 1; \
				radius = 0.079999998; \
				explosionShielding = 3; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitRightArm : HitLeftArm \
			{ \
				name = "hand_r"; \
			}; \
			class HitLeftLeg \
			{ \
				armor = 4; \
				material = -1; \
				name = "leg_l"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 3; \
				visual = "injury_legs"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitRightLeg : HitLeftLeg \
			{ \
				name = "leg_r"; \
			}; \
		}; \

#define BX_Hitpoints \
		class HitPoints : HitPoints \
		{ \
			class HitFace \
			{ \
				armor = 1; \
				material = -1; \
				name = "face_hub"; \
				passThrough = 0.80000001; \
				radius = 0.079999998; \
				explosionShielding = 0.1; \
				minimalHit = 0.0099999998; \
			}; \
			class HitNeck : HitFace \
			{ \
				armor = 1; \
				material = -1; \
				name = "neck"; \
				passThrough = 0.80000001; \
				radius = 0.1; \
				explosionShielding = 0.5; \
				minimalHit = 0.0099999998; \
			}; \
			class HitHead : HitNeck \
			{ \
				armor = 1; \
				material = -1; \
				name = "head"; \
				passThrough = 0.80000001; \
				radius = 0.2; \
				explosionShielding = 0.5; \
				minimalHit = 0.0099999998; \
				depends = "HitFace max HitNeck"; \
			}; \
			class HitPelvis : HitHead \
			{ \
				armor = 12; \
				material = -1; \
				name = "pelvis"; \
				passThrough = 0.80000001; \
				radius = 0.23999999; \
				explosionShielding = 3; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
				depends = ""; \
			}; \
			class HitAbdomen : HitPelvis \
			{ \
				armor = 8; \
				material = -1; \
				name = "spine1"; \
				passThrough = 0.80000001; \
				radius = 0.16; \
				explosionShielding = 3; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitDiaphragm : HitAbdomen \
			{ \
				armor = 8; \
				material = -1; \
				name = "spine2"; \
				passThrough = 0.33000001; \
				radius = 0.18000001; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitChest : HitDiaphragm \
			{ \
				armor = 12; \
				material = -1; \
				name = "spine3"; \
				passThrough = 0.33000001; \
				radius = 0.18000001; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitBody : HitChest \
			{ \
				armor = 1325; \
				material = -1; \
				name = "body"; \
				passThrough = 1; \
				radius = 0; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
			}; \
			class HitArms : HitBody \
			{ \
				armor = 8; \
				material = -1; \
				name = "arms"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 3; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
				depends = "0"; \
			}; \
			class HitHands : HitArms \
			{ \
				armor = 8; \
				material = -1; \
				name = "hands"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 1; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
				depends = "HitArms"; \
			}; \
			class HitLegs : HitHands \
			{ \
				armor = 8; \
				material = -1; \
				name = "legs"; \
				passThrough = 1; \
				radius = 0.14; \
				explosionShielding = 3; \
				visual = "injury_legs"; \
				minimalHit = 0.0099999998; \
				depends = "0"; \
			}; \
			class Incapacitated : HitLegs \
			{ \
				armor = 1000; \
				material = -1; \
				name = "body"; \
				passThrough = 1; \
				radius = 0; \
				explosionShielding = 3; \
				visual = ""; \
				minimalHit = 0; \
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
			}; \
			class HitLeftArm \
			{ \
				armor = 8; \
				material = -1; \
				name = "hand_l"; \
				passThrough = 1; \
				radius = 0.079999998; \
				explosionShielding = 3; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitRightArm : HitLeftArm \
			{ \
				name = "hand_r"; \
			}; \
			class HitLeftLeg \
			{ \
				armor = 8; \
				material = -1; \
				name = "leg_l"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 3; \
				visual = "injury_legs"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitRightLeg : HitLeftLeg \
			{ \
				name = "leg_r"; \
			}; \
		}; \

#define Player_Hitpoints \
		class HitPoints : HitPoints \
		{ \
			class HitFace \
			{ \
				armor = 1; \
				material = -1; \
				name = "face_hub"; \
				passThrough = 0.80000001; \
				radius = 0.079999998; \
				explosionShielding = 0.1; \
				minimalHit = 0.0099999998; \
			}; \
			class HitNeck : HitFace \
			{ \
				armor = 1; \
				material = -1; \
				name = "neck"; \
				passThrough = 0.80000001; \
				radius = 0.1; \
				explosionShielding = 0.5; \
				minimalHit = 0.0099999998; \
			}; \
			class HitHead : HitNeck \
			{ \
				armor = 1; \
				material = -1; \
				name = "head"; \
				passThrough = 0.80000001; \
				radius = 0.2; \
				explosionShielding = 0.5; \
				minimalHit = 0.0099999998; \
				depends = "HitFace max HitNeck"; \
			}; \
			class HitPelvis : HitHead \
			{ \
				armor = 12; \
				material = -1; \
				name = "pelvis"; \
				passThrough = 0.80000001; \
				radius = 0.23999999; \
				explosionShielding = 3; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
				depends = ""; \
			}; \
			class HitAbdomen : HitPelvis \
			{ \
				armor = 8; \
				material = -1; \
				name = "spine1"; \
				passThrough = 0.80000001; \
				radius = 0.16; \
				explosionShielding = 3; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitDiaphragm : HitAbdomen \
			{ \
				armor = 8; \
				material = -1; \
				name = "spine2"; \
				passThrough = 0.33000001; \
				radius = 0.18000001; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitChest : HitDiaphragm \
			{ \
				armor = 12; \
				material = -1; \
				name = "spine3"; \
				passThrough = 0.33000001; \
				radius = 0.18000001; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitBody : HitChest \
			{ \
				armor = 1000; \
				material = -1; \
				name = "body"; \
				passThrough = 1; \
				radius = 0; \
				explosionShielding = 6; \
				visual = "injury_body"; \
				minimalHit = 0.0099999998; \
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; \
			}; \
			class HitArms : HitBody \
			{ \
				armor = 8; \
				material = -1; \
				name = "arms"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 3; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
				depends = "0"; \
			}; \
			class HitHands : HitArms \
			{ \
				armor = 8; \
				material = -1; \
				name = "hands"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 1; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
				depends = "HitArms"; \
			}; \
			class HitLegs : HitHands \
			{ \
				armor = 8; \
				material = -1; \
				name = "legs"; \
				passThrough = 1; \
				radius = 0.14; \
				explosionShielding = 3; \
				visual = "injury_legs"; \
				minimalHit = 0.0099999998; \
				depends = "0"; \
			}; \
			class Incapacitated : HitLegs \
			{ \
				armor = 1000; \
				material = -1; \
				name = "body"; \
				passThrough = 1; \
				radius = 0; \
				explosionShielding = 3; \
				visual = ""; \
				minimalHit = 0; \
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2"; \
			}; \
			class HitLeftArm \
			{ \
				armor = 8; \
				material = -1; \
				name = "hand_l"; \
				passThrough = 1; \
				radius = 0.079999998; \
				explosionShielding = 3; \
				visual = "injury_hands"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitRightArm : HitLeftArm \
			{ \
				name = "hand_r"; \
			}; \
			class HitLeftLeg \
			{ \
				armor = 8; \
				material = -1; \
				name = "leg_l"; \
				passThrough = 1; \
				radius = 0.1; \
				explosionShielding = 3; \
				visual = "injury_legs"; \
				minimalHit = 0.0099999998; \
			}; \
			class HitRightLeg : HitLeftLeg \
			{ \
				name = "leg_r"; \
			}; \
		}; \


// ============================================================================== Macro Predefined Equipments

	#define MACRO_AIR_COMMON_WEAPS "Laserdesignator_pilotCamera","CMFlareLauncher"
	#define MACRO_AIR_COMMON_MAGS "Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"

// ============================================================================== Macro XEH
	//---XEH prep---
	#define MACRO_PREP_XEH(Script,name)\
	[MACRO_QUOTE(MACRO_SCRIPT_PATH\Script),MACRO_QUOTE(MACRO_FNC_NAME(name))] call CBA_fnc_compileFunction;
	
	#define MACRO_PREP(Script,Name)\
	MACRO_FNC_NAME(Name) = compile preprocessFileLineNumbers MACRO_QUOTE(MACRO_SCRIPT_PATH\Script)