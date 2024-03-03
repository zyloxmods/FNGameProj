#include "AIAssignmentInfo.h"

FAIAssignmentInfo::FAIAssignmentInfo() {
    this->TimeCurrentGoalWasChosen = 1;
    this->TimeExitedLastAssignmentOfType[0] = 1;
    this->TimeExitedLastAssignmentOfType[1] = 1;
    this->TimeExitedLastAssignmentOfType[2] = 1;
    this->TimeExitedLastAssignmentOfType[3] = 1;
    this->bWaitingForQueryResponse = false;
    this->bSuppressGoalUpdates = false;
    this->bReportEnemyGoalSelection = false;
}

