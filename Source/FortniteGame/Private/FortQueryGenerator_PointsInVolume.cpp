#include "FortQueryGenerator_PointsInVolume.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_PointsInVolume::UFortQueryGenerator_PointsInVolume() {
    NavMeshToUse = EFortNamedNavmesh::Husk;
    GenerateIn = UEnvQueryContext_Querier::StaticClass();
}

