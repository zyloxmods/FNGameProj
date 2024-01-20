#include "FortQueryGenerator_PointsInVolume.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_PointsInVolume::UFortQueryGenerator_PointsInVolume() {
    this->NavMeshToUse = EFortNamedNavmesh::Husk;
    this->GenerateIn = UEnvQueryContext_Querier::StaticClass();
}

