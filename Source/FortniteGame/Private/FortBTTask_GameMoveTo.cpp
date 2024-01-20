#include "FortBTTask_GameMoveTo.h"

UFortBTTask_GameMoveTo::UFortBTTask_GameMoveTo() {
    this->PathObstacleAction = EPathObstacleAction::Melee;
    this->PushBumpedPawnClass = NULL;
    this->bDetectUnexpectedPathBlockingObstacles = true;
    this->bEnableSlowdownAtGoal = false;
    this->bFinishMoveOnOverlap = true;
    this->bDeimosFlavor = false;
}

