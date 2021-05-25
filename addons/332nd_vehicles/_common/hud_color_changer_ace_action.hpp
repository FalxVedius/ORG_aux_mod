class 332nd_aux_HUD_Changer
{
    displayName = "Change HUD Color :)";
    exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
    condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
    showDisabled = 0;
    priority = 2.5;
    icon = MACRO_HUD_CHANGER_ICONS\colorWheel.paa;
    class 332nd_aux_Red_HUD
    {
        displayName = "Red HUD Color";
        exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
        condition = "!(isNull objectParent player)";
        statement = [1,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        showDisabled = 0;
        runOnHover = 1;
        priority = 2.5;
        icon = MACRO_HUD_CHANGER_ICONS\red.paa;
    };

    class 332nd_aux_Orange_HUD:332nd_aux_Red_HUD
    {
        displayName = "Orange HUD Color";
        statement = [1,.05,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\orange.paa;
        
    };

    class 332nd_aux_Yellow_HUD:332nd_aux_Red_HUD
    {
        displayName = "Yellow HUD Color";
        statement = [1,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\yellow.paa;
        
    };

    class 332nd_aux_Green_HUD:332nd_aux_Red_HUD
    {
        displayName = "Green HUD Color";
        //condition = "true";
        statement = [0,1,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\green.paa;
        // showDisabled = 0;
        // priority = 2.5;
    };

    class 332nd_aux_Cyan_HUD:332nd_aux_Red_HUD
    {
        displayName = "Cyan HUD Color";
        statement = [0,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\cyan.paa;
        
    };

    class 332nd_aux_Blue_HUD:332nd_aux_Red_HUD
    {
        displayName = "Blue HUD Color";
        statement = [0,0,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\blue.paa;
        
    };

    class 332nd_aux_Purple_HUD:332nd_aux_Red_HUD
    {
        displayName = "Purple HUD Color";
        statement = [.5,0,.5,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\purple.paa;
        
    };
    
    class 332nd_aux_White_HUD:332nd_aux_Red_HUD
    {
        displayName = "White HUD Color";
        statement = [1,1,1,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\white.paa;
        
    };

    class 332nd_aux_Black_HUD:332nd_aux_Red_HUD
    {
        displayName = "Black HUD Color";
        statement = [0,0,0,1,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\black.paa;
        
    };

    class 332nd_aux_Clear_HUD:332nd_aux_Red_HUD
    {
        displayName = "No HUD Color";
        statement = [1,1,1,0,vehicle player] spawn MACRO_FNC_NAME(change_hud_color);
        icon = MACRO_HUD_CHANGER_ICONS\noHud.paa;
        
    };
};