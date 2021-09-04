class SWLB_clone_binocular;

class MACRO_NEW_BINO(basic): SWLB_clone_binocular
{
    descriptionShort = "Magnification: 5xâ€“25x";
    descriptionUse = "<t color='#9cf953'>Use: </t>Switch to Designator";

    displayName = "Clone trooper electrobinocular";

    distanceZoomMax = 2300;
    distanceZoomMin = 100;
    visionMode[] = {"Normal","NVG"};
    author = "332nd Aux Team";
    picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_binocular_ui_ca.paa";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\SWLB_equipment\binoculars\data\SWLB_clone_binocular_co.paa"};
    thermalMode[] = {2};
};