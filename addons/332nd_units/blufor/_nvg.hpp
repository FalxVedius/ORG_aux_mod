class JLTS_CloneNVG;
class JLTS_CloneNVG_black;
class JLTS_CloneNVGCC;
class JLTS_NVG_droid_chip_1;

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
    displayName = "[332nd] Specialist Visor (Griff) (332nd)";
    modelOptics = "\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "Halligan, Namenai,Falx ";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

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