#include "FortQueryGenerator_HotspotSlots.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_HotspotSlots::UFortQueryGenerator_HotspotSlots() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->bUseTetherZone = false;
    this->HotspotClass = NULL;
}

