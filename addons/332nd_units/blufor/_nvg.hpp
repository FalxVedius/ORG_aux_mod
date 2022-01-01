class JLTS_CloneNVG;
class JLTS_CloneNVG_black;
class JLTS_CloneNVGCC;
class JLTS_NVG_droid_chip_1;
class JLTS_CloneNVGRange;
class JLTS_CloneNVGRange_black;
class JLTS_CloneNVGMC;

class MACRO_NEW_NVG(Leadership_MCNVG) :JLTS_CloneNVGMC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership Marshal Commander Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(MCNVG) :JLTS_CloneNVGMC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Marshal Commander Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_Rangefinder) :JLTS_CloneNVGRange
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership Rangefinder (White)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","Ti" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_Rangefinder_Black) :JLTS_CloneNVGRange_black
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership Rangefinder (Black)";
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
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Specialist Visor";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Specialist_Visor_black):JLTS_CloneNVG_black
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Specialist Visor (black)";
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
    displayName = "[332nd] Commander Visor (NVG)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Commander_visor_Ti):JLTS_CloneNVGCC
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Commander Visor Leadership";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG","Ti"};
    thermalMode[] = {0,1};

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

class MACRO_NEW_NVG(Falx_Visor_332) :JLTS_CloneNVGMC
{
    hiddenSelections[] = { "camo1" };
    hiddenSelectionsTextures[] = { "\332nd_units\_textures\nvgs\Falx.paa" };
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Falx Visor (Leadership)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = { "Normal","NVG","TI" };
    thermalMode[] = { 0,1 };

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
};

class MACRO_NEW_NVG(Leadership_Visor):JLTS_CloneNVG
{
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

class MACRO_NEW_NVG(Leadership_Visor_black):JLTS_CloneNVG_black
{
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "[332nd] Leadership/Marksman Visor (black)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG","Ti"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;
}