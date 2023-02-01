// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Net/UnrealNetwork.h"

DECLARE_LOG_CATEGORY_EXTERN(LogFortWorld, Log, All);

UENUM()
enum class EFortHitPointModificationReason : uint8 {
	Invalid,
	InitalSet,
	AutoRegen,
	ItemRegen,
	DamageOverTime,
	DamageReceived,
	EFortHitPointModificationReason_MAX,
};

UENUM()
enum class EFortBuildingInteraction : uint8 {
	None,
	Build,
	Repair,
	Upgrade,
	Edit,
	BeingModified,
	ConfirmEdit,
	Creative,
	EFortBuildingInteraction_MAX,
};

UENUM()
enum class EFortBuildingHealthDisplayRule : uint8 {
	Never,
	Allowed,
	Always,
	EFortBuildingHealthDisplayRule_MAX,
};

UENUM()
enum class EFortUIFeatureStateReason : uint8 {
	Default,
	Tutorial,
	ContentInstall,
	AccountRestrictions,
	Platform,
	SeasonOrEventNotActive,
	NoPlayerController,
	UnexpectedFeature,
	Invalid,
	EFortUIFeatureStateReason_MAX,
};

UENUM()
enum class EFortUIFeatureState : uint8 {
	Enabled,
	Disabled,
	Hidden,
	Invalid,
	EFortUIFeatureState_MAX,
};

UENUM()
enum class EFortUIFeature : uint8 {
	ShowHome,
	ShowPlay,
	ShowCommand,
	ShowHeros,
	ShowSquads,
	ShowArmory,
	ShowLocker,
	ShowSkillTree,
	ShowStore,
	ShowQuests,
	ShowMainStore,
	ShowContextHelpMenu,
	ShowCampaign,
	ShowActiveBoost,
	ShowJournal,
	ShowPartyBar,
	ShowChatWindow,
	ShowFriendsMenu,
	ShowObjectives,
	ShowRatingIconsInTopbar,
	ShowAntiAddictionMessage,
	ShowMinorShutdownMessage,
	ShowHealthWarningScreen,
	ShowSimplifiedHUD,
	LargeHeaderFooterButtons,
	ShowAthenaFavoriting,
	ShowAthenaItemRandomization,
	ShowAthenaChallenges,
	ShowBattlePass,
	ShowNewBattlePass,
	ShowDynamicBattlePass,
	ShowBattlePassFAQ,
	ShowReplays,
	ShowProfileStatsUI,
	ShowAthenaItemShop,
	ShowNewAthenaItemShop,
	ShowAthenaCataba,
	ShowShowdown,
	ShowSpecialEvent,
	ShowSpatialUI,
	ShowAccountBoosts,
	ShowCustomerSupport,
	ShowGlobalChat,
	ShowEULA,
	ShowEndOfZoneCinematic,
	ShowOnboardingCinematics,
	ShowFounderBannerIcons,
	ShowCurrentRegionInLobby,
	ShowPrerollLlamas,
	EnableFoundersDailyRewards,
	EnableTwitchIntegration,
	EnableMatchmakingRegionSetting,
	EnableLanguageSetting,
	EnableFriendCodeSetting,
	EnableEarlyAccessLoadingScreenBanner,
	EnableAlterationModifications,
	EnableSchematicRarityUpgrade,
	EnableMissionActivationVote,
	EnableLtmRetrieveTheData,
	EnableUpgradesVideos,
	ShowPreviewTestTab,
	Max_None,
	EFortUIFeature_MAX,
};

UENUM()
enum class EFlagStatus : uint8 {
	FlagPresent,
	FlagNotPresent,
	EFlagStatus_MAX,
};

UENUM()
enum class EInputPriority : uint8 {
	Normal,
	Menu,
	Chat,
	Modal,
	Confirmation,
	Error,
	HUD,
	EInputPriority_MAX,
};

UENUM()
enum class EFortInputMode : uint8 {
	Frontend,
	InGame,
	InGameCursor,
	EFortInputMode_MAX,
};

UENUM()
enum class EFortUrlType : uint8 {
	NormalWebLink,
	AccountCreationLink,
	HelpLink,
	EULALink,
	EFortUrlType_MAX,
};

UENUM()
enum class EFortUISpecialEvents : uint8 {
	NoEvent,
	FritTemp,
	EFortUISpecialEvents_MAX,
};

UENUM()
enum class EFortTutorialGlowType : uint8 {
	None,
	Look,
	Click,
	EFortTutorialGlowType_MAX,
};

UENUM()
enum class EFortBangSize : uint8 {
	XXS,
	XS,
	S,
	M,
	L,
	XL,
	EFortBangSize_MAX,
};

UENUM()
enum class EFortUIState : uint8 {
	Invalid,
	Login,
	JoinServer,
	SubgameSelect,
	FrontEnd,
	InGame_Custom,
	UNUSED,
	InGame_STW,
	Cinematic,
	InGame_BR,
	AthenaSpectator,
	Replay,
	InGame_STW_Custom,
	MAX,
};

UENUM()
enum class EFortStoreState : uint8 {
	Error,
	Closed,
	CardPackStore,
	CurrencyStore,
	WebPayment,
	PurchaseOpen,
	PackOpen,
	CardEnter,
	CardBackReveal,
	CardFlip,
	CardFrontReveal,
	CardExit,
	SummaryAdd,
	PackDestroy,
	Summary,
	PresentChoice,
	ChoiceMade,
	SummaryAddTransition,
	MAX_None,
	EFortStoreState_MAX,
};

UENUM()
enum class EFortItemCooldownType : uint8 {
	None,
	AmmoRegeneration,
	ItemActivation,
	WeaponReloading,
	Death,
	AthenaWeaponFireCooldown,
	AbilitySetActivateByInputAbility,
	EFortItemCooldownType_MAX,
};

UENUM()
enum class EActivatePanelOption : uint8 {
	Show,
	Hide,
	PlatformDefault,
	EActivatePanelOption_MAX,
};

UENUM()
enum class EFortFrontEndFeatureStateReason : uint8 {
	Default,
	NoHeroes,
	Tutorial,
	BROnly,
	NoPlayerController,
	UnexpectedFeature,
	Invalid,
	EFortFrontEndFeatureStateReason_MAX,
};

UENUM()
enum class EFortFrontEndFeatureState : uint8 {
	Enabled,
	Disabled,
	Hidden,
	Invalid,
	EFortFrontEndFeatureState_MAX,
};

UENUM()
enum class EFortFrontEndFeature : uint8 {
	ShowHomeBase,
	ShowHeroList,
	ShowVault,
	ShowStore,
	PlayZone,
	ShowDailyRewards,
	ShowHeroSelect,
	RecruitHero,
	ShowHomeBaseOverview,
	STWArmory_Transform,
	STWArmory_CollectionBook,
	MAX_None,
	EFortFrontEndFeature_MAX,
};

UENUM()
enum class EItemDisassembleRestrictionReason : uint8 {
	InnatelyCannotDisassemble,
	ItemWasGifted,
	EItemDisassembleRestrictionReason_MAX,
};

