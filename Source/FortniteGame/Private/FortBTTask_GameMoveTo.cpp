#include "FortBTTask_GameMoveTo.h"

UFortBTTask_GameMoveTo::UFortBTTask_GameMoveTo() {
    PathObstacleAction = EPathObstacleAction::Melee;
    PushBumpedPawnClass = NULL;
    bDetectUnexpectedPathBlockingObstacles = true;
    bEnableSlowdownAtGoal = false;
    bFinishMoveOnOverlap = true;
    bDeimosFlavor = false;
}

