#include "EncounterEnvironmentQueryInstance.h"

FEncounterEnvironmentQueryInstance::FEncounterEnvironmentQueryInstance() {
    QueryID = 0;
    bIsWaitingForQueryResults = false;
    ChosenDirection = EFortEncounterDirection::North;
    NumTimesUsed = 0;
}