UENUM()
enum class EItemRecyclingRestrictionReason : uint8 {
	InnatelyUnrecyclable,
	IsSlottedGroundOperative,
	MissingCatalyst,
	ItemOutOnExpedition,
	InUseByCrafting,
	MulchingNotAllowed,
	IsSlottedAttributeWorker,
	EItemRecyclingRestrictionReason_MAX,
};

UENUM()
enum class EItemRecyclingWarning : uint8 {
	HighLevel,
	HighRarity,
	CanSlotInCollectionBook,
	EItemRecyclingWarning_MAX,
};

UENUM()
enum class EConversionControlKeyRequest : uint8 {
	AllKeys,
	NonConsumableKeys,
	ConsumableKeys,
	EConversionControlKeyRequest_MAX,
};

UENUM()
enum class EVaultItemLimitStatus : uint8 {
	WellBelowCapacity,
	NearCapacity,
	AtCapacity,
	OverCapacity,
	EVaultItemLimitStatus_MAX,
};

UENUM()
enum class EFortPlayerPowerRatingType : uint8 {
	Auto,
	Campaign,
	Phoenix,
	Max_None,
	EFortPlayerPowerRatingType_MAX,
};

UENUM()
enum class EGridSortKind : uint8 {
	None,
	ByNumber,
	ByString,
	ByNumberThenString,
	ByStringThenNumber,
	EGridSortKind_MAX,
};

UENUM()
enum class EFortItemInspectionMode : uint8 {
	Overview,
	Details,
	View,
	Evolution,
	Upgrade,
	UpgradeRarity,
	Promotion,
	EFortItemInspectionMode_MAX,
};

UENUM()
enum class EFortItemCardSize : uint8 {
	XXS,
	XS,
	Wide_S,
	S,
	M,
	L,
	XL,
	XXL,
	EFortItemCardSize_MAX,
};

UENUM()
enum class EFortCollectionBookPopupButtonType : uint8 {
	Invalid,
	SelectItem,
	Preview,
	Purchase,
	Unslot,
	Back,
	EFortCollectionBookPopupButtonType_MAX,
};

UENUM()
enum class ECollectionBookSectionNavTarget : uint8 {
	SlotSelect,
	SlotPicker,
	ECollectionBookSectionNavTarget_MAX,
};

UENUM()
enum class EViewerNavigationDirection : uint8 {
	Previous,
	Next,
	EViewerNavigationDirection_MAX,
};

UENUM()
enum class EHeroLoadoutSlotType : uint8 {
	CommanderSlot,
	TeamPerkSlot,
	CrewSlot,
	GadgetSlot,
	EHeroLoadoutSlotType_MAX,
};

UENUM()
enum class ESquadSlotSortType : uint8 {
	ByRating,
	ByLevel,
	ByRarity,
	ByBonus,
	ByMatch,
	ESquadSlotSortType_MAX,
};

UENUM()
enum class EBattleMapTimelineWidgetState : uint8 {
	None,
	HasNext,
	HasPrevious,
	IsInReplay,
	CanBeScrubbed,
	IsStreaming,
	Invalid,
	EBattleMapTimelineWidgetState_MAX,
};

UENUM()
enum class ECountdownDisplay : uint8 {
	EventEndTime,
	ChallengeUnlockTime,
	ChallengeBundleUnlockTime,
	UnlockAlreadySet,
	MAX,
};

UENUM()
enum class EChallengeInfoPage : uint8 {
	PartyAssist,
	Daily,
	Suggested,
	Contextual,
	Selected,
	EChallengeInfoPage_MAX,
};

UENUM()
enum class EChallengeListSection : uint8 {
	SpecialOffers,
	CompletionRewards,
	AllChallenges,
	FreeChallenges,
	PaidChallenges,
	Objectives,
	EChallengeListSection_MAX,
};

UENUM()
enum class EAthenaChallengeTimerState : uint8 {
	Hidden,
	WeeksRemaining,
	DaysRemaining,
	HoursRemaining,
	MinutesRemaining,
	Urgent,
	EAthenaChallengeTimerState_MAX,
};

UENUM()
enum class ELocationEntryState : uint8 {
	Found,
	NotFound,
	Unused,
	ELocationEntryState_MAX,
};

UENUM()
enum class EAthenaConfirmationResult : uint8 {
	Confirmed,
	Declined,
	Canceled,
	Max_NONE,
	EAthenaConfirmationResult_MAX,
};

UENUM()
enum class EEquippedWeaponDisplay : uint8 {
	None,
	Resource,
	Magazine,
	Utility,
	Chargeable,
	EEquippedWeaponDisplay_MAX,
};

UENUM()
enum class EAthenaEventMatchInfoSortMethod : uint8 {
	Eliminations,
	Place,
	Count,
	EAthenaEventMatchInfoSortMethod_MAX,
};

UENUM()
enum class EAthenaGameFeatureStatus : uint8 {
	InProgress,
	ProgressPaused,
	ErrorOccured,
	EAthenaGameFeatureStatus_MAX,
};

UENUM()
enum class EAthenaPlayerActionAlert : uint8 {
	PlayerDown,
	PlayerKill,
	EnteredStorm,
	NewZebulonDrone,
	NewZebulonDroneYou,
	EAthenaPlayerActionAlert_MAX,
};

UENUM()
enum class EViolatorIntensity : uint8 {
	Low,
	Medium,
	High,
	EViolatorIntensity_MAX,
};

UENUM()
enum class EItemShopTileSize : uint8 {
	Mini,
	Small,
	Normal,
	DoubleWide,
	TripleWide,
	Max,
};

UENUM()
enum class EItemShopCurrency : uint8 {
	VBucks,
	RealMOney,
	EItemShopCurrency_MAX,
};

UENUM()
enum class EFortAthenaPlaylist : uint8 {
	AthenaSolo,
	AthenaDuo,
	AthenaSquad,
	EFortAthenaPlaylist_MAX,
};

UENUM()
enum class EAthenaLockerInfoRestrictionWarning : uint8 {
	UnsatisfiedExclusiveItem,
	LockedEmote,
	CosmeticRestriction,
	Unknown,
	EAthenaLockerInfoRestrictionWarning_MAX,
};

UENUM()
enum class EAtheaMapTabType : uint8 {
	Invalid,
	Quest,
	Map,
	Collection,
	EAtheaMapTabType_MAX,
};

UENUM()
enum class EFortMarkerActions : uint8 {
	None,
	Cancel,
	Confirm,
	EFortMarkerActions_MAX,
};

UENUM()
enum class EAthenaNewsStyle : uint8 {
	None,
	SpecialEvent,
	SpecialEvent2,
	EAthenaNewsStyle_MAX,
};

UENUM()
enum class EAthenaNewsEntryType : uint8 {
	Text,
	Item,
	Website,
	NavigateToTab,
	Challenge,
	Playlist,
	Setting,
	SpatialScreen,
	SmallNews,
	Invalid,
	EAthenaNewsEntryType_MAX,
};

UENUM()
enum class EPurchaseButtonsMode : uint8 {
	Default,
	ClaimSubscriptionRewards,
	SubscriptionPaymentError,
	SubscriptionBlockedBenefits,
	EPurchaseButtonsMode_MAX,
};

