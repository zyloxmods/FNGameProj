#include "FortQueryGenerator_InfluenceMapPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_InfluenceMapPoints::UFortQueryGenerator_InfluenceMapPoints() {
    bOnlyFlatSurface = true;
    GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

