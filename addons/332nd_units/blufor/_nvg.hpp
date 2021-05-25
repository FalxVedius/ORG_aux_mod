class JLTS_CloneNVG;

class MACRO_NEW_NVG(basic):JLTS_CloneNVG
{
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa"};
    descriptionShort = "Night Vision Goggles";
    descriptionUse = "<t color='#9cf953'>Use: </t>Toggle Night Vision";
    displayName = "Clone trooper NV visor";
    modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";

    //ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
    author = "MrClock";
    visionMode[] = {"Normal","NVG"};
    thermalMode[] = {0,1};

    opticsZoomInit = 0.0625;
    opticsZoomMax = 1;
    opticsZoomMin = 1;

}