UENUM()
enum class EPassOfferSelected : uint8 {
	BattlePass,
	Subscription,
	Max_None,
	EPassOfferSelected_MAX,
};

UENUM()
enum class EHealthBarType : uint8 {
	Health,
	Shield,
	Stamina,
	VehicleHealth,
	SignalInStorm,
	EHealthBarType_MAX,
};

UENUM()
enum class EBPStatus : uint8 {
	UnpurchasedBP,
	PurchasedBP,
	EBPStatus_MAX,
};

UENUM()
enum class EPunchType : uint8 {
	Horizontal,
	Vertical,
	EPunchType_MAX,
};

UENUM()
enum class EPunchCardLocation : uint8 {
	NONE,
	HUD,
	Map,
	EndGame,
	Lobby,
	EPunchCardLocation_MAX,
};

UENUM()
enum class EAthenaSquadListUpdateType : uint8 {
	None,
	CanResurrect,
	FindResurrectChip,
	EAthenaSquadListUpdateType_MAX,
};

UENUM()
enum class ERespawnUIState : uint8 {
	Hidden,
	ShowRespawnEnabled,
	ShowRespawnDisabled,
	ERespawnUIState_MAX,
};

UENUM()
enum class ESpectatorBuildCountType : uint8 {
	BuildCount,
	Wood,
	Stone,
	Metal,
	ESpectatorBuildCountType_MAX,
};

UENUM()
enum class ESpectatorMapPlayerListState : uint8 {
	Default,
	Irrelevant,
	Eliminated,
	ESpectatorMapPlayerListState_MAX,
};

UENUM()
enum class EAthenaSpectatorNameplateDetailState : uint8 {
	High,
	Low,
	Arrow,
	Off,
	EAthenaSpectatorNameplateDetailState_MAX,
};

UENUM()
enum class EAthenaSpectatorNameplateDistanceState : uint8 {
	Near,
	MidDistance,
	FurtherThanMaxDistance,
	EAthenaSpectatorNameplateDistanceState_MAX,
};

UENUM()
enum class ESpectatorPlayerListSortMethod : uint8 {
	SquadId,
	PlayerName,
	Eliminations,
	EventScore,
	State,
	Count,
	ESpectatorPlayerListSortMethod_MAX,
};

UENUM()
enum class EStormSurgeThresholdType : uint8 {
	None,
	Above,
	Below,
	Equal,
	EStormSurgeThresholdType_MAX,
};

UENUM()
enum class EFrontendVisibilityMode : uint8 {
	Normal,
	HideTopTabsOnly,
	HideTopTabsOnlyWithoutBottomBar,
	OnlyBottom,
	OnlyTop,
	Empty,
	EFrontendVisibilityMode_MAX,
};

UENUM()
enum class EWinConditionParentType : uint8 {
	None,
	Desktop,
	Mobile,
	EWinConditionParentType_MAX,
};

UENUM()
enum class EComboSlotType : uint8 {
	Primary,
	Secondary,
	Combo,
	Creative,
	COUNT,
	EComboSlotType_MAX,
};

UENUM()
enum class EBacchusSignalQuality : uint8 {
	None,
	Low,
	Medium,
	High,
	EBacchusSignalQuality_MAX,
};

UENUM()
enum class EBattleLabAlertType : uint8 {
	QuestComplete,
	QuestGranted,
	Reward,
	EBattleLabAlertType_MAX,
};

UENUM()
enum class EBattlePassPurchaseButtonLayout : uint8 {
	Normal,
	Bundle,
	Normal_PaysForSelf,
	EBattlePassPurchaseButtonLayout_MAX,
};

UENUM()
enum class EBattlePassView : uint8 {
	None,
	Overview,
	ItemDetails,
	EBattlePassView_MAX,
};

UENUM()
enum class ECobaltStatusTeam : uint8 {
	Ally,
	Enemy,
	MAX,
};

UENUM()
enum class EBracketNodeState : uint8 {
	LocalTeam,
	EnemyTeam,
	Neutral,
	EBracketNodeState_MAX,
};

UENUM()
enum class ESurvivalObjectiveIconState : uint8 {
	None,
	Spawned,
	Destroyed,
	ESurvivalObjectiveIconState_MAX,
};

UENUM()
enum class EDiscoCaptureUIState : uint8 {
	None,
	Hidden,
	Dance,
	Capturing,
	Contested,
	EDiscoCaptureUIState_MAX,
};

UENUM()
enum class EDiscoScoreProgressTypes : uint8 {
	None,
	ProgressSoundMild,
	ProgressSoundMedium,
	ProgressSoundStrong,
	CountdownSoundNormal,
	CountdownSoundStrong,
	EDiscoScoreProgressTypes_MAX,
};

UENUM()
enum class EDiscoCaptureProgressState : uint8 {
	None,
	AllyProgress,
	EnemyProgress,
	EDiscoCaptureProgressState_MAX,
};

UENUM()
enum class EDiscoCaptureIconState : uint8 {
	None,
	Hidden,
	Neutral,
	AllyCaptured,
	EnemyCaptured,
	EDiscoCaptureIconState_MAX,
};

UENUM()
enum class EFortDonutIdleGameObject : uint8 {
	UnsetObject,
	Tree,
	Mound,
	SmallMound,
	JumpPad,
	Torch,
	PeelMonster,
	Chimichanga,
	Arm,
	EFortDonutIdleGameObject_MAX,
};

UENUM()
enum class UFortActivatableVideoPanelEvents : uint8 {
	Finished,
	Skipped,
	UFortActivatableVideoPanelEvents_MAX,
};

UENUM()
enum class EFortAlterationOptionType : uint8 {
	Upgrade,
	Replacement,
	Max_NONE,
	EFortAlterationOptionType_MAX,
};

UENUM()
enum class EFortAlterationWidgetState : uint8 {
	Normal,
	Upgrade,
	Evolution,
	EFortAlterationWidgetState_MAX,
};

UENUM()
enum class EFillDisableReason : uint8 {
	Enabled,
	FillDisabledOnPlaylist,
	NotPartyLeader,
	AlreadyMatchmaking,
	PartyTooSmall,
	PartyTooBig,
	InactiveTournament,
	NoSplitscreen,
	EFillDisableReason_MAX,
};

UENUM()
enum class EServerAccessSetting : uint8 {
	Invalid,
	FriendsOfCurrentPlayers,
	LeaderInviteOnly,
	EServerAccessSetting_MAX,
};

UENUM()
enum class ESpectatorQueueType : uint8 {
	Invalid,
	Player,
	BroadcastSpectator,
	ESpectatorQueueType_MAX,
};

UENUM()
enum class ESquadFillSetting : uint8 {
	Invalid,
	Fill,
	NoFill,
	ESquadFillSetting_MAX,
};

UENUM()
enum class ETutorialButtonInteractionType : uint8 {
	Click,
	Press,
	ETutorialButtonInteractionType_MAX,
};

UENUM()
enum class EHighlightType : uint8 {
	ESquareHighlight,
	ECircleHighlight_Big,
	ECircleHighlight_Small,
	EHighlightType_MAX,
};

UENUM()
enum class EFortAthenaTutorialScreenExtraWidget : uint8 {
	None,
	DragToTurn,
	Completed,
	Count,
	EFortAthenaTutorialScreenExtraWidget_MAX,
};

