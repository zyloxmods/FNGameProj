#include "FortStatsOverviewDetailsBase.h"

void UFortStatsOverviewDetailsBase::RequestStatsUpdate() {
}

void UFortStatsOverviewDetailsBase::ListenForChanges(bool bListen) {
}

FUniqueNetIdRepl UFortStatsOverviewDetailsBase::GetLocalPlayerId() const {
    return FUniqueNetIdRepl{};
}

UFortStatsOverviewDetailsBase::UFortStatsOverviewDetailsBase() {
    this->DetailedStats = NULL;
}

