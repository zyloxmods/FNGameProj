#include "FortPendingStoppedEncounterData.h"

FFortPendingStoppedEncounterData::FFortPendingStoppedEncounterData() {
    Encounter = NULL;
    ObjectiveStatus = EFortObjectiveStatus::Created;
    bForceDestroyAI = false;
    bEncounterCompletedSuccessfully = false;
}