UENUM()
enum class EFortAthenaTutorialSubstep : uint8 {
	ScreenSwipeToLook,
	ScreenFindMarker,
	ScreenUseLeftStick,
	ScreenMoveToBuilding,
	ScreenJump,
	ScreenCrouch,
	ScreenReachMarker,
	ScreenUsePickaxe,
	ScreenReachPickUp,
	ScreenPickUpItems,
	ScreenEquipItem,
	ScreenShootTargets,
	ScreenReload,
	ScreenReachLocation,
	ScreenDefendYourself,
	ScreenHealthAlert,
	ScreenDestroyEnemies,
	ScreenCollectLoot,
	ScreenUseMedkit,
	ScreenUseShield,
	ScreenShieldInfo,
	ScreenLookForChest,
	ScreenChestFound,
	ScreenSelectBuildMode,
	ScreenShowMaterials,
	ScreenShowBuildPieces,
	ScreenSelectStairs,
	ScreenPlaceStairs,
	ScreenReachChest,
	ScreenExitBuildMode,
	ScreenLootChest,
	ScreenCollectLootChest,
	ScreenEquipRifle,
	ScreenUseScope,
	ScreenShootTargetsScoping,
	ScreenCompleted,
	HealingInterrupted,
	Count,
	EFortAthenaTutorialSubstep_MAX,
};

UENUM()
enum class EFortAthenaTutorialStep : uint8 {
	Look,
	Move,
	Harvest,
	Pickup,
	Shoot,
	Ambush,
	Heal,
	Build,
	Chest,
	Scoping,
	Completed,
	Count,
	EFortAthenaTutorialStep_MAX,
};

UENUM()
enum class EFuelTankState : uint8 {
	Empty,
	LowFuel,
	RegularFuel,
	EFuelTankState_MAX,
};

UENUM()
enum class EFortMemberConnectionState : uint8 {
	Open,
	Connecting,
	Connected,
	Invalid,
	EFortMemberConnectionState_MAX,
};

UENUM()
enum class ECollectionBookRewardStatus : uint8 {
	Unknown,
	Available,
	Claimed,
	ECollectionBookRewardStatus_MAX,
};

UENUM()
enum class ECollectionBookPrimaryNavTarget : uint8 {
	Overview,
	SectionTileView,
	ECollectionBookPrimaryNavTarget_MAX,
};

UENUM()
enum class EColorPickerColorRepresentation : uint8 {
	HSV,
	RGB,
	Max_NONE,
	EColorPickerColorRepresentation_MAX,
};

UENUM()
enum class EColorPickerType : uint8 {
	Swatches,
	CustomColor,
	Both,
	EColorPickerType_MAX,
};

UENUM()
enum class ELeaderboardDisplayType : uint8 {
	Default,
	Floating,
	ELeaderboardDisplayType_MAX,
};

UENUM()
enum class EFortLoadoutCardType : uint8 {
	Items,
	RandomTile,
	AddTile,
	AddPreviewItems,
	Blank,
	EFortLoadoutCardType_MAX,
};

UENUM()
enum class EFortCosmeticLoadoutScreenMode : uint8 {
	Browse,
	Save,
	EFortCosmeticLoadoutScreenMode_MAX,
};

UENUM()
enum class EFortCreativeItemType : uint8 {
	Chest,
	Item,
	Collection,
	SubItems,
	EFortCreativeItemType_MAX,
};

UENUM()
enum class EFortCreativeIslandLinkCategory : uint8 {
	Default,
	Favorite,
	Published,
	Recent,
	EFortCreativeIslandLinkCategory_MAX,
};

UENUM()
enum class EFortCreativeIslandLinkValidationResult : uint8 {
	Unknown,
	Success,
	IslandNotFound,
	InvalidKeyTooShort,
	InvalidKeyTooLong,
	InvalidKeyCharacters,
	IneligibleParty,
	EFortCreativeIslandLinkValidationResult_MAX,
};

UENUM()
enum class EFortContentBrowserQuickbarState : uint8 {
	Disabled,
	Creative,
	Primary,
	Trap,
	EFortContentBrowserQuickbarState_MAX,
};

UENUM()
enum class EFortCreativeServerPrivacySetting : uint8 {
	Unknown,
	Private,
	Public,
	EFortCreativeServerPrivacySetting_MAX,
};

UENUM()
enum class EFortDefenderSlotType : uint8 {
	Invalid,
	Defender,
	Weapon,
	EFortDefenderSlotType_MAX,
};

UENUM()
enum class EDynamicEntryPatternDirection : uint8 {
	FirstToLast,
	LastToFirst,
	EDynamicEntryPatternDirection_MAX,
};

UENUM()
enum class DateFormat : uint8 {
	CountdownTextual,
	CountdownNumeric,
	CountdownNumUnder12Hours,
	Date,
	DateFormat_MAX,
};

UENUM()
enum class EFortExpeditionListSort : uint8 {
	ByRating,
	ByDuration,
	ByName,
	EFortExpeditionListSort_MAX,
};

UENUM()
enum class EShareButtonType : uint8 {
	IOS,
	Android,
	Generic,
	EShareButtonType_MAX,
};

UENUM()
enum class EFrontEndRewardType : uint8 {
	Mission,
	Quest,
	EpicNewQuest,
	Expedition,
	CollectionBook,
	MissionAlert,
	DifficultyIncrease,
	GiftBox,
	ItemCache,
	PhoenixLevelUp,
	EFrontEndRewardType_MAX,
};

UENUM()
enum class ESelectionState : uint8 {
	Unselected,
	Selected,
	CannotGift,
	ESelectionState_MAX,
};

UENUM()
enum class EFortHeroPerkDisplayType : uint8 {
	CommanderPerk,
	TeamPerk,
	ClassPerk,
	StandardPerk,
	Max_None,
	EFortHeroPerkDisplayType_MAX,
};

UENUM()
enum class EFortSupportPerkWidgetState : uint8 {
	Normal,
	Upgrade,
	Evolution,
	EFortSupportPerkWidgetState_MAX,
};

UENUM()
enum class ECenterPopupMessageStateEnum : uint8 {
	NotVisible,
	WaitingForOutpostOwner,
	ECenterPopupMessageStateEnum_MAX,
};

UENUM()
enum class EBuildingFocusType : uint8 {
	Contextual,
	Interactable,
	Normal,
	Count,
	EBuildingFocusType_MAX,
};

UENUM()
enum class EContextPositionPlatform : uint8 {
	NonMobile,
	Mobile,
	EContextPositionPlatform_MAX,
};

UENUM()
enum class EFortItemCountStyle : uint8 {
	StackCount,
	OverrideCount,
	StackCountOverOverride,
	EFortItemCountStyle_MAX,
};

UENUM()
enum class EFortItemManagementMode : uint8 {
	Details,
	Comparison,
	Mulch,
	EFortItemManagementMode_MAX,
};

UENUM()
enum class EPresentationMode : uint8 {
	ItemList,
	VariantList,
	EPresentationMode_MAX,
};

