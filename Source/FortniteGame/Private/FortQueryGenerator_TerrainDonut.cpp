#include "FortQueryGenerator_TerrainDonut.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_TerrainDonut::UFortQueryGenerator_TerrainDonut() {
    Center = UEnvQueryContext_Querier::StaticClass();
    bFilterAllowTerrain = true;
    bFilterAllowBuildings = false;
}

