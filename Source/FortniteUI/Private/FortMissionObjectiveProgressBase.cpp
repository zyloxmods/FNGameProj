#include "FortMissionObjectiveProgressBase.h"

void UFortMissionObjectiveProgressBase::Update_Implementation(AFortObjectiveBase* Objective, int32 BarIndex) {
}


UFortMissionObjectiveProgressBase::UFortMissionObjectiveProgressBase() {
    this->ObjectiveProgressBar = NULL;
    this->ProgressBarText = NULL;
}