UENUM()
enum class ESceneTransitionType : uint8 {
	NoTransition,
	Clockwise,
	CounterClockwise,
	ESceneTransitionType_MAX,
};

UENUM()
enum class EFortKeybindForcedHoldStatus : uint8 {
	NoForcedHold,
	ForcedHold,
	NeverShowHold,
	EFortKeybindForcedHoldStatus_MAX,
};

UENUM()
enum class EFortLegacySlateWidget : uint8 {
	None,
	Minimap,
	MAX,
};

UENUM()
enum class ELocalUserOnlineStatus : uint8 {
	Online,
	Offline,
	Away,
	ExtendedAway,
	DoNotDisturb,
	Chat,
	ELocalUserOnlineStatus_MAX,
};

UENUM()
enum class EFortLoginInteraction : uint8 {
	Begin,
	PlayedBefore,
	CredentialSelect,
	NamePassword,
	RedirectEpicAccount,
	AccountNotFound,
	CreateDisplayName,
	MultiFactorAuth,
	EULA,
	AccountLink,
	AccountPinLink,
	WebLogin,
	WebAccountCreation,
	AgeGate,
	EFortLoginInteraction_MAX,
};

UENUM()
enum class EFortModifiedStatus : uint8 {
	IsDefault,
	IsModified,
	Unsupported,
	EFortModifiedStatus_MAX,
};

UENUM()
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8 {
	PreserveValues,
	ReverseCollapse,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX,
};

UENUM()
enum class EFortMaterialProgressBarSectionColorNumber : uint8 {
	Color1,
	Color2,
	EFortMaterialProgressBarSectionColorNumber_MAX,
};

UENUM()
enum class EFortMaterialProgressBarSection : uint8 {
	Primary,
	Secondary,
	Tertiary,
	Negative,
	MAX_PROGRESS_BAR_SECTIONS,
	EFortMaterialProgressBarSection_MAX,
};

UENUM()
enum class EFortMissionActivationWidgetState : uint8 {
	Default,
	StartObjective,
	IncreaseDifficulty,
	Invalid,
	EFortMissionActivationWidgetState_MAX,
};

UENUM()
enum class EActionBindingComparisonType : uint8 {
	NoneBound,
	AnyBound,
	AllBound,
	EActionBindingComparisonType_MAX,
};

UENUM()
enum class ETagComparisonType : uint8 {
	HasAny,
	HasAll,
	HasNone,
	ETagComparisonType_MAX,
};

UENUM()
enum class EFortFortMobileShareButtonOS : uint8 {
	Android,
	iOS,
	EFortFortMobileShareButtonOS_MAX,
};

UENUM()
enum class EModalContainerSlot : uint8 {
	Top,
	Middle,
	Bottom,
	Background,
	Max,
};

UENUM()
enum class EFortMtxOfferDisplaySize : uint8 {
	Small,
	Medium,
	Large,
	EFortMtxOfferDisplaySize_MAX,
};

UENUM()
enum class EFortMtxStoreOfferType : uint8 {
	FoundersPack,
	CurrencyPack,
	Unknown,
	Max_None,
	EFortMtxStoreOfferType_MAX,
};

UENUM()
enum class EFortNotificationEntryCompletionStatus : uint8 {
	New,
	Active,
	Completed,
	MAX,
};

UENUM()
enum class ESettingType : uint8 {
	None,
	Header,
	WindowMode,
	DisplayResolution,
	FrameRateLimit,
	VideoQuality,
	ThreeDResolution,
	ViewDistance,
	Shadows,
	AntiAliasing,
	Textures,
	Effects,
	PostProcessing,
	VSync,
	MotionBlur,
	ShowGrass,
	MobileFPSType,
	ShowFPS,
	AllowLowPower,
	AllowVideoPlayback,
	AllowDynamicResolution,
	AllowMultithreadedRendering,
	RenderingAPI,
	UseGPUCrashDebugging,
	RegionHeader,
	Language,
	Region,
	MouseSensitivityYaw,
	MouseSensitivityPitch,
	MouseSensitivityMultiplierForAircraft,
	TouchDragSensitivity,
	ControllerLookSensitivityYaw,
	ControllerLookSensitivityPitch,
	MouseTargetingMultiplier,
	MouseScopedMultiplier,
	GamepadTargetingMultiplier,
	GamepadScopedMultiplier,
	GamepadBuildingMultiplier,
	GamepadEditModeMultiplier,
	TouchLookAccelerationMultiplier,
	TouchDragTargetingSensitivity,
	TouchDragScopedSensitivity,
	TouchBuildingMultiplier,
	TouchEditModeMultiplier,
	TouchVerticalSensitivity,
	InvertPitch,
	InvertYaw,
	InvertPitchForMotion,
	InvertPitchForAircraftPrimary,
	InvertPitchForAircraftSecondary,
	InvertYawForMotion,
	GyroEnabled,
	GyroYawAxis,
	GyroSensitivity,
	GyroTargetingSensitivity,
	GyroScopedSensitivity,
	GyroHarvestingToolSensitivity,
	SafeZone,
	AnonymousMode,
	AnonymousCharacterMode,
	HideOtherPlayerNames,
	HiddenMatchmakingDelay,
	AutoJoinGameVoiceChannel,
	ShowVoiceIndicators,
	HUDScale,
	ShowViewerCount,
	FirstPersonCamera,
	PeripheralLighting,
	PingPlaceDangerMarkerWhenTargeting,
	ShowGlobalChat,
	ConsoleUnlockedFPS,
	ToggleSprint,
	SprintByDefault,
	SprintCancelsReload,
	TapInteract,
	InWorldInteract,
	ToggleTargeting,
	HoldToSwapPickup,
	AutoEquipBetterItems,
	EquipFirstBuildingPieceWhenSwappingQuickbars,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena,
	DisablePreEditsWhenPlacingBuilding,
	AimAssist,
	EditModeAimAssist,
	TouchEdit,
	EditConfirmOnRelease,
	QuickEdit,
	TurboBuild,
	CreativeTurboDelete,
	AutoChangeMaterial,
	GamepadAutoRun,
	CrossplayPreference,
	AutoOpenDoors,
	AutoPickupWeapons,
	AutoPickupWeaponsConsolePC,
	AutoSortConsumablesToRight,
	EnableTryBuildOnFocus,
	EditButtonHoldTime,
	AccessoriesHeader,
	ForceFeedback,
	ContextTutorial,
	ReplayRecording,
	ReplayRecordingLargeTeams,
	ReplayRecordingCreativeMode,
	UsePowerSavingMode,
	ShadowPlayHighlights,
	ShowTemperature,
	BuildingPossession,
	GammaValue,
	MusicVolume,
	SoundFXVolume,
	DialogVolume,
	VoiceChatVolume,
	CinematicsVolume,
	Subtitles,
	Quality,
	VoiceChat,
	PushToTalk,
	ProximityVoiceChat,
	VoiceChatInputDevice,
	VoiceChatOutputDevice,
	AllowBackgroundAudio,
	ColorBlindMode,
	ColorBlindStrength,
	IgnoreGamepadInput,
	LockPrimaryInputMethodToMouse,
	EnableRudderControl,
	RudderDeadZone,
	RudderMaxThrottle,
	VisualizeSoundEffects,
	VisualizeSoundEffectsHeader,
	MoveStickDeadZone,
	LookStickDeadZone,
	LookSensitivityPreset,
	LookSensitivityPresetAds,
	LookBuildModeMultiplier,
	LookEditModeMultiplier,
	UseAdvancedOptions,
	LookHorizontalSpeed,
	LookVerticalSpeed,
	LookHorizontalSpeedAds,
	LookVerticalSpeedAds,
	LookHorizontalBoostSpeed,
	LookVerticalBoostSpeed,
	LookBoostAccelerationTime,
	LookHorizontalBoostSpeedAds,
	LookVerticalBoostSpeedAds,
	LookBoostAccelerationTimeAds,
	InstantBoostWhenBuilding,
	LookEaseTime,
	LookInputCurve,
	AimAssistStrength,
	UseLegacyControls,
	PlayerSurveysAllowed,
	NotifyWhenPlaying,
	LocalNotifications,
	FireMode,
	COUNT,
	ESettingType_MAX,
};

