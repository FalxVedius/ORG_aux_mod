#include "../../332nd_main/macros/main.hpp" // my config macro lib
class CfgPatches
{
	class 332_BX42
	{
		author="332nd Aux team";
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F"
		};
		weapons[]=
		{
			"332_X42"
		};
		units[]={};
		magazines[]=
		{
			"332_FlamerFuel"
		};
		ammo[]=
		{
			"332_FlameRound",
			"332_FlameRound_sub"
		};
	};
};
class CfgCloudlets
{
	class ExploAmmoSmoke;
	class 332_flamesExplosion: ExploAmmoSmoke
	{
		interval="0.015";
		circleRadius=0.1;
		circleVelocity[]={0,0,0};
		particleShape="\a3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=3;
		moveVelocity[]={0,0.050000001,0};
		rotationVelocity=0;
		weight=0.075000003;
		volume=0.050000001;
		rubbing=0.050000001;
		size[]={0.2,0.2,0.2,0.2};
		sizeCoef=2.5;
		color[]=
		{
			{0.6,1,0.60000002,0.69999999},
			{0.69999999,1,0.60000002,0.49999999},
			{0.69999999,1,0.60000002,0.22},
			{0.69999999,1,0.60000002,0.1},
			{0.69999999,1,0.60000002,0}
		};
		colorCoef[]={0.69999999,1,0.60000002,1};
		animationSpeed[]={1.7,0.60000002,0.40000001,0.30000001,0.30000001};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.050000001;
		onTimerScript="";
		lifeTimeVar=1.7;
		positionVar[]=
		{
			"1 + 1.1 * intensity",
			0.30000001,
			"1 + 1.1 * intensity"
		};
		moveVelocityVar[]={0.1,0.1,0.1};
		rotationVelocityVar=0;
		sizeVar=0.050000001;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		damageTime=3;
		constantDistance=1.6;
		damageType="Fire";
	};
};
class Flame_Explosion
{
	class flame_Light
	{
		simulation="light";
		type="FiredLightMed";
		position="destructionEffect1";
		intensity=1;
		interval=1;
		lifeTime=10;
	};
	class Flame_sound
	{
		simulation="sound";
		type="Fire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
	class flamesExplosion
	{
		simulation="particles";
		type="BigDestructionFire";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
};
class CfgAmmo
{
	class BulletBase;
	class 332_FlameRound: BulletBase
	{
		submunitionAmmo="FlameRound_sub";
		submunitionConeType[]=
		{
			"poissondisc",
			3
		};
		submunitionConeAngle=1;
		triggerTime=0.01;
		hit=10;
		indirectHit=6.5;
		indirectHitRange=2.5;
		cartridge="";
		cost=2;
		visibleFire=32;
		audibleFire=12;
		visibleFireTime=20;
		airFriction=0.1;
		timetolive=2;
		maxSpeed=25;
		deflectionSlowDown=0;
		typicalSpeed=0.12;
		coefGravity=0;
		deflecting=45;
		explosive=1;
		fuseDistance=1;
		caliber=0.5;
		tracerScale=0.001;
		tracerStartTime=0.0099999998;
		tracerEndTime=0.1;
		craterEffects="";
		effectFly="SmallFire";
		explosionEffects="332_flamesExplosion";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class 332_FlameRound_sub: BulletBase
	{
		hit=10;
		indirectHit=5;
		indirectHitRange=1;
		cartridge="";
		cost=2;
		deflecting=45;
		deflectionSlowDown=0;
		visibleFire=32;
		audibleFire=12;
		visibleFireTime=20;
		airFriction=0;
		timetolive=4;
		maxSpeed=25;
		typicalSpeed=0.12;
		coefGravity=0.25;
		explosive=1;
		fuseDistance=1;
		caliber=0.5;
		tracerScale=0.0099999998;
		tracerStartTime=0.0099999998;
		tracerEndTime=0.1;
		craterEffects="";
		effectFly="SmallFire";
		explosionEffects="332_flamesExplosion";
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 332_FlamerFuel: CA_Magazine
	{
		scope=2;
		displayName="Liquid Plasma Fuel";
		ammo="332_FlameRound";
		count=45;
		initSpeed=25;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="Flamer Fuel";
	};
};
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class CfgWeapons
{
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 332_X42: arifle_MX_Base_F
	{
		author="332nd Aux Team";
		scope=2;
		scopearsenal=2;
		cursoraim="332_DC17";
		displayName=MACRO_WEAPON_DISPLAYNAME(*Experimental* X42 Plasma Thrower)
		descriptionShort="";
		picture="3AS\3AS_Weapons\X42\Data\BTX42_ui_ca.paa";
		model="3AS\3AS_Weapons\X42\BX42.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\Data\Anim\BX42.rtm"
		};
		magazines[]=
		{
			"332_FlamerFuel"
		};
		magazineWell[]={};
		fireSpreadAngle=0.94999999;
		modes[]=
		{
			
			"FullAuto"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"3AS\3AS_Weapons\X42\SFX\flamer.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"3AS\3AS_Weapons\X42\SFX\flamer.ogg",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"3AS\3AS_Weapons\X42\SFX\flamer.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			soundContinuous=1;
			reloadTime=0.1;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
			};
		};
	};
};
