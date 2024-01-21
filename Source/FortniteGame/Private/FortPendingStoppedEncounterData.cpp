#include "FortPendingStoppedEncounterData.h"

FFortPendingStoppedEncounterData::FFortPendingStoppedEncounterData() {
    this->Encounter = NULL;
    this->ObjectiveStatus = EFortObjectiveStatus::Created;
    this->bForceDestroyAI = false;
    this->bEncounterCompletedSuccessfully = false;
}

