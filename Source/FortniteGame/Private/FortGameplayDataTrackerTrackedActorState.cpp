#include "FortGameplayDataTrackerTrackedActorState.h"

FFortGameplayDataTrackerTrackedActorState::FFortGameplayDataTrackerTrackedActorState() {
    this->TrackedActor = NULL;
    this->TrackedActorAsPawn = NULL;
    this->TrackedActorAsBuilding = NULL;
    this->bHasUnprocessedStateEntry = false;
}

