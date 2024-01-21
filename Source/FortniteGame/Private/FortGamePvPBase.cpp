#include "FortGamePvPBase.h"

AFortGamePvPBase::AFortGamePvPBase() {
    this->NumTeams = 0;
    this->RoundTimeLimit = -1;
    this->RoundTimeRemainingCriticalThreshold = -1;
    this->StalemateTimeLimit = -1;
    this->RestartTimeLimit = -1;
    this->FOBFinalizationLimit = 35;
    this->bUsingFOBs = false;
    this->bFOBInitRequested = false;
    this->bAllFOBConfigActorsInitialized = false;
    this->bFinishedSpawningFOBConfigActors = false;
    this->NumFOBConfigActorsPerTeam = -1;
    this->FOBConfigActorClass = NULL;
}

