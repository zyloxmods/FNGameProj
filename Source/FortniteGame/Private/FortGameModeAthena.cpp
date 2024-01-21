#include "FortGameModeAthena.h"
#include "FortLiveBroadcastController.h"
#include "FortLiveSpectatorController.h"
#include "FortMutatorListComponent.h"
#include "MegaStormManager.h"
#include "Templates/SubclassOf.h"

bool AFortGameModeAthena::ShouldSpawnVehicle(TSubclassOf<AFortAthenaVehicle> VehicleClass) {
    return false;
}

void AFortGameModeAthena::SetTimeOfDayManagerGameplayOverride(TSubclassOf<AFortTimeOfDayManager> TimeOfDayManagerClass) {
}

void AFortGameModeAthena::SafeZoneInsideChecks() {
}

void AFortGameModeAthena::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
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

TSubclassOf<AFortAthenaVehicle> AFortGameModeAthena::GetVehicleClassOverride(TSubclassOf<AFortAthenaVehicle> DefaultVehicleClass) const {
    return NULL;
}

AFortGameplayMutator* AFortGameModeAthena::GetMutatorByClass_Implementation(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass) {
    return NULL;
}

AFortGameplayMutator* AFortGameModeAthena::GetGameplayMutator(FGameplayTag MutatorTag) {
    return NULL;
}

void AFortGameModeAthena::FireServerPerformanceEvent() {
}


void AFortGameModeAthena::EnableGameplayMutator(FGameplayTag MutatorTag, bool bEnable) {
}

