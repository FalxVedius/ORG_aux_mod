class CfgPatches
{
	class 327th_firepuncher
	{
		author="327th Aux Team";
		name="327th Sky Corps aux mod";
		url="";
		requiredAddons[]={};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"327th_firepuncher_rifle"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class 327th_firepuncher_rifle: Rifle_Base_F
	{
		author="327th_Aux_Team & High";
		baseWeapon="327th_firepuncher_rifle";
		scope=2;
		displayName="[327th] Firepuncher Rifle";
		descriptionShort="Firepuncher";
		picture="\327th_weapons\data\dc15x_ui.paa";
		model="327th_weapons\327th_firepuncher\CrossHair_Sniper.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"
		};
		magazines[]=
		{
			"327th_Firepuncher_mag",
			"327th_FirepuncherCIS_mag",
			"327th_FirepuncherAP_mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
		class Single: Mode_SemiAuto
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
					"327th_weapons\327th_firepuncher\data\firepunchersound",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer = 0;
            aiRateOfFire=1e-006;
            aiRateOfFireDistance = 800;
			reloadTime=1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00013;
			minRange=200;
			minRangeProbab=0.5;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			ace_overheating_mrbs=3000;
			ace_overheating_slowdownFactor=1;
			ace_overheating_allowSwapBarrel=1;
			ACE_Overheating_JamChance = 0;
			ace_overheating_dispersion=0.75;
		};
		class single_medium_optics1: Single
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
					"327th_weapons\327th_firepuncher\data\firepunchersound",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer = 0;
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=800;
		};
		class single_far_optics2: single_medium_optics1
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
					"327th_weapons\327th_firepuncher\data\firepunchersound",
					1,
					1.1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer = 0;
			requiredOpticType=2;
			showToPlayer=0;
			minRange=800;
			minRangeProbab=0.1;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=3000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=800;
		};
		weaponInfoType="RscOptics_tws";
		modelOptics="\A3\Weapons_f\acc\reticle_tws";
		class OpticsModes
		{
			class Snip
			{
				useModelOptics=1;
				opticsFlare=1;
				opticsID=1;
				cameraDir="";
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=1;
				discreteInitIndex=1;
				discretefov[]=
				{
					".25/1",
					".25/4",
					".25/8",
					".25/12",
					".25/24"
				};
				discreteDistanceInitIndex=2;
				distanceZoomMin=300;
				distanceZoomMax=2400;
				memoryPointCamera="eye";
				modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
				opticsPPEffects[]=
				{
					"OpticsCHAbera1"
				};
				weaponInfoType="RscWeaponRangeZeroingFOV";
				opticsZoomMin=".25/24";
				opticsZoomMax=0.25;
				opticsZoomInit=0.25;
				thermalMode[]={0,5};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsDisplayName="WFOV";
				opticsDisablePeripherialVision=0;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
					"327th_flash_hider",
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\a3\data_f_mark\Proxies\Weapon_Slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_Bipod_VK38X_f",
					"bipod_01_f_blk"
				};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
};
class cfgMods
{
	author="327th_Aux_Team";
	timepacked="1622771315";
};
