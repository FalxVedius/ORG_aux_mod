class JLTS_CloneNVG;
class JLTS_CloneNVG_black;
class JLTS_CloneNVGCC;
class JLTS_NVG_droid_chip_1;
class JLTS_CloneNVGRange;
class JLTS_CloneNVGRange_black;
class JLTS_CloneNVGMC;
class ls_mandalorian_rangefinder_nvg;
class lsd_gar_p1Standard_nvg;
class lsd_gar_standard_nvg;
class lsd_gar_standardSPC_nvg;
class lsd_gar_p1Rangefinder_nvg;
class lsd_gar_rangefinder_nvg;
class lsd_gar_p1Commander_nvg;
class lsd_gar_p2Commander_nvg;
class lsd_gar_p1MarshalCommander_nvg;
class lsd_gar_p2MarshalCommander_nvg;
class lsd_gar_p1SingleHeadlamp_nvg;
class lsd_gar_p2SingleHeadlamp_nvg;


class MACRO_NEW_NVG(Leadership_MCNVG_P1) :lsd_gar_p1MarshalCommander_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Commander Visor (P1)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_MCNVG_P2) :lsd_gar_p2MarshalCommander_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Commander Visor (P2)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Headlamp_P1) :lsd_gar_p1SingleHeadlamp_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Headlamp (P1)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Headlamp_P2) :lsd_gar_p2SingleHeadlamp_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Headlamp (P2)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Specialist_Visor_P1) :lsd_gar_p1Standard_nvg
{
    scope = 1;
    hiddenSelections[] = { "camo1", "camo2" };
    hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\NVG.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Visor (P1)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Specialist_Visor_P2) :lsd_gar_standard_nvg
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\NVG.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Visor (P2)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Commander_visor_NVG_P1) :lsd_gar_p1Commander_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Sun Visor (P1)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1", "camo2", "camo3" };
        mass = 20;
        modelOff = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg.p3d";
        type = 616;
        uniformModel = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p1Commander_nvg.p3d";
    };

};

class MACRO_NEW_NVG(Commander_visor_NVG_P2) :lsd_gar_p2Commander_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Sun Visor (P2)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";


    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Sniper_Attachment) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Sniper Attachment";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
    hiddenSelections[] = { "illum","camo1" };
    hiddenSelectionsMaterials[] = { "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat" };
    hiddenSelectionsTextures[] = { "\SWLB_clones_spec\data\camo2_co.paa","\SWLB_clones_spec\data\camo2_co.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "illum","camo1" };
        mass = 20;
        modelOff = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
        type = 616;
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_sniper_armor.p3d";
    };
};

class MACRO_NEW_NVG(Shoulder_Attachment) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Shoulder Attachment";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\SWLB_units_spec\data\SWLB_Omega_Armor2_Co.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
        type = 616;
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_tech_armor.p3d";
    };
};

class MACRO_NEW_NVG(EOD_Bag) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] EOD Bag";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = {};
        mass = 20;
        modelOff = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
        type = 616;
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_eod_armor.p3d";
    };
};

class MACRO_NEW_NVG(Low_Profile) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Low Profile";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { "\a3\characters_f\heads\glasses\data\lowprofile_black_ca.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo" };
        mass = 20;
        modelOff = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
        type = 616;
        uniformModel = "\A3\characters_f_beta\heads\glasses\g_lowprofile";
    };
};

class MACRO_NEW_NVG(Scarf) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Scarf";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\SWLB_CEE\data\SWLB_CEE_Scarf_Co.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
        type = 616;
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    };
};

class MACRO_NEW_NVG(Scarf_blue) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Scarf (Blue)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Blue.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
        type = 616;
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    };
};

class MACRO_NEW_NVG(Scarf_green) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Scarf (Green)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Green.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
        type = 616;
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    };
};

class MACRO_NEW_NVG(Scarf_orange) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Scarf (Orange)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Orange.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
        type = 616;
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    };
};

class MACRO_NEW_NVG(Scarf_red) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Scarf (Red)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_Red.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
        type = 616;
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    };
};

class MACRO_NEW_NVG(Scarf_white) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Scarf (White)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "SWLB_CEE\data\SWLB_CEE_Scarf_White.paa" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
        type = 616;
        uniformModel = "\SWLB_CEE\data\SWLB_CEE_Clone_Scarf.p3d";
    };
};

class MACRO_NEW_NVG(Rangefinder_P1) :lsd_gar_p1Rangefinder_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Rangefinder (P1)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Rangefinder_P2) :lsd_gar_rangefinder_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Rangefinder (P2)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(assault_Ant) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Antenna";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\ORG_units\Facewear\data\Antenna" };

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
        type = 616;
        uniformModel = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
    };
};

class MACRO_NEW_NVG(mando_rangefinder) :ls_mandalorian_rangefinder_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Mando Rangefinder";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Trooper_NVG) :JLTS_NVG_droid_chip_1
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Trooper NVG chip";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_Visor_P1) :lsd_gar_p1Standard_nvg
{
    scope = 1;
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\NVG_Leadership.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Leadership/Marksman Visor (P1)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_p1visor_nvg_off.p3d";
        type = 616;
        uniformModel = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_p1visor_nvg_on.p3d";
    };
};

class MACRO_NEW_NVG(Leadership_Visor_P2) :lsd_gar_standard_nvg
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\ORG_units\_textures\nvgs\NVG.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[ORG] Leadership/Marksman Visor (P2)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

    class ItemInfo
    {
        hiddenSelections[] = { "camo1" };
        mass = 20;
        modelOff = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_off.p3d";
        type = 616;
        uniformModel = "\lsd_equipment_bluefor\nvg\gar\visor\lsd_gar_visor_nvg_on.p3d";
    };
}