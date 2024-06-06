#include "FortGlobals.h"

bool UFortGlobals::UseElectraForWatchBattlePassMovie() {
    return false;
}

bool UFortGlobals::UseElectraForReplayCinematic() {
    return false;
}

float UFortGlobals::StWTutorialContentInstallationProgress() {
    return 0.0f;
}

bool UFortGlobals::ShowExtendedBattlePassMovie() {
    return false;
}

bool UFortGlobals::ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone() {
    return false;
}

bool UFortGlobals::ShouldShowMissionResultsMovies() {
    return false;
}

bool UFortGlobals::ShouldFlushGPUWhenPlayerIsTeleportedAtEndOfZone() {
    return false;
}

bool UFortGlobals::ShouldDisablePlayerTeleportDuringMissionResults() {
    return false;
}

bool UFortGlobals::ShouldDisableParticleEffectsDuringMissionResults() {
    return false;
}

bool UFortGlobals::ShouldDelayStartupLoading() {
    return false;
}

void UFortGlobals::SetGlobalSnowAltitude(float Altitude) {
}

void UFortGlobals::SetCurrentSubGame(const UObject* WorldContextObject, const ESubGame SubGame) {
}

bool UFortGlobals::IsWIFEEnabled() {
    return false;
}

bool UFortGlobals::IsWargameDebugEnabled() {
    return false;
}

