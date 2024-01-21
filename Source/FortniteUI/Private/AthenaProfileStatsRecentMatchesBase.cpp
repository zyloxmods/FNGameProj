#include "AthenaProfileStatsRecentMatchesBase.h"

void UAthenaProfileStatsRecentMatchesBase::Setup(const FUniqueNetIdRepl& InUniqueId) {
}



void UAthenaProfileStatsRecentMatchesBase::OnProfileLoaded(UFortMcpProfileAthenaStats* ProfileAthenaStats) {
}



FUniqueNetIdRepl UAthenaProfileStatsRecentMatchesBase::GetUniqueID() const {
    return FUniqueNetIdRepl{};
}

TArray<UAthenaMatchStatView*> UAthenaProfileStatsRecentMatchesBase::GetRecentMatches() const {
    return TArray<UAthenaMatchStatView*>();
}

UAthenaProfileStatsRecentMatchesBase::UAthenaProfileStatsRecentMatchesBase() {
}

