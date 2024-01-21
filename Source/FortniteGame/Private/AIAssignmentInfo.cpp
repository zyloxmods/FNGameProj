#include "AIAssignmentInfo.h"

FAIAssignmentInfo::FAIAssignmentInfo() {
    this->TimeCurrentGoalWasChosen = 0.00f;
    this->TimeExitedLastAssignmentOfType[0] = 0.00f;
    this->TimeExitedLastAssignmentOfType[1] = 0.00f;
    this->TimeExitedLastAssignmentOfType[2] = 0.00f;
    this->TimeExitedLastAssignmentOfType[3] = 0.00f;
    this->bWaitingForQueryResponse = false;
    this->bSuppressGoalUpdates = false;
    this->bReportEnemyGoalSelection = false;
}

