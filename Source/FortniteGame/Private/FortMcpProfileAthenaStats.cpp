#include "FortMcpProfileAthenaStats.h"

UAthenaSeasonStats* UFortMcpProfileAthenaStats::GetLifetimeStats() {
    return NULL;
}

TArray<UAthenaSeasonStats*> UFortMcpProfileAthenaStats::GetLifeTimeAndSeasonList() {
    return TArray<UAthenaSeasonStats*>();
}

UFortMcpProfileAthenaStats::UFortMcpProfileAthenaStats() {
    this->LifeTimeStats = NULL;
}

