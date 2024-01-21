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
    this->bStartBasedOnAthenaGamePhases = false;
    this->StartingGamePhase = EAthenaGamePhase::Count;
    this->StartingDelay = 0.00f;
    this->bUseAthenaSafeZonePhases = false;
    this->bSynchronizeEncounterStartTimes = true;
    this->MinEncounterIndex = 0;
    this->MaxEncounterIndex = 0;
    this->bAllowRiftIntensification = false;
    this->SpawnerShutdownCheckInterval = 15.00f;
    this->BurstFallbackTime = 15.00f;
    this->CalendarRecheckInterval = 0.10f;
    this->CurrentEncounterIndex = 0;
    this->bRiftSpawningInProgress = false;
    this->SyncedEncounterStartTime = 0.00f;
    this->bCalendarAllowsSpawning = true;
}

