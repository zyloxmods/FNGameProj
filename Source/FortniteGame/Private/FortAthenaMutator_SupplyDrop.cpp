#include "FortAthenaMutator_SupplyDrop.h"

void AFortAthenaMutator_SupplyDrop::RemoveOutOfStormSupplyDrop() {
}

AFortAthenaMutator_SupplyDrop::AFortAthenaMutator_SupplyDrop() {
    BasePlacementQuery = NULL;
    BaseQueryingAttemptIntervalTimeSeconds = 1;
    SupplyDropRemovalQueryInterval = 1;
}

