#include "FortQueryGenerator_HotspotSlots.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_HotspotSlots::UFortQueryGenerator_HotspotSlots() {
    GenerateAround = UEnvQueryContext_Querier::StaticClass();
    bUseTetherZone = false;
    HotspotClass = NULL;
}

