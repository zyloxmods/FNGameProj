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
    DelayForStormCapWarning = 1;
    DelayForStormCapDamage = 1;
    bMapInfoInitialized = false;
    bAllGameplayModifiersRegistered = false;
    bAlwaysDBNO = false;
    bNeverSpawnPickupsOnPawnDeath = false;
    bLoadTestCosmetics = false;
    bDisable3DVoiceChat = true;
    bAllowDamageInWarmup = true;
    bDisableGCOnServerDuringMatch = true;
    bPlaylistHotfixChangedGCDisabling = false;
    PlaylistHotfixOriginalGCFrequency = 1;
    bUseSkydiveLeader = false;
    bUseSkydiveLeaderInSplitScreen = true;
    OverloadedInitialConnectTimeout = 1;
    FailedToStartMatchTimeout = 1;
    OrphanedServerCheckTime = 1;
    bEnableRecentPlayersUpdates = false;
    DefaultWarmupEarlyRequiredPlayerPercent = 1;
    bDisableStormCapSystem = false;
    bStormCapSystemEnabled = false;
    BattleLabTeleporterManager = NULL;
    bAlwaysIncludeDisconnectedTeammates = false;
    bIncludeDisconnectedTeammatesFromAircraftPhase = true;
    ForceKickAfterDeathMode = EForceKickAfterDeathMode::Disabled;
    ForceKickAfterDeathTime = 1;
    CreativeModeGracefulShutdownTime = 0;
    MaxPlayerCount = 0;
    WarmupRequiredPlayerCount = 0;
    WarmupCountdownDuration = 1;
    WarmupEarlyCountdownDuration = 1;
    bSafeZoneActive = false;
    bSafeZonePaused = false;
    GE_OutsideSafeZone = NULL;
    GE_OutsideSafeZoneCN = NULL;
    SafeZoneIndicatorClass = NULL;
    MegaStormManagerClass = AMegaStormManager::StaticClass();
    SafeZonePhase = 0;
    SafeZoneIndicator = NULL;
    bSafeZoneLocationsInitialized = false;
    EndGameKickPlayersDelay_NoIGMM = 1;
    EndGameKickPlayersDelay_IGMM = 1;
    EventStatSubmitAttempts = 0;
    MegaStormManager = NULL;
    bUseRandomTimeOfDay = true;
    AISettings = NULL;
    ServerBotManagerClass = UFortServerBotManagerAthena::StaticClass();
    SpectateAFriendPlayerControllerClass = AFortSpectateAFriendController::StaticClass();
    LiveBroadcastPlayerControllerClass = AFortLiveBroadcastController::StaticClass();
    PlatformOSSNamesToUploadStatsV2.AddDefaulted(6);
    bEnableMatchmakingRatingUpdateV2 = true;
    bFlightPathInitialized = false;
    ScorePerMinuteAlive = 1;
    ScoreMaxMinutesAliveCounted = 1;
    ScoreForGettingAtLeastOneKill = 1;
    ScorePerScaledTeamKill = 1;
    ScoreForFirstRevive = 1;
    ScoreForSubsequentRevives = 1;
    MaxAdditionalRevivesToScore = 0;
    ScoreMultiplier = 1;
    MaxActiveAIActors = 0;
    bLockMobilePlayersToTouchInSwitchPool = false;
    bAllCosmeticsLoaded = false;
    SkyDiveContrailLoadTestIndex = 0;
    GliderLoadTestIndex = 0;
    PickaxeLoadTestIndex = 0;
    CharacterLoadTestIndex = 0;
    HatLoadTestIndex = 0;
    BackpackLoadTestIndex = 0;
    DanceLoadTestIndex = 0;
    VictoryPoseLoadTestIndex = 0;
    MapMarkerLoadTestIndex = 0;
    PetLoadTestIndex = 0;
    LastSpawnedSupplyDropType = 0;
    SpawningPolicyManager = NULL;
    ServerBotManager = NULL;
    TimeOfDayManagerGameplayOverride = NULL;
    AthenaGameDataTable = NULL;
    MutatorListComponent = CreateDefaultSubobject<UFortMutatorListComponent>(TEXT("MutatorList"));
    SupportedAthenaLootTierGroups.AddDefaulted(45);
    bEnableCompetitiveMissingPlayerMatchInvalidation = false;
    StartAircraftPhaseRequiredAlivePlayersPercent = 1;
    EndAircraftPhaseRequiredAlivePlayersPercent = 1;
    bEnableCompetitiveDDoSDetectionMatchInvalidation = false;
    DDoSDetectionMatchInvalidationCount = 0;
    DDoSDetectionMatchInvalidationEvalDurationSeconds = 1;
    bReticulateSplineKeysOnStart = false;
}

