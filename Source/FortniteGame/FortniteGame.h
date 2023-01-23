// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Net/UnrealNetwork.h"

DECLARE_LOG_CATEGORY_EXTERN(LogFortWorld, Log, All);

UENUM(BlueprintType)
enum class EAthenaRewardItemType : uint8
{
	Normal = 0,
	HiddenReward = 1,
	NonExportedFakeReward = 2
};

UENUM(BlueprintType)
enum class EAthenaChallengeTabVisibility : uint8
{
	Hide = 0,
	ShowAlways = 1
};


UENUM(BlueprintType)
enum class EAthenaSeasonShopVisibility : uint8
{
	Hide = 0,
	ShowIfOffersAvailable = 1,
	ShowAlways = 2
};

UENUM(BlueprintType)
enum class EFortWeaponTriggerType : uint8
{
	OnPress = 0,
	Automatic = 1,
	OnRelease = 2,
	OnPressAndRelease = 3
};

UENUM(BlueprintType)
enum class EFortTextureDataType : uint8
{
	Any = 0,
	OuterWall = 1,
	InnerWall = 2,
	Corner = 3,
	Floor = 4,
	Ceiling = 5,
	Trim = 6,
	Roof = 7,
	Pillar = 8,
	Shingle = 9,
	None = 10
};

UENUM()
enum class EFortFacialAnimTypes : uint8
{
	Default,
	FaceOnly,
	FullHead,
	FromAmplitude,
	Max,
};

UENUM(BlueprintType)
enum class EFortPickupTossState : uint8
{
	NotTossed = 0,
	InProgress = 1,
	AtRest = 2
};

UENUM(BlueprintType)
enum class EFortPickupSpawnSource : uint8
{
	Unset = 0,
	PlayerElimination = 1,
	Chest = 2,
	SupplyDrop = 3,
	AmmoBox = 4
};

UENUM(BlueprintType)
enum class EFortItemEntryState : uint8
{
	NoneState = 0,
	NewItemCount = 1,
	ShouldShowItemToast = 2,
	DurabilityInitialized = 3,
	DoNotShowSpawnParticles = 4,
	FromRecoveredBackpack = 5,
	FromGift = 6,
	PendingUpgradeCriteriaProgress = 7,
	OwnerBuildingHandle = 8,
	FromDroppedPickup = 9,
	JustCrafted = 10,
	CraftAndSlotTarget = 11,
	GenericAttributeValueSet = 12
};


UENUM(BlueprintType)
enum class EFortWeaponReloadType : uint8
{
	ReloadWholeClip = 0,
	ReloadIndividualBullets = 1,
	ReloadBasedOnAmmoCostPerFire = 2,
	ReloadBasedOnCartridgePerFire = 3
};

UENUM(BlueprintType)
enum class EFortLevelStreamingState : uint8
{
	LSS_Unloaded = 0,
	LSS_Loaded = 1,
	LSS_UnconditionalFoundationsUpdated = 2,
	LSS_AllFoundationsUpdated = 3,
	LSS_NewActorsCreatedButNotUpdated = 4,
	LSS_AllUpdated = 5,
	LSS_Ready = 6
};

UENUM(BlueprintType)
enum class EFortItemTier : uint8
{
	No_Tier = 0,
	I = 1,
	II = 2,
	III = 3,
	IV = 4,
	V = 5,
	VI = 6,
	VII = 7,
	VIII = 8,
	IX = 9,
	X = 10,
	NumItemTierValues = 11
};

UENUM(BlueprintType)
enum class EFortQuality : uint8
{
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	NumQualityValues = 3
};

