class Reflectors: Reflectors
{
    class Left: Left
    {
        ambient[] = {(255/255)*10000,(100/255)*10000,(0/255)*10000};
        color[] = {(255/255)*10000,(100/255)*10000,(0/255)*10000};
        coneFadeCoef = 10;
		dayLight = 0;
        innerAngle = 5;
        intensity = 200;//50
        outerAngle = 75;
        class Attenuation
        {
            constant = 0;
            hardLimitEnd = 1000;
            hardLimitStart = 700;
            linear = 1;
            quadratic = 0;
            start = 0;
        };
    }
    class Right: Right
    {
        ambient[] = {(255/255)*10000,(100/255)*10000,(0/255)*10000};
        color[] = {(255/255)*10000,(100/255)*10000,(0/255)*10000};
        coneFadeCoef = 10;
		dayLight = 0;
        innerAngle = 5;
        intensity = 200;//50
        outerAngle = 75;
        class Attenuation
        {
            constant = 0;
            hardLimitEnd = 1000;
            hardLimitStart = 700;
            linear = 1;
            quadratic = 0;
            start = 0;
        };
    }
}