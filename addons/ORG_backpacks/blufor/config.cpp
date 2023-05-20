#include "../../ORG_main/macros/main.hpp"

class CfgPatches
{
	class MACRO_PATCH_NAME(blufor_backpacks)
	{
		author = "Namenai";
        addonRootClass = MACRO_PATCH_NAME(backpacks)
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(backpacks)
		};
		requiredVersion = 0.1;
		units[] = {
            MACRO_NEW_BACKPACK(blufor,ORG_jt_12),
            MACRO_NEW_BACKPACK(blufor,ORG_jt_12_LR),
            };
		weapons[] = {};
	};
};

class CfgVehicles
{
    class MACRO_NEW_BACKPACK(blufor,ORG_jt_12_base);

    
	class MACRO_NEW_BACKPACK(blufor,ORG_jt_12): MACRO_NEW_BACKPACK(blufor,ORG_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,Trooper)
        scope = 2;
        maximumLoad = 260;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12_Trooper_co.paa};

        NSM_jumppack_jump_types[]=
		{
			
			{
				"Foward",
				{20,5,50,0,1,0}
			},
			
            {
				"Vertical",
				{4,15,40,0,0,0}
			},

            {
				"Short",
				{12,7,30,0,1,1}
			},

			{
				"Emergency",
				{30,15,80,0,0,0}
			}
		};


        NSM_jumppack_spam_delay = 0;
        NSM_jumppack_energy_capacity = 80;
        NSM_jumppack_recharge = 5;

        JLTS_isJumppack = 0;
    };

    class MACRO_NEW_BACKPACK(blufor,ORG_jt_12_LR) : MACRO_NEW_BACKPACK(blufor,ORG_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,Radio Pack)
        scope = 2;
        maximumLoad = 260;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12_NCO_co.paa};

        tf_dialog = "JLTS_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 50000;
        tf_subtype = "digital_lr";

        NSM_jumppack_spam_delay = 0;
        NSM_jumppack_energy_capacity = 80;
        NSM_jumppack_recharge = 5;
       NSM_jumppack_jump_types[]=
		{
			
			{
				"Foward",
				{20,5,50,0,1,0}
			},
			
            {
				"Vertical",
				{4,15,40,0,0,0}
			},

            {
				"Short",
				{12,7,30,0,1,1}
			},

			{
				"Emergency",
				{30,15,80,0,0,0}
			}
		};
        JLTS_isJumppack = 0;
    };

    class MACRO_NEW_BACKPACK(blufor,ORG_jt_12_MED) : MACRO_NEW_BACKPACK(blufor,ORG_jt_12_base)
    {
        displayName = MACRO_ITEM_DISPLAYNAME(JT-12,Medic Pack)
        scope = 2;
        maximumLoad = 393;
        hiddenSelectionsTextures[] = {MACRO_BACKPACK_TEXTURES_PATH\jt12\JT-12_Medic_co.paa};

        tf_dialog = "JLTS_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 50000;
        tf_subtype = "digital_lr";
        NSM_jumppack_jump_types[]=
		{
			
			{
				"Foward",
				{20,5,50,0,1,0}
			},
			
            {
				"Vertical",
				{4,15,40,0,0,0}
			},

            {
				"Short",
				{12,7,30,0,1,1}
			},

			{
				"Emergency",
				{30,15,80,0,0,0}
			}
		};
        NSM_jumppack_spam_delay = 0;
        NSM_jumppack_energy_capacity = 80;
        NSM_jumppack_recharge = 5;

        JLTS_isJumppack = 0;
    };
};




