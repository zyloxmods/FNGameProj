#include "PoiDiscoverabilityDataEntry.h"

FPoiDiscoverabilityDataEntry::FPoiDiscoverabilityDataEntry() {
    this->bDiscovered = false;
    this->bWasInitiallyDiscovered = false;
    this->VisitCounter = 0;
}

