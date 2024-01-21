#include "FortGlobals.h"

bool UFortGlobals::UninstallAllOnDemandChunks() {
    return false;
}

bool UFortGlobals::ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone() {
    return false;
}

bool UFortGlobals::ShouldShowSkillTreeMovies() {
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

bool UFortGlobals::IsNewRewardFlowEnabled() {
    return false;
}

bool UFortGlobals::IsMobileGame(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsMilestoneModeEnabled(const UObject* WorldContextObject) {
    return false;
}

bool UFortGlobals::IsIronCityAutoAmplifierPlacementEnabled() {
    return false;
}

bool UFortGlobals::IsInSubGame(const UObject* WorldContextObject, const ESubGame SubGame) {
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

bool UFortGlobals::IsAllContentInstalled() {
    return false;
}

bool UFortGlobals::IsAccountLinkingUIURLButtonEnabled() {
    return false;
}

bool UFortGlobals::IsAccountLinkingEnabled() {
    return false;
}

bool UFortGlobals::InstallAllOnDemandChunks() {
    return false;
}

bool UFortGlobals::GetUseLegacyMediaSource() {
    return false;
}

EFortStartupPhase UFortGlobals::GetStartupPhase() {
    return EFortStartupPhase::InitializingEngine;
}

EChunkInstallState UFortGlobals::GetOnDemandChunksInstallState() {
    return EChunkInstallState::NotInstalled;
}

int32 UFortGlobals::GetMinTheaterListRefreshDelay() {
    return 0;
}

int32 UFortGlobals::GetMemoryRequirementForMediaStreamingMB() {
    return 0;
}

int32 UFortGlobals::GetMaxTheaterListRefreshDelay() {
    return 0;
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

bool UFortGlobals::AreFriendCodesEnabled() {
    return false;
}

bool UFortGlobals::AllowContainersInCreativeItemLists() {
    return false;
}

UFortGlobals::UFortGlobals() {
    this->MinTheaterListRefreshDelay = 0;
    this->MaxTheaterListRefreshDelay = 180;
    this->MinCullObjectSize = 64.00f;
    this->MinCullDistance = 2800.00f;
    this->MaxCullObjectSize = 1000.00f;
    this->MaxCullDistance = 40000.00f;
    this->MinRespawnHeightForEnvironmentDeath = 100.00f;
    this->MaxRespawnInAirHeight = 55000.00f;
    this->bEnablePlayerTriggeredRespawn = true;
    this->bEnableNewCustomizationPanel = false;
    this->bEnableInfluenceMap = true;
    this->bEnableAIDespawning = true;
    this->bEnableDBNO = true;
    this->bEnableIronCity = true;
    this->bEnableForceBuildingActorRecordUpdates = false;
    this->IronCityWargameTagList.AddDefaulted(15);
    this->bEnableIronCityCoast = false;
    this->bEnableHestia = false;
    this->bEnableIronCityAutoAmplifierPlacement = false;
    this->bEnableWargameDebug = false;
    this->bEnableEnduranceDebug = false;
    this->bEnableMilestoneMode = false;
    this->MaxAssetsToPreload = -1;
    this->bOnlyPreloadCity = true;
    this->bEnableInWorldScoreNumbers = false;
    this->bMustUseToggleJetpackExecute = true;
    this->bEnableNewRewardFlow = true;
    this->bEnableWIFE = true;
    this->bEnableFrontendCrafting = true;
    this->bEnableFrontendStorage = true;
    this->bEnableLazyASC = true;
    this->bEnableFriendCodes = true;
    this->bEnableCreativeMode = true;
    this->bEnableCreativeModeLimitedAccess = false;
    this->bEnableCreativeModeLimitedAccessForFounders = false;
    this->FlyVerificationInterval = 2.00f;
    this->CreativeModeLimitedAccessEndTime = TEXT("2018-12-13T00:00:00");
    this->bEnableCreativeModeTutorials = true;
    this->CreativeTutorialSkydivingDelay = 5.00f;
    this->CreativeReturnToHubTutorialDelay = 300.00f;
    this->bSubmitReturnToMenuErrorLogs = false;
    this->ReturnToMenuErrorLogTailKb = 300;
    this->ReturnToMenuErrorLogSubmitChance = 1.00f;
    this->bShowSkillTreeMovies = true;
    this->bShowMissionResultsMovies = true;
    this->bDisablePlayerTeleportDuringMissionResults = false;
    this->bDisableParticleEffectsDuringMissionResults = false;
    this->bFlushGPUWhenPlayerIsTeleportedAtEndOfZone = false;
    this->bStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone = false;
    this->bTwitchEnabled = false;
    this->bAllowContainersInCreativeItemLists = true;
    this->bAccountLinkingEnabled = true;
    this->AccountLinkingUIConfig = EFortAccountLinkingUIConfig::Default;
    this->AccountLinkingUIURL = TEXT("https://www.epicgames.com/account/connected");
    this->bEnableAccountLinkingUIURLButton = true;
    this->bAllowStreamerSafetyCharacterReplication = false;
    this->bAnonymousCharacterModeSafetyCharacterReplication = true;
    this->bTournamentSafetyCharacterReplication = false;
    this->bAllowSafetyCharacterReplicationToUseVariantItems = false;
    this->bAllowItemWrapMaterialSyncLoads = false;
    this->bTwitchHeartbeatEnabled = true;
    this->bTwitchAllowDisplayViewernames = true;
    this->MaxTwitchViewerNamesToCache = 1000;
    this->TwitchViewerNameExpirationMinutes = 0;
    this->MinTwitchHeartbeatInterval = 30.00f;
    this->TwitchAccountInformationRefreshInterval = 0.00f;
    this->bAllowLogout = true;
    this->bAllowQuit = true;
    this->bHasWorldMap = true;
    this->PlayerJoinServerTimeoutSeconds = 30.00f;
    this->PlayerUnregistrationFailsafeTimer = 600.00f;
    this->PollForDedicatedServerReadyToShutdownInterval = 5.00f;
    this->bUploadAthenaStats = true;
    this->bUploadAthenaStatsV2 = true;
    this->bDisableTimePlayedStat = false;
    this->bAthenaStatsFrontendEnabled = true;
    this->bAthenaLeaderboardFrontEndEnabled = true;
    this->bAthenaSquadQuickChatEnabled = true;
    this->AthenaQuickChatRangeForNonSquadTeamMembers = 15000.00f;
    this->bGlobalLeaderboardsFrontEndEnabled = true;
    this->TimeBetweenLeaderboardRequestsMinutes = 15;
    this->bFirstShotAccuracyDisabled = false;
    this->bAllowProjectileRethrow = true;
    this->bAthenaUsesSimCollision = true;
    this->bAthenaSimVehicles = true;
    this->bAthenaSubstepping = true;
    this->bCampaignSubstepping = true;
    this->bCampaignUsesSimCollision = true;
    this->bCampaignSimVehicles = true;
    this->MaximumCharacterVelocity = 15000.00f;
    this->NumOutstandingAthenaAsyncRequests = 0;
    this->TotalAthenaAsyncRequests = 0;
    this->bAllowXboxStwToken = false;
    this->bUsePlatformProfanityFilterForChat = false;
    this->bShouldSendSettingsSnapshotOnLogin = true;
    this->bShouldForceAllowBroadcasting = false;
    this->bUseLegacyMediaSource = false;
    this->MemoryRequirementForMediaStreamingMB = 0;
    this->MaxResolutionForMediaStreaming = 0;
    this->SubGameAccess.AddDefaulted(2);
}

