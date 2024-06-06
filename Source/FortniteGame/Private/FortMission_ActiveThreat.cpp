#include "FortMission_ActiveThreat.h"

void AFortMission_ActiveThreat::HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortMission_ActiveThreat::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

AFortMission_ActiveThreat::AFortMission_ActiveThreat() {
    bStartBasedOnAthenaGamePhases = false;
    StartingGamePhase = EAthenaGamePhase::None;
    StartingDelay = 1;
    StartingActiveThreatEncounterIndex = 0;
    SyncedEncounterStartingTime = 1;
    CurrentActiveThreatEncounterIndex = 0;
}

