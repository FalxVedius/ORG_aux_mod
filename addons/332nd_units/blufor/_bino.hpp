class JLTS_CloneBinocular;

class MACRO_NEW_BINO(basic):JLTS_CloneBinocular
{
    descriptionShort = "Magnification: 5xâ€“25x";
    descriptionUse = "<t color='#9cf953'>Use: </t>Switch to Designator";

    displayName = "Clone trooper electrobinocular";

    distanceZoomMax = 2300;
    distanceZoomMin = 100;
    visionMode[] = {"Normal","NVG"};
    author = "MrClock";

    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_binocular_co.paa"};
    thermalMode[] = {2};
}