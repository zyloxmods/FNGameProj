#include "FortGameModeAthena.h"
#include "FortLiveBroadcastController.h"
#include "FortMutatorListComponent.h"
#include "FortServerBotManagerAthena.h"
#include "FortSpectateAFriendController.h"
#include "MegaStormManager.h"
#include "Templates/SubclassOf.h"

void AFortGameModeAthena::StopRemovingAllLoot(UObject* WorldContext, bool bImmediateCleanup) {
}

void AFortGameModeAthena::SetTimeOfDayManagerGameplayOverride(TSubclassOf<AFortTimeOfDayManager> TimeOfDayManagerClass) {
}

void AFortGameModeAthena::SafeZoneInsideChecks() {
}

void AFortGameModeAthena::RemoveAllLootFromWorld(UObject* WorldContext, int32 ContainersPerIteration, int32 PickupsPerIteration, float TimeBetweenIterations, bool bProcessContainersAndPickupsConcurrently) {
}

void AFortGameModeAthena::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortGameModeAthena::OnEndGameKickPlayers() {
}

void AFortGameModeAthena::OnCheckForOrphanedServer(bool bFromPlayerLogout) {
}

void AFortGameModeAthena::OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortGameModeAthena::OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortGameModeAthena::OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft) {
}

void AFortGameModeAthena::JumpToSafeZonePhase() {
}

bool AFortGameModeAthena::IsMapInfoInitialized() const {
    return false;
}

void AFortGameModeAthena::HandleAllPlaylistLevelsVisible() {
}

TSubclassOf<AActor> AFortGameModeAthena::GetVehicleClassOverride(TSubclassOf<AActor> DefaultVehicleClass) const {
    return NULL;
}

UFortServerBotManagerAthena* AFortGameModeAthena::GetServerBotManager() const {
    return NULL;
}

bool AFortGameModeAthena::GetPlaylistEnableBots() const {
    return false;
}

AFortGameplayMutator* AFortGameModeAthena::GetMutatorByClass_Implementation(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass) {
    return NULL;
}

AFortGameplayMutator* AFortGameModeAthena::GetGameplayMutator(FGameplayTag MutatorTag) {
    return NULL;
}

AActor* AFortGameModeAthena::GetBattleLabTeleporterManager() {
    return NULL;
}

void AFortGameModeAthena::FireServerPerformanceEvent() {
}


void AFortGameModeAthena::EnableGameplayMutator(FGameplayTag MutatorTag, bool bEnable) {
}

void AFortGameModeAthena::AddContentKeysToGameState() {
}

void AFortGameModeAthena::AddAIClassToReplicationGraph(TSubclassOf<AFortPawn> NewAIClass) const {
}

