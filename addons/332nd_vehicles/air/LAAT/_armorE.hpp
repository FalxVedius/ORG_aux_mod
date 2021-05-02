class HitPoints: HitPoints
{
    class HitHull: HitHull
    {
        armor = 999;
        convexComponent = "hull_hit";
        depends = "Total";
        explosionShielding = 1;
        material = 51;
        name = "hull_hit";
        passThrough = 1;
        visual = "zbytek";
        radius = 0.01;
    };
    class HitFuel: HitFuel
    {
        convexcomponent = "fuel_hit";
        hitpoint = "fuel_hit";
        name = "fuel_hit";
        explosionShielding = 2;
        radius = 0.1;
        visual = "";
        passthrough = 0.1;
        minimalhit = 0.1;
        material = -1;
        armor = 0.6*80;
    };
    class HitEngine: HitEngine
    {
        armor = 0.5*80;
        convexComponent = "engine_hit";
        explosionShielding = 2;
        material = 51;
        name = "engine_hit";
        hitpoint = "engine_hit";
        passThrough = 1;
        visual = "";
        radius = 0.2;
    };
    class HitEngine_1: HitEngine_1
    {
        convexComponent = "engine_hit_1";
        name = "engine_hit_1";
        hitpoint = "engine_hit_1";
    };
    class HitEngine_2: HitEngine_2
    {
        convexComponent = "engine_hit_2";
        name = "engine_hit_2";
        hitpoint = "engine_hit_2";
    };
    class HitHRotor: HitHRotor
    {
        armor = 3*80;
        convexComponent = "main_rotor_hit";
        explosionShielding = 2.5;
        material = 51;
        name = "main_rotor_hit";
        passThrough = 0.1;
        visual = "";
        radius = 0.01;
    };
    class HitVRotor: HitVRotor
    {
        armor = 3*80;
        convexComponent = "tail_rotor_hit";
        explosionShielding = 6;
        material = 51;
        name = "tail_rotor_hit";
        passThrough = 0.3;
        visual = "";
        radius = 0.01;
    };
    class HitAvionics: HitAvionics
    {
        armor = 1*80;
        convexComponent = "avionics_hit";
        explosionShielding = 2;
        material = 51;
        name = "avionics_hit";
        passThrough = 1;
        visual = "";
        radius = 0.5;
    };
};