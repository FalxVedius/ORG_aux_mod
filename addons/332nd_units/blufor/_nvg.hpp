class JLTS_CloneNVG;
class JLTS_CloneNVG_black;
class JLTS_CloneNVGCC;
class JLTS_NVG_droid_chip_1;
class JLTS_CloneNVGRange;
class JLTS_CloneNVGRange_black;
class JLTS_CloneNVGMC;
class ls_mandalorian_rangefinder_nvg;
class lsd_gar_rangefinder_nvg;


class MACRO_NEW_NVG(Leadership_MCNVG) :JLTS_CloneNVGMC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Commander Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Rangefinder) :JLTS_CloneNVGRange
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Rangefinder (White)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Rangefinder_Black) :JLTS_CloneNVGRange_black
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Rangefinder (Black)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Specialist_Visor):JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\White_nvg.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Specialist_Visor_orange) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Orange_nvg.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Visor (Orange)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Specialist_Visor_grey):JLTS_CloneNVG_black
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Grey_nvg.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Visor (Black)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Commander_visor_NVG):JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Sun Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Sniper_Attachment) :JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Sniper Attachment";
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
    displayName = "[332nd] Shoulder Attachment";
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
    displayName = "[332nd] EOD Bag";
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
    displayName = "[332nd] Low Profile";
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
    displayName = "[332nd] Scarf";
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
    displayName = "[332nd] Scarf (Blue)";
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
    displayName = "[332nd] Scarf (Green)";
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
    displayName = "[332nd] Scarf (Orange)";
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
    displayName = "[332nd] Scarf (Red)";
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
    displayName = "[332nd] Scarf (White)";
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

class MACRO_NEW_NVG(Rangefinder_ls) :lsd_gar_rangefinder_nvg
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Rangefinder (Legions)";
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
    displayName = "[332nd] Antenna";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
    model = "\SWLB_clones_spec\SWLB_clone_commando_nvg_antenna.p3d";
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\Facewear\data\Antenna" };

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
    displayName = "[332nd] Mando Rangefinder";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Trooper_NVG):JLTS_NVG_droid_chip_1
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Trooper NVG chip";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Griff_Visor_332):JLTS_CloneNVG
{
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\332nd_units\_textures\nvgs\GriffNVG_ca.paa"};
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Griff Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Weiss_Visor_332) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Weiss.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Weiss Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Screw_Visor_332) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Screw.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Screw Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};
class MACRO_NEW_NVG(Hoggy_Visor_332) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\HoggyNVG.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Hoggy Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};
class MACRO_NEW_NVG(Ion_Visor_332) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\IonNVG.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Ion Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};
class MACRO_NEW_NVG(Halligan_Visor_332):JLTS_CloneNVG
{
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\332nd_units\_textures\nvgs\HalliganNVG_co.paa"};
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Halligan Visor (Leadership)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG","TI"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Spacy_Visor_332) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Spacy.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Spacy Visor (Leadership)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","TI" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Tanya_Visor_332) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Tanya.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Tanya Visor (Leadership)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","TI" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

//JLTS_CloneNVGMC
class MACRO_NEW_NVG(Sigma_Visor_332) :JLTS_CloneNVGCC
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Sigma.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Sigma Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};


class MACRO_NEW_NVG(Leadership_Visor):JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\White_nvg.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership/Marksman Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG","Ti"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_Visor_Orange) :JLTS_CloneNVG
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Orange_nvg.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership/Marksman Visor (Orange)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_Visor_grey):JLTS_CloneNVG_black
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Grey_nvg.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership/Marksman Visor (Black)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG","Ti"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
}