UENUM()
enum class ESettingTab : uint8 {
	None,
	Video,
	Game,
	GameUI,
	Brightness,
	Audio,
	Accessibility,
	Input,
	MouseAndKeyboard,
	Controller,
	ControllerSensitivity,
	TouchAndMotion,
	Account,
	CreativeWorld,
	CreativePlayer,
	ESettingTab_MAX,
};

UENUM()
enum class EParentalControlsViewState : uint8 {
	Invalid,
	EnterPin,
	AskToEnableControls,
	VerifyEmail,
	SetupEmail,
	SetupPin,
	DisplaySettings,
	DisableParentalControls,
	AskToReEnable,
	ReEnabling,
	EParentalControlsViewState_MAX,
};

UENUM()
enum class EFortPerksWidgetState : uint8 {
	Normal,
	Upgrade,
	Evolution,
	EFortPerksWidgetState_MAX,
};

UENUM()
enum class ESaveProfileForBanners : uint8 {
	SaveTheWorld,
	BattleRoyale,
	ESaveProfileForBanners_MAX,
};

UENUM()
enum class EFortPlayerSurveyAggregateOp : uint8 {
	Sum,
	Max,
};

UENUM()
enum class EFortPlayerSurveyAthenaSeasonStat : uint8 {
	XP,
	Level,
	BookXP,
	BookLevel,
	EFortPlayerSurveyAthenaSeasonStat_MAX,
};