bool UFortGlobals::IsUsingTouch(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsTwitchEnabled() {
    return false;
}

bool UFortGlobals::IsTouchInputPlatform() {
    return false;
}

bool UFortGlobals::IsTencentBuild() {
    return false;
}

bool UFortGlobals::IsStWTutorialContentInstalled() {
    return false;
}

bool UFortGlobals::IsSmallCatabaLayoutEnabled() {
    return false;
}

bool UFortGlobals::IsNewRewardFlowEnabled() {
    return false;
}

bool UFortGlobals::IsMobileGame(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsIronCityAutoAmplifierPlacementEnabled() {
    return false;
}

bool UFortGlobals::IsInSubGame(const UObject* WorldContextObject, const ESubGame SubGame) {
    return false;
}

bool UFortGlobals::IsInPhoenixZone(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsInAthena(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsHestiaEnabled() {
    return false;
}

bool UFortGlobals::IsHeroLoadoutSystemEnabled() {
    return false;
}

bool UFortGlobals::IsGameFeatureContentInstalled(const EFortGameFeature GameFeature) {
    return false;
}

bool UFortGlobals::IsFrontendStorageEnabled() {
    return false;
}

bool UFortGlobals::IsFrontendCraftingEnabled() {
    return false;
}

bool UFortGlobals::IsFirstShotAccuracyDisabled() {
    return false;
}

bool UFortGlobals::IsErebus() {
    return false;
}

bool UFortGlobals::IsEnduranceDebugEnabled() {
    return false;
}

bool UFortGlobals::IsDisplayingTwitchViewerNamesAllowed() {
    return false;
}

bool UFortGlobals::IsBROnly() {
    return false;
}

bool UFortGlobals::IsAllContentInstalled(const ESubGame SubGame) {
    return false;
}

bool UFortGlobals::IsAccountLinkingUIURLButtonEnabled() {
    return false;
}

bool UFortGlobals::IsAccountLinkingEnabled() {
    return false;
}

bool UFortGlobals::InstallStWTutorialContent() {
    return false;
}

bool UFortGlobals::InstallGameFeatureContent(const EFortGameFeature GameFeature) {
    return false;
}

bool UFortGlobals::InstallAllOnDemandContent(const ESubGame SubGame) {
    return false;
}

void UFortGlobals::HandleClientUpdateRequired(EFortClientUpdateType Type, bool RequestExit) {
}

bool UFortGlobals::GetUseLegacyMediaSourceForCreative() {
    return false;
}

bool UFortGlobals::GetUseLegacyMediaSource() {
    return false;
}

float UFortGlobals::GetTimeLimitForWatchBattlePassMovie(ETimeLimitForReplayCinematic TimeLimitForWatchBattlePassMovie) {
    return 0.0f;
}

float UFortGlobals::GetTimeLimitForReplayCinematic(ETimeLimitForReplayCinematic TimeLimitForReplayCinematic) {
    return 0.0f;
}

TEnumAsByte<EPhysicalSurface> UFortGlobals::GetSurfaceType(const FHitResult& Hit) {
    return SurfaceType_Default;
}

EContentInstallState UFortGlobals::GetStWTutorialContentInstallState() {
    return EContentInstallState::NotInstalled;
}

EFortStartupPhase UFortGlobals::GetStartupPhase() {
    return EFortStartupPhase::InitializingEngine;
}

FGameplayTagContainer UFortGlobals::GetRiskyReelsPlaylistBlacklistFilter() {
    return FGameplayTagContainer{};
}

bool UFortGlobals::GetPapayaSpeakersEnabled() {
    return false;
}

EContentInstallState UFortGlobals::GetOnDemandContentInstallState(const ESubGame SubGame) {
    return EContentInstallState::NotInstalled;
}

int32 UFortGlobals::GetMinTheaterListRefreshDelay() {
    return 0;
}

int64 UFortGlobals::GetMemoryRequirementForMediaStreamingMB() {
    return 0;
}

int32 UFortGlobals::GetMaxTheaterListRefreshDelay() {
    return 0;
}

FContentInstallError UFortGlobals::GetLastOnDemandContentInstallError() {
    return FContentInstallError{};
}

TArray<FName> UFortGlobals::GetIronCityWargameTagList() {
    return TArray<FName>();
}

bool UFortGlobals::GetIronCityEndlessEnabled() {
    return false;
}

bool UFortGlobals::GetIronCityEnabled() {
    return false;
}

float UFortGlobals::GetGlobalSnowAltitude() {
    return 0.0f;
}

EContentInstallState UFortGlobals::GetGameFeatureContentInstallState(const EFortGameFeature GameFeature) {
    return EContentInstallState::NotInstalled;
}

bool UFortGlobals::GetForceBuildingActorRecordUpdatesEnabled() {
    return false;
}

float UFortGlobals::GetDoubleClickTime(const UObject* WorldContextObject) {
    return 0.0f;
}

ESubGame UFortGlobals::GetCurrentSubGame(const UObject* WorldContextObject) {
    return ESubGame::Campaign;
}

FString UFortGlobals::GetAccountLinkingUIURL() {
    return TEXT("");
}

EFortAccountLinkingUIConfig UFortGlobals::GetAccountLinkingUIConfig() {
    return EFortAccountLinkingUIConfig::Disabled;
}

float UFortGlobals::GameFeatureContentInstallationProgress(const EFortGameFeature GameFeature) {
    return 0.0f;
}

float UFortGlobals::ContentInstallationProgress(const ESubGame SubGame) {
    return 0.0f;
}

bool UFortGlobals::AreFriendCodesEnabled() {
    return false;
}

bool UFortGlobals::AllowContainersInCreativeItemLists() {
    return false;
}

UFortGlobals::UFortGlobals() {
    BRMap = TEXT("Apollo_Terrain");
    BRMapFullName = TEXT("/Game/Athena/Apollo/Maps/Apollo_Terrain");
    MinTheaterListRefreshDelay = 0;
    MaxTheaterListRefreshDelay = 0;
    MinCullObjectSize = 1;
    MinCullDistance = 1;
    MaxCullObjectSize = 1;
    MaxCullDistance = 1;
    MinRespawnHeightForEnvironmentDeath = 1;
    MaxRespawnInAirHeight = 1;
    bEnablePlayerTriggeredRespawn = true;
    bEnableNewCustomizationPanel = false;
    bEnableInfluenceMap = true;
    bEnableAIDespawning = true;
    bEnableDBNO = true;
    bEnableIronCity = true;
    bEnableForceBuildingActorRecordUpdates = false;
    IronCityWargameTagList.AddDefaulted(20);
    bEnableIronCityCoast = true;
    bEnableMaydayStrangeLands = false;
    bForceMaydayStrangeLands = false;
    bEnableHestia = false;
    bCatabaEnabled = false;
    bEnableSmallCatabaLayout = false;
    bEnableIronCityAutoAmplifierPlacement = false;
    bEnableWargameDebug = false;
    bEnableEnduranceDebug = false;
    bEnableTrapScoringCrafting = false;
    bEnableTrapScoringPlacement = false;
    bEnableTrapScoringActivation = true;
    bEnableInWorldScoreNumbers = false;
    bMustUseToggleJetpackExecute = true;
    bEnableNewRewardFlow = true;
    bEnableWIFE = true;
    bEnableFrontendCrafting = true;
    bEnableFrontendStorage = true;
    bEnableLazyASC = true;
    bEnableFriendCodes = true;
    bEnableCreativeMode = true;
    bEnableCreativeModeLimitedAccess = false;
    bEnableCreativeModeLimitedAccessForFounders = false;
    FlyVerificationInterval = 1;
    CreativeModeLimitedAccessEndTime = TEXT("2018-12-13T00:00:00");
    bEnableCreativeModeTutorials = true;
    CreativeTutorialSkydivingDelay = 1;
    CreativeReturnToHubTutorialDelay = 1;
    bSubmitReturnToMenuErrorLogs = true;
    bSubmitSecondaryReturnToMenuErrorLogs = false;
    ReturnToMenuErrorLogTailKb = 0;
    ReturnToMenuErrorLogSubmitChance = 1;
    KairosSubmitOptions.AddDefaulted(2);
    bShowMissionResultsMovies = true;
    bDisablePlayerTeleportDuringMissionResults = false;
    bDisableParticleEffectsDuringMissionResults = false;
    bFlushGPUWhenPlayerIsTeleportedAtEndOfZone = false;
    bStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone = false;
    bTwitchEnabled = false;
    bAllowContainersInCreativeItemLists = true;
    bAccountLinkingEnabled = true;
    AccountLinkingUIConfig = EFortAccountLinkingUIConfig::Disabled;
    AccountLinkingUIURL = TEXT("https://www.epicgames.com/account/connected");
    bEnableAccountLinkingUIURLButton = true;
    bAllowStreamerSafetyCharacterReplication = false;
    bAnonymousCharacterModeSafetyCharacterReplication = true;
    bTournamentSafetyCharacterReplication = false;
    bAllowSafetyCharacterReplicationToUseVariantItems = false;
    bAllowItemWrapMaterialSyncLoads = false;
    bEnableQuestContentCheckOnSave = false;
    bTwitchHeartbeatEnabled = true;
    bTwitchAllowDisplayViewernames = true;
    MaxTwitchViewerNamesToCache = 0;
    TwitchViewerNameExpirationMinutes = 0;
    MinTwitchHeartbeatInterval = 1;
    TwitchAccountInformationRefreshInterval = 1;
    bAllowLogout = false;
    bAllowQuit = true;
    bHasWorldMap = true;
    PlayerJoinServerTimeoutSeconds = 1;
    PlayerUnregistrationFailsafeTimer = 1;
    PollForDedicatedServerReadyToShutdownInterval = 1;
    bUploadAthenaStatsV2 = false;
    bAthenaStatsFrontendEnabled = false;
    bAthenaLeaderboardFrontEndEnabled = false;
    bAthenaSquadQuickChatEnabled = true;
    AthenaQuickChatRangeForNonSquadTeamMembers = 1;
    bGlobalLeaderboardsFrontEndEnabled = false;
    TimeBetweenLeaderboardRequestsMinutes = 0;
    bFirstShotAccuracyDisabled = false;
    bAllowProjectileRethrow = true;
    bPapayaSpeakersEnabled = true;
    bDoAthenaClientStartupWeaponPreloading = true;
    bDoCosmeticAssetStreaming = true;
    bAthenaSpatialUIDeferMarkingItemsSeen = false;
    bAthenaUsesSimCollision = true;
    bAthenaSimVehicles = true;
    bAthenaSubstepping = true;
    bCampaignSubstepping = true;
    bCampaignUsesSimCollision = true;
    bCampaignSimVehicles = true;
    MaximumCharacterVelocity = 1;
    NumOutstandingAthenaAsyncRequests = 0;
    TotalAthenaAsyncRequests = 0;
    bAllowXboxStwToken = false;
    bUsePlatformProfanityFilterForChat = false;
    bShouldSendSettingsSnapshotOnLogin = true;
    bShouldForceAllowBroadcasting = true;
    bUseLegacyMediaSource = false;
    bUseLegacyMediaSourceForCreative = false;
    bDisableMediaStreamingOnWindows7 = false;
    bAllowElectraForCellStreaming = true;
    MaxElectraVerticalResolutionOf60fpsVideos = 0;
    MaxElectraVerticalResolutionOfWindowsSWD = 0;
    ElectraLivePresentationOffset = 1;
    ElectraLiveAudioPresentationOffset = 1;
    bElectraLiveUseConservativePresentationOffset = false;
    bAllowElectraForReplayCinematic = true;
    bDisableElectraForReplayCinematicOnWin7 = false;
    bDisableElectraForReplayCinematicOnWin7AndWin8 = false;
    ProbabilityOfUsingElectraForReplayCinematic = 1;
    OpenTimeLimitForReplayCinematic = 1;
    DurationTimeLimitForReplayCinematic = 1;
    DurationExtraTimeForReplayCinematic = 1;
    bAllowElectraForWatchBattlePassMovie = true;
    bShowExtendedBattlePassMovie = true;
    ProbabilityOfUsingElectraForWatchBattlePassMovie = 1;
    OpenTimeLimitForWatchBattlePassMovie = 1;
    bAllowForceDefaultAudioTrack = true;
    MemoryRequirementForMediaStreamingMB = 0;
    MaxResolutionForMediaStreaming = 0;
    MaxResolutionForStandalonePlayer = 0;
    RadioPlaylistBlacklistFilter.AddDefaulted(9);
    bRegionCN = false;
    GlobalSnowAltitude = 1;
    SubGameAccess.AddDefaulted(3);
    GameFeaturePluginManager = NULL;
}

