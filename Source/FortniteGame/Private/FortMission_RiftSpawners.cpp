#include "FortMission_RiftSpawners.h"

void AFortMission_RiftSpawners::SetCalendarAllowsActive(bool bInCanBeActive) {
}

void AFortMission_RiftSpawners::OnFinalSpawnUsed(UFortAIEncounterInfo* Encounter) {
}

void AFortMission_RiftSpawners::OnActiveEventsChanged(const TArray<FString>& ActiveEventFlags) {
}

void AFortMission_RiftSpawners::HandleRiftDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortMission_RiftSpawners::HandleRampStarted(UFortAIEncounterInfo* Encounter) {
}

void AFortMission_RiftSpawners::HandleEncounterAllBurstEnemiesSpawned(UFortAIEncounterInfo* Encounter) {
}

void AFortMission_RiftSpawners::HandleAthenaSafeZonePhaseChanged() {
}

void AFortMission_RiftSpawners::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortMission_RiftSpawners::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

AFortMission_RiftSpawners::AFortMission_RiftSpawners() {
    bStartBasedOnAthenaGamePhases = false;
    StartingGamePhase = EAthenaGamePhase::None;
    StartingDelay = 1;
    bUseAthenaSafeZonePhases = false;
    bSynchronizeEncounterStartTimes = true;
    MinEncounterIndex = 0;
    MaxEncounterIndex = 0;
    bAllowRiftIntensification = false;
    SpawnerShutdownCheckInterval = 1;
    BurstFallbackTime = 1;
    CalendarRecheckInterval = 1;
    CurrentEncounterIndex = 0;
    bRiftSpawningInProgress = false;
    SyncedEncounterStartTime = 1;
    bCalendarAllowsSpawning = true;
}

