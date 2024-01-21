#include "FortQueryGenerator_TerrainDonut.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_TerrainDonut::UFortQueryGenerator_TerrainDonut() {
    this->Center = UEnvQueryContext_Querier::StaticClass();
    this->bFilterAllowTerrain = true;
    this->bFilterAllowBuildings = false;
}

