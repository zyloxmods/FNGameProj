#include "FortRuntimeOptions.h"

bool UFortRuntimeOptions::ShouldShowLeaderboardPrivacySettings() const {
    return false;
}

bool UFortRuntimeOptions::ShouldDisableReceiveGiftOption() const {
    return false;
}

void UFortRuntimeOptions::SetEnableMainMenuSocialButton(bool NewValue) {
}

bool UFortRuntimeOptions::IsSitoutOptionEnabled() {
    return false;
}

bool UFortRuntimeOptions::IsPartyInProgressEnabled() {
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

FString UFortRuntimeOptions::GetLobbyGenericLinkButtonURL() {
    return TEXT("");
}

FText UFortRuntimeOptions::GetLobbyGenericLinkButtonOverrideText() {
    return FText::GetEmpty();
}

bool UFortRuntimeOptions::GetIsPlayerReportingFlowEnabled() const {
    return false;
}

bool UFortRuntimeOptions::GetIsFriendLinkEnabled() const {
    return false;
}

FString UFortRuntimeOptions::GetGameVersion() const {
    return TEXT("");
}

void UFortRuntimeOptions::GetExternalNewsURL(ESubGame CurrentMode, bool& bHasValidExternalURL, FString& ExternalURL, ENewsExternalURLMode& ButtonMode) const {
}

bool UFortRuntimeOptions::GetEnableSplitWalletTextNotice() const {
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

bool UFortRuntimeOptions::GetDisablePurchaseHistoryScreen() const {
    return false;
}

TArray<FRuntimeOptionTabStateInfo> UFortRuntimeOptions::GetDisabledFrontendNavigationTabs() const {
    return TArray<FRuntimeOptionTabStateInfo>();
}

float UFortRuntimeOptions::GetDelayGiftButtonWhenMFANotEnabledSeconds() const {
    return 0.0f;
}

UFortRuntimeOptions::UFortRuntimeOptions() {
    this->bEnableLinkCodeRepublishing = true;
    this->NewMtxStoreCohortSampleSet = 90;
    this->YoutubeVideoPrefix = TEXT("https://i.ytimg.com/vi/");
    this->YoutubeVideoSuffix = TEXT("/sddefault.jpg");
    this->bEnableSpectatorUpdates = true;
    this->bIsTournamentMode = false;
    this->bUseTournamentAnonymousOverrideEnabled = true;
    this->bEnableIslandCodeReuseOnPublish = false;
    this->bEnableYoutubeLinks = true;
    this->bAllowLoadoutSwitchingInLobby = true;
    this->TournamentPlaylistName = TEXT("Playlist_DefaultSolo");
    this->TournamentPlaylistPriorityBase = 50;
    this->MinimumAccountLevelForTournamentPlay = 15;
    this->bEnableManualBroadcasterStart = false;
    this->bAutoloadRestrictedPlots = true;
    this->bDisableMyIslandDescriptionPanel = false;
    this->bEnableAllRemoteClientInfos = true;
    this->bEnableBuildPreviewForBroadcast = true;
    this->bEnableRemoteAimSnapshotManagerForBroadcast = true;
    this->bShowSquadOnSpectatorPlayerStatusWidget = true;
    this->EsportsAnalyticsHeartbeatRate = 0.00f;
    this->bUseBroadcastPostProcessing = true;
    this->bUseBroadcastKillFeed = true;
    this->bClientReplayUsesBroadcastHUD = false;
    this->bUseServerReplayActionFeed = false;
    this->bReplayGoToTimeEnabled = false;
    this->bBroadcastAllPlayersGrid = false;
    this->bBroadcastPipModeToggle = false;
    this->bShowBroadcastPlayerEventScoreWidget = true;
    this->bBroadcastActivePlayerGridScreenEnabled = true;
    this->bBroadcastEliminatedPlayerGridScreenEnabled = false;
    this->bBroadcastMatchStatusScreenEnabled = true;
    this->bBroadcastScoreboardScreenEnabled = true;
    this->bReplayPauseZeroDeltas = false;
    this->CurrentSocialImportVersion = 1;
    this->CurrentVKImportVersion = 1;
    this->CurrentMultiFactorModalVersion = true;
    this->bEnableMassFriendImport = true;
    this->NumDaysBeforeFailedImportReattempt = 30;
    this->bEnableSocialImport = false;
    this->bEnableStartupSocialImport = true;
    this->bEnableStartupErebusFriendImport = true;
    this->bEnableVKImport = true;
    this->bEnableSteamImport = true;
    this->SocialImportURI = TEXT("social/friends/add?source={Platform}");
    this->DaysBetweenSocialImportPrompts = 7;
    this->DaysBetweenVKImportPrompt = 7;
    this->SocialImportPromptsBeforeOptOut = 3;
    this->FriendImportCaptionSelection = -1;
    this->bEnableSplitWalletTextNotice = false;
    this->bShowAthenaStoreToast = true;
    this->bShowAthenaStoreToastForFeatured = true;
    this->bShowAthenaStoreToastForDaily = true;
    this->bShowAthenaStoreToastForRolloverAlone = false;
    this->bShowAthenaStarsInStoreNotification = true;
    this->AthenaStarterGameMode.AddDefaulted(1);
    this->AthenaStarterFill = true;
    this->PartyRichPresenceUpdateTime = 3.00f;
    this->PartySuggestionUpdateTimer = 1.00f;
    this->MaxPartySuggestionsToConsider = 200;
    this->bAllowPartySuggestions = true;
    this->bAllowLFG = false;
    this->bAllowPartyPresenceUpdates = true;
    this->bAllowGameplayPresenceUpdates = true;
    this->bEnableInteractiveConsumables = true;
    this->bEnableContextHelpMenu = false;
    this->bShowAthenaItemShop = true;
    this->bEnableShowdown = true;
    this->bEnableTournamentMatchCaps = true;
    this->bUsePlayingEventIds = true;
    this->bRetryCMSLoads = true;
    this->RefreshScoreDelay = 2.00f;
    this->bEnableEventLeaderboards = true;
    this->NumCachedLeaderboardPages = 100;
    this->MaxPagesPerLeaderboard = 100;
    this->EventLeaderboardLiveRefreshTimeSeconds = 60;
    this->EventLeaderboardLivePostEventRefreshWindowMinutes = 30;
    this->bGetLiveSessionsFromLeaderboards = true;
    this->bEnableShowdownSquadDeathCheck = true;
    this->MaximumEventLengthHoursForCallout = 10;
    this->CreativePlaylistName = TEXT("Playlist_PlaygroundV2");
    this->bEnableEventScoreClamping = true;
    this->CreativeDisabledTabIndex = -1;
    this->bEnableCreativeServerImportFriendsOption = true;
    this->MaxPlayersInCreativeServer = 16;
    this->MaxPlayersInCreativeWhitelist = 20;
    this->bShowSupportACreatorOnIslandLinkScreen = true;
    this->bHideServersWithZeroPlayers = true;
    this->bEnableIslandCodeEntryOnPlayerPortal = false;
    this->bEnableIslandCodeEntryOnCuratedPortal = true;
    this->bEnableIslandCodeEntryInFrontend = false;
    this->RefreshFavoriteIslandsWaitTime = 10.00f;
    this->IslandCodeLength = 14;
    this->bApplyCodeFormatting = true;
    this->bEnableJoinInProgress = true;
    this->bEnableBattlePass = true;
    this->bEnableBattlePassPurchase = true;
    this->bEnableBattlePassTokenClaim = true;
    this->bEnableBattlePassFAQ = true;
    this->bEnableAthenaFavoriting = true;
    this->bEnableAthenaCustomPreviewActionForCosmetics = true;
    this->bEnableAthenaItemRandomization = false;
    this->bEnableProfileStatTracking = true;
    this->bEnableProfileStatUI = false;
    this->bEnableTrickUI = true;
    this->bEnableMultiplayerTricks = true;
    this->bShowAthenaChallengesTabWhenOutOfSeason = false;
    this->bEnableInGameChallengeTree = true;
    this->bLoginEpicWeb = false;
    this->bLoginXBLDisabled = false;
    this->bLoginPSNDisabled = false;
    this->bLoginErebusDisabled = false;
    this->bSkipInternetCheck = false;
    this->bEnableClientSettingsSaveToCloud = true;
    this->bEnableClientSettingsSaveToDisk = true;
    this->bDedServerEventServiceDownloadTryCount = 5;
    this->TournamentRefreshPayoutMaxRateSeconds = 10;
    this->TournamentRefreshEventsMaxRateSeconds = 10;
    this->TournamentRefreshPlayerMaxRateSeconds = 10;
    this->ShowdownTournamentCacheExpirationHours = 1;
    this->ShowdownTournamentJsonRevision = 0;
    this->TournamentHUDPointCounterDelay = 0.75f;
    this->MaxNumDisplayNamesOnLiveGameList = 2;
    this->LiveGameListInitialLimit = 15;
    this->LiveGameListQueryIncreaseAmount = 15;
    this->bEnableLiveGamesScreen = true;
    this->bLiveGameTimeDurationVisible = true;
    this->bEnableEventServicePayouts = true;
    this->bLiveGamesClientAnalyticsEnabled = true;
    this->EventServicePayoutRefreshRateSeconds = 600;
    this->EventServicePayoutRefreshSpreadSeconds = 300;
    this->CloudSaveIntervalConfig = 60.00f;
    this->bSaveToCloudOnMapLoad = false;
    this->GiftNotificationRefreshTimer = 300.00f;
    this->bEnableUndoPurchase = false;
    this->bEnableReplayBrowser = true;
    this->bAllowAllReplays = false;
    this->bEnableReplayRecording = true;
    this->bEnableLargeTeamReplayRecording = true;
    this->bEnableCreativeModeReplayRecording = true;
    this->bEnablePlaygroundModeReplayRecording = true;
    this->bUsingEsportCameras = false;
    this->bStableReplayPlayback = false;
    this->bEnableHearingAccessibility = true;
    this->bDisableSpatializationInsteadOfMutingWhenHearingAccessibilityEnabled = true;
    this->bDisableGiftXMPPMessageSend = false;
    this->bDisableReceiveGiftXMPPMessages = false;
    this->bDisableGifting = true;
    this->bForceRestrictChat = false;
    this->bDisableReceiveGiftOption = false;
    this->bLimitGiftingToEligiblePlatforms = false;
    this->bCanGiftYourself = true;
    this->GiftLimitAmount = 3;
    this->DaysOfFriendshipBeforeCanGift = 2;
    this->EndBattleRoyalUpdateDelay = 2.00f;
    this->LightswitchDownLoginDelay = 60.00f;
    this->bShowStatusButtonOnWaitingRoomScreen = false;
    this->bInvertMotionOnUnattachedSwitchControllers = true;
    this->bDisableTouchLookVelocityScaling = false;
    this->bDisablePurchaseHistoryScreen = false;
    this->bAllowProcessedPayoutsToRefreshProfile = true;
    this->TouchAimAssistStrengthScalar = 1.00f;
    this->bDisableTouchAimAssistAutoTracking = false;
    this->bProcessGamepadInputOnMobile = true;
    this->bMobileForceGamepadHUDWhenAttached = false;
    this->GamepadShortThrowLookScale = 1.00f;
    this->bUseNativeQuickbar = true;
    this->bSoundIndicatorsEnabledForTeammates = false;
    this->bEquipFirstWeaponOnMobile = true;
    this->ShowEliminationDistanceOver = 50.00f;
    this->FadeOutTeamIndicatorsAfter = 25000.00f;
    this->MapIndicatorTouchClearDistance = 75.00f;
    this->AthenaMapZoomMax = 5.00f;
    this->BacchusMapIndicatorSizeMultiplier = 2.00f;
    this->AthenaMapPanSpeedMultiplier = 2.50f;
    this->AthenaMapZoomSpeedMultiplier = 1.00f;
    this->WaitTimeBeforeShowingNewModeViolator = 3.00f;
    this->bOnlyShareURLWithNoMessage = true;
    this->bExcludeURLInShareMessage = true;
    this->bDisableBacchusFriendCodeSharing = false;
    this->bShowCreateAccountOnRedirect = false;
    this->AthenaCodeOfConductURL = TEXT("https://www.epicgames.com/fortnite/news/fortnite-battle-royale-code-of-conduct");
    this->BacchusFriendCodeShareURL = TEXT("https://fortnite.com/mobile?code=");
    this->CreateAccountUrl = TEXT("https://fortnite.com/mobile/create-account?mode=iosgame");
    this->LinkAccountURL = TEXT("https://www.epicgames.com/account/connected");
    this->AccountMergeMoreInfoURL = TEXT("https://fortnitehelp.epicgames.com");
    this->SupportURL = TEXT("https://fortnitehelp.epicgames.com");
    this->WaitingListURL = TEXT("https://fortnite.com/mobile");
    this->CheckStatusURL = TEXT("https://status.epicgames.com");
    this->iOSAppStoreURL = TEXT("https://itunes.apple.com/us/app/fortnite/id1261357853?mt=8");
    this->TurnOnMfaURL = TEXT("https://www.epicgames.com/account/password?#2fa-signup");
    this->ListOfCreatorsURL = TEXT("https://www.fortnite.com/creator-list");
    this->bAllowCodeRedemptionInSubgameSelect = true;
    this->bUseNewSubgameSelect = true;
    this->BRUpdatesURLMode = ENewsExternalURLMode::PatchNotes;
    this->STWUpdatesURLMode = ENewsExternalURLMode::UpdateNotes;
    this->MaxNumItemsInCreativeChests = 15;
    this->MaxStreamerMatchmakingDelay = 60;
    this->bEnableHiddenMatchmakingDelay = true;
    this->PSALoadingScreenPercentChance = 2;
    this->StwDownloadLauncherOption = TEXT("%26install%3Dchunk1");
    this->bDisableAllKnobs = false;
    this->bDisableMatchmakingKnobs = false;
    this->bDisableMinigameKnobs = false;
    this->bDisableGameOptionKnobs = false;
    this->bDisableAffiliateFeature = false;
    this->bUseHotfixedAffiliateNamesArray = false;
    this->bEnablePrerollLlamas = true;
    this->TournamentDisabledFrontendNavigationTabs.AddDefaulted(10);
    this->PickingInteractDistance = 350.00f;
    this->PickingInteractHighlightDistanceScaler = 0.80f;
    this->PickingHighlightMovementUpdateDist = 30.00f;
    this->PickingHighlightUpdateTime = 0.20f;
    this->PickingTime = 0.10f;
    this->AutoOpenDoorInputMagnitude = 0.50f;
    this->AutoOpenDoorTraceDistance = 200.00f;
    this->bAutofireEnabled = false;
    this->bAutofireUsesAutoaimTarget = true;
    this->bHoldToFireOnAutofireTarget = true;
    this->DefaultAutofireRange = 5000.00f;
    this->bServerNetDriverAnalytics = true;
    this->bDisableReplicationGraph = false;
    this->BRServerMaxTickRate = 30.00f;
    this->DoubleTapOnEndTouchTime = 0.25f;
    this->DoubleTapOnStartTouchTime = 0.15f;
    this->DoubleTapDistance = 100.00f;
    this->SingleTapDistance = 10.00f;
    this->TouchMoveStickRadius = 50.00f;
    this->TouchMoveStickRadiusTargeting = 100.00f;
    this->TouchMoveStickRadiusScoped = 150.00f;
    this->TouchMoveStickRadiusDriving = 150.00f;
    this->AutorunLockZoneOffset = 200.00f;
    this->AutorunLockZoneDelay = 3.00f;
    this->MoveOriginResetTime = 1.00f;
    this->MoveOriginResetDistance = 50.00f;
    this->MoveOriginFollowDistance = 30.00f;
    this->bDisableTouchLookInertia = false;
    this->RotateInertiaMultiplier = 1.00f;
    this->RotateInertiaMinTime = 0.15f;
    this->RotateInertiaMinLength = 10.00f;
    this->RotateInertiaMinMagnitude = 2.00f;
    this->RotateInertiaNumAveragedTouches = 3;
    this->bEnableHUDLayoutTool = true;
    this->bEnableHUDLayoutCloudSave = true;
    this->bEnableHUDLayoutToolPanZoom = true;
    this->EnablePlayButtonTime = 3.00f;
    this->AthenaExternalRichPresenceDelayTimeSeconds = 20.00f;
    this->bEnableExternalPresenceAthenaPlayersRemain = true;
    this->MinimumTimeBetweenConsolePresenceUpdates = 10.00f;
    this->MinimumTimeBetweenMCPPresenceUpdates = 10.00f;
    this->EnablePlayButtonTimePostError = 10.00f;
    this->bInviteUIDisabled = true;
    this->bDisableBacchusLogin = false;
    this->bEnableFriendSuggestions = true;
    this->bEnableFriendsListButton = true;
    this->bPrioritizeMcpInviteOverConsoleInvite = false;
    this->bForceDisableCrossplatformSquadFill = true;
    this->bRequireCrossplayOptIn = false;
    this->bUseAccountCrossplayPermissions = false;
    this->bSingleCrossplayOptInPrompt = false;
    this->bImmediatelyDisplayCrossplayOptIn_STW = true;
    this->bImmediatelyDisplayCrossplayOptIn_BR = false;
    this->bShowIconForSamePlatformPlayers = false;
    this->bEnableChatWidget = true;
    this->bShowVoiceChatSettings = true;
    this->bLiveStreamVoiceEnabledServer = true;
    this->bEnableSupportCenter = false;
    this->bPartyInProgress = true;
    this->bShouldAthenaQueryRecentPlayers = true;
    this->bEnableOfflineFriendsList = true;
    this->bEnableRecentPlayerList = true;
    this->bEnableSuggestedFriendList = true;
    this->bEnableBlockedList = true;
    this->bEnableFriendListInGame = true;
    this->bPushJIPInfoToPlatformPresence = true;
    this->bEnableStWInZonePrivacyChange = false;
    this->bEnableSitoutOption = true;
    this->bEnableSitoutOption_STW = true;
    this->bShowAccountBoosts = true;
    this->bShowCustomerSupport = true;
    this->bEnableChannelChangePopup = true;
    this->bEnableVoiceSpeakerWidget = true;
    this->bEnableSpeakerWidgetZonePerfMode = true;
    this->bEnableMobileMainMenuBackToTitle = false;
    this->bShowVoiceIndicatorsWhileLoading = false;
    this->bEnableVoiceChannelSelectionUI = true;
    this->bEnableGlobalChat = true;
    this->bEnableAllTabInChat = false;
    this->bEnableEULA = true;
    this->bEnableEndOfZoneCinematic = true;
    this->bEnableOnboardingCinematics = true;
    this->bShowFounderBannerIcons = true;
    this->bShowCurrentRegionInLobby = true;
    this->bEnableFoundersDailyRewards = true;
    this->bEnableTwitchIntegration = false;
    this->bEnableMatchmakingRegionSetting = true;
    this->bEnableEulaRequiredTournaments = true;
    this->bEnableMFARequiredTournaments = true;
    this->bAllTournamentsRequireMFA = false;
    this->bSpectatorBroadcasterSkipMfaEulaCheck = true;
    this->bEnableNaviationToChat = true;
    this->bEnableLanguageSetting = true;
    this->bEnableFriendCodeSetting = true;
    this->bEnableEarlyAccessLoadingScreenBanner = true;
    this->bClientIgnoreIsTournamentCheck = false;
    this->CampaignMatchEndRetryCount = 3;
    this->bShopPurchaseConfirmation = false;
    this->bShopPurchaseConfirmationJapanPS4 = true;
    this->bToyMessagingEnabled = true;
    this->bEnableAthenaHarvestingToolsInSTW = false;
    this->bEnableAthenaDancesInSTW = false;
    this->bEnableAthenaOutfitsInSTW = false;
    this->bEnableAthenaBackpackInSTW = false;
    this->bEnableAthenaGliderInSTW = false;
    this->bEnableAthenaContrailInSTW = false;
    this->bEnableAthenaWrapsInSTW = false;
    this->bEnableAthenaBannerInSTW = false;
    this->bEnableAthenaMusicInSTW = false;
    this->bEnableAthenaLoadingScreenInSTW = false;
    this->bAllowAccessToAllEmotesForTesting = false;
    this->bEnableCosmeticLockerInSTW = false;
    this->bEnableCosmeticItemShopInSTW = false;
    this->bRequireEmoteOwnershipInPIE = false;
    this->bEnableSTWLootDrops = true;
    this->bEnableSTWContainerItemCacheDrops = true;
    this->bEnableSTWEnemyItemCacheDrops = true;
    this->bEnableHoldToPickupUI = true;
    this->bSkipTrailerMovie = false;
    this->bAlwaysPlayTrailerMovie = false;
    this->bHideUnaffordableMtxPurchases = false;
    this->bHidePlusOnVbucksButton = false;
    this->bAllowXboxStwAccessDuringLiveStoreOutage = false;
    this->bShowReplayTrailerButton_Athena = true;
    this->bEnableAlterationModification = true;
    this->bEnableSchematicRarityUpgrade = true;
    this->bEnableMissionActivationVote = true;
    this->bEnableLtmRetrieveTheData = true;
    this->bEnableUpgradesVideos = true;
    this->bEnableExternalRichPresence = true;
    this->bShowEnableMFAModalAtStartupAthena = true;
    this->bShowEnableMFAModalAtStartupSTW = false;
    this->bEnableAIBuildingHitFX = true;
    this->LevelToStartShowingMFAModal = 10;
    this->DaysBetweenEnableMFAModalPrompts = 7;
    this->DelayGiftButtonWhenMFANotEnabledSeconds = 15.00f;
    this->LevelToAutoOpenBattlePassOnNewSeason = 4;
    this->bForceBattlePassUpsell = false;
    this->bCanShowSTWUpsellInBR = false;
    this->bShowLeaderboardPrivacySettings = true;
    this->bEnableServerScoreboardLog = false;
    this->bEnableInputBasedMatchmaking = true;
    this->bNotifyBlockedInput = true;
    this->NumberOfFramesBeforeWarnInputBlocked = 30;
    this->bDisableVideoOptions = false;
    this->bEnablePlayerReportingFlow = true;
    this->bDisplayPlayerReportingRoles = true;
    this->bDisplayRelevantPlayersForPlayerReporting = true;
    this->bPreventMultipleReportsOfSamePlayer = true;
    this->bAllowReportingFeaturedIslands = false;
    this->bForceGamepadPlaytest = false;
    this->bForceGamepadXboxOne = true;
    this->bEnableNewFireModeSelection = true;
    this->bEnableAddFriendWhileSpectating = false;
    this->bEnableFriendLink = false;
    this->FriendLinkURL = TEXT("https://fortnite.com/friend/");
    this->MFAEnableURL = TEXT("https://fortnite.com/2FA");
    this->bAllowForceTouchFire = false;
    this->VehicleSessionMinTimeUsed = 3.00f;
    this->BalloonSessionMinTimeUsed = 2.00f;
    this->UpdateBalloonDistanceEveryXSeconds = 1.00f;
    this->ZiplineSessionMinTimeUsed = 2.00f;
    this->RebootChipExpirationTime = 90.00f;
    this->RebootDirectiveDisplayTime = 7.00f;
    this->bRebootEnableInventoryDisplay = true;
    this->UpdateZiplineDistanceEveryXSeconds = 1.00f;
    this->bUseHordeStormShield = true;
    this->HordeStormShieldStartingRadiusOverride = -1.00f;
    this->HordeStormShieldEndingRadiusOverride = -1.00f;
    this->HordeStormShieldBreatherRadiusOverride = -1.00f;
    this->bUseHordeRespawnAtLastPawnLocation = true;
    this->bAllowHordePlayerTriggeredRespawn = false;
    this->MaxQuickScopeAimAssistPulls = 2;
    this->QuickScopeAimAssistPullWatchTime = 1.00f;
    this->MaxQuickScopeAimAssistPullWatchTime = 1.00f;
    this->QuickScopeAimAssistOriginalInitialDownsightStrength = 0.00f;
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
    this->HighlightClipRewindTimeInSeconds = -30;
    this->bEnableAntiTaxi = true;
    this->StopFlyingParachuteCooldownTime = 0.50f;
    this->FlushLoadingScreenRefreshSeconds = 0.50f;
    this->bEnableVehicleSpawnMissionInStw = true;
    this->bEnableJackalInStw = false;
    this->bEnableDownTierCraftingInStw = true;
    this->bShowBugReportsButton = true;
    this->bShowCommentReportsButton = true;
    this->bShowPlayerReportsButton = true;
    this->bShowContentReportsButton = true;
    this->bEnableItemRefundingInStw = true;
    this->bDisableCareerStatsButton = false;
    this->bDisableCareerLeaderboardButton = false;
    this->bEnableInputMethodThrashingDetection = true;
    this->bDisableCareerStatsPagePlatformProfileButton = false;
    this->bUsePlatformSpecificTextOnCareerPage = true;
    this->bDisableViewOtherProfilesFromCompLeaderboards = false;
    this->bShowOtherPlayerStatsOnCareerPage = true;
    this->InputMethodThrashingLimit = 30;
    this->InputMethodThrashingWindowInSeconds = 10.00f;
    this->bAllowPartialBackgroundAudio = true;
    this->bAllowPvEImprovedIdleDetection = true;
    this->bDuplicateRemovedPlayersOnClient = true;
    this->bIsCreativeMultiSelectEnabled = true;
    this->bEnableUserProfilePictures = false;
    this->bEnableChannelsServiceLoadTesting = false;
    this->bAllowMimicingEmotes = true;
    this->bAllowMimicingEmotesInFrontend = false;
    this->bAllowAsyncTooltipLoading = false;
    this->HotfixVersionId = 0;
    this->MaxBuildingIntoTerrainIntersectionPercentage = 0.30f;
    this->bUsingBuildingExtraPiece = true;
    this->AnalyticsBuildingWallTooLowLocations = 20;
    this->bDisableClientEngagementsAnalytics = false;
    this->AnalyticsClientEngagementsTimeoutSeconds = 15.00f;
    this->AnalyticsClientEngagementsMaxSendPerMinute = 1;
    this->bAnalyticsClientEngagementsRequireTimeToReturnFireToSend = false;
    this->AnalyticsClientEngagementsParticipationPercent = 100;
    this->PublishingEnabledForWhitelistedAccounts = true;
    this->IslandCodeLinkMnemonicExampleText = TEXT("0000-0000-0000");
    this->IslandCodeLinkURLText = TEXT("https://epicgames.com/fn/");
    this->bEnableCreativeLTMSupportCreator = true;
    this->CreativePublishCodeURLPrefix = TEXT("https://epicgames.com/fn/");
    this->bCreativeMinimapRendering = true;
    this->bCreativeMinimapCaptureLighting = true;
    this->bEnableIslandCheckpoints = true;
    this->bEnableIslandLoadNetSafeGuards = true;
    this->bLoadingScreenInputPreprocessorEnabled = true;
    this->AllowInputTypeFilterForAccessibility = true;
    this->AllowLockPrimaryInputMethodToMouseForAccessibility = true;
    this->bEnableSolaris = false;
    this->bIsUserChoiceAllowedForForcedAndroidStore = true;
    this->bHideCharacterCustomizationNullTile = false;
    this->bDoEditModeStayInGrid = true;
    this->bEnablePlaylistRequireCrossplay = false;
    this->bRequireCrossplayOptInForFill = false;
    this->bUseConcurrentCrossplayPromptGuard = true;
    this->MaxSquadSize = 4;
    this->MaxPartySizeCampaign = 4;
    this->MaxPartySizeAthena = 16;
    this->bShouldFollowersSendSquadMatchmakingInfo = false;
    this->bAllowAthenaNavSystemForCreative = true;
    this->bAthenaAIAllowAbilitiesLooping = false;
    this->MaxNumAthenaNavTilesPerFrame = 10;
    this->AthenaCreativeNavMeshGeneratorTimeSliceDuration = 0.00f;
    this->bEnablePlayerSurveys = true;
    this->bEnablePlayerStatsPrecache = true;
    this->bEnableStreamingReplayViewingUI = false;
    this->LiveReplayDiscoverabilityDelay = 600.00f;
    this->bSkipPlayingFortniteChecks = true;
    this->bReplaySampleAthenaPawnMovement = true;
    this->ReplaySampleAthenaPawnTimeRate = 10.00f;
    this->ReplaySampleAthenaPawnSpaceRate = 1500.00f;
    this->ReplaySampleAthenaPawnUpdateTimeRate = 40.00f;
    this->bDisablePartyJoinInOutpost = true;
    this->bMobileQuickHealEnabled = true;
}

