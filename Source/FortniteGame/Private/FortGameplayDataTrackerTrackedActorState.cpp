#include "FortGameplayDataTrackerTrackedActorState.h"

FFortGameplayDataTrackerTrackedActorState::FFortGameplayDataTrackerTrackedActorState() {
    TrackedActor = NULL;
    TrackedActorAsPawn = NULL;
    TrackedActorAsBuilding = NULL;
    bHasUnprocessedStateEntry = false;
}

