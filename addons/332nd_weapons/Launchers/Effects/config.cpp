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
	class ls_light_hailfireRocket;
	class 332nd_aux_effects_rocket_blue: ls_light_hailfireRocket
	{
		color[] = {0,0,1};
	};
	class 332nd_aux_effects_rocket_green: ls_light_hailfireRocket
	{
		color[] = {0,1,0};
	};
	class 332nd_aux_effects_rocket_red: ls_light_hailfireRocket
	{
		color[] = {186,0,0};
	};
};

class CfgCloudlets
{
	class Missile2;
    class ls_particle_hailfireRocket;
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
	
	class 332nd_aux_effects_smoke_PLXblue: ls_particle_hailfireRocket //PLX
	{
		color[] = {{0.1,0.2,0.8,1},{0,0,0,1},{0,0,0,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;	
	};
	class 332nd_aux_effects_smoke_PLXgreen: ls_particle_hailfireRocket //PLX
	{
		color[] = {{0.2,0.8,0.1,1},{0,0,0,1},{0,0,0,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;	
	};
	class 332nd_aux_effects_smoke_PLXred: ls_particle_hailfireRocket
	{
		color[] = {{0.8,0.1,0.2,1},{0,0,0,1},{0,0,0,1}};
		colorVar[] = {0,0,0,1};
		lifetime = 3;
		colorCoef[] = {1,1,1,1};
		size[] = {2,2};
		volume = 2;	
	};
	
	class ls_particle_hailfireRocketSparks;
	class 332nd_aux_effects_sparks_blue: ls_particle_hailfireRocketSparks //PLX / RPS4
	{
	    color[] = {{0.4,0.4,1,-50}};
		colorCoef[] = {1,1,1,1};
		emissiveColor[] = {{0.8,0.8,1,1}};
		lifetime = 3;	
		weight = 1;
	};
	class 332nd_aux_effects_sparks_embers: ls_particle_hailfireRocketSparks //RPS-6
	{
	    color[] = {{1,1,1,-50}};
		lifetime = 0.5;
		weight=1;
		emissiveColor[] = {{1,1,1,1}};
	};
	class 332nd_aux_effects_sparks_green: ls_particle_hailfireRocketSparks //PLX / RPS4
	{
	    color[] = {{0.4,1,0.4,-50}};
		lifetime = 3;
		weight = 1;
		emissiveColor[] = {{0.8,1,0.8,1}};
	};
	class 332nd_aux_effects_sparks_red: ls_particle_hailfireRocketSparks //PLX / RPS4
	{
	    color[] = {{1,0.4,0.4,-50}};
		lifetime = 3;
		weight = 1;
		emissiveColor[] = {{1,0.8,0.8,1}};
	};

    class ArtilleryShell1;
    class 332nd_aux_effects_smoke_tracerblue: ArtilleryShell1
	{
		color[] = {{0.2,0,0.8,0.20},{0.1,0.1,0.85,0.10},{0.15,0.15,0.9,0.02},{0.2,0.2,0.95,0.006},{0.25,0.25,1,0.001}};
		colorVar[] = {0,0,0,0};
		colorCoef[] = {1,1,1,1};
		volume = 20;	
        lifetime = 0.6;
        size[] = {0.6,1.8,2.5};
        interval = 0.005;
        weight=4;
        emissiveColor[] = {{0.5,0.5,0.8,0.14},{0.8,0.8,0.8,0.5}};
	};
    class 332nd_aux_effects_smoke_tracergreen: 332nd_aux_effects_smoke_tracerblue
    {
    color[] = {{0.2,0.8,0,0.20},{0.1,0.85,0.1,0.10},{0.15,0.9,0.15,0.02},{0.2,0.95,0.2,0.006},{0.25,1,0.25,0.001}};
    emissiveColor[] = {{0.5,0.8,0.5,0.14},{0.8,0.8,0.8,0.5}};
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

class 332nd_aux_effects_blue_bullet
{
    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_tracerblue"; 
    };
};

class 332nd_aux_effects_green_bullet
{
    class MissileEffect1
    {
        simulation = "particles";
        type = "332nd_aux_effects_smoke_tracergreen"; 
    };
};
	