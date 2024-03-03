#include "FortMission_ActiveThreat.h"

void AFortMission_ActiveThreat::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortMission_ActiveThreat::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

AFortMission_ActiveThreat::AFortMission_ActiveThreat() {
    this->bStartBasedOnAthenaGamePhases = false;
    this->StartingGamePhase = EAthenaGamePhase::None;
    this->StartingDelay = 1;
    this->StartingActiveThreatEncounterIndex = 0;
    this->SyncedEncounterStartingTime = 1;
    this->CurrentActiveThreatEncounterIndex = 0;
}

