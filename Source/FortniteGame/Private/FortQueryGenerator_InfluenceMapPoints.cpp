#include "FortQueryGenerator_InfluenceMapPoints.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_InfluenceMapPoints::UFortQueryGenerator_InfluenceMapPoints() {
    this->bOnlyFlatSurface = true;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

