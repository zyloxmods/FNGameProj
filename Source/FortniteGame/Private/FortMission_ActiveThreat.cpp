#include "FortMission_ActiveThreat.h"

void AFortMission_ActiveThreat::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortMission_ActiveThreat::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

AFortMission_ActiveThreat::AFortMission_ActiveThreat() {
    this->bStartBasedOnAthenaGamePhases = false;
    this->StartingGamePhase = EAthenaGamePhase::Count;
    this->StartingDelay = 0.00f;
    this->StartingActiveThreatEncounterIndex = 0;
    this->SyncedEncounterStartingTime = 0.00f;
    this->CurrentActiveThreatEncounterIndex = 0;
}

