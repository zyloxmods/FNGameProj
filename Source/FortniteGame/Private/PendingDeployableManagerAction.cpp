#include "PendingDeployableManagerAction.h"

FPendingDeployableManagerAction::FPendingDeployableManagerAction() {
    this->ActionType = EQueueActionType::Plot;
    this->CurrentPlotRunningIndex = 0;
    this->DesiredPlotState = EDeployableBaseBuildingState::Empty;
    this->Manager = NULL;
}