UENUM()
enum EFortTextureDataSlot
{
	Primary,
	Secondary,
	Tertiary,
	Fourth,
	NumSlots UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFortProximityBasedGEApplicationType : uint8
{
	ApplyOnProximityPulse = 0,
	ApplyOnProximityTouch = 1,
	ApplyOnlyDuringProximityTouch = 2
};

UENUM(BlueprintType)
enum class EFortMarkedActorScreenClamping : uint8
{
	Default = 0,
	Clamp = 1,
	ClampWhileNew = 2,
	DontClamp = 3
};

UENUM(BlueprintType)
enum class EFortDeliveryInfoBuildingActorSpecification : uint8
{
	All = 0,
	PlayerBuildable = 1,
	NonPlayerBuildable = 2
};

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/* This ENUM changes in season 8 */
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/* SEASON 8 VERSION: */
/* enum class EFortTeam : uint8
{
	Spectator                      = 0,
	HumanCampaign                  = 1,
	Monster                        = 2,
	HumanPvP_Team1                 = 3,
	HumanPvP_Team2                 = 4,
	MAX                            = 255
};
*/
/* ANYTHING BELOW: */
UENUM(BlueprintType)
enum class EFortTeam : uint8
{
	HumanCampaign = 0,
	Monster = 1,
	HumanPvP_Team1 = 2,
	HumanPvP_Team2 = 3,
	HumanPvP_Team3 = 4,
	HumanPvP_Team4 = 5,
	HumanPvP_Team5 = 6,
	HumanPvP_Team6 = 7,
	HumanPvP_Team7 = 8,
	HumanPvP_Team8 = 9,
	HumanPvP_Team9 = 10,
	HumanPvP_Team10 = 11,
	HumanPvP_Team11 = 12,
	HumanPvP_Team12 = 13,
	HumanPvP_Team13 = 14,
	HumanPvP_Team14 = 15,
	HumanPvP_Team15 = 16,
	HumanPvP_Team16 = 17,
	HumanPvP_Team17 = 18,
	HumanPvP_Team18 = 19,
	HumanPvP_Team19 = 20,
	HumanPvP_Team20 = 21,
	HumanPvP_Team21 = 22,
	HumanPvP_Team22 = 23,
	HumanPvP_Team23 = 24,
	HumanPvP_Team24 = 25,
	HumanPvP_Team25 = 26,
	HumanPvP_Team26 = 27,
	HumanPvP_Team27 = 28,
	HumanPvP_Team28 = 29,
	HumanPvP_Team29 = 30,
	HumanPvP_Team30 = 31,
	HumanPvP_Team31 = 32,
	HumanPvP_Team32 = 33,
	HumanPvP_Team33 = 34,
	HumanPvP_Team34 = 35,
	HumanPvP_Team35 = 36,
	HumanPvP_Team36 = 37,
	HumanPvP_Team37 = 38,
	HumanPvP_Team38 = 39,
	HumanPvP_Team39 = 40,
	HumanPvP_Team40 = 41,
	HumanPvP_Team41 = 42,
	HumanPvP_Team42 = 43,
	HumanPvP_Team43 = 44,
	HumanPvP_Team44 = 45,
	HumanPvP_Team45 = 46,
	HumanPvP_Team46 = 47,
	HumanPvP_Team47 = 48,
	HumanPvP_Team48 = 49,
	HumanPvP_Team49 = 50,
	HumanPvP_Team50 = 51,
	HumanPvP_Team51 = 52,
	HumanPvP_Team52 = 53,
	HumanPvP_Team53 = 54,
	HumanPvP_Team54 = 55,
	HumanPvP_Team55 = 56,
	HumanPvP_Team56 = 57,
	HumanPvP_Team57 = 58,
	HumanPvP_Team58 = 59,
	HumanPvP_Team59 = 60,
	HumanPvP_Team60 = 61,
	HumanPvP_Team61 = 62,
	HumanPvP_Team62 = 63,
	HumanPvP_Team63 = 64,
	HumanPvP_Team64 = 65,
	HumanPvP_Team65 = 66,
	HumanPvP_Team66 = 67,
	HumanPvP_Team67 = 68,
	HumanPvP_Team68 = 69,
	HumanPvP_Team69 = 70,
	HumanPvP_Team70 = 71,
	HumanPvP_Team71 = 72,
	HumanPvP_Team72 = 73,
	HumanPvP_Team73 = 74,
	HumanPvP_Team74 = 75,
	HumanPvP_Team75 = 76,
	HumanPvP_Team76 = 77,
	HumanPvP_Team77 = 78,
	HumanPvP_Team78 = 79,
	HumanPvP_Team79 = 80,
	HumanPvP_Team80 = 81,
	HumanPvP_Team81 = 82,
	HumanPvP_Team82 = 83,
	HumanPvP_Team83 = 84,
	HumanPvP_Team84 = 85,
	HumanPvP_Team85 = 86,
	HumanPvP_Team86 = 87,
	HumanPvP_Team87 = 88,
	HumanPvP_Team88 = 89,
	HumanPvP_Team89 = 90,
	HumanPvP_Team90 = 91,
	HumanPvP_Team91 = 92,
	HumanPvP_Team92 = 93,
	HumanPvP_Team93 = 94,
	HumanPvP_Team94 = 95,
	HumanPvP_Team95 = 96,
	HumanPvP_Team96 = 97,
	HumanPvP_Team97 = 98,
	HumanPvP_Team98 = 99,
	HumanPvP_Team99 = 100,
	HumanPvP_Team100 = 101,
	HumanPvP_Team101 = 102,
	Spectator = 103
};

UENUM(BlueprintType)
enum class EFortTeamAffiliation : uint8
{
	Friendly = 0,
	Neutral = 1,
	Hostile = 2
};


UENUM(BlueprintType)
enum class EFortWeaponCoreAnimation : uint8
{
	Melee = 0,
	Pistol = 1,
	Shotgun = 2,
	PaperBlueprint = 3,
	Rifle = 4,
	MeleeOneHand = 5,
	MachinePistol = 6,
	RocketLauncher = 7,
	GrenadeLauncher = 8,
	GoingCommando = 9,
	AssaultRifle = 10,
	TacticalShotgun = 11,
	SniperRifle = 12,
	TrapPlacement = 13,
	ShoulderLauncher = 14,
	AbilityDecoTool = 15,
	Crossbow = 16,
	C4 = 17,
	RemoteControl = 18,
	DualWield = 19,
	AR_BullPup = 20,
	AR_ForwardGrip = 21,
	MedPackPaddles = 22,
	SMG_P90 = 23,
	AR_DrumGun = 24
};

UENUM(BlueprintType)
enum class EFortInventoryFilter : uint8
{
	WeaponMelee = 0,
	WeaponRanged = 1,
	Ammo = 2,
	Traps = 3,
	Consumables = 4,
	Ingredients = 5,
	Gadget = 6,
	Decorations = 7,
	Badges = 8,
	Heroes = 9,
	LeadSurvivors = 10,
	Survivors = 11,
	Defenders = 12,
	Resources = 13,
	ConversionControl = 14,
	AthenaCosmetics = 15,
	Invisible = 16,
	Max_None = 17
};

UENUM(BlueprintType)
enum class EFortResourceType : uint8
{
	Wood = 0,
	Stone = 1,
	Metal = 2,
	Permanite = 3,
	None = 4
};

UENUM(BlueprintType)
enum class EFortItemType : uint8
{
	WorldItem = 0,
	Ammo = 1,
	Badge = 2,
	BackpackPickup = 3,
	BuildingPiece = 4,
	CharacterPart = 5,
	Consumable = 6,
	Deco = 7,
	EditTool = 8,
	Ingredient = 9,
	ItemCache = 10,
	Food = 11,
	Gadget = 12,
	AthenaGadget = 13,
	HomebaseGadget = 14,
	HeroAbility = 15,
	MissionItem = 16,
	Trap = 17,
	Weapon = 18,
	WeaponMelee = 19,
	WeaponRanged = 20,
	WeaponHarvest = 21,
	WorldResource = 22,
	AccountItem = 23,
	AccountResource = 24,
	CollectedResource = 25,
	Alteration = 26,
	CardPack = 27,
	CharacterCosmetic = 28,
	Currency = 29,
	Hero = 30,
	Schematic = 31,
	Worker = 32,
	Token = 33,
	DailyRewardScheduleToken = 34,
	CodeToken = 35,
	Buff = 36,
	BuffCredit = 37,
	Quest = 38,
	ChallengeBundle = 39,
	ChallengeBundleSchedule = 40,
	GameplayModifier = 41,
	Outpost = 42,
	HomebaseNode = 43,
	Defender = 44,
	ConversionControl = 45,
	DeployableBaseCloudSave = 46,
	ConsumableAccountItem = 47,
	Quota = 48,
	Expedition = 49,
	HomebaseBannerIcon = 50,
	HomebaseBannerColor = 51,
	AthenaSkyDiveContrail = 52,
	PersonalVehicle = 53,
	AthenaGlider = 54,
	AthenaPickaxe = 55,
	AthenaHat = 56,
	AthenaBackpack = 57,
	AthenaCharacter = 58,
	AthenaDance = 59,
	AthenaConsumableEmote = 60,
	AthenaLoadingScreen = 61,
	AthenaBattleBus = 62,
	AthenaVehicleCosmetic = 63,
	AthenaWeaponCosmetic = 64,
	AthenaCallingCard = 65,
	AthenaMapMarker = 66,
	AthenaMusicOverride = 67,
	AthenaVictoryPose = 68,
	AthenaSeasonTreasure = 69,
	AthenaSeason = 70,
	EventDescription = 71,
	MatchAward = 72,
	AthenaEventToken = 73,
	EventPurchaseTracker = 74,
	CosmeticVariantToken = 75,
	SpecialItem = 76,
	Emote = 77,
	Stack = 78,
	CollectionBookPage = 79,
	BGAConsumableWrapper = 80,
	GiftBox = 81,
	Profile = 82,
	Max_None = 83
};

UENUM(BlueprintType)
enum class EFortCardinalDirection : uint8
{
	North = 0,
	East = 1,
	South = 2,
	West = 3
};

UENUM(BlueprintType)
enum class EAthenaGamePhase : uint8
{
	None = 0,
	Setup = 1,
	Warmup = 2,
	Aircraft = 3,
	SafeZones = 4,
	EndGame = 5,
	Count = 6,
	EAthenaGamePhase_MAX = 7
};

UENUM(BlueprintType)
enum class EFortRarity : uint8
{
	Handmade = 0,
	Ordinary = 1,
	Sturdy = 2,
	Quality = 3,
	Fine = 4,
	Elegant = 5,
	Masterwork = 6,
	Epic = 7,
	Badass = 8,
	Legendary = 9,
	NumRarityValues = 10
};
UENUM(BlueprintType)
enum class EFriendlyFireType : uint8
{
	Off = 0,
	On = 1
};

UENUM(BlueprintType)
enum class EDBNOType : uint8
{
	On = 0,
	Off = 1,
	NotWhenRespawning = 2
};

UENUM(BlueprintType)
enum class EAthenaRespawnType : uint8
{
	None = 0,
	InfiniteRespawn = 1,
	InfiniteRespawnExceptStorm = 2,
	EAthenaRespawnType_MAX = 3
};


UENUM(BlueprintType)
enum class EAirCraftBehavior : uint8
{
	Default = 0,
	OpposingAirCraftForEachTeam = 1,
	FlyTowardFirstCircleCenter = 2,
	NoAircraft = 3,
	EAirCraftBehavior_MAX = 4
};

UENUM(BlueprintType)
enum class ESafeZoneStartUp : uint8
{
	UseDefaultGameBehavior = 0,
	StartsWithWarmUp = 1,
	StartsWithAirCraft = 2,
	ESafeZoneStartUp_MAX = 3
};

UENUM(BlueprintType)
enum class EForceKickAfterDeathMode : uint8
{
	Disabled = 0,
	KickAll = 1,
	KickPrivate = 2,
	EForceKickAfterDeathMode_MAX = 3
};

UENUM(BlueprintType)
enum class EWeaponSelectionPreservationType : uint8
{
	KeepSelectionWhenRespawning = 0,
	NeverKeepSelection = 1,
	EWeaponSelectionPreservationType_MAX = 2
};

UENUM(BlueprintType)
enum class ERewardPlacementBonusType : uint8
{
	Solo = 0,
	Duo = 1,
	Squad = 2,
	LargeTeam = 3,
	None = 4,
	TwoTeam = 5,
	MediumTeam = 6,
	QuickSolo = 7,
	QuickDuo = 8,
	QuickSquad = 9,
	QuickLargeTeam = 10,
	QuickTwoTeam = 11,
	QuickMediumTeam = 12,
	SinglePlacement = 13,
	ERewardPlacementBonusType_MAX = 14
};

UENUM(BlueprintType)
enum class EPlaylistUIExtensionSlot : uint8
{
	Primary = 0,
	TopRightCorner = 1,
	GameInfoBox = 2,
	Quickbar = 3,
	EPlaylistUIExtensionSlot_MAX = 4
};

UENUM(BlueprintType)
enum class EAthenaScoringEvent : uint8
{
	None = 0,
	Elimination = 1,
	ChestOpened = 2,
	AmmoCanOpened = 3,
	SupplyDropOpened = 4,
	SupplyLlamaOpened = 5,
	ForagedItemConsumed = 6,
	SurvivalInMinutes = 7,
	CollectedCoinBronze = 8,
	CollectedCoinSilver = 9,
	CollectedCoinGold = 10,
	AIKilled = 11,
	EAthenaScoringEvent_MAX = 12
};

UENUM(BlueprintType)
enum class ERewardTimePlayedType : uint8
{
	Default = 0,
	NoReward = 1,
	FlatValue = 2,
	ERewardTimePlayedType_MAX = 3
};

UENUM(BlueprintType)
enum class EAthenaWinCondition : uint8
{
	LastManStanding = 0,
	LastManStandingIncludingAllies = 1,
	TimedTeamFinalFight = 2,
	FirstToGoalScore = 3,
	TimedLastMenStanding = 4,
	MutatorControlled = 5,
	MutatorControlledGoalScore = 6,
	EAthenaWinCondition_MAX = 7
};

UENUM()
enum class EFortCustomPartType : uint8
{
	Head = 0,
	Body = 1,
	Hat = 2,
	Backpack = 3,
	Charm = 4,
	Face = 5,
	NumTypes UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EFortTemplateAccess : uint8 
{
	Normal = 0,
	Trusted = 1,
	Private = 2,
	EFortTemplateAccess_MAX = 3,
};

UENUM(BlueprintType)
enum class EFortCustomGender : uint8
{
        Invalid= 0,
	Male = 1,
	Female = 2,
	Both = 3,
	EFortCustomGender_MAX= 4
};

UENUM()
enum class EFortAlteration : uint8
{
	GameplaySlot,
	ComplexCosmeticSlot,
	UserPickedCosmeticSlot,
	ColorSlot,
	HeroSpecializationTier1Slot,
	HeroSpecializationTier2Slot,
	HeroSpecializationTier3Slot,
	HeroSpecializationTier4Slot,
	HeroSpecializationTier5Slot,
	EFortAlteration_MAX,
};

UENUM()
enum class EFortCustomBodyType : uint8 {
	NONE,
	Small,
	Medium,
	MediumAndSmall,
	Large,
	LargeAndSmall,
	LargeAndMedium,
	All,
	Deprecated,
	EFortCustomBodyType_MAX,
};

UENUM()
enum class ESubGame : uint8 
{
	Campaign,
	Athena,
	Invalid,
	Count,
	Creative,
	ESubGame_MAX,
};

UENUM()
enum class EFortGiftWrapType : uint8 
{
	System,
	UserFree,
	UserUnlock,
	UserConsumable,
	Message,
	Ungift,
	EFortGiftWrapType_MAX,
};

UENUM()
enum class EAthenaRewardVisualImportanceType : uint8 
{
	Normal,
	Hot,
	CrazyHot,
	Crazy,
	EAthenaRewardVisualImportanceType_MAX,
};
UENUM()
enum class EItemProfileType : uint8 
{
	Common,
	Campaign,
	Athena,
	EItemProfileType_MAX,
};
UENUM()
enum class EMontageVisibilityRule : uint8 
{
	RequiredItem,
	ForbiddenItem,
	EMontageVisibilityRule_MAX,
};

UENUM()
enum class EFXType : uint8 
{
	GenericAnimNotify,
	TrailAnimNotify,
	WeaponImpactEffect,
	WeaponMeleeImpactEffect,
	Contrail,
	Emote,
	Trap,
	Skin,
	Glider,
	Vehicle,
	BackpackBling,
	Water,
	LootChest,
	EnvironmentalAmbient,
	WeaponRangedBeam,
	WeaponBulletShells,
	WeaponMuzzleFlashes,
	PickAxe,
	Curie,
	Projectile,
	EFXType_MAX,
};

UENUM()
enum class EVariantUnlockType : uint8 
{
	UnlockAll,
	ExclusiveChoice,
	EVariantUnlockType_MAX,
};

UENUM()
enum class EAthenaPetAttachRule : uint8 
{
	AttachToBackpack,
	AttachToBody,
	EAthenaPetAttachRule_MAX,
};

UENUM()
enum class EFortHandIKOverrideType : uint8 
{
	UseDefault,
	ForceFK,
	ForceIK,
	ForceFKSnap,
	EFortHandIKOverrideType_MAX,
};

UENUM()
enum class EFortPlayerAnimBodyType : uint8 
{
	Small,
	Medium,
	Large,
	All,
	EFortPlayerAnimBodyType_MAX,
};

UENUM()
enum class EAnimRelaxedState : uint8 
{
	None,
	WeaponRaised,
	RelaxedLevel1,
	RelaxedLevel2,
	EAnimRelaxedState_MAX,
};

UENUM()
enum class EFortReloadFXState : uint8 
{
	ReloadStart,
	ReloadCartridge,
	ReloadEnd,
	Max_None,
	EFortReloadFXState_MAX,
};

UENUM()
enum class EFortWeaponSoundState : uint8 
{
	Normal,
	LowAmmo,
	Degraded,
	Max_None,
	EFortWeaponSoundState_MAX,
};
UENUM()
enum class EFortDisplayTier : uint8 
{
	Invalid,
	Handmade,
	Copper,
	Silver,
	Malachite,
	Obsidian,
	Brightcore,
	Spectrolite,
	Shadowshard,
	Sunbeam,
	Moonglow,
	EFortDisplayTier_MAX,
};
