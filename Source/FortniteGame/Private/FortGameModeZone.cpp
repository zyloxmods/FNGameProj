#include "FortGameModeZone.h"
#include "FortVisibilityManager.h"
#include "Templates/SubclassOf.h"

void AFortGameModeZone::SetZoneLootNamedWeightsMapOverride(const TMap<FName, float>& NewOverrideMap) {
}

void AFortGameModeZone::SetSpawnWithinStormShield(bool bSpawnInStormShield) {
}

void AFortGameModeZone::SetPlayerStartLocationOverrides(TArray<FVector> InPlayerStarts, AFortMission* InMission) {
}

void AFortGameModeZone::SetJoinability(bool bMatchJoinable) {
}

void AFortGameModeZone::SetEnemyAIItemCacheLootDrops(bool bValue) {
}

void AFortGameModeZone::SetActiveSpawnPad(ABuildingSMActor* InActiveSpawnPad) {
}

void AFortGameModeZone::ReplicateHealthAndShield() {
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
    bSpawnAllStuff = false;
    bDisableAI = false;
    bInitBeaconAtInitGame = true;
    OverrideAIDirectorIndex = 0;
    ActiveSpawnPad = NULL;
    bDisableVoiceChat = false;
    ReplayStreamerOverride = TEXT("FortniteReplayStreamer");
    AIDirector = NULL;
    AIGoalManager = NULL;
    EndOfZoneRemainTime = 0;
    TaggedActorsManager = NULL;
    BuildingOctreeManager = NULL;
    bUseAllSocketsInSpawnPad = false;
    bAllowSpectateAfterDeath = false;
    bForceSpectateAfterDeathRegardlessOfRespawnTime = false;
    SpectateAfterDeath_DelayRepeating = 1;
    VisibilityManagerClass = AFortVisibilityManager::StaticClass();
    bCriticalMissionEligible = true;
    XboxSubsystemNames.AddDefaulted(2);
    PetManager = NULL;
    bAllowEnemyAIWorldItemLootDrops = true;
    bAllowEnemyAIItemCacheLootDrops = true;
    bAllowContainerItemCacheLootDrops = true;
    bTrustXboxPlatformId = false;
    AssociatedSubGame = ESubGame::Campaign;
    bTryToSpawnWithinStormShield = false;
    bSupportOneHitBuildingActorRecycling = false;
    bOneHitResourcesGoToOwner = true;
    StormWindInactiveMagnitudeScalar = 1;
    StormWindActiveMagnitudeScalar = 1;
    bEnableLongRangeAutoPickup = false;
    LongRangeAutoPickupInterval = 1;
    LongRangeAutoPickupRadius = 1;
}

