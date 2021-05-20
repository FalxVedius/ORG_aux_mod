#include "..\..\..\332nd_main/macros/main.hpp" // my config macro lib

class CfgPatches
{
	class MACRO_PATCH_NAME(Effects)
	{
		author = MACRO_AUTHOR_PPL;
        addonRootClass = MACRO_PATCH_NAME(weapons);
		requiredAddons[]=
		{
			MACRO_PATCH_NAME(weapons)
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgLights
{
	class ls_light_concussionMissile;
	class 332nd_aux_effects_rocket_blue: ls_light_concussionMissile
	{
		color[] = {0,0,1};
	};
	class 332nd_aux_effects_rocket_green: ls_light_concussionMissile
	{
		color[] = {0,1,0};
	};
	class 332nd_aux_effects_rocket_red: ls_light_concussionMissile
	{
		color[] = {186,0,0};
	};
};

class CfgCloudlets
{
	class Missile2;
	class 332nd_aux_effects_smoke_RPS6blue: Missile2
	{
		color[] = {{0.1,0.2,0.8,1},{0.3,0.4,0.5,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 0.5;
		colorCoef[] = {1,1,1,1};
		size[] = {1,1};
		volume = 1;	
	};
	class 332nd_aux_effects_smoke_RPS6red: Missile2
	{
		color[] = {{0.8,0.1,0.2,1},{0.5,0.4,0.3,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 0.5;
		colorCoef[] = {1,1,1,1};
		size[] = {1,1};
		volume = 1;	
	};
	
	class 332nd_aux_effects_smoke_PLXblue: Missile2 //PLX
	{
		color[] = {{0.1,0.2,0.8,1},{0,0,0,1},{0,0,0,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;	
	};
	class 332nd_aux_effects_smoke_PLXgreen: Missile2 //PLX
	{
		color[] = {{0.2,0.8,0.1,1},{0,0,0,1},{0,0,0,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;	
	};
	class 332nd_aux_effects_smoke_PLXred: Missile2
	{
		color[] = {{0.8,0.1,0.2,1},{0,0,0,1},{0,0,0,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;	
	};
	
	class ls_particle_concussionMissileSparks;
	class 332nd_aux_effects_sparks_blue: ls_particle_concussionMissileSparks //PLX / RPS4
	{
	    color[] = {{0.4,0.4,1,-50}};
		colorCoef[] = {1,1,1,1};
		emissiveColor[] = {{0.8,0.8,1,1}};
		lifetime = 3;	
		weight = 1;
	};
	class 332nd_aux_effects_sparks_embers: ls_particle_concussionMissileSparks //RPS-6
	{
	    color[] = {{1,1,1,-50}};
		lifetime = 0.5;
		weight=1;
		emissiveColor[] = {{1,1,1,1}};
	};
	class 332nd_aux_effects_sparks_green: ls_particle_concussionMissileSparks //PLX / RPS4
	{
	    color[] = {{0.4,1,0.4,-50}};
		lifetime = 3;
		weight = 1;
		emissiveColor[] = {{0.8,1,0.8,1}};
	};
	class 332nd_aux_effects_sparks_red: ls_particle_concussionMissileSparks //PLX / RPS4
	{
	    color[] = {{1,0.4,0.4,-50}};
		lifetime = 3;
		weight = 1;
		emissiveColor[] = {{1,0.8,0.8,1}};
	};
};

class 332nd_aux_effects_missile_blue
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 4;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_blue";
    };

    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_RPS6blue"; 
    };

    class MissileEffect2 : MissileEffect1
    {
        type = "332nd_aux_effects_sparks_embers";
    };
};

class 332nd_aux_effects_missile_red
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 4;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_red";
    };

    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_RPS6red"; 
    };

    class MissileEffect2 : MissileEffect1
    {
        type = "332nd_aux_effects_sparks_embers";
    };
};

class 332nd_aux_effects_RPS4_blue
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_blue";
    };
    class MissileEffect2 : light1
    {
		simulation = "particles";
		type = "332nd_aux_effects_sparks_blue";
    };
};

class 332nd_aux_effects_RPS4_green
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 1;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_green";
    };
    class MissileEffect2 : light1
    {
		simulation = "particles";
		type = "332nd_aux_effects_sparks_green";
    };
};

class 332nd_aux_effects_missile_plx_blue
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 4;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_blue";
    };

    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_PLXblue"; 
    };

    class MissileEffect2 : MissileEffect1
    {
        type = "332nd_aux_effects_sparks_blue";
    };
};

class 332nd_aux_effects_missile_plx_green
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 4;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_green";
    };

    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_PLXgreen"; 
    };

    class MissileEffect2 : MissileEffect1
    {
        type = "332nd_aux_effects_sparks_green";
    };
};

class 332nd_aux_effects_missile_plx_red
{
    class light1
    {
        intensity = 1;
        interval = 1;
        lifeTime = 4;
        position[] = {0,0,0};
        simulation = "light";
        type = "332nd_aux_effects_rocket_red";
    };

    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_PLXred"; 
    };

    class MissileEffect2 : MissileEffect1
    {
        type = "332nd_aux_effects_sparks_red";
    };
};
	