AFortGameModeAthena::AFortGameModeAthena() {
    this->DelayForStormCapWarning = 7.00f;
    this->DelayForStormCapDamage = 7.00f;
    this->TimeBetweenStormCapDamage = 5.00f;
    this->StormCapDamagePerTick = 25.00f;
    this->bMapInfoInitialized = false;
    this->bAlwaysDBNO = false;
    this->bNeverSpawnPickupsOnPawnDeath = false;
    this->bLoadTestCosmetics = false;
    this->bDisable3DVoiceChat = true;
    this->bAllowDamageInWarmup = true;
    this->bDisableGCOnServerDuringMatch = true;
    this->bPlaylistHotfixChangedGCDisabling = false;
    this->PlaylistHotfixOriginalGCFrequency = -1.00f;
    this->bUseZebulonDrones = true;
    this->OverloadedInitialConnectTimeout = 90.00f;
    this->FailedToStartMatchTimeout = 120.00f;
    this->OrphanedServerCheckTime = 600.00f;
    this->bEnableRecentPlayersUpdates = false;
    this->DefaultWarmupEarlyRequiredPlayerPercent = 0.90f;
    this->bDisableStormCapSystem = false;
    this->bStormCapSystemEnabled = false;
    this->bAlwaysIncludeDisconnectedTeammates = false;
    this->bIncludeDisconnectedTeammatesFromAircraftPhase = true;
    this->ForceKickAfterDeathMode = EForceKickAfterDeathMode::Disabled;
    this->ForceKickAfterDeathTime = 0.00f;
    this->CreativeModeGracefulShutdownTime = 900;
    this->MaxPlayerCount = 100;
    this->TeamAlivePlayers[0] = 0;
    this->TeamAlivePlayers[1] = 0;
    this->TeamAlivePlayers[2] = 0;
    this->TeamAlivePlayers[3] = 0;
    this->TeamAlivePlayers[4] = 0;
    this->TeamAlivePlayers[5] = 0;
    this->TeamAlivePlayers[6] = 0;
    this->TeamAlivePlayers[7] = 0;
    this->TeamAlivePlayers[8] = 0;
    this->TeamAlivePlayers[9] = 0;
    this->TeamAlivePlayers[10] = 0;
    this->TeamAlivePlayers[11] = 0;
    this->TeamAlivePlayers[12] = 0;
    this->TeamAlivePlayers[13] = 0;
    this->TeamAlivePlayers[14] = 0;
    this->TeamAlivePlayers[15] = 0;
    this->TeamAlivePlayers[16] = 0;
    this->TeamAlivePlayers[17] = 0;
    this->TeamAlivePlayers[18] = 0;
    this->TeamAlivePlayers[19] = 0;
    this->TeamAlivePlayers[20] = 0;
    this->TeamAlivePlayers[21] = 0;
    this->TeamAlivePlayers[22] = 0;
    this->TeamAlivePlayers[23] = 0;
    this->TeamAlivePlayers[24] = 0;
    this->TeamAlivePlayers[25] = 0;
    this->TeamAlivePlayers[26] = 0;
    this->TeamAlivePlayers[27] = 0;
    this->TeamAlivePlayers[28] = 0;
    this->TeamAlivePlayers[29] = 0;
    this->TeamAlivePlayers[30] = 0;
    this->TeamAlivePlayers[31] = 0;
    this->TeamAlivePlayers[32] = 0;
    this->TeamAlivePlayers[33] = 0;
    this->TeamAlivePlayers[34] = 0;
    this->TeamAlivePlayers[35] = 0;
    this->TeamAlivePlayers[36] = 0;
    this->TeamAlivePlayers[37] = 0;
    this->TeamAlivePlayers[38] = 0;
    this->TeamAlivePlayers[39] = 0;
    this->TeamAlivePlayers[40] = 0;
    this->TeamAlivePlayers[41] = 0;
    this->TeamAlivePlayers[42] = 0;
    this->TeamAlivePlayers[43] = 0;
    this->TeamAlivePlayers[44] = 0;
    this->TeamAlivePlayers[45] = 0;
    this->TeamAlivePlayers[46] = 0;
    this->TeamAlivePlayers[47] = 0;
    this->TeamAlivePlayers[48] = 0;
    this->TeamAlivePlayers[49] = 0;
    this->TeamAlivePlayers[50] = 0;
    this->TeamAlivePlayers[51] = 0;
    this->TeamAlivePlayers[52] = 0;
    this->TeamAlivePlayers[53] = 0;
    this->TeamAlivePlayers[54] = 0;
    this->TeamAlivePlayers[55] = 0;
    this->TeamAlivePlayers[56] = 0;
    this->TeamAlivePlayers[57] = 0;
    this->TeamAlivePlayers[58] = 0;
    this->TeamAlivePlayers[59] = 0;
    this->TeamAlivePlayers[60] = 0;
    this->TeamAlivePlayers[61] = 0;
    this->TeamAlivePlayers[62] = 0;
    this->TeamAlivePlayers[63] = 0;
    this->TeamAlivePlayers[64] = 0;
    this->TeamAlivePlayers[65] = 0;
    this->TeamAlivePlayers[66] = 0;
    this->TeamAlivePlayers[67] = 0;
    this->TeamAlivePlayers[68] = 0;
    this->TeamAlivePlayers[69] = 0;
    this->TeamAlivePlayers[70] = 0;
    this->TeamAlivePlayers[71] = 0;
    this->TeamAlivePlayers[72] = 0;
    this->TeamAlivePlayers[73] = 0;
    this->TeamAlivePlayers[74] = 0;
    this->TeamAlivePlayers[75] = 0;
    this->TeamAlivePlayers[76] = 0;
    this->TeamAlivePlayers[77] = 0;
    this->TeamAlivePlayers[78] = 0;
    this->TeamAlivePlayers[79] = 0;
    this->TeamAlivePlayers[80] = 0;
    this->TeamAlivePlayers[81] = 0;
    this->TeamAlivePlayers[82] = 0;
    this->TeamAlivePlayers[83] = 0;
    this->TeamAlivePlayers[84] = 0;
    this->TeamAlivePlayers[85] = 0;
    this->TeamAlivePlayers[86] = 0;
    this->TeamAlivePlayers[87] = 0;
    this->TeamAlivePlayers[88] = 0;
    this->TeamAlivePlayers[89] = 0;
    this->TeamAlivePlayers[90] = 0;
    this->TeamAlivePlayers[91] = 0;
    this->TeamAlivePlayers[92] = 0;
    this->TeamAlivePlayers[93] = 0;
    this->TeamAlivePlayers[94] = 0;
    this->TeamAlivePlayers[95] = 0;
    this->TeamAlivePlayers[96] = 0;
    this->TeamAlivePlayers[97] = 0;
    this->TeamAlivePlayers[98] = 0;
    this->TeamAlivePlayers[99] = 0;
    this->WarmupRequiredPlayerCount = 0;
    this->WarmupCountdownDuration = 90.00f;
    this->WarmupEarlyCountdownDuration = 15.00f;
    this->bSafeZoneActive = false;
    this->bSafeZonePaused = false;
    this->TimeRemainingWhenPhasePaused = 0.00f;
    this->GE_OutsideSafeZone = NULL;
    this->SafeZoneIndicatorClass = NULL;
    this->MegaStormManagerClass = AMegaStormManager::StaticClass();
    this->SafeZonePhase = 0;
    this->SafeZoneIndicator = NULL;
    this->bSafeZoneLocationsInitialized = false;
    this->EndGameKickPlayersDelay = 60.00f;
    this->EventStatSubmitAttempts = 10;
    this->MegaStormManager = NULL;
    this->bUseRandomTimeOfDay = true;
    this->AISettings = NULL;
    this->LiveSpectatorPlayerControllerClass = AFortLiveSpectatorController::StaticClass();
    this->LiveBroadcastPlayerControllerClass = AFortLiveBroadcastController::StaticClass();
    this->PlatformOSSNamesToUploadStatsV1.AddDefaulted(3);
    this->PlatformOSSNamesToUploadStatsV2.AddDefaulted(6);
    this->bEnableMatchmakingRatingUpdate = true;
    this->bFlightPathInitialized = false;
    this->ScorePerMinuteAlive = 0.00f;
    this->ScoreMaxMinutesAliveCounted = 0.00f;
    this->ScoreForGettingAtLeastOneKill = 0.00f;
    this->ScorePerScaledTeamKill = 0.00f;
    this->ScoreForFirstRevive = 0.00f;
    this->ScoreForSubsequentRevives = 0.00f;
    this->MaxAdditionalRevivesToScore = 0;
    this->ScoreMultiplier = 0.00f;
    this->MaxActiveAIActors = -1;
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
}