AFortGameModeAthena::AFortGameModeAthena() {
    this->DelayForStormCapWarning = 1;
    this->DelayForStormCapDamage = 1;
    this->bMapInfoInitialized = false;
    this->bAllGameplayModifiersRegistered = false;
    this->bAlwaysDBNO = false;
    this->bNeverSpawnPickupsOnPawnDeath = false;
    this->bLoadTestCosmetics = false;
    this->bDisable3DVoiceChat = true;
    this->bAllowDamageInWarmup = true;
    this->bDisableGCOnServerDuringMatch = true;
    this->bPlaylistHotfixChangedGCDisabling = false;
    this->PlaylistHotfixOriginalGCFrequency = 1;
    this->bUseSkydiveLeader = false;
    this->bUseSkydiveLeaderInSplitScreen = true;
    this->OverloadedInitialConnectTimeout = 1;
    this->FailedToStartMatchTimeout = 1;
    this->OrphanedServerCheckTime = 1;
    this->bEnableRecentPlayersUpdates = false;
    this->DefaultWarmupEarlyRequiredPlayerPercent = 1;
    this->bDisableStormCapSystem = false;
    this->bStormCapSystemEnabled = false;
    this->BattleLabTeleporterManager = NULL;
    this->bAlwaysIncludeDisconnectedTeammates = false;
    this->bIncludeDisconnectedTeammatesFromAircraftPhase = true;
    this->ForceKickAfterDeathMode = EForceKickAfterDeathMode::Disabled;
    this->ForceKickAfterDeathTime = 1;
    this->CreativeModeGracefulShutdownTime = 0;
    this->MaxPlayerCount = 0;
    this->WarmupRequiredPlayerCount = 0;
    this->WarmupCountdownDuration = 1;
    this->WarmupEarlyCountdownDuration = 1;
    this->bSafeZoneActive = false;
    this->bSafeZonePaused = false;
    this->GE_OutsideSafeZone = NULL;
    this->GE_OutsideSafeZoneCN = NULL;
    this->SafeZoneIndicatorClass = NULL;
    this->MegaStormManagerClass = AMegaStormManager::StaticClass();
    this->SafeZonePhase = 0;
    this->SafeZoneIndicator = NULL;
    this->bSafeZoneLocationsInitialized = false;
    this->EndGameKickPlayersDelay_NoIGMM = 1;
    this->EndGameKickPlayersDelay_IGMM = 1;
    this->EventStatSubmitAttempts = 0;
    this->MegaStormManager = NULL;
    this->bUseRandomTimeOfDay = true;
    this->AISettings = NULL;
    this->ServerBotManagerClass = UFortServerBotManagerAthena::StaticClass();
    this->SpectateAFriendPlayerControllerClass = AFortSpectateAFriendController::StaticClass();
    this->LiveBroadcastPlayerControllerClass = AFortLiveBroadcastController::StaticClass();
    this->PlatformOSSNamesToUploadStatsV2.AddDefaulted(6);
    this->bEnableMatchmakingRatingUpdateV2 = true;
    this->bFlightPathInitialized = false;
    this->ScorePerMinuteAlive = 1;
    this->ScoreMaxMinutesAliveCounted = 1;
    this->ScoreForGettingAtLeastOneKill = 1;
    this->ScorePerScaledTeamKill = 1;
    this->ScoreForFirstRevive = 1;
    this->ScoreForSubsequentRevives = 1;
    this->MaxAdditionalRevivesToScore = 0;
    this->ScoreMultiplier = 1;
    this->MaxActiveAIActors = 0;
    this->bLockMobilePlayersToTouchInSwitchPool = false;
    this->bAllCosmeticsLoaded = false;
    this->SkyDiveContrailLoadTestIndex = 0;
    this->GliderLoadTestIndex = 0;
    this->PickaxeLoadTestIndex = 0;
    this->CharacterLoadTestIndex = 0;
    this->HatLoadTestIndex = 0;
    this->BackpackLoadTestIndex = 0;
    this->DanceLoadTestIndex = 0;
    this->VictoryPoseLoadTestIndex = 0;
    this->MapMarkerLoadTestIndex = 0;
    this->PetLoadTestIndex = 0;
    this->LastSpawnedSupplyDropType = 0;
    this->SpawningPolicyManager = NULL;
    this->ServerBotManager = NULL;
    this->TimeOfDayManagerGameplayOverride = NULL;
    this->AthenaGameDataTable = NULL;
    this->MutatorListComponent = CreateDefaultSubobject<UFortMutatorListComponent>(TEXT("MutatorList"));
    this->SupportedAthenaLootTierGroups.AddDefaulted(45);
    this->bEnableCompetitiveMissingPlayerMatchInvalidation = false;
    this->StartAircraftPhaseRequiredAlivePlayersPercent = 1;
    this->EndAircraftPhaseRequiredAlivePlayersPercent = 1;
    this->bEnableCompetitiveDDoSDetectionMatchInvalidation = false;
    this->DDoSDetectionMatchInvalidationCount = 0;
    this->DDoSDetectionMatchInvalidationEvalDurationSeconds = 1;
    this->bReticulateSplineKeysOnStart = false;
}

