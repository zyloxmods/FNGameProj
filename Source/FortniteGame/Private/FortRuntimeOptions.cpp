#include "FortRuntimeOptions.h"

bool UFortRuntimeOptions::ShouldShowNewMOTD(const UWidget* ContextWidget) const {
    return false;
}

bool UFortRuntimeOptions::ShouldShowLeaderboardPrivacySettings() const {
    return false;
}

void UFortRuntimeOptions::SetEnableMainMenuSocialButton(bool NewValue) {
}

bool UFortRuntimeOptions::IsSitoutOptionEnabled() {
    return false;
}

bool UFortRuntimeOptions::IsShippingBuild() const {
    return false;
}

bool UFortRuntimeOptions::IsPartyInProgressEnabled() {
    return false;
}

bool UFortRuntimeOptions::IsMatchmakingKnobVisible(const FString& KnobName) const {
    return false;
}

bool UFortRuntimeOptions::IsMatchmakingKnobEnabled(const FString& KnobName) const {
    return false;
}

bool UFortRuntimeOptions::IsInviteUIDisabled() const {
    return false;
}

bool UFortRuntimeOptions::IsGiftingDisabled() const {
    return false;
}

bool UFortRuntimeOptions::IsGameplayMessageEnabled(const FName MessageOwnerClassName, const FName MessageName) const {
    return false;
}

TArray<FString> UFortRuntimeOptions::GetValidAffiliateNames() const {
    return TArray<FString>();
}

bool UFortRuntimeOptions::GetShowReplayTrailerButton_Athena() const {
    return false;
}

UFortRuntimeOptions* UFortRuntimeOptions::GetRuntimeOptions() {
    return NULL;
}

bool UFortRuntimeOptions::GetRebootShowInInventory() const {
    return false;
}

float UFortRuntimeOptions::GetRebootDirectiveDisplayTime() const {
    return 0.0f;
}

float UFortRuntimeOptions::GetRebootChipExpirationTime() const {
    return 0.0f;
}

FText UFortRuntimeOptions::GetOverrideBonusEventXpTitleText() const {
    return FText::GetEmpty();
}

FText UFortRuntimeOptions::GetOverrideAffiliateErrorText() const {
    return FText::GetEmpty();
}

FText UFortRuntimeOptions::GetOverrideAffiliateDescriptionText() const {
    return FText::GetEmpty();
}

int32 UFortRuntimeOptions::GetNumGameplayMessageChannels() const {
    return 0;
}

bool UFortRuntimeOptions::GetNewSettingsScreenEnabled() const {
    return false;
}

FString UFortRuntimeOptions::GetLobbyGenericLinkButtonURL() {
    return TEXT("");
}

FText UFortRuntimeOptions::GetLobbyGenericLinkButtonOverrideText() {
    return FText::GetEmpty();
}

bool UFortRuntimeOptions::GetIsFriendLinkEnabled() const {
    return false;
}

bool UFortRuntimeOptions::GetIsDonutIdleGameEnabled() {
    return false;
}

FGameplayTagContainer UFortRuntimeOptions::GetInvalidCreativeItemTags(const FGameplayTagContainer& AdditionalInvalidCreativeItemTags) const {
    return FGameplayTagContainer{};
}

FString UFortRuntimeOptions::GetGameVersion() const {
    return TEXT("");
}

void UFortRuntimeOptions::GetExternalNewsURL(ESubGame CurrentMode, bool& bHasValidExternalURL, FString& ExternalURL, ENewsExternalURLMode& ButtonMode) const {
}

bool UFortRuntimeOptions::GetEnableSplitWalletTextNotice() const {
    return false;
}

bool UFortRuntimeOptions::GetEnableNotifyWhenPlaying() const {
    return false;
}

bool UFortRuntimeOptions::GetEnableMainMenuSocialButton() const {
    return false;
}

bool UFortRuntimeOptions::GetEnableLobbyGenericLinkButton() {
    return false;
}

bool UFortRuntimeOptions::GetEnableLFG() const {
    return false;
}

float UFortRuntimeOptions::GetEliminationMarkerTTL() {
    return 0.0f;
}

bool UFortRuntimeOptions::GetDisablePurchaseHistoryScreen() const {
    return false;
}

TArray<FRuntimeOptionTabStateInfo> UFortRuntimeOptions::GetDisabledFrontendNavigationTabs() const {
    return TArray<FRuntimeOptionTabStateInfo>();
}

float UFortRuntimeOptions::GetDelayGiftButtonWhenMFANotEnabledSeconds() const {
    return 0.0f;
}

bool UFortRuntimeOptions::AllowInGameMatchmakingOnPlaylist(const UFortPlaylistAthena* PlaylistAthena) const {
    return false;
}

bool UFortRuntimeOptions::AllowInGameMatchmaking(UObject* WorldContextObject) const {
    return false;
}