UENUM()
enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType : uint8 {
	Unknown,
	ChoiceButton,
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataAggregateOp : uint8 {
	s,
	mx,
	EFortPlayerSurveyCMSDataAggregateOp_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataAthenaSeasonStat : uint8 {
	sx,
	sl,
	bx,
	bl,
	EFortPlayerSurveyCMSDataAthenaSeasonStat_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataBinaryComparisonOp : uint8 {
	e,
	n,
	l,
	g,
	le,
	ge,
	EFortPlayerSurveyCMSDataBinaryComparisonOp_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataGameMode : uint8 {
	c,
	a,
	pc,
	EFortPlayerSurveyCMSDataGameMode_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType : uint8 {
	n,
	s,
	a,
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataPlaylistCategory : uint8 {
	a,
	s,
	d,
	q,
	lt,
	c,
	pl,
	EFortPlayerSurveyCMSDataPlaylistCategory_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8 {
	standard,
	rating,
	EFortPlayerSurveyCMSDataPresentationStyle_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataQuestState : uint8 {
	i,
	a,
	co,
	cl,
	EFortPlayerSurveyCMSDataQuestState_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType : uint8 {
	s,
	a,
	o,
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType_MAX,
};

UENUM()
enum class EFortPlayerSurveyCMSDataTrigger : uint8 {
	rm,
	EFortPlayerSurveyCMSDataTrigger_MAX,
};

UENUM()
enum class EFortPlayerSurveyPlaylistCategory : uint8 {
	All,
	Solo,
	Duo,
	Squad,
	LTM,
	Creative,
	Playground,
	EFortPlayerSurveyPlaylistCategory_MAX,
};

UENUM()
enum class EFortPlayerSurveyTrigger : uint8 {
	Invalid,
	Any,
	ReturnToMainMenu,
	EFortPlayerSurveyTrigger_MAX,
};

UENUM()
enum class EPostGameClickCatcherMode : uint8 {
	Catch_None,
	Catch_MobileOnly,
	Catch_MouseOnly,
	Catch_All,
	Catch_MAX,
};

UENUM()
enum class EPostGameHUDMode : uint8 {
	None,
	AllHidden,
	Spectating,
	AllHiddenExceptXP,
	EPostGameHUDMode_MAX,
};

UENUM()
enum class EPostGameScreenContinueBehavior : uint8 {
	Next,
	Previous,
	EPostGameScreenContinueBehavior_MAX,
};

UENUM()
enum class EPurchaseReturnStep : uint8 {
	ItemSelection,
	ReasonSelection,
	FinalSubmission,
	EPurchaseReturnStep_MAX,
};

UENUM()
enum class ECalloutNavigationDirection : uint8 {
	Previous,
	Next,
	ECalloutNavigationDirection_MAX,
};

UENUM()
enum class ERedeemCodeFailureReason : uint8 {
	InvalidCode,
	CodeAlreadyUsed,
	AlreadyHasAccess,
	FailedToGetItem,
	Unknown,
	ERedeemCodeFailureReason_MAX,
};

UENUM()
enum class EFortRewardItemType : uint8 {
	RewardedBadges,
	MissedBadges,
	RewardedItems,
	RewardedAccountItems,
	EFortRewardItemType_MAX,
};

UENUM()
enum class EFortServerBrowserAction : uint8 {
	BattleLabServerCreate,
	PlaygroundServerCreate,
	CreativeServerCreate,
	Play,
	CreativeIslandCode,
	EFortServerBrowserAction_MAX,
};

UENUM()
enum class EFortServerItemIneligibleReason : uint8 {
	None,
	PartyTooBig,
	PartyTooSmall,
	NotPartyLeader,
	MatchmakingAlready,
	NotSupportedByLeto,
	InvalidData,
	EFortServerItemIneligibleReason_MAX,
};

UENUM()
enum class EFortSettingGameVisibility : uint8 {
	None,
	Campaign,
	Athena,
	EFortSettingGameVisibility_MAX,
};

UENUM()
enum class EFortShowdownPinState : uint8 {
	None,
	Locked,
	Unlocked,
	EFortShowdownPinState_MAX,
};

UENUM()
enum class EFortEventWindowEligibility : uint8 {
	Unknown,
	Public,
	Private,
	Locked,
	EFortEventWindowEligibility_MAX,
};

UENUM()
enum class EFortShowdownEventState : uint8 {
	Unknown,
	FutureTBD,
	FutureScheduled,
	FutureNext,
	Live,
	LiveParticipating,
	LiveNotParticipating,
	Completed,
	CompletedParticipated,
	CompletedNotPartipated,
	Cancelled,
	EFortShowdownEventState_MAX,
};

UENUM()
enum class EFortShowdownMatchType : uint8 {
	Unknown,
	Solo,
	Duos,
	Squads,
	EFortShowdownMatchType_MAX,
};

UENUM()
enum class EFortDateTimeStyle : uint8 {
	Default,
	Short,
	Medium,
	Long,
	Full,
	EFortDateTimeStyle_MAX,
};

UENUM()
enum class ERadialOrderingMode : uint8 {
	CounterClockwise,
	Clockwise,
	Cardinal,
	Custom,
	ERadialOrderingMode_MAX,
};

UENUM()
enum class ECardinalPoint : uint8 {
	E,
	NE,
	N,
	NW,
	W,
	SW,
	S,
	SE,
	None,
	ECardinalPoint_MAX,
};

UENUM()
enum class ESocialImportPanelType : uint8 {
	Athena,
	SaveTheWorld,
	ESocialImportPanelType_MAX,
};

UENUM()
enum class EFriendLinkShareButtonType : uint8 {
	IOS,
	Android,
	Generic,
	EFriendLinkShareButtonType_MAX,
};

UENUM()
enum class EListHeaderType : uint8 {
	TeamMember,
	PartyMember,
	JoinableParty,
	PlatformOnlineFriend,
	McpOnlineFriend,
	OfflineFriend,
	Blocked,
	VoiceChatMember,
	FriendInvite,
	SuggestedFriend,
	RecentPlayer,
	SearchResults,
	Invalid,
	EListHeaderType_MAX,
};

UENUM()
enum class EFortSquadSlottingRestrictionReason : uint8 {
	ItemIsInInventoryOverflow,
	MandatorySlotWouldBeEmptied,
	ItemIsOnActiveExpedition,
	HeroRequiresMissingGameplayTag,
	HeroAlreadyEquippedInLoadout,
	EFortSquadSlottingRestrictionReason_MAX,
};

UENUM()
enum class EPauseType : uint8 {
	NoPause,
	Rare,
	New,
	NewAndRare,
	EPauseType_MAX,
};

UENUM()
enum class ECardPackPurchaseError : uint8 {
	PendingServerConfirmation,
	CannotAffordItem,
	NoneLeft,
	PurchaseAlreadyPending,
	NoConnection,
	ECardPackPurchaseError_MAX,
};

UENUM()
enum class ESubgameTileType : uint8 {
	Campaign,
	Athena,
	Creative,
	ESubgameTileType_MAX,
};

UENUM()
enum class ESubgameLoadFromCMS : uint8 {
	DoNotLoadFromCMS,
	LoadImageFromCMS,
	ESubgameLoadFromCMS_MAX,
};

UENUM()
enum class ESubscriptionCancellability : uint8 {
	NotCancellable,
	CancellabeOnPlatform,
	CancellableAnywhere,
	ESubscriptionCancellability_MAX,
};

UENUM()
enum class EFortUISurvivorSquadMatchType : uint8 {
	Multi,
	Single,
	Summary,
	Max_None,
	EFortUISurvivorSquadMatchType_MAX,
};

UENUM()
enum class ETouchState : uint8 {
	None,
	WaitingForStart,
	Started,
	Active,
	COUNT,
	ETouchState_MAX,
};

UENUM()
enum class EFortControlType : uint8 {
	None,
	CameraAndMovement,
	Picking,
	COUNT,
	EFortControlType_MAX,
};

UENUM()
enum class EFortTouchControlRegion : uint8 {
	MovePlayer,
	RotateCamera,
	NoRegion,
	COUNT,
	EFortTouchControlRegion_MAX,
};

UENUM()
enum class ETournmentPosterViolatorState : uint8 {
	Hidden,
	Live,
	Countdown,
	Info,
	ETournmentPosterViolatorState_MAX,
};

UENUM()
enum class EFortNamedBundle : uint8 {
	Menu,
	MenuCampaign,
	MenuAthena,
	Zone,
	ZoneCampaign,
	ZoneAthena,
	Client,
	ClientCampaign,
	ClientAthena,
	EFortNamedBundle_MAX,
};

UENUM()
enum class EFortReturnToFrontendBehavior : uint8 {
	NotSpecified,
	HomeScreen,
	MapScreen,
	MapScreenWithAutoLaunch,
	MapScreenWithMinimalAutoLaunch,
	EFortReturnToFrontendBehavior_MAX,
};

UENUM()
enum class ELetoDisplayMode : uint8 {
	PrimaryOnly,
	SingleToggle,
	Simultaneous,
	ELetoDisplayMode_MAX,
};

UENUM()
enum class EFortUINavigationOp : uint8 {
	PopContentStack,
	FeatureSwitch,
	NavigateToSkillTree,
	NavigateToSquadSlot,
	NavigateToQuest,
	NavigateToItemManagement,
	NavigateToExpeditions,
	NavigateToCollectionBook,
	None,
	EFortUINavigationOp_MAX,
};

UENUM()
enum class EFortLoginStage : uint8 {
	Begin,
	SplashScreen,
	UpdateCheck,
	SignIn,
	PostSignin,
	SafeZoneEditor,
	Benchmark,
	RejoinCheck,
	LoadingAthenaProfile,
	HealthWarning,
	WaitingForDynamicContent,
	Complete,
	EFortLoginStage_MAX,
};

UENUM()
enum class EFortLoginDisplay : uint8 {
	LoginStatus,
	SplashScreen,
	SignIn,
	SafeZoneEditor,
	HealthWarning,
	EFortLoginDisplay_MAX,
};

UENUM()
enum class EFortLoginAccountType : uint8 {
	None,
	EpicAccount,
	Facebook,
	Google,
	PSN,
	XBLive,
	Erebus,
	EFortLoginAccountType_MAX,
};

UENUM()
enum class EPlayerReportReasons : uint8 {
	None,
	Communication,
	Offensive,
	AFK,
	IgnoringObjective,
	Harassment,
	Exploiting,
	TradeScam,
	CommunicationsAbuse,
	OffensiveName,
	TeamingUpWithEnemies,
	InappropriateContent,
	ExploitingOrHacking,
	Harassment_Threatening,
	Harassment_Annoying,
	Harassment_Selling,
	Harassment_Verbal,
	Harassment_GameBehavior,
	EPlayerReportReasons_MAX,
};

UENUM()
enum class EFortComparisonType : uint8 {
	None,
	HigherValue,
	LowerValue,
	Upgrade,
	EFortComparisonType_MAX,
};

UENUM()
enum class EFortClampState : uint8 {
	NoClamp,
	MinClamp,
	MaxClamp,
	EFortClampState_MAX,
};

UENUM()
enum class EFortBuffState : uint8 {
	NoChange,
	Better,
	Worse,
	EFortBuffState_MAX,
};

UENUM()
enum class EFortStatValueDisplayType : uint8 {
	BasicPaired,
	BasicSingle,
	Unique,
	ElementalFire,
	ElementalIce,
	ElementalElectric,
	EFortStatValueDisplayType_MAX,
};

UENUM()
enum class EFortAnimSpeed : uint8 {
	Instant,
	Fast,
	Normal,
	EFortAnimSpeed_MAX,
};

UENUM()
enum class EFortSocialPanelTab : uint8 {
	PartyInvitations,
	Friends,
	RecentPlayers,
	Max,
};

UENUM()
enum class EFortSocialPanelType : uint8 {
	Join,
	Invite,
	Max,
};

UENUM()
enum class EModalContainerSize : uint8 {
	ExtraSmall,
	Small,
	Medium,
	Large,
	Max,
};

UENUM()
enum class ENotificationType : uint8 {
	Basic,
	Friends,
	ENotificationType_MAX,
};

UENUM()
enum class ENotificationResult : uint8 {
	Confirmed,
	Declined,
	Unknown,
	ENotificationResult_MAX,
};

UENUM()
enum class EFortInventoryContext : uint8 {
	Game,
	Lobby,
	FrontEnd,
	Pickup,
	EFortInventoryContext_MAX,
};

UENUM()
enum class EFortToastType : uint8 {
	Default,
	Subdued,
	Impactful,
	EFortToastType_MAX,
};

UENUM()
enum class EUpgradeInfoImageSize : uint8 {
	Small,
	Large,
	EUpgradeInfoImageSize_MAX,
};

UENUM()
enum class EChannelSpeakerStyle : uint8 {
	InGame,
	InLobby,
	OutOfClient,
	Max,
};

UENUM()
enum class EHeistExitCraftIconState : uint8 {
	None,
	Incoming,
	Spawned,
	Exited,
	EHeistExitCraftIconState_MAX,
};

UENUM()
enum class EHeistBlingIconState : uint8 {
	None,
	SupplyDrop,
	PickupItem,
	CarriedEnemy,
	CarriedAlly,
	EHeistBlingIconState_MAX,
};

UENUM()
enum class EHeistExitCraftUIState : uint8 {
	None,
	OnTheWay,
	Incoming,
	Arrived,
	EHeistExitCraftUIState_MAX,
};

UENUM()
enum class ENumericalIndicatorActionType : uint8 {
	Adding,
	Removing,
	Nothing,
	ENumericalIndicatorActionType_MAX,
};

UENUM()
enum class ELinkAcrossSimpleAction : uint8 {
	AddToAll,
	RemovedFromAll,
	Custom,
	Nothing,
	ELinkAcrossSimpleAction_MAX,
};

UENUM()
enum class EHUDLayoutToolPopupType : uint8 {
	Warning,
	Generic,
	EHUDLayoutToolPopupType_MAX,
};

UENUM()
enum class EHUDLayoutToolTextInputPopupType : uint8 {
	Rename,
	ImportLayoutID,
	EHUDLayoutToolTextInputPopupType_MAX,
};

UENUM()
enum class EHUDLayoutToolToasterType : uint8 {
	Success,
	Failure,
	LocalFailure,
	CloudFailure,
	EHUDLayoutToolToasterType_MAX,
};

UENUM()
enum class ELiveStreamStandaloneBlocked : uint8 {
	StreamInWorldActive,
	ELiveStreamStandaloneBlocked_MAX,
};

UENUM()
enum class EMatchmakingInputSource : uint8 {
	Local,
	Remote,
	Pool,
	EMatchmakingInputSource_MAX,
};

UENUM()
enum class ESpectatorLeaderboardEntryType : uint8 {
	ScoreWithEndScore,
	NoEndScore,
	Time,
	Invalid,
	ESpectatorLeaderboardEntryType_MAX,
};

UENUM()
enum class EMinigameCaptureObjectiveIconState : uint8 {
	NotCaptured,
	Captured,
	EMinigameCaptureObjectiveIconState_MAX,
};

UENUM()
enum class EFortPlayerFeedbackFlags : uint8 {
	SubscreenFlow_ForceDisplayFreeText,
	SubscreenFlow_IncludeScreenshotSubscreen,
	DoNotDisplay_SaveTheWorld,
	DoNotDisplay_Athena,
	DoNotDisplay_Creative,
	Submit_TryDisplayBlockUser,
	Submit_TryDisplayCommunityRulesURL,
	Filter_AddSidekick,
	Filter_OnlySidekick,
	EFortPlayerFeedbackFlags_MAX,
};

UENUM()
enum class EPlayerFeedback_EpicQAState : uint8 {
	SignInPage,
	SigningInFailed,
	SigningIn,
	SelectBugComponent,
	EPlayerFeedback_MAX,
};

UENUM()
enum class EPlayerFeedbackSubmitState : uint8 {
	Start,
	Submitting,
	SubmitFailed,
	SubmitSucceeded,
	EPlayerFeedbackSubmitState_MAX,
};

UENUM()
enum class EFortPrioritizedWidgetInterruptedBehavior : uint8 {
	RemainInQueue,
	Drop,
	EFortPrioritizedWidgetInterruptedBehavior_MAX,
};

UENUM()
enum class EFortPrioritizedWidgetContestedBehavior : uint8 {
	QueueBehind,
	StompOther,
	EFortPrioritizedWidgetContestedBehavior_MAX,
};

UENUM()
enum class EFortPrioritizedWidgetPriority : uint8 {
	Priority_1,
	Priority_2,
	Priority_3,
	Priority_4,
	Priority_5,
	Priority_6,
	NumberOfPrios,
};

UENUM()
enum class ECooldownTrackingType : uint8 {
	Cue,
	AbilityCooldownTags,
	COUNT,
	ECooldownTrackingType_MAX,
};

UENUM()
enum class ESidekickVoiceChatVideoContentType : uint8 {
	Default,
	Screencast,
	ESidekickVoiceChatVideoContentType_MAX,
};

UENUM()
enum class ESidekickVoiceChatVideoStatus : uint8 {
	Enabled,
	Disabled,
	NetworkDisabled,
	BackgroundDisabled,
	ESidekickVoiceChatVideoStatus_MAX,
};

UENUM()
enum class ESidekickVoiceChatAudioStatus : uint8 {
	Enabled,
	Disabled,
	ESidekickVoiceChatAudioStatus_MAX,
};

UENUM()
enum class ESpatialCustomizationRoomState : uint8 {
	None,
	CategorySelection,
	CustomizationSelection,
	ESpatialCustomizationRoomState_MAX,
};

UENUM()
enum class ESpatialCustomizationCategoryState : uint8 {
	LockedByBattlePass,
	LockedByChallenge,
	LockedByChallengeCompletion,
	UnlockAvailable,
	UnlockUsed,
	Max_NONE,
	ESpatialCustomizationCategoryState_MAX,
};

UENUM()
enum class ESpatialStyleCharacterUnlockPrerequisite : uint8 {
	BattlepassPurchase,
	BattlepassLevel,
	ESpatialStyleCharacterUnlockPrerequisite_MAX,
};

UENUM()
enum class ESubscriptionDisclaimerState : uint8 {
	None,
	Asterisk,
	Received,
	ESubscriptionDisclaimerState_MAX,
};

UENUM()
enum class ETDMScoreProgressTypes : uint8 {
	None,
	ProgressSoundMild,
	ProgressSoundMedium,
	ProgressSoundStrong,
	CountdownSoundNormal,
	CountdownSoundStrong,
	ETDMScoreProgressTypes_MAX,
};

UENUM()
enum class EFortEarnedSubRewardType : uint8 {
	XP,
	Bars,
	EFortEarnedSubRewardType_MAX,
};