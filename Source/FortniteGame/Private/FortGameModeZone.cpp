#include "FortGameModeZone.h"
#include "FortVisibilityManager.h"
#include "Templates/SubclassOf.h"

void AFortGameModeZone::SetSpawnWithinStormShield(bool bSpawnInStormShield) {
}

void AFortGameModeZone::SetPlayerStartLocationOverrides(TArray<FVector> InPlayerStarts, AFortMission* InMission) {
}

void AFortGameModeZone::SetJoinability(bool bMatchJoinable) {
}

void AFortGameModeZone::SetEnemyAIItemCacheLootDrops(bool bValue) {
}

void AFortGameModeZone::ReplicateHealthAndShield() {
}

void AFortGameModeZone::OnPlayerExit(AActor* Controller) {
}

void AFortGameModeZone::OnMorningReached() {
}

void AFortGameModeZone::OnEveningReached() {
}

bool AFortGameModeZone::IsSpectatingAllowedAfterDeath_Implementation() const {
    return false;
}

bool AFortGameModeZone::IsGameReadyToSelectLoot() const {
    return false;
}

TSubclassOf<UGameplayEffect> AFortGameModeZone::GetTeammateReviveGameplayEffectOverride_Implementation() {
    return NULL;
}

AFortPlayerStartupController* AFortGameModeZone::GetPlayerStartupController() {
    return NULL;
}

void AFortGameModeZone::ClearPlayerStartLocationOverrides() {
}

AFortGameModeZone::AFortGameModeZone() {
    this->bSpawnAllStuff = false;
    this->bDisableAI = false;
    this->bInitBeaconAtInitGame = true;
    this->OverrideAIDirectorIndex = 0;
    this->ActiveSpawnPad = NULL;
    this->bDisableVoiceChat = false;
    this->ReplayStreamerOverride = TEXT("FortniteReplayStreamer");
    this->AIDirector = NULL;
    this->AIGoalManager = NULL;
    this->EndOfZoneRemainTime = 150;
    this->TaggedActorsManager = NULL;
    this->ConnectivityManager = NULL;
    this->bUseAllSocketsInSpawnPad = false;
    this->bAllowSpectateAfterDeath = false;
    this->SpectateAfterDeath_DelayFirst = 5.00f;
    this->SpectateAfterDeath_DelayRepeating = 2.00f;
    this->VisibilityManagerClass = AFortVisibilityManager::StaticClass();
    this->bCriticalMissionEligible = true;
    this->PetManager = NULL;
    this->bAllowEnemyAIWorldItemLootDrops = true;
    this->bAllowEnemyAIItemCacheLootDrops = true;
    this->bAllowContainerItemCacheLootDrops = true;
    this->bTrustXboxPlatformId = false;
    this->AssociatedSubGame = ESubGame::Campaign;
    this->bTryToSpawnWithinStormShield = false;
    this->bSupportOneHitBuildingActorRecycling = false;
    this->bOneHitResourcesGoToOwner = true;
    this->StormWindInactiveMagnitudeScalar = 1.00f;
    this->StormWindActiveMagnitudeScalar = 1.00f;
}

