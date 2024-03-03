#include "FortAthenaMutator_SupplyDrop.h"

void AFortAthenaMutator_SupplyDrop::RemoveOutOfStormSupplyDrop() {
}

AFortAthenaMutator_SupplyDrop::AFortAthenaMutator_SupplyDrop() {
    this->BasePlacementQuery = NULL;
    this->BaseQueryingAttemptIntervalTimeSeconds = 1;
    this->SupplyDropRemovalQueryInterval = 1;
}

