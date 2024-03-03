#include "FortSquadStatsWidgetBase.h"

void UFortSquadStatsWidgetBase::RequestStatsUpdate() {
}

void UFortSquadStatsWidgetBase::RequestShowPreviewStats() {
}



FUniqueNetIdRepl UFortSquadStatsWidgetBase::GetLocalPlayerId() const {
    return FUniqueNetIdRepl{};
}

UFortSquadStatsWidgetBase::UFortSquadStatsWidgetBase() {
    this->DetailedStats = NULL;
}

