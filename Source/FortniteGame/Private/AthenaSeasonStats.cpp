#include "AthenaSeasonStats.h"

UAthenaSeasonItemDefinition* UAthenaSeasonStats::GetSeasonDefintion() {
    return NULL;
}

UAthenaSeasonStats::UAthenaSeasonStats() {
    this->CumulativeStats = NULL;
    this->SeasonDefinition = NULL;
}

