#include "AIAssignmentInfo.h"

FAIAssignmentInfo::FAIAssignmentInfo() {
    TimeCurrentGoalWasChosen = 1;
    TimeExitedLastAssignmentOfType[0] = 1;
    TimeExitedLastAssignmentOfType[1] = 1;
    TimeExitedLastAssignmentOfType[2] = 1;
    TimeExitedLastAssignmentOfType[3] = 1;
    bWaitingForQueryResponse = false;
    bSuppressGoalUpdates = false;
    bReportEnemyGoalSelection = false;
}

