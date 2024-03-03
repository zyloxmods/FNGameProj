#include "AthenaEventMatchScoreboardScreenBase.h"


void UAthenaEventMatchScoreboardScreenBase::HandleSquadKillScoreChanged(UAthenaRemoteSquadViewData* InSquadData, int32 InKillScore) {
}

void UAthenaEventMatchScoreboardScreenBase::HandleSquadEliminated(UAthenaRemoteSquadViewData* InSquadData) {
}

UAthenaEventMatchScoreboardScreenBase::UAthenaEventMatchScoreboardScreenBase() {
    this->ScoreboardListView = NULL;
}

