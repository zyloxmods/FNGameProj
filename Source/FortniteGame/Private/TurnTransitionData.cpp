#include "TurnTransitionData.h"

FTurnTransitionData::FTurnTransitionData() {
    MinYawAngle = 1;
    MaxYawAngle = 1;
    TurnRate = 1;
    PriorityLevel = 0;
    bEnableSpeedConstraint = false;
    bSkipTransitionInCrowd = false;
}

