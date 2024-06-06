#include "PendingDeployableManagerAction.h"

FPendingDeployableManagerAction::FPendingDeployableManagerAction() {
    ActionType = EQueueActionType::Plot;
    CurrentPlotRunningIndex = 0;
    DesiredPlotState = EDeployableBaseBuildingState::Empty;
    Manager = NULL;
}

