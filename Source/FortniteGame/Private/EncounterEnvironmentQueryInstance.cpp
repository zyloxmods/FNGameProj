#include "EncounterEnvironmentQueryInstance.h"

FEncounterEnvironmentQueryInstance::FEncounterEnvironmentQueryInstance() {
    this->QueryID = 0;
    this->bIsWaitingForQueryResults = false;
    this->ChosenDirection = EFortEncounterDirection::North;
    this->NumTimesUsed = 0;
}

