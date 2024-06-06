#include "AthenaSeasonStats.h"

UAthenaSeasonItemDefinition* UAthenaSeasonStats::GetSeasonDefintion() {
    return NULL;
}

UAthenaSeasonStats::UAthenaSeasonStats() {
    CumulativeStats = NULL;
    SeasonDefinition = NULL;
}