UFortRuntimeOptions::UFortRuntimeOptions() {
    CreativeIslandDescriptionTagsMaxQty = 0;
    CreativeIslandDescriptionTagsWhitelist.AddDefaulted(113);
    YoutubeVideoPrefix = TEXT("https://i.ytimg.com/vi/");
    YoutubeVideoSuffix = TEXT("/sddefault.jpg");
    bEnableSpectatorUpdates = true;
    bIsTournamentMode = false;
    bIsOutOfSeasonMode = true;
    bForceBRMode = true;
    bAllowBPTokenRefund = true;
    bUseTournamentAnonymousOverrideEnabled = true;
    bEnableYoutubeLinks = false;
    bEnableGeneratedScreenshotForPortalPreview = true;
    bAllowLoadoutSwitchingInLobby = true;
    IngameMatchmakingDelaySeconds = 0;
    NumSavedLoadouts = 0;
    TournamentPlaylistName = TEXT("Playlist_DefaultSolo");
    TournamentPlaylistPriorityBase = 0;
    TournamentModeQueueInterval = 1;
    MinimumAccountLevelForTournamentPlay = 0;
    bEnableManualBroadcasterStart = false;
    bCreativeManualBroadcasterStart = false;
    bAutoloadRestrictedPlots = true;
    bDisableMyIslandDescriptionPanel = false;
    bEnableAllRemoteClientInfos = true;
    bEnableBuildPreviewForBroadcast = true;
    bEnableRemoteAimSnapshotManagerForBroadcast = false;
    EsportsAnalyticsHeartbeatRate = 1;
    bUseBroadcastPostProcessing = true;
    bUseBroadcastKillFeed = true;
    bUseServerReplayActionFeed = false;
    bReplayGoToTimeEnabled = true;
    bBroadcastPipModeToggle = false;
    bShowBroadcastPlayerEventScoreWidget = true;
    bUseOutsideTopThreeSpectatorLeaderboard = true;
    bReplayPauseZeroDeltas = true;
    CurrentSocialImportVersion = 0;
    PawnDeathScreenDelay = 1;
    CurrentVKImportVersion = 0;
    bEnableMassFriendImport = false;
    NumDaysBeforeFailedImportReattempt = 0;
    bEnableSocialBanModal = true;
    bEnableLetoSellModal = false;
    bEnableDedicatedServerSocialBanVoiceQuery = false;
    bEnableDedicatedServerSocialBanVoiceEnforcement = false;
    bEnableSocialVoiceChannelsView = true;
    bDisplayLastOnlineTime = true;
    bDisplayLastInteraction = true;
    bEnableStartupSocialImport = true;
    bEnableStartupErebusFriendImport = true;
    bEnableVKImport = true;
    bEnableSteamImport = true;
    SocialImportURI = TEXT("social/friends/add?source={Platform}");
    DaysBetweenSocialImportPrompts = 0;
    DaysBetweenVKImportPrompt = 0;
    FriendImportCaptionSelection = 0;
    bEnableSplitWalletTextNotice = false;
    bShowAthenaStoreToast = true;
    bShowAthenaStoreToastForRolloverAlone = false;
    bShowAthenaStarsInStoreNotification = true;
    bAllow3DInspectOfRMTItems = true;
    bAltUpdateFlow = true;
    AthenaStarterGameMode.AddDefaulted(1);
    AthenaStarterFill = true;
    PartyRichPresenceUpdateTime = 1;
    PartySuggestionUpdateTimer = 1;
    MaxPartySuggestionsToConsider = 0;
    bAllowLFG = false;
    bAllowPartyPresenceUpdates = true;
    bAllowGameplayPresenceUpdates = true;
    bEnablePlaylistNameInRichPresence = true;
    bAllowDiscordFrictionlessJoin = true;
    bEnableInteractiveConsumables = true;
    bEnableContextHelpMenu = false;
    bShowAthenaItemShop = true;
    bEnableShowdown = true;
    bEnableTournamentMatchCaps = true;
    bUsePlayingEventIds = true;
    bRetryCMSLoads = true;
    RefreshScoreDelay = 1;
    bAlwaysForceTournamentLobbyPanelRefresh = false;
    bEnableEventLeaderboards = true;
    NumCachedLeaderboardPages = 0;
    MaxPagesPerLeaderboard = 0;
    EventLeaderboardLiveRefreshTimeSeconds = 0;
    EventLeaderboardLivePostEventRefreshWindowMinutes = 0;
    bGetLiveSessionsFromLeaderboards = true;
    bUseServerTournamentPlacementNotifications = true;
    MaximumEventLengthHoursForCallout = 0;
    bEnableHypeLeaderboards = false;
    HypeLeaderboardEventId = TEXT("persistent");
    HypeLeaderboardEventWindowId = TEXT("Hype_S11");
    HypeLeaderboardRefreshTimeSeconds = 0;
    bHypeLeaderboardIncludeFriendsTab = false;
    CreativePlaylistName = TEXT("Playlist_PlaygroundV2");
    BattleLabPlaylistName = TEXT("Playlist_BattleLab");
    PlaygroundsPlaylistName = TEXT("Playlist_Creative_PlayOnly");
    bEnableEventScoreClamping = true;
    CreativeDisabledTabIndex = 0;
    bAllowIslandExporting = true;
    bIslandExportingEnabledMCPOverride = false;
    bEnableCreativeServerImportFriendsOption = false;
    MaxPlayersInCreativeServer = 0;
    MaxPlayersInCreativeWhitelist = 0;
    bShowSupportACreatorOnIslandLinkScreen = true;
    bHideServersWithZeroPlayers = false;
    bEnableIslandCodeEntryOnPlayerPortal = false;
    bEnableIslandCodeEntryOnCuratedPortal = true;
    bEnableIslandCodeEntryInFrontend = false;
    RefreshFavoriteIslandsWaitTime = 1;
    IslandCodeLength = 0;
    bApplyCodeFormatting = true;
    bAdvertiseBattleLabOwnerInSession = false;
    bEnableThermometerUIForBattleLab = false;
    bEnableSpatialThermometerForBattleLab = false;
    bEnableHeatmapUIDisplayForCreative = false;
    bEnableHeatmapUIDisplayForBattleLab = false;
    bUseHeatmapHighPrecison = true;
    bEnableBudgetTrackerSpatialTest = true;
    bEnableSpatialThermometerForCreative = false;
    bEnableSpatialSettingsForCreative = false;
    bIsMatchmakingEnabledForPlayers = false;
    SpatialThermometerCellSize = 1;
    bEnableThermomterCostPreviwer = true;
    bEnableJoinInProgress = true;
    bEnableSpectateAPartyMember = true;
    bEnableJoinAndSpectate = true;
    MaxNumAlivePlayersForSpectateAPartyMember = 0;
    MaxNumPartyMemberSpectatorsPerMatch = 0;
    bEnableJoinInProgressInMatchmakingWidget = true;
    bEnableLockerSearch = true;
    bEnableLockerDirtySearch = false;
    bEnableBattlePass = true;
    bEnableBattlePassFAQ = true;
    bShowBattlePassBangAfterPurchase = false;
    bShowBattlePassBangEveryLevel = true;
    bSkipBattlePassPurchaseTextScreen = true;
    bBattlePassPurchaseSound = true;
    bBattlePassPurchaseDialog = true;
    bBattlePassFTUEFix = true;
    bBattlePassVideoDelay = true;
    bEnableAthenaFavoriting = true;
    bShowAthenaDailyQuests = true;
    bShowAthenaDailyQuestsWithAllChallenges = true;
    bEnableAthenaCustomPreviewActionForCosmetics = true;
    bEnableAthenaItemRandomization = false;
    bEnableProfileStatTracking = false;
    bEnableProfileStatUI = false;
    bEnableTrickUI = true;
    bEnableMultiplayerTricks = true;
    bShowAthenaChallengesTabWhenOutOfSeason = false;
    bEnableInGameChallengeTree = true;
    bCreateEpicAccountPinGrantDisabled = true;
    bLoginEpicWeb = false;
    bLoginXBLDisabled = false;
    bLoginPSNDisabled = false;
    bLoginErebusDisabled = false;
    bSkipInternetCheck = false;
    bEnableClientSettingsSaveToCloud = true;
    bEnableClientSettingsSaveToDisk = true;
    bEnableClientSettingsRestoreInputPresets = true;
    bDedServerEventServiceDownloadTryCount = 0;
    TournamentRefreshPayoutMaxRateSeconds = 0;
    TournamentRefreshEventsMaxRateSeconds = 0;
    TournamentRefreshPlayerMaxRateSeconds = 0;
    TournamentHUDPointCounterDelay = 1;
    MaxNumDisplayNamesOnLiveGameList = 0;
    LiveGameListInitialLimit = 0;
    LiveGameListQueryIncreaseAmount = 0;
    bEnableLiveGamesScreen = true;
    bLiveGameTimeDurationVisible = false;
    bEnableFlagSelection = true;
    DefaultFlagRegionId = TEXT("fortnite");
    MixedNationTeamFlagRegionId = TEXT("global");
    FlagChangeCooldownDays = 0;
    bEnableEventServicePayouts = true;
    bLiveGamesClientAnalyticsEnabled = true;
    MinimumWaitTimeToRequestNewShowdownScoreForWindow = 1;
    EventServicePayoutRefreshRateSeconds = 0;
    EventServicePayoutRefreshSpreadSeconds = 0;
    BundleLoaderWidgetTimerInterval = 1;
    SecondsShowStartingMatchMessageForScheduledMMEvents = 0;
    bEnableMatchAbandonProcess = true;
    MatchAbandonTimeout = 1;
    CloudSaveIntervalConfig = 4294967295;
    bSaveToCloudOnMapLoad = false;
    GiftNotificationRefreshTimer = 4294967295;
    bEnableUndoPurchase = true;
    bMoveUndoToBottomBar = true;
    bShowStoreBanner = false;
    InGameStoreUpdateChance = 1;
    bEnableReplayBrowser = true;
    bAllowAllReplays = false;
    bEnableReplayRecording = true;
    bEnableLargeTeamReplayRecording = true;
    bEnableCreativeModeReplayRecording = true;
    bEnablePlaygroundModeReplayRecording = true;
    bEnableSplitscreenReplayRecording = false;
    bStableReplayPlayback = true;
    bEnableHearingAccessibility = true;
    bDisableSpatializationInsteadOfMutingWhenHearingAccessibilityEnabled = true;
    bDisableGiftXMPPMessageSend = false;
    bDisableGifting = false;
    bEnableGiftEligibilityCheck = true;
    bImmediateClaimOfEmote = true;
    bForceRestrictChat = false;
    bLimitGiftingToEligiblePlatforms = false;
    bCanGiftYourself = true;
    GiftLimitAmount = 0;
    bBattlePassGiftingEmergencyDisable = false;
    bEnableBattlePassGiftingButton = true;
    bEnableBattlePassGiftingButtonTokenOnly = true;
    bShowBPGiftBoxPopup = true;
    EndBattleRoyalUpdateDelay = 1;
    LightswitchDownLoginDelay = 1;
    bShowStatusButtonOnWaitingRoomScreen = false;
    bInvertMotionOnUnattachedSwitchControllers = true;
    bDisableTouchLookVelocityScaling = false;
    bDisablePurchaseHistoryScreen = false;
    bEnableRedeemOfflinePurchasesToasts = true;
    bAllowProcessedPayoutsToRefreshProfile = true;
    TouchAimAssistStrengthScalar = 1;
    bDisableTouchAimAssistAutoTracking = false;
    bProcessGamepadInputOnMobile = true;
    bMobileForceGamepadHUDWhenAttached = false;
    bDisableLegacyControls = true;
    bFixAimAssistDeadzoneExploit = true;
    CrucibleWhitelistOverride = ECrucibleWhitelistOverride::DoNothing;
    bDisableCrucibleStatUpload = false;
    bDisableCrucibleStatDownload = false;
    bDisableCrucibleGlobalLeaderboards = false;
    bDisableCrucibleFriendLeaderboards = false;
    bDisableCrucibleAnalyticsEvents = false;
    bDisableCrucibleDestroyDeadBots = false;
    bDisableCrucibleForcedGC = false;
    bDisableCrucibleLeaderboardFilterText = false;
    bDisableCrucibleLeaderboardSwitching = false;
    bCrucibleLockToPlatform = false;
    bCrucibleSendStatsEndOfSession = false;
    bCrucibleSendStatsEndOfSessionOnShutdownEvent = true;
    CrucibleMinValidStatScoreMilliseconds = 0;
    CrucibleLeaderboardFriendQueryMaxSize = 0;
    bCrucibleLeaderboardEnableDisplayNameIcons = false;
    bEnableFortLeaderboardHelperDisplayNonPlatformNames = true;
    bEnableFortLeaderboardHelperConsolePlatformNameSearch = true;
    bEnableFortLeaderboardHelperConsoleDisplayNameFallback = true;
    bDisableCollectionStatsUpload = false;
    bDisableCollectionStatsDownload = false;
    CollectionStatsFriendQueryMaxSize = 0;
    bUseNativeQuickbar = true;
    bSoundIndicatorsAlwaysEnabled = false;
    bSoundIndicatorsEnabledForTeammates = false;
    bSoundIndicatorsPooled = true;
    SoundIndicatorMaxNum = 0;
    TencentDefaultBookStatSeason = 0;
    bEquipFirstWeaponOnMobile = true;
    bClearLastFireOnAbilityFailed = true;
    bUsePrototypeSubGameLoadingScreen = true;
    bForcePrototypeLoadingScreenScaling = true;
    ShowEliminationDistanceOver = 1;
    FadeOutTeamIndicatorsAfter = 1;
    FadeOutNPCEnemyIndicatorsAfter = 1;
    FadeOutEnemyIndicatorsAfter = 1;
    FadeOutWorldItemIndicatorsAfter = 1;
    FadeOutHardCoreBeaconIndicatorsAfter = 1;
    MapIndicatorTouchClearDistance = 1;
    AthenaMapZoomMax = 1;
    BacchusMapIndicatorSizeMultiplier = 1;
    AthenaMapPanSpeedMultiplier = 1;
    AthenaMapZoomSpeedMultiplier = 1;
    bAthenaMapMapIconsFlowEnabled = true;
    WaitTimeBeforeShowingNewModeViolator = 1;
    bOnlyShareURLWithNoMessage = true;
    bExcludeURLInShareMessage = true;
    bShowCreateAccountOnRedirect = false;
    bEnableContextTutorial = true;
    bDebugForcePlayerSurveys = true;
    bFeedbackTextShown = false;
    bEnableBadMatchPopup = false;
    BadMatchIncidentThreshold = 0;
    BadConnectionUpdateTime = 1;
    BadMatchPopupRecallInterval = 0;
    AthenaCodeOfConductURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    KairosCommunityRulesURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    BacchusFriendCodeShareURL = TEXT("https://fortnite.com/mobile?code=");
    CreateAccountUrl = TEXT("https://fortnite.com/mobile/create-account?mode=iosgame");
    GooglePlayRatingURL = TEXT("https://play.google.com/store/apps/details?id=com.epicgames.fortnite");
    LinkAccountURL = TEXT("https://www.epicgames.com/account/connected");
    AccountMergeMoreInfoURL = TEXT("https://fortnitehelp.epicgames.com");
    bEnableFactionTechScreen = true;
    bRequireFactionChoiceOnInfiltrationPlay = true;
    TotalPlayerTechLevelsToShow = 0;
    SupportURL = TEXT("https://fortnitehelp.epicgames.com");
    WaitingListURL = TEXT("https://fortnite.com/mobile");
    CheckStatusURL = TEXT("https://status.epicgames.com");
    iOSAppStoreURL = TEXT("https://itunes.apple.com/us/app/fortnite/id1261357853?mt=8");
    TurnOnMfaURL = TEXT("https://fortnite.com/2fa");
    bAllowCodeRedemptionInSubgameSelect = false;
    bEnableAutomaticMOTD = true;
    bShowMOTDInLobby = true;
    bMOTDSameNewsForCreative = true;
    bSkipSubgameSelect = false;
    BRUpdatesURLMode = ENewsExternalURLMode::PatchNotes;
    STWUpdatesURLMode = ENewsExternalURLMode::PatchNotes;
    PrivacyPolicyURL = TEXT("https://www.epicgames.com/privacypolicy");
    FanContentPolicyURL = TEXT("https://www.epicgames.com/fan-art-policy");
    TermsOfServiceURL = TEXT("https://www.epicgames.com/tos");
    GuardianChallengeLengthDays = 0;
    bAgeGateFlowEnabled = true;
    bEnableContentControls = true;
    ContentControlsMoreInfoURL = TEXT("https://epicgames.com/fortnite/parental-controls");
    ContentControlsForgotPinURL = TEXT("https://epicgames.helpshift.com/a/fortnite/");
    ContentControlsVerifyEmailURL = TEXT("https://www.epicgames.com/account/personal");
    bEnableContentControlsPlaytimeReporting = true;
    bEnableContentControlsPurchaseReporting = false;
    bContentControlsViewUGCEnabled = false;
    MaxNumItemsInCreativeChests = 0;
    MaxStreamerMatchmakingDelay = 0;
    bEnableHiddenMatchmakingDelay = true;
    PSALoadingScreenPercentChance = 0;
    StwDownloadLauncherOption = TEXT("%26install%3Dchunk11");
    bDisableAllKnobs = false;
    bDisableAllGameplayMessages = false;
    bDisableMatchmakingKnobs = false;
    bDisableMinigameKnobs = false;
    bDisableGameOptionKnobs = false;
    bDisableAffiliateFeature = false;
    bUseHotfixedAffiliateNamesArray = false;
    bEnablePrerollLlamas = true;
    bEnableSubregionNetworkAccelerators = true;
    bShowAccountItemWarningForVaultThreshold = true;
    DaysBetweenAccountItemWarnings = 0;
    VaultLimitThresholdForAccountItemWarning = 1;
    bShowAccountItemWarningForItemCount = true;
    AlwaysWarnAccountItemCount = 0;
    DisabledTabsForOutOfSeason.AddDefaulted(8);
    TournamentDisabledFrontendNavigationTabs.AddDefaulted(10);
    DisabledMatchmakingKnobs.AddDefaulted(1);
    HiddenMatchmakingKnobs.AddDefaulted(3);
    NumGameplayMessageChannels = 0;
    bShowMOTDNews = true;
    SoloTournamentScoreThresholds.AddDefaulted(4);
    DuoTournamentScoreThresholds.AddDefaulted(4);
    SquadsTournamentScoreThresholds.AddDefaulted(4);
    PickingInteractDistance = 1;
    PickingHighlightMovementUpdateDist = 1;
    PickingHighlightUpdateTime = 1;
    PickingTime = 1;
    AutoPickingInteractDistanceFactor = 1;
    AutoOpenDoorInputMagnitude = 1;
    AutoOpenDoorTraceDistance = 1;
    bAutofireEnabled = false;
    bShowXPWidgets = true;
    bShowAccoladesListWidget = true;
    bEnableInGameMatchmaking = true;
    bUseNewFlowIngameMatchmaking = true;
    bToggleIGMAnalytics = true;
    bAllowPreserveSquad = false;
    bAutofireUsesComponent = true;
    bAutofireUsesAutoaimTarget = true;
    bHoldToFireOnAutofireTarget = false;
    DefaultAutofireRange = 1;
    AutofireExtraTrackingRange = 1;
    bServerNetDriverAnalytics = true;
    bClientNetDriverAnalytics = false;
    bDisableReplicationGraph = false;
    BRServerMaxTickRate = 1;
    DoubleTapOnEndTouchTime = 1;
    DoubleTapOnStartTouchTime = 1;
    DoubleTapDistance = 1;
    SingleTapDistance = 1;
    TouchMoveStickRadius = 1;
    TouchMoveStickRadiusTargeting = 1;
    TouchMoveStickRadiusScoped = 1;
    TouchMoveStickRadiusDriving = 1;
    AutorunLockZoneOffset = 1;
    AutorunLockZoneDelay = 1;
    MoveOriginResetTime = 1;
    MoveOriginResetDistance = 1;
    MoveOriginFollowDistance = 1;
    bDisableTouchLookInertia = false;
    RotateInertiaMultiplier = 1;
    RotateInertiaMinTime = 1;
    RotateInertiaMinLength = 1;
    RotateInertiaMinMagnitude = 1;
    RotateInertiaNumAveragedTouches = 0;
    bTouchQuickbarTapToLockEnabled = false;
    bTouchInteractInUIAvailable = true;
    bTouchInteractInUIForced = false;
    bEnableHUDLayoutTool = true;
    bEnableHUDLayoutCloudSave = true;
    bEnableHUDLayoutToolPanZoom = true;
    bEnableMobileHUDV2 = true;
    bEnableHUDLayoutToolV2 = true;
    bEnableHUDLayoutToolV2_GridSnap = false;
    EnablePlayButtonTime = 1;
    AthenaExternalRichPresenceDelayTimeSeconds = 1;
    bEnableExternalPresenceAthenaPlayersRemain = true;
    MinimumTimeBetweenConsolePresenceUpdates = 1;
    MinimumTimeBetweenMCPPresenceUpdates = 1;
    TimeBetweenStorePatchCheckRequestsSeconds = 0;
    EnablePlayButtonTimePostError = 1;
    bInviteUIDisabled = true;
    bEnableInGameMipsAnalyticsReporting = false;
    SecondsBetweenTextureStatsGathering = 1;
    bEnableFriendsListButton = true;
    bForceDisableCrossplatformSquadFill = true;
    bRequireCrossplayOptIn = false;
    bUseAccountCrossplayPermissions = false;
    bSingleCrossplayOptInPrompt = false;
    bImmediatelyDisplayCrossplayOptIn_STW = true;
    bImmediatelyDisplayCrossplayOptIn_BR = false;
    bShowIconForSamePlatformPlayers = false;
    bObscuredPlatformIcons = true;
    bEnableChatWidget = true;
    bShowVoiceChatSettings = true;
    bShowMultipleVoiceChatSettings = false;
    bPartyInProgress = true;
    bShouldAthenaQueryRecentPlayers = true;
    bEnableRecentPlayerList = true;
    bEnableSuggestedFriendList = true;
    bEnableBlockedList = true;
    bEnableFriendListInGame = true;
    bPushJIPInfoToPlatformPresence = true;
    bEnableStWInZonePrivacyChange = false;
    bEnableSitoutOption = true;
    bEnableSitoutOption_STW = true;
    bEnableSocialPanelLeaveParty = true;
    bEnableMainMenuLeaveParty = true;
    bEnableINICachedRecentPlayers = true;
    MaxINICachedRecentPlayers = 0;
    MinUSSNameLength = 0;
    bEnableNickname = true;
    bAllowNicknameEmoji = true;
    bNicknameInFront = true;
    bShowAccountBoosts = true;
    bShowCustomerSupport = true;
    bEnableChannelChangePopup = true;
    bEnableVoiceSpeakerWidget = true;
    bEnableSpeakerWidgetZonePerfMode = true;
    bShowVoiceIndicatorsWhileLoading = false;
    bEnableVoiceChannelSelectionUI = true;
    bEnableGlobalChat = false;
    bEnableAllTabInChat = false;
    bEnableEULA = true;
    bEnableEndOfZoneCinematic = true;
    bEnableOnboardingCinematics = true;
    bShowFounderBannerIcons = true;
    bShowCurrentRegionInLobby = true;
    bEnableFoundersDailyRewards = true;
    bEnableTwitchIntegration = false;
    bEnableMatchmakingRegionSetting = true;
    bEnableReadyupButtonWhileSittingout = true;
    bEnableEulaRequiredTournaments = true;
    bEnableMFARequiredTournaments = true;
    bAllTournamentsRequireMFA = false;
    bSpectatorBroadcasterSkipMfaEulaCheck = true;
    bEnableNaviationToChat = true;
    bEnableLanguageSetting = true;
    bEnableFriendCodeSetting = true;
    bEnableEarlyAccessLoadingScreenBanner = false;
    bClientIgnoreIsTournamentCheck = false;
    CampaignMatchEndRetryCount = 0;
    StWTutorialDownloadAttempts = 0;
    bShopPurchaseConfirmation = false;
    bShopPurchaseConfirmationJapanPS4 = false;
    bToyMessagingEnabled = true;
    bAllowAccessToAllEmotesForTesting = false;
    bAllowAccessToStWHeroOutfitsAndBackblingForTesting = false;
    bEnableCosmeticItemShopInSTW = false;
    bRequireEmoteOwnershipInPIE = false;
    bEnableSTWLootDrops = true;
    bEnableSTWContainerItemCacheDrops = true;
    bEnableSTWEnemyItemCacheDrops = true;
    bEnableHoldToPickupUI = true;
    bSkipTrailerMovie = false;
    bAlwaysPlayTrailerMovie = false;
    bHideUnaffordableMtxPurchases = false;
    bDisableCTAInMtxStoreSelection = false;
    bAthenaFrontEndUsePushPopMTXStore = false;
    bHidePlusOnVbucksButton = false;
    bAllowXboxStwAccessDuringLiveStoreOutage = false;
    bShowReplayTrailerButton_Athena = true;
    bEnableAlterationModification = true;
    bEnableSchematicRarityUpgrade = true;
    bEnableMissionActivationVote = true;
    bEnableLtmRetrieveTheData = true;
    bEnableUpgradesVideos = true;
    bEnableExternalRichPresence = true;
    bShowEnableMFAModalAtStartupAthena = false;
    bShowEnableMFAModalAtStartupSTW = false;
    bEnableAIBuildingHitFX = true;
    LevelToStartShowingMFAModal = 0;
    DaysBetweenEnableMFAModalPrompts = 0;
    DelayGiftButtonWhenMFANotEnabledSeconds = 1;
    LevelToAutoOpenBattlePassOnNewSeason = 0;
    ForceSeasonRefreshCounter = 0;
    ForceVideoRefreshCounter = 0;
    bForceBattlePassPreview = false;
    bCanShowSTWUpsellInBR = false;
    bShowLeaderboardPrivacySettings = true;
    bEnableServerScoreboardLog = false;
    bEnableAsyncScoreboardFlush = false;
    bEnableInputBasedMatchmaking = false;
    bUsingAlternateMatchmakingModel = true;
    bNotifyBlockedInput = true;
    NumberOfFramesBeforeWarnInputBlocked = 0;
    bDisableVideoOptions = false;
    bEnableBattlePassWatchVideoActionOnCell = true;
    bEnableBattlePassReplayCinematicAction = true;
    bEnableCareerReplayCinematicAction = true;
    RadioInputDebounceSeconds = 1;
    bEnableBattlePassSocialFriends = true;
    bEnableBattlePassSocialFriendsOfDifferentPlatforms = true;
    bEnableBattlePassSocialFriendsServerSide = true;
    bEnableSimulatedXPForBattlePassSocialFriends = true;
    bEnableBattlePassPreviewOnRewardScreen = true;
    bEnableHoldToCloseOnRewardsScreen = false;
    ShowBattlePassTracker = 0;
    bDisplayBattlePassRewardsIndividually = true;
    bDisplayOnlyBattlePassFAQ = false;
    bEnableBPVideo = false;
    bShowBPPreviewVideo = true;
    bShowBPTrack_TimeLeft = false;
    bDisplayAllCharactersOnBattlePassPreviewScreen = true;
    bRefreshBattlePassCatalogOnSeasonDataLoaded = false;
    bEnableChallengeHolidayVideo = false;
    bEnableCareerScreenVideo = true;
    bEnableSpecialEventVideo = false;
    bEnableCNVideo = true;
    bEnableWinterfestPurchaseButton = false;
    bEnableWinterfestGiftButton = false;
    bForceWinterfestInfoModalButtonVisible = false;
    NumViewsToDisplayWinterfestInfoModalButton = 0;
    bCheckForPatchUpdateOnMatchmakingPlayClick = true;
    bCheckForPatchUpdateOnItemShopActivate = true;
    bEnableNewSettingsScreen = false;
    bDisplayPlayerReportingRoles = true;
    bDisplayRelevantPlayersForPlayerReporting = true;
    bPreventMultipleReportsOfSamePlayer = true;
    bAllowReportingFeaturedIslands = false;
    bForceGamepadPlaytest = false;
    bEnableNewFireModeSelection = true;
    bEnableHUDPresetSelection = true;
    bEnableAddFriendWhileSpectating = false;
    bEnableFriendLink = false;
    bPlatformChatToastDisplaySeconds = 1;
    FriendLinkURL = TEXT("https://fortnite.com/friend/");
    MFAEnableURL = TEXT("https://fortnite.com/2FA");
    bAllowForceTouchFire = false;
    VehicleSessionMinTimeUsed = 1;
    RebootChipExpirationTime = 1;
    RebootDirectiveDisplayTime = 1;
    bDonutIdleGameEnabled = true;
    bRebootEnableInventoryDisplay = true;
    bUseHordeStormShield = true;
    HordeStormShieldStartingRadiusOverride = 1;
    HordeStormShieldEndingRadiusOverride = 1;
    HordeStormShieldBreatherRadiusOverride = 1;
    bUseHordeRespawnAtLastPawnLocation = true;
    bAllowHordePlayerTriggeredRespawn = false;
    MaxQuickScopeAimAssistPulls = 0;
    MaxQuickScopeAimAssistPullWatchTime = 1;
    bShouldDisablePickaxeFXFrontendPreview = false;
    bRegisterPawnsWithSignificanceManagerInFrontEnd = false;
    bHideExclusiveCosmeticsFromOtherPlatformsOnPS4 = true;
    bHideExclusiveCosmeticsFromOtherPlatformsOnXB1 = true;
    bHideExclusiveCosmeticsFromOtherPlatformsOnSwitch = true;
    bHideExclusiveCosmeticsFromOtherPlatformsOnPS4_STWOnly = true;
    bHideExclusiveCosmeticsFromOtherPlatformsOnXB1_STWOnly = true;
    bHideExclusiveCosmeticsFromOtherPlatformsOnSwitch_STWOnly = true;
    bSimpleHeistVanEntrance = true;
    LobbyGenericLinkButtonURL = TEXT("https://fortnite.com");
    bEnableLobbyGenericLinkButton = false;
    HighlightClipRewindTimeInSeconds = 0;
    bEnableAntiTaxi = true;
    StopFlyingParachuteCooldownTime = 1;
    FlushLoadingScreenRefreshSeconds = 1;
    bEnableVehicleSpawnMissionInStw = true;
    bEnableDownTierCraftingInStw = true;
    bShowBugReportsButton = true;
    bShowCommentReportsButton = true;
    bShowContentReportsButton = true;
    bEnableItemRefundingInStw = true;
    bDisableCareerStatsButton = false;
    bDisableCareerLeaderboardButton = false;
    bDisableCareerStatsPagePlatformProfileButton = false;
    bUsePlatformSpecificTextOnCareerPage = true;
    bDisableViewOtherProfilesFromCompLeaderboards = false;
    bShowOtherPlayerStatsOnCareerPage = true;
    bShowFeatsOnClient = true;
    bShowHardcoreModifiers = false;
    InputMethodThrashingLimit = 0;
    InputMethodThrashingWindowInSeconds = 1;
    bEnableLogUploadForTokenHolders = true;
    TokenHolderLogTailSizeKb = 1;
    bAllowPartialBackgroundAudio = true;
    bDuplicateRemovedPlayersOnClient = true;
    bIsCreativeMultiSelectEnabled = true;
    bEnableUserProfilePictures = true;
    bUseProfilePicturePresence = true;
    bEnableChannelsServiceLoadTesting = false;
    bAllowMimicingEmotes = true;
    bAllowMimicingEmotesInFrontend = false;
    bAllowAsyncTooltipLoading = true;
    bAllowListViewAsyncLoading = true;
    bEnableBackToPartyHubButton = true;
    bEnableMobileAvailableLootingListView = false;
    bEnableDisambiguateLoading = true;
    bEnableOptionalHighRezMips = false;
    NumDaysToSnoozeGooglePlayRating = 0;
    NumDaysAllowedToDelayGoogleRating = 0;
    bEnableMobileInGameAppRating = true;
    PreloadRevision = 0;
    bEnableLiveStoreTilePreviews = true;
    bEnableLiveStoreTilePreviews_InGame = false;
    bAllowedToEnableUIGlobalInvalidation = true;
    bEnableAutoMulchInStW = true;
    bAllStWMoonbeamHUD = true;
    IllegalIslandTitleChars.AddDefaulted(2);
    bEnableCreativeUserTextSanitizationWithToxicityService = true;
    bEnableCreativeUserTextSanitizationWithPlatformSanitizer = true;
    bEnableCreativeUserTextSanitizationWithChatSanitizer = true;
    bUseLegacyAsyncSanitizationLogicInCreative = false;
    HotfixVersionId = 0;
    bCanTurboBuildOutsideBuildModeWithBuildTool = true;
    MaxBuildingIntoTerrainIntersectionPercentage = 1;
    bUsingBuildingExtraPiece = true;
    AnalyticsBuildingWallTooLowLocations = 0;
    bDisableClientEngagementsAnalytics = false;
    AnalyticsClientEngagementsTimeoutSeconds = 1;
    AnalyticsClientEngagementsMaxSendPerMinute = 0;
    AnalyticsClientEngagementsMaxSendOnCleanup = 0;
    bAnalyticsClientEngagementsRequireTimeToReturnFireToSend = false;
    AnalyticsClientEngagementsParticipationPercent = 0;
    PublishingEnabledForWhitelistedAccounts = true;
    IslandCodeLinkMnemonicExampleText = TEXT("0000-0000-0000");
    IslandCodeLinkURLText = TEXT("https://epicgames.com/fn/");
    bEnableCreativeLTMSupportCreator = true;
    CreativePublishCodeURLPrefix = TEXT("https://epicgames.com/fn/");
    bCreativeMinimapRendering = true;
    bCreativeMinimapCaptureLighting = true;
    CuratedIslandTemplateCodes.AddDefaulted(7);
    bEnableIslandCheckpoints = true;
    bEnableIslandLoadNetSafeGuards = true;
    bLoadingScreenInputPreprocessorEnabled = true;
    AllowInputTypeFilterForAccessibility = true;
    AllowLockPrimaryInputMethodToMouseForAccessibility = true;
    bEnableLiveStream = false;
    bEnableLiveStreamCountdown = false;
    bEnableLiveStreamInMatch = false;
    bShowLiveStreamInMatchByDefault = false;
    bCaptureTeamFrontendFlag = false;
    VideoHolidayName = TEXT("WinterQuest2019");
    VideoBattlePassName = TEXT("AutoOpenUpBattlePassPreview");
    VideoCareerScreenName = TEXT("CareerScreen-SeasonTrailer");
    VideoChallengeScreenName = TEXT("Fortnitemares2019");
    VideoFrontEndName = TEXT("SeasonTrailer");
    FTUESeasonTrailerBoundary = 1;
    VideoDurationOffsetFromTransition = 1;
    VideoDurationOffsetFromEnd = 1;
    bEnableGCBeforeVideoPlayback = true;
    LiveStreamPiPMemoryRequired = 0;
    ShouldShowLiveStreamPiPInMatchCounter = 0;
    bEnableRiskyReelsStreaming = false;
    bDisableBlastURLStreamSource = false;
    StreamPlaylistFetchMethodOrder = 0;
    bHiddenButEnabledLiveStreamInMatch = false;
    TimedEventsJIPStartDelay = 1;
    bEnableSplineReticulationById = false;
    bUseSingleHUDUpdatePerFrame = true;
    PlaylistConditionalFlags.AddDefaulted(1);
    bIsUserChoiceAllowedForForcedAndroidStore = true;
    AndroidStoreCounter = 0;
    bHideCharacterCustomizationNullTile = false;
    bEnablePlaylistRequireCrossplay = false;
    bRequireCrossplayOptInForFill = false;
    bUseConcurrentCrossplayPromptGuard = true;
    MaxSquadSize = 0;
    MaxPartySizeCampaign = 0;
    MaxPartySizeAthena = 0;
    bShouldFollowersSendSquadMatchmakingInfo = false;
    bAllowAthenaNavSystemForCreative = true;
    bEnablePlayerSurveys = true;
    bEnablePlayerStatsPrecache = true;
    bEnableStreamingReplayViewingUI = false;
    LiveReplayDiscoverabilityDelay = 1;
    bSkipPlayingFortniteChecks = false;
    bReplayBattleMapCameraMode = true;
    bReplayKeepLocalClientEvents = false;
    bReplaySampleAthenaPawnMovement = true;
    ReplaySampleAthenaPawnTimeRate = 1;
    ReplaySampleAthenaPawnSpaceRate = 1;
    ReplaySampleAthenaPawnUpdateTimeRate = 1;
    bDisablePartyJoinInOutpost = true;
    bEnableMissedInvitesEntry = true;
    bOnlyShowMissedInvitesEntryIfMissedInvites = false;
    bEnableNotifyWhenPlaying = true;
    bEnableSubscriptionNudges = false;
    bEnableSidekick = false;
    bEnableCampaignBatchLevelingUI = true;
    MaxSetFriendSubscriptionSettingsAttempts = 0;
    MaxQueryFriendSubscriptionSettingsAttempts = 0;
    NumDaysBetweenPlayingNotifications = 0;
    NumHoursBetweenPlayingNotifications = 0;
    NumMinutesBetweenPlayingNotifications = 0;
    bForceAutoChangeMaterialOn = true;
    bActiveDisplayDeviceTemperature = false;
    bAllowOfflineInvites = false;
    bEnablePlatformVoiceLeave = true;
    bEnablePlatformVoicePrompts = true;
    bEnableVoiceChatEnablePrompt = true;
    PlaylistGameVoiceChannelRecommendationDisplayTime = 1;
    bEnablePlaylistGameChannelRecommendationToast = false;
    bEnableQuickHealing = true;
    bAllowDeferredPedestalPawnSpawn = true;
    bRunUnicornOnServer = true;
    bShowSamsungSensorButtonWarning = false;
    SamsungSensorButtonGamesPerWarning = 0;
    CatabaExclusiveCountryCodes.AddDefaulted(1);
    bEnableCatabaDynamicBackground = false;
    EnableCommunityVotingScreen = true;
    CommunityVotingTutorialVersion = 0;
    CommunityVotingRevealDelay = 1;
    CommunityVotingTimerRefreshDelay = 1;
    ScrollToWinnerTileAfterReveal = true;
    EnableStandaloneStorefront = true;
    bEnableBattlePassStorefront = true;
    bEnableItemPreviewInStore = false;
    bEnableCurrencyInspectScreenBonusText = false;
    bEnableCurrencyBonusBanner = false;
    bEnableItemShopInvalidationBox = false;
    ScrollToStandaloneSectionOnPopupClosed = false;
    ItemShopOrdering.AddDefaulted(7);
    bEnableItemShopSectionBangs = true;
    bEnableItemShopCommunityVotingSectionBang = true;
    bEnableItemShopLandingPriority = true;
    ItemShopDefaultLandingPriority.AddDefaulted(4);
    ItemShopOverrideDisplayDataList.AddDefaulted(1);
    ItemShopDefaultLanding = EFortItemShopSection::RMTItemOffer;
    ItemShopOfferSeenThreshold = 1;
    CommunityVotingTileAnimated = false;
    ScrollToComTileOnEventPopupClosed = true;
    EnableThanksVotingPopup = true;
    bUseItemPresentationScreenOnItemPurchased = true;
    CommunityVotingThanksPopupDelay = 1;
    bIgnoreABTestingForReloadMtx = false;
    ReloadMtxExclusiveCountryCodes.AddDefaulted(1);
    bEnableReloadMtx = false;
    bEnableDynamicReloadMtx = false;
    bEnableInGameReloadMtx = true;
    ReloadMtxIntroVersion = 0;
    bEnableBattlePassViolatorEarnedCurrency = true;
    bUseContentPatchingRestartFlow = true;
    bAthenaAutoPickupStackables = true;
    bEnableUnicornHighlightsOnClient = false;
    bEnableHighlightsPromptInCompeteScreen = true;
    bUseReturnToKairosLoadingScreen = true;
    bForceReturnToKairosLoadingScreen = false;
    bUseActivityBrowser = false;
    bDebugForceLoginRelaunch = false;
    bUseAthenaArmory = false;
    bEnableLiveSpectateButton = false;
    bEnableGuidedTutorialDefensiveBuilding = false;
    bEnableSafeZoneEditor = true;
    bEnableSavedLoadouts = false;
    bSavedLoadoutsUseGodTile = true;
    bEnableSafeZoneEditorOnLogin = true;
    bEnableSafeZoneEditorWhenNotInApolloIntro = true;
    LoginFlowCMSRefreshWaitTime = 1;
    bEnableAppResumeCMSUpdate = true;
    bEnableMOTDAnalytics = true;
    bEnableTabTransitionMOTDAnalyticsEvent = true;
    bAllowStoreSkipOpenAnimation = true;
    bAllowInGameStore = true;
    bPostGameStoreNoLeto = true;
    bPostGameStoreTriggerIncrementalGC = true;
    bAllowInGameLocker = false;
    bAllowInGameCareer = false;
    bAllowInGameActivityBrowser = false;
    bEnableGuidedTutorialDirectFlush = true;
    bEnableGuidedTutorialABTesting = true;
    bEnableHighlightPlayButtonABTesting = true;
    bEnableSkipGuidedTutorialABTesting = true;
    MaxFrontendFlowStatQueries = 0;
    bForceApolloIntroSkipSubgameSelect = true;
    bEnableApolloIntroV2 = false;
    ApolloIntroQueueTimeoutSeconds = 1;
    ApolloIntroMaxRetries = 0;
    ApolloIntroSecondsBetweenRetries = 1;
    TriagedApolloIntro = true;
    TriagedApolloIntro_NewPlayers = true;
    TriagedApolloIntro_NewPlayers_MaxLevel = 0;
    TriagedApolloIntro_PastPlayers = true;
    TriagedApolloIntro_PastPlayers_LastSeasonMaxLevel = 0;
    ApolloIntroShowMovie = true;
    bRunDeimosSpawnTimelines = false;
    TeamToPlaceMeshNetPawnsOn = 0;
    bEnableAddFriendUserSearchDarkTraffic = false;
    bEnableExtendedUserSearchUI = false;
    bEnableRecursiveMatchAssignmentSearchForTeam = true;
    bEnableBackfillCheckForHighestTeamScore = true;
    bEnableBackfillCheckForTeamScoreDifference = false;
    bDisableTdmBackfilledPlayerTeleport = false;
    bDisableWarmupRequiredPlayerCountCheck = false;
    bAIDirectorTreatBotsAsPlayersForLOD = true;
    bEnablePhoenix = true;
    bBuildingPossessionShown = false;
    bBacchusFrontendEnabled = true;
    bEnableAFortPlayerPawnOnRep_InVehicleAndUFortVehicleSeatComponentOnRep_PlayerSlotsRaceConditionFix = true;
    bSprintingStrafeSnapEnabled = false;
    MinForwardForSprint = 1;
}

