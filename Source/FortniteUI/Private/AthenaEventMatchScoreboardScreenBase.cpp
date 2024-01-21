#include "AthenaEventMatchScoreboardScreenBase.h"



void UAthenaEventMatchScoreboardScreenBase::SetSquadIdsVisible(bool bSquadIdsVisible) {
}

void UAthenaEventMatchScoreboardScreenBase::OnToggleStormcapDamageActionExecuted(bool& bPassThrough) {
}

void UAthenaEventMatchScoreboardScreenBase::OnSquadKillscoreChanged(UAthenaRemoteSquadViewData* InSquadData, int32 InKillScore) {
}

void UAthenaEventMatchScoreboardScreenBase::OnSquadEliminated(UAthenaRemoteSquadViewData* InSquadData) {
}

void UAthenaEventMatchScoreboardScreenBase::OnSortByPlaceActionExecuted(bool& bPassThrough) {
}

void UAthenaEventMatchScoreboardScreenBase::OnSortByEliminationsActionExecuted(bool& bPassThrough) {
}

UAthenaEventMatchScoreboardScreenBase::UAthenaEventMatchScoreboardScreenBase() {
    this->ScoreboardListView = NULL;
}

