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
    this->CreativeIslandDescriptionTagsMaxQty = 0;
    this->CreativeIslandDescriptionTagsWhitelist.AddDefaulted(113);
    this->YoutubeVideoPrefix = TEXT("https://i.ytimg.com/vi/");
    this->YoutubeVideoSuffix = TEXT("/sddefault.jpg");
    this->bEnableSpectatorUpdates = true;
    this->bIsTournamentMode = false;
    this->bIsOutOfSeasonMode = true;
    this->bForceBRMode = true;
    this->bAllowBPTokenRefund = true;
    this->bUseTournamentAnonymousOverrideEnabled = true;
    this->bEnableYoutubeLinks = false;
    this->bEnableGeneratedScreenshotForPortalPreview = true;
    this->bAllowLoadoutSwitchingInLobby = true;
    this->IngameMatchmakingDelaySeconds = 0;
    this->NumSavedLoadouts = 0;
    this->TournamentPlaylistName = TEXT("Playlist_DefaultSolo");
    this->TournamentPlaylistPriorityBase = 0;
    this->TournamentModeQueueInterval = 1;
    this->MinimumAccountLevelForTournamentPlay = 0;
    this->bEnableManualBroadcasterStart = false;
    this->bCreativeManualBroadcasterStart = false;
    this->bAutoloadRestrictedPlots = true;
    this->bDisableMyIslandDescriptionPanel = false;
    this->bEnableAllRemoteClientInfos = true;
    this->bEnableBuildPreviewForBroadcast = true;
    this->bEnableRemoteAimSnapshotManagerForBroadcast = false;
    this->EsportsAnalyticsHeartbeatRate = 1;
    this->bUseBroadcastPostProcessing = true;
    this->bUseBroadcastKillFeed = true;
    this->bUseServerReplayActionFeed = false;
    this->bReplayGoToTimeEnabled = true;
    this->bBroadcastPipModeToggle = false;
    this->bShowBroadcastPlayerEventScoreWidget = true;
    this->bUseOutsideTopThreeSpectatorLeaderboard = true;
    this->bReplayPauseZeroDeltas = true;
    this->CurrentSocialImportVersion = 0;
    this->PawnDeathScreenDelay = 1;
    this->CurrentVKImportVersion = 0;
    this->bEnableMassFriendImport = false;
    this->NumDaysBeforeFailedImportReattempt = 0;
    this->bEnableSocialBanModal = true;
    this->bEnableLetoSellModal = false;
    this->bEnableDedicatedServerSocialBanVoiceQuery = false;
    this->bEnableDedicatedServerSocialBanVoiceEnforcement = false;
    this->bEnableSocialVoiceChannelsView = true;
    this->bDisplayLastOnlineTime = true;
    this->bDisplayLastInteraction = true;
    this->bEnableStartupSocialImport = true;
    this->bEnableStartupErebusFriendImport = true;
    this->bEnableVKImport = true;
    this->bEnableSteamImport = true;
    this->SocialImportURI = TEXT("social/friends/add?source={Platform}");
    this->DaysBetweenSocialImportPrompts = 0;
    this->DaysBetweenVKImportPrompt = 0;
    this->FriendImportCaptionSelection = 0;
    this->bEnableSplitWalletTextNotice = false;
    this->bShowAthenaStoreToast = true;
    this->bShowAthenaStoreToastForRolloverAlone = false;
    this->bShowAthenaStarsInStoreNotification = true;
    this->bAllow3DInspectOfRMTItems = true;
    this->bAltUpdateFlow = true;
    this->AthenaStarterGameMode.AddDefaulted(1);
    this->AthenaStarterFill = true;
    this->PartyRichPresenceUpdateTime = 1;
    this->PartySuggestionUpdateTimer = 1;
    this->MaxPartySuggestionsToConsider = 0;
    this->bAllowLFG = false;
    this->bAllowPartyPresenceUpdates = true;
    this->bAllowGameplayPresenceUpdates = true;
    this->bEnablePlaylistNameInRichPresence = true;
    this->bAllowDiscordFrictionlessJoin = true;
    this->bEnableInteractiveConsumables = true;
    this->bEnableContextHelpMenu = false;
    this->bShowAthenaItemShop = true;
    this->bEnableShowdown = true;
    this->bEnableTournamentMatchCaps = true;
    this->bUsePlayingEventIds = true;
    this->bRetryCMSLoads = true;
    this->RefreshScoreDelay = 1;
    this->bAlwaysForceTournamentLobbyPanelRefresh = false;
    this->bEnableEventLeaderboards = true;
    this->NumCachedLeaderboardPages = 0;
    this->MaxPagesPerLeaderboard = 0;
    this->EventLeaderboardLiveRefreshTimeSeconds = 0;
    this->EventLeaderboardLivePostEventRefreshWindowMinutes = 0;
    this->bGetLiveSessionsFromLeaderboards = true;
    this->bUseServerTournamentPlacementNotifications = true;
    this->MaximumEventLengthHoursForCallout = 0;
    this->bEnableHypeLeaderboards = false;
    this->HypeLeaderboardEventId = TEXT("persistent");
    this->HypeLeaderboardEventWindowId = TEXT("Hype_S11");
    this->HypeLeaderboardRefreshTimeSeconds = 0;
    this->bHypeLeaderboardIncludeFriendsTab = false;
    this->CreativePlaylistName = TEXT("Playlist_PlaygroundV2");
    this->BattleLabPlaylistName = TEXT("Playlist_BattleLab");
    this->PlaygroundsPlaylistName = TEXT("Playlist_Creative_PlayOnly");
    this->bEnableEventScoreClamping = true;
    this->CreativeDisabledTabIndex = 0;
    this->bAllowIslandExporting = true;
    this->bIslandExportingEnabledMCPOverride = false;
    this->bEnableCreativeServerImportFriendsOption = false;
    this->MaxPlayersInCreativeServer = 0;
    this->MaxPlayersInCreativeWhitelist = 0;
    this->bShowSupportACreatorOnIslandLinkScreen = true;
    this->bHideServersWithZeroPlayers = false;
    this->bEnableIslandCodeEntryOnPlayerPortal = false;
    this->bEnableIslandCodeEntryOnCuratedPortal = true;
    this->bEnableIslandCodeEntryInFrontend = false;
    this->RefreshFavoriteIslandsWaitTime = 1;
    this->IslandCodeLength = 0;
    this->bApplyCodeFormatting = true;
    this->bAdvertiseBattleLabOwnerInSession = false;
    this->bEnableThermometerUIForBattleLab = false;
    this->bEnableSpatialThermometerForBattleLab = false;
    this->bEnableHeatmapUIDisplayForCreative = false;
    this->bEnableHeatmapUIDisplayForBattleLab = false;
    this->bUseHeatmapHighPrecison = true;
    this->bEnableBudgetTrackerSpatialTest = true;
    this->bEnableSpatialThermometerForCreative = false;
    this->bEnableSpatialSettingsForCreative = false;
    this->bIsMatchmakingEnabledForPlayers = false;
    this->SpatialThermometerCellSize = 1;
    this->bEnableThermomterCostPreviwer = true;
    this->bEnableJoinInProgress = true;
    this->bEnableSpectateAPartyMember = true;
    this->bEnableJoinAndSpectate = true;
    this->MaxNumAlivePlayersForSpectateAPartyMember = 0;
    this->MaxNumPartyMemberSpectatorsPerMatch = 0;
    this->bEnableJoinInProgressInMatchmakingWidget = true;
    this->bEnableLockerSearch = true;
    this->bEnableLockerDirtySearch = false;
    this->bEnableBattlePass = true;
    this->bEnableBattlePassFAQ = true;
    this->bShowBattlePassBangAfterPurchase = false;
    this->bShowBattlePassBangEveryLevel = true;
    this->bSkipBattlePassPurchaseTextScreen = true;
    this->bBattlePassPurchaseSound = true;
    this->bBattlePassPurchaseDialog = true;
    this->bBattlePassFTUEFix = true;
    this->bBattlePassVideoDelay = true;
    this->bEnableAthenaFavoriting = true;
    this->bShowAthenaDailyQuests = true;
    this->bShowAthenaDailyQuestsWithAllChallenges = true;
    this->bEnableAthenaCustomPreviewActionForCosmetics = true;
    this->bEnableAthenaItemRandomization = false;
    this->bEnableProfileStatTracking = false;
    this->bEnableProfileStatUI = false;
    this->bEnableTrickUI = true;
    this->bEnableMultiplayerTricks = true;
    this->bShowAthenaChallengesTabWhenOutOfSeason = false;
    this->bEnableInGameChallengeTree = true;
    this->bCreateEpicAccountPinGrantDisabled = true;
    this->bLoginEpicWeb = false;
    this->bLoginXBLDisabled = false;
    this->bLoginPSNDisabled = false;
    this->bLoginErebusDisabled = false;
    this->bSkipInternetCheck = false;
    this->bEnableClientSettingsSaveToCloud = true;
    this->bEnableClientSettingsSaveToDisk = true;
    this->bEnableClientSettingsRestoreInputPresets = true;
    this->bDedServerEventServiceDownloadTryCount = 0;
    this->TournamentRefreshPayoutMaxRateSeconds = 0;
    this->TournamentRefreshEventsMaxRateSeconds = 0;
    this->TournamentRefreshPlayerMaxRateSeconds = 0;
    this->TournamentHUDPointCounterDelay = 1;
    this->MaxNumDisplayNamesOnLiveGameList = 0;
    this->LiveGameListInitialLimit = 0;
    this->LiveGameListQueryIncreaseAmount = 0;
    this->bEnableLiveGamesScreen = true;
    this->bLiveGameTimeDurationVisible = false;
    this->bEnableFlagSelection = true;
    this->DefaultFlagRegionId = TEXT("fortnite");
    this->MixedNationTeamFlagRegionId = TEXT("global");
    this->FlagChangeCooldownDays = 0;
    this->bEnableEventServicePayouts = true;
    this->bLiveGamesClientAnalyticsEnabled = true;
    this->MinimumWaitTimeToRequestNewShowdownScoreForWindow = 1;
    this->EventServicePayoutRefreshRateSeconds = 0;
    this->EventServicePayoutRefreshSpreadSeconds = 0;
    this->BundleLoaderWidgetTimerInterval = 1;
    this->SecondsShowStartingMatchMessageForScheduledMMEvents = 0;
    this->bEnableMatchAbandonProcess = true;
    this->MatchAbandonTimeout = 1;
    this->CloudSaveIntervalConfig = 4294967295;
    this->bSaveToCloudOnMapLoad = false;
    this->GiftNotificationRefreshTimer = 4294967295;
    this->bEnableUndoPurchase = true;
    this->bMoveUndoToBottomBar = true;
    this->bShowStoreBanner = false;
    this->InGameStoreUpdateChance = 1;
    this->bEnableReplayBrowser = true;
    this->bAllowAllReplays = false;
    this->bEnableReplayRecording = true;
    this->bEnableLargeTeamReplayRecording = true;
    this->bEnableCreativeModeReplayRecording = true;
    this->bEnablePlaygroundModeReplayRecording = true;
    this->bEnableSplitscreenReplayRecording = false;
    this->bStableReplayPlayback = true;
    this->bEnableHearingAccessibility = true;
    this->bDisableSpatializationInsteadOfMutingWhenHearingAccessibilityEnabled = true;
    this->bDisableGiftXMPPMessageSend = false;
    this->bDisableGifting = false;
    this->bEnableGiftEligibilityCheck = true;
    this->bImmediateClaimOfEmote = true;
    this->bForceRestrictChat = false;
    this->bLimitGiftingToEligiblePlatforms = false;
    this->bCanGiftYourself = true;
    this->GiftLimitAmount = 0;
    this->bBattlePassGiftingEmergencyDisable = false;
    this->bEnableBattlePassGiftingButton = true;
    this->bEnableBattlePassGiftingButtonTokenOnly = true;
    this->bShowBPGiftBoxPopup = true;
    this->EndBattleRoyalUpdateDelay = 1;
    this->LightswitchDownLoginDelay = 1;
    this->bShowStatusButtonOnWaitingRoomScreen = false;
    this->bInvertMotionOnUnattachedSwitchControllers = true;
    this->bDisableTouchLookVelocityScaling = false;
    this->bDisablePurchaseHistoryScreen = false;
    this->bEnableRedeemOfflinePurchasesToasts = true;
    this->bAllowProcessedPayoutsToRefreshProfile = true;
    this->TouchAimAssistStrengthScalar = 1;
    this->bDisableTouchAimAssistAutoTracking = false;
    this->bProcessGamepadInputOnMobile = true;
    this->bMobileForceGamepadHUDWhenAttached = false;
    this->bDisableLegacyControls = true;
    this->bFixAimAssistDeadzoneExploit = true;
    this->CrucibleWhitelistOverride = ECrucibleWhitelistOverride::DoNothing;
    this->bDisableCrucibleStatUpload = false;
    this->bDisableCrucibleStatDownload = false;
    this->bDisableCrucibleGlobalLeaderboards = false;
    this->bDisableCrucibleFriendLeaderboards = false;
    this->bDisableCrucibleAnalyticsEvents = false;
    this->bDisableCrucibleDestroyDeadBots = false;
    this->bDisableCrucibleForcedGC = false;
    this->bDisableCrucibleLeaderboardFilterText = false;
    this->bDisableCrucibleLeaderboardSwitching = false;
    this->bCrucibleLockToPlatform = false;
    this->bCrucibleSendStatsEndOfSession = false;
    this->bCrucibleSendStatsEndOfSessionOnShutdownEvent = true;
    this->CrucibleMinValidStatScoreMilliseconds = 0;
    this->CrucibleLeaderboardFriendQueryMaxSize = 0;
    this->bCrucibleLeaderboardEnableDisplayNameIcons = false;
    this->bEnableFortLeaderboardHelperDisplayNonPlatformNames = true;
    this->bEnableFortLeaderboardHelperConsolePlatformNameSearch = true;
    this->bEnableFortLeaderboardHelperConsoleDisplayNameFallback = true;
    this->bDisableCollectionStatsUpload = false;
    this->bDisableCollectionStatsDownload = false;
    this->CollectionStatsFriendQueryMaxSize = 0;
    this->bUseNativeQuickbar = true;
    this->bSoundIndicatorsAlwaysEnabled = false;
    this->bSoundIndicatorsEnabledForTeammates = false;
    this->bSoundIndicatorsPooled = true;
    this->SoundIndicatorMaxNum = 0;
    this->TencentDefaultBookStatSeason = 0;
    this->bEquipFirstWeaponOnMobile = true;
    this->bClearLastFireOnAbilityFailed = true;
    this->bUsePrototypeSubGameLoadingScreen = true;
    this->bForcePrototypeLoadingScreenScaling = true;
    this->ShowEliminationDistanceOver = 1;
    this->FadeOutTeamIndicatorsAfter = 1;
    this->FadeOutNPCEnemyIndicatorsAfter = 1;
    this->FadeOutEnemyIndicatorsAfter = 1;
    this->FadeOutWorldItemIndicatorsAfter = 1;
    this->FadeOutHardCoreBeaconIndicatorsAfter = 1;
    this->MapIndicatorTouchClearDistance = 1;
    this->AthenaMapZoomMax = 1;
    this->BacchusMapIndicatorSizeMultiplier = 1;
    this->AthenaMapPanSpeedMultiplier = 1;
    this->AthenaMapZoomSpeedMultiplier = 1;
    this->bAthenaMapMapIconsFlowEnabled = true;
    this->WaitTimeBeforeShowingNewModeViolator = 1;
    this->bOnlyShareURLWithNoMessage = true;
    this->bExcludeURLInShareMessage = true;
    this->bShowCreateAccountOnRedirect = false;
    this->bEnableContextTutorial = true;
    this->bDebugForcePlayerSurveys = true;
    this->bFeedbackTextShown = false;
    this->bEnableBadMatchPopup = false;
    this->BadMatchIncidentThreshold = 0;
    this->BadConnectionUpdateTime = 1;
    this->BadMatchPopupRecallInterval = 0;
    this->AthenaCodeOfConductURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    this->KairosCommunityRulesURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    this->BacchusFriendCodeShareURL = TEXT("https://fortnite.com/mobile?code=");
    this->CreateAccountUrl = TEXT("https://fortnite.com/mobile/create-account?mode=iosgame");
    this->GooglePlayRatingURL = TEXT("https://play.google.com/store/apps/details?id=com.epicgames.fortnite");
    this->LinkAccountURL = TEXT("https://www.epicgames.com/account/connected");
    this->AccountMergeMoreInfoURL = TEXT("https://fortnitehelp.epicgames.com");
    this->bEnableFactionTechScreen = true;
    this->bRequireFactionChoiceOnInfiltrationPlay = true;
    this->TotalPlayerTechLevelsToShow = 0;
    this->SupportURL = TEXT("https://fortnitehelp.epicgames.com");
    this->WaitingListURL = TEXT("https://fortnite.com/mobile");
    this->CheckStatusURL = TEXT("https://status.epicgames.com");
    this->iOSAppStoreURL = TEXT("https://itunes.apple.com/us/app/fortnite/id1261357853?mt=8");
    this->TurnOnMfaURL = TEXT("https://fortnite.com/2fa");
    this->bAllowCodeRedemptionInSubgameSelect = false;
    this->bEnableAutomaticMOTD = true;
    this->bShowMOTDInLobby = true;
    this->bMOTDSameNewsForCreative = true;
    this->bSkipSubgameSelect = false;
    this->BRUpdatesURLMode = ENewsExternalURLMode::PatchNotes;
    this->STWUpdatesURLMode = ENewsExternalURLMode::PatchNotes;
    this->PrivacyPolicyURL = TEXT("https://www.epicgames.com/privacypolicy");
    this->FanContentPolicyURL = TEXT("https://www.epicgames.com/fan-art-policy");
    this->TermsOfServiceURL = TEXT("https://www.epicgames.com/tos");
    this->GuardianChallengeLengthDays = 0;
    this->bAgeGateFlowEnabled = true;
    this->bEnableContentControls = true;
    this->ContentControlsMoreInfoURL = TEXT("https://epicgames.com/fortnite/parental-controls");
    this->ContentControlsForgotPinURL = TEXT("https://epicgames.helpshift.com/a/fortnite/");
    this->ContentControlsVerifyEmailURL = TEXT("https://www.epicgames.com/account/personal");
    this->bEnableContentControlsPlaytimeReporting = true;
    this->bEnableContentControlsPurchaseReporting = false;
    this->bContentControlsViewUGCEnabled = false;
    this->MaxNumItemsInCreativeChests = 0;
    this->MaxStreamerMatchmakingDelay = 0;
    this->bEnableHiddenMatchmakingDelay = true;
    this->PSALoadingScreenPercentChance = 0;
    this->StwDownloadLauncherOption = TEXT("%26install%3Dchunk11");
    this->bDisableAllKnobs = false;
    this->bDisableAllGameplayMessages = false;
    this->bDisableMatchmakingKnobs = false;
    this->bDisableMinigameKnobs = false;
    this->bDisableGameOptionKnobs = false;
    this->bDisableAffiliateFeature = false;
    this->bUseHotfixedAffiliateNamesArray = false;
    this->bEnablePrerollLlamas = true;
    this->bEnableSubregionNetworkAccelerators = true;
    this->bShowAccountItemWarningForVaultThreshold = true;
    this->DaysBetweenAccountItemWarnings = 0;
    this->VaultLimitThresholdForAccountItemWarning = 1;
    this->bShowAccountItemWarningForItemCount = true;
    this->AlwaysWarnAccountItemCount = 0;
    this->DisabledTabsForOutOfSeason.AddDefaulted(8);
    this->TournamentDisabledFrontendNavigationTabs.AddDefaulted(10);
    this->DisabledMatchmakingKnobs.AddDefaulted(1);
    this->HiddenMatchmakingKnobs.AddDefaulted(3);
    this->NumGameplayMessageChannels = 0;
    this->bShowMOTDNews = true;
    this->SoloTournamentScoreThresholds.AddDefaulted(4);
    this->DuoTournamentScoreThresholds.AddDefaulted(4);
    this->SquadsTournamentScoreThresholds.AddDefaulted(4);
    this->PickingInteractDistance = 1;
    this->PickingHighlightMovementUpdateDist = 1;
    this->PickingHighlightUpdateTime = 1;
    this->PickingTime = 1;
    this->AutoPickingInteractDistanceFactor = 1;
    this->AutoOpenDoorInputMagnitude = 1;
    this->AutoOpenDoorTraceDistance = 1;
    this->bAutofireEnabled = false;
    this->bShowXPWidgets = true;
    this->bShowAccoladesListWidget = true;
    this->bEnableInGameMatchmaking = true;
    this->bUseNewFlowIngameMatchmaking = true;
    this->bToggleIGMAnalytics = true;
    this->bAllowPreserveSquad = false;
    this->bAutofireUsesComponent = true;
    this->bAutofireUsesAutoaimTarget = true;
    this->bHoldToFireOnAutofireTarget = false;
    this->DefaultAutofireRange = 1;
    this->AutofireExtraTrackingRange = 1;
    this->bServerNetDriverAnalytics = true;
    this->bClientNetDriverAnalytics = false;
    this->bDisableReplicationGraph = false;
    this->BRServerMaxTickRate = 1;
    this->DoubleTapOnEndTouchTime = 1;
    this->DoubleTapOnStartTouchTime = 1;
    this->DoubleTapDistance = 1;
    this->SingleTapDistance = 1;
    this->TouchMoveStickRadius = 1;
    this->TouchMoveStickRadiusTargeting = 1;
    this->TouchMoveStickRadiusScoped = 1;
    this->TouchMoveStickRadiusDriving = 1;
    this->AutorunLockZoneOffset = 1;
    this->AutorunLockZoneDelay = 1;
    this->MoveOriginResetTime = 1;
    this->MoveOriginResetDistance = 1;
    this->MoveOriginFollowDistance = 1;
    this->bDisableTouchLookInertia = false;
    this->RotateInertiaMultiplier = 1;
    this->RotateInertiaMinTime = 1;
    this->RotateInertiaMinLength = 1;
    this->RotateInertiaMinMagnitude = 1;
    this->RotateInertiaNumAveragedTouches = 0;
    this->bTouchQuickbarTapToLockEnabled = false;
    this->bTouchInteractInUIAvailable = true;
    this->bTouchInteractInUIForced = false;
    this->bEnableHUDLayoutTool = true;
    this->bEnableHUDLayoutCloudSave = true;
    this->bEnableHUDLayoutToolPanZoom = true;
    this->bEnableMobileHUDV2 = true;
    this->bEnableHUDLayoutToolV2 = true;
    this->bEnableHUDLayoutToolV2_GridSnap = false;
    this->EnablePlayButtonTime = 1;
    this->AthenaExternalRichPresenceDelayTimeSeconds = 1;
    this->bEnableExternalPresenceAthenaPlayersRemain = true;
    this->MinimumTimeBetweenConsolePresenceUpdates = 1;
    this->MinimumTimeBetweenMCPPresenceUpdates = 1;
    this->TimeBetweenStorePatchCheckRequestsSeconds = 0;
    this->EnablePlayButtonTimePostError = 1;
    this->bInviteUIDisabled = true;
    this->bEnableInGameMipsAnalyticsReporting = false;
    this->SecondsBetweenTextureStatsGathering = 1;
    this->bEnableFriendsListButton = true;
    this->bForceDisableCrossplatformSquadFill = true;
    this->bRequireCrossplayOptIn = false;
    this->bUseAccountCrossplayPermissions = false;
    this->bSingleCrossplayOptInPrompt = false;
    this->bImmediatelyDisplayCrossplayOptIn_STW = true;
    this->bImmediatelyDisplayCrossplayOptIn_BR = false;
    this->bShowIconForSamePlatformPlayers = false;
    this->bObscuredPlatformIcons = true;
    this->bEnableChatWidget = true;
    this->bShowVoiceChatSettings = true;
    this->bShowMultipleVoiceChatSettings = false;
    this->bPartyInProgress = true;
    this->bShouldAthenaQueryRecentPlayers = true;
    this->bEnableRecentPlayerList = true;
    this->bEnableSuggestedFriendList = true;
    this->bEnableBlockedList = true;
    this->bEnableFriendListInGame = true;
    this->bPushJIPInfoToPlatformPresence = true;
    this->bEnableStWInZonePrivacyChange = false;
    this->bEnableSitoutOption = true;
    this->bEnableSitoutOption_STW = true;
    this->bEnableSocialPanelLeaveParty = true;
    this->bEnableMainMenuLeaveParty = true;
    this->bEnableINICachedRecentPlayers = true;
    this->MaxINICachedRecentPlayers = 0;
    this->MinUSSNameLength = 0;
    this->bEnableNickname = true;
    this->bAllowNicknameEmoji = true;
    this->bNicknameInFront = true;
    this->bShowAccountBoosts = true;
    this->bShowCustomerSupport = true;
    this->bEnableChannelChangePopup = true;
    this->bEnableVoiceSpeakerWidget = true;
    this->bEnableSpeakerWidgetZonePerfMode = true;
    this->bShowVoiceIndicatorsWhileLoading = false;
    this->bEnableVoiceChannelSelectionUI = true;
    this->bEnableGlobalChat = false;
    this->bEnableAllTabInChat = false;
    this->bEnableEULA = true;
    this->bEnableEndOfZoneCinematic = true;
    this->bEnableOnboardingCinematics = true;
    this->bShowFounderBannerIcons = true;
    this->bShowCurrentRegionInLobby = true;
    this->bEnableFoundersDailyRewards = true;
    this->bEnableTwitchIntegration = false;
    this->bEnableMatchmakingRegionSetting = true;
    this->bEnableReadyupButtonWhileSittingout = true;
    this->bEnableEulaRequiredTournaments = true;
    this->bEnableMFARequiredTournaments = true;
    this->bAllTournamentsRequireMFA = false;
    this->bSpectatorBroadcasterSkipMfaEulaCheck = true;
    this->bEnableNaviationToChat = true;
    this->bEnableLanguageSetting = true;
    this->bEnableFriendCodeSetting = true;
    this->bEnableEarlyAccessLoadingScreenBanner = false;
    this->bClientIgnoreIsTournamentCheck = false;
    this->CampaignMatchEndRetryCount = 0;
    this->StWTutorialDownloadAttempts = 0;
    this->bShopPurchaseConfirmation = false;
    this->bShopPurchaseConfirmationJapanPS4 = false;
    this->bToyMessagingEnabled = true;
    this->bAllowAccessToAllEmotesForTesting = false;
    this->bAllowAccessToStWHeroOutfitsAndBackblingForTesting = false;
    this->bEnableCosmeticItemShopInSTW = false;
    this->bRequireEmoteOwnershipInPIE = false;
    this->bEnableSTWLootDrops = true;
    this->bEnableSTWContainerItemCacheDrops = true;
    this->bEnableSTWEnemyItemCacheDrops = true;
    this->bEnableHoldToPickupUI = true;
    this->bSkipTrailerMovie = false;
    this->bAlwaysPlayTrailerMovie = false;
    this->bHideUnaffordableMtxPurchases = false;
    this->bDisableCTAInMtxStoreSelection = false;
    this->bAthenaFrontEndUsePushPopMTXStore = false;
    this->bHidePlusOnVbucksButton = false;
    this->bAllowXboxStwAccessDuringLiveStoreOutage = false;
    this->bShowReplayTrailerButton_Athena = true;
    this->bEnableAlterationModification = true;
    this->bEnableSchematicRarityUpgrade = true;
    this->bEnableMissionActivationVote = true;
    this->bEnableLtmRetrieveTheData = true;
    this->bEnableUpgradesVideos = true;
    this->bEnableExternalRichPresence = true;
    this->bShowEnableMFAModalAtStartupAthena = false;
    this->bShowEnableMFAModalAtStartupSTW = false;
    this->bEnableAIBuildingHitFX = true;
    this->LevelToStartShowingMFAModal = 0;
    this->DaysBetweenEnableMFAModalPrompts = 0;
    this->DelayGiftButtonWhenMFANotEnabledSeconds = 1;
    this->LevelToAutoOpenBattlePassOnNewSeason = 0;
    this->ForceSeasonRefreshCounter = 0;
    this->ForceVideoRefreshCounter = 0;
    this->bForceBattlePassPreview = false;
    this->bCanShowSTWUpsellInBR = false;
    this->bShowLeaderboardPrivacySettings = true;
    this->bEnableServerScoreboardLog = false;
    this->bEnableAsyncScoreboardFlush = false;
    this->bEnableInputBasedMatchmaking = false;
    this->bUsingAlternateMatchmakingModel = true;
    this->bNotifyBlockedInput = true;
    this->NumberOfFramesBeforeWarnInputBlocked = 0;
    this->bDisableVideoOptions = false;
    this->bEnableBattlePassWatchVideoActionOnCell = true;
    this->bEnableBattlePassReplayCinematicAction = true;
    this->bEnableCareerReplayCinematicAction = true;
    this->RadioInputDebounceSeconds = 1;
    this->bEnableBattlePassSocialFriends = true;
    this->bEnableBattlePassSocialFriendsOfDifferentPlatforms = true;
    this->bEnableBattlePassSocialFriendsServerSide = true;
    this->bEnableSimulatedXPForBattlePassSocialFriends = true;
    this->bEnableBattlePassPreviewOnRewardScreen = true;
    this->bEnableHoldToCloseOnRewardsScreen = false;
    this->ShowBattlePassTracker = 0;
    this->bDisplayBattlePassRewardsIndividually = true;
    this->bDisplayOnlyBattlePassFAQ = false;
    this->bEnableBPVideo = false;
    this->bShowBPPreviewVideo = true;
    this->bShowBPTrack_TimeLeft = false;
    this->bDisplayAllCharactersOnBattlePassPreviewScreen = true;
    this->bRefreshBattlePassCatalogOnSeasonDataLoaded = false;
    this->bEnableChallengeHolidayVideo = false;
    this->bEnableCareerScreenVideo = true;
    this->bEnableSpecialEventVideo = false;
    this->bEnableCNVideo = true;
    this->bEnableWinterfestPurchaseButton = false;
    this->bEnableWinterfestGiftButton = false;
    this->bForceWinterfestInfoModalButtonVisible = false;
    this->NumViewsToDisplayWinterfestInfoModalButton = 0;
    this->bCheckForPatchUpdateOnMatchmakingPlayClick = true;
    this->bCheckForPatchUpdateOnItemShopActivate = true;
    this->bEnableNewSettingsScreen = false;
    this->bDisplayPlayerReportingRoles = true;
    this->bDisplayRelevantPlayersForPlayerReporting = true;
    this->bPreventMultipleReportsOfSamePlayer = true;
    this->bAllowReportingFeaturedIslands = false;
    this->bForceGamepadPlaytest = false;
    this->bEnableNewFireModeSelection = true;
    this->bEnableHUDPresetSelection = true;
    this->bEnableAddFriendWhileSpectating = false;
    this->bEnableFriendLink = false;
    this->bPlatformChatToastDisplaySeconds = 1;
    this->FriendLinkURL = TEXT("https://fortnite.com/friend/");
    this->MFAEnableURL = TEXT("https://fortnite.com/2FA");
    this->bAllowForceTouchFire = false;
    this->VehicleSessionMinTimeUsed = 1;
    this->RebootChipExpirationTime = 1;
    this->RebootDirectiveDisplayTime = 1;
    this->bDonutIdleGameEnabled = true;
    this->bRebootEnableInventoryDisplay = true;
    this->bUseHordeStormShield = true;
    this->HordeStormShieldStartingRadiusOverride = 1;
    this->HordeStormShieldEndingRadiusOverride = 1;
    this->HordeStormShieldBreatherRadiusOverride = 1;
    this->bUseHordeRespawnAtLastPawnLocation = true;
    this->bAllowHordePlayerTriggeredRespawn = false;
    this->MaxQuickScopeAimAssistPulls = 0;
    this->MaxQuickScopeAimAssistPullWatchTime = 1;
    this->bShouldDisablePickaxeFXFrontendPreview = false;
    this->bRegisterPawnsWithSignificanceManagerInFrontEnd = false;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnPS4 = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnXB1 = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnSwitch = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnPS4_STWOnly = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnXB1_STWOnly = true;
    this->bHideExclusiveCosmeticsFromOtherPlatformsOnSwitch_STWOnly = true;
    this->bSimpleHeistVanEntrance = true;
    this->LobbyGenericLinkButtonURL = TEXT("https://fortnite.com");
    this->bEnableLobbyGenericLinkButton = false;
    this->HighlightClipRewindTimeInSeconds = 0;
    this->bEnableAntiTaxi = true;
    this->StopFlyingParachuteCooldownTime = 1;
    this->FlushLoadingScreenRefreshSeconds = 1;
    this->bEnableVehicleSpawnMissionInStw = true;
    this->bEnableDownTierCraftingInStw = true;
    this->bShowBugReportsButton = true;
    this->bShowCommentReportsButton = true;
    this->bShowContentReportsButton = true;
    this->bEnableItemRefundingInStw = true;
    this->bDisableCareerStatsButton = false;
    this->bDisableCareerLeaderboardButton = false;
    this->bDisableCareerStatsPagePlatformProfileButton = false;
    this->bUsePlatformSpecificTextOnCareerPage = true;
    this->bDisableViewOtherProfilesFromCompLeaderboards = false;
    this->bShowOtherPlayerStatsOnCareerPage = true;
    this->bShowFeatsOnClient = true;
    this->bShowHardcoreModifiers = false;
    this->InputMethodThrashingLimit = 0;
    this->InputMethodThrashingWindowInSeconds = 1;
    this->bEnableLogUploadForTokenHolders = true;
    this->TokenHolderLogTailSizeKb = 1;
    this->bAllowPartialBackgroundAudio = true;
    this->bDuplicateRemovedPlayersOnClient = true;
    this->bIsCreativeMultiSelectEnabled = true;
    this->bEnableUserProfilePictures = true;
    this->bUseProfilePicturePresence = true;
    this->bEnableChannelsServiceLoadTesting = false;
    this->bAllowMimicingEmotes = true;
    this->bAllowMimicingEmotesInFrontend = false;
    this->bAllowAsyncTooltipLoading = true;
    this->bAllowListViewAsyncLoading = true;
    this->bEnableBackToPartyHubButton = true;
    this->bEnableMobileAvailableLootingListView = false;
    this->bEnableDisambiguateLoading = true;
    this->bEnableOptionalHighRezMips = false;
    this->NumDaysToSnoozeGooglePlayRating = 0;
    this->NumDaysAllowedToDelayGoogleRating = 0;
    this->bEnableMobileInGameAppRating = true;
    this->PreloadRevision = 0;
    this->bEnableLiveStoreTilePreviews = true;
    this->bEnableLiveStoreTilePreviews_InGame = false;
    this->bAllowedToEnableUIGlobalInvalidation = true;
    this->bEnableAutoMulchInStW = true;
    this->bAllStWMoonbeamHUD = true;
    this->IllegalIslandTitleChars.AddDefaulted(2);
    this->bEnableCreativeUserTextSanitizationWithToxicityService = true;
    this->bEnableCreativeUserTextSanitizationWithPlatformSanitizer = true;
    this->bEnableCreativeUserTextSanitizationWithChatSanitizer = true;
    this->bUseLegacyAsyncSanitizationLogicInCreative = false;
    this->HotfixVersionId = 0;
    this->bCanTurboBuildOutsideBuildModeWithBuildTool = true;
    this->MaxBuildingIntoTerrainIntersectionPercentage = 1;
    this->bUsingBuildingExtraPiece = true;
    this->AnalyticsBuildingWallTooLowLocations = 0;
    this->bDisableClientEngagementsAnalytics = false;
    this->AnalyticsClientEngagementsTimeoutSeconds = 1;
    this->AnalyticsClientEngagementsMaxSendPerMinute = 0;
    this->AnalyticsClientEngagementsMaxSendOnCleanup = 0;
    this->bAnalyticsClientEngagementsRequireTimeToReturnFireToSend = false;
    this->AnalyticsClientEngagementsParticipationPercent = 0;
    this->PublishingEnabledForWhitelistedAccounts = true;
    this->IslandCodeLinkMnemonicExampleText = TEXT("0000-0000-0000");
    this->IslandCodeLinkURLText = TEXT("https://epicgames.com/fn/");
    this->bEnableCreativeLTMSupportCreator = true;
    this->CreativePublishCodeURLPrefix = TEXT("https://epicgames.com/fn/");
    this->bCreativeMinimapRendering = true;
    this->bCreativeMinimapCaptureLighting = true;
    this->CuratedIslandTemplateCodes.AddDefaulted(7);
    this->bEnableIslandCheckpoints = true;
    this->bEnableIslandLoadNetSafeGuards = true;
    this->bLoadingScreenInputPreprocessorEnabled = true;
    this->AllowInputTypeFilterForAccessibility = true;
    this->AllowLockPrimaryInputMethodToMouseForAccessibility = true;
    this->bEnableLiveStream = false;
    this->bEnableLiveStreamCountdown = false;
    this->bEnableLiveStreamInMatch = false;
    this->bShowLiveStreamInMatchByDefault = false;
    this->bCaptureTeamFrontendFlag = false;
    this->VideoHolidayName = TEXT("WinterQuest2019");
    this->VideoBattlePassName = TEXT("AutoOpenUpBattlePassPreview");
    this->VideoCareerScreenName = TEXT("CareerScreen-SeasonTrailer");
    this->VideoChallengeScreenName = TEXT("Fortnitemares2019");
    this->VideoFrontEndName = TEXT("SeasonTrailer");
    this->FTUESeasonTrailerBoundary = 1;
    this->VideoDurationOffsetFromTransition = 1;
    this->VideoDurationOffsetFromEnd = 1;
    this->bEnableGCBeforeVideoPlayback = true;
    this->LiveStreamPiPMemoryRequired = 0;
    this->ShouldShowLiveStreamPiPInMatchCounter = 0;
    this->bEnableRiskyReelsStreaming = false;
    this->bDisableBlastURLStreamSource = false;
    this->StreamPlaylistFetchMethodOrder = 0;
    this->bHiddenButEnabledLiveStreamInMatch = false;
    this->TimedEventsJIPStartDelay = 1;
    this->bEnableSplineReticulationById = false;
    this->bUseSingleHUDUpdatePerFrame = true;
    this->PlaylistConditionalFlags.AddDefaulted(1);
    this->bIsUserChoiceAllowedForForcedAndroidStore = true;
    this->AndroidStoreCounter = 0;
    this->bHideCharacterCustomizationNullTile = false;
    this->bEnablePlaylistRequireCrossplay = false;
    this->bRequireCrossplayOptInForFill = false;
    this->bUseConcurrentCrossplayPromptGuard = true;
    this->MaxSquadSize = 0;
    this->MaxPartySizeCampaign = 0;
    this->MaxPartySizeAthena = 0;
    this->bShouldFollowersSendSquadMatchmakingInfo = false;
    this->bAllowAthenaNavSystemForCreative = true;
    this->bEnablePlayerSurveys = true;
    this->bEnablePlayerStatsPrecache = true;
    this->bEnableStreamingReplayViewingUI = false;
    this->LiveReplayDiscoverabilityDelay = 1;
    this->bSkipPlayingFortniteChecks = false;
    this->bReplayBattleMapCameraMode = true;
    this->bReplayKeepLocalClientEvents = false;
    this->bReplaySampleAthenaPawnMovement = true;
    this->ReplaySampleAthenaPawnTimeRate = 1;
    this->ReplaySampleAthenaPawnSpaceRate = 1;
    this->ReplaySampleAthenaPawnUpdateTimeRate = 1;
    this->bDisablePartyJoinInOutpost = true;
    this->bEnableMissedInvitesEntry = true;
    this->bOnlyShowMissedInvitesEntryIfMissedInvites = false;
    this->bEnableNotifyWhenPlaying = true;
    this->bEnableSubscriptionNudges = false;
    this->bEnableSidekick = false;
    this->bEnableCampaignBatchLevelingUI = true;
    this->MaxSetFriendSubscriptionSettingsAttempts = 0;
    this->MaxQueryFriendSubscriptionSettingsAttempts = 0;
    this->NumDaysBetweenPlayingNotifications = 0;
    this->NumHoursBetweenPlayingNotifications = 0;
    this->NumMinutesBetweenPlayingNotifications = 0;
    this->bForceAutoChangeMaterialOn = true;
    this->bActiveDisplayDeviceTemperature = false;
    this->bAllowOfflineInvites = false;
    this->bEnablePlatformVoiceLeave = true;
    this->bEnablePlatformVoicePrompts = true;
    this->bEnableVoiceChatEnablePrompt = true;
    this->PlaylistGameVoiceChannelRecommendationDisplayTime = 1;
    this->bEnablePlaylistGameChannelRecommendationToast = false;
    this->bEnableQuickHealing = true;
    this->bAllowDeferredPedestalPawnSpawn = true;
    this->bRunUnicornOnServer = true;
    this->bShowSamsungSensorButtonWarning = false;
    this->SamsungSensorButtonGamesPerWarning = 0;
    this->CatabaExclusiveCountryCodes.AddDefaulted(1);
    this->bEnableCatabaDynamicBackground = false;
    this->EnableCommunityVotingScreen = true;
    this->CommunityVotingTutorialVersion = 0;
    this->CommunityVotingRevealDelay = 1;
    this->CommunityVotingTimerRefreshDelay = 1;
    this->ScrollToWinnerTileAfterReveal = true;
    this->EnableStandaloneStorefront = true;
    this->bEnableBattlePassStorefront = true;
    this->bEnableItemPreviewInStore = false;
    this->bEnableCurrencyInspectScreenBonusText = false;
    this->bEnableCurrencyBonusBanner = false;
    this->bEnableItemShopInvalidationBox = false;
    this->ScrollToStandaloneSectionOnPopupClosed = false;
    this->ItemShopOrdering.AddDefaulted(7);
    this->bEnableItemShopSectionBangs = true;
    this->bEnableItemShopCommunityVotingSectionBang = true;
    this->bEnableItemShopLandingPriority = true;
    this->ItemShopDefaultLandingPriority.AddDefaulted(4);
    this->ItemShopOverrideDisplayDataList.AddDefaulted(1);
    this->ItemShopDefaultLanding = EFortItemShopSection::RMTItemOffer;
    this->ItemShopOfferSeenThreshold = 1;
    this->CommunityVotingTileAnimated = false;
    this->ScrollToComTileOnEventPopupClosed = true;
    this->EnableThanksVotingPopup = true;
    this->bUseItemPresentationScreenOnItemPurchased = true;
    this->CommunityVotingThanksPopupDelay = 1;
    this->bIgnoreABTestingForReloadMtx = false;
    this->ReloadMtxExclusiveCountryCodes.AddDefaulted(1);
    this->bEnableReloadMtx = false;
    this->bEnableDynamicReloadMtx = false;
    this->bEnableInGameReloadMtx = true;
    this->ReloadMtxIntroVersion = 0;
    this->bEnableBattlePassViolatorEarnedCurrency = true;
    this->bUseContentPatchingRestartFlow = true;
    this->bAthenaAutoPickupStackables = true;
    this->bEnableUnicornHighlightsOnClient = false;
    this->bEnableHighlightsPromptInCompeteScreen = true;
    this->bUseReturnToKairosLoadingScreen = true;
    this->bForceReturnToKairosLoadingScreen = false;
    this->bUseActivityBrowser = false;
    this->bDebugForceLoginRelaunch = false;
    this->bUseAthenaArmory = false;
    this->bEnableLiveSpectateButton = false;
    this->bEnableGuidedTutorialDefensiveBuilding = false;
    this->bEnableSafeZoneEditor = true;
    this->bEnableSavedLoadouts = false;
    this->bSavedLoadoutsUseGodTile = true;
    this->bEnableSafeZoneEditorOnLogin = true;
    this->bEnableSafeZoneEditorWhenNotInApolloIntro = true;
    this->LoginFlowCMSRefreshWaitTime = 1;
    this->bEnableAppResumeCMSUpdate = true;
    this->bEnableMOTDAnalytics = true;
    this->bEnableTabTransitionMOTDAnalyticsEvent = true;
    this->bAllowStoreSkipOpenAnimation = true;
    this->bAllowInGameStore = true;
    this->bPostGameStoreNoLeto = true;
    this->bPostGameStoreTriggerIncrementalGC = true;
    this->bAllowInGameLocker = false;
    this->bAllowInGameCareer = false;
    this->bAllowInGameActivityBrowser = false;
    this->bEnableGuidedTutorialDirectFlush = true;
    this->bEnableGuidedTutorialABTesting = true;
    this->bEnableHighlightPlayButtonABTesting = true;
    this->bEnableSkipGuidedTutorialABTesting = true;
    this->MaxFrontendFlowStatQueries = 0;
    this->bForceApolloIntroSkipSubgameSelect = true;
    this->bEnableApolloIntroV2 = false;
    this->ApolloIntroQueueTimeoutSeconds = 1;
    this->ApolloIntroMaxRetries = 0;
    this->ApolloIntroSecondsBetweenRetries = 1;
    this->TriagedApolloIntro = true;
    this->TriagedApolloIntro_NewPlayers = true;
    this->TriagedApolloIntro_NewPlayers_MaxLevel = 0;
    this->TriagedApolloIntro_PastPlayers = true;
    this->TriagedApolloIntro_PastPlayers_LastSeasonMaxLevel = 0;
    this->ApolloIntroShowMovie = true;
    this->bRunDeimosSpawnTimelines = false;
    this->TeamToPlaceMeshNetPawnsOn = 0;
    this->bEnableAddFriendUserSearchDarkTraffic = false;
    this->bEnableExtendedUserSearchUI = false;
    this->bEnableRecursiveMatchAssignmentSearchForTeam = true;
    this->bEnableBackfillCheckForHighestTeamScore = true;
    this->bEnableBackfillCheckForTeamScoreDifference = false;
    this->bDisableTdmBackfilledPlayerTeleport = false;
    this->bDisableWarmupRequiredPlayerCountCheck = false;
    this->bAIDirectorTreatBotsAsPlayersForLOD = true;
    this->bEnablePhoenix = true;
    this->bBuildingPossessionShown = false;
    this->bBacchusFrontendEnabled = true;
    this->bEnableAFortPlayerPawnOnRep_InVehicleAndUFortVehicleSeatComponentOnRep_PlayerSlotsRaceConditionFix = true;
    this->bSprintingStrafeSnapEnabled = false;
    this->MinForwardForSprint = 1;
}

