#include "TurnTransitionData.h"

FTurnTransitionData::FTurnTransitionData() {
    this->MinYawAngle = 1;
    this->MaxYawAngle = 1;
    this->TurnRate = 1;
    this->PriorityLevel = 0;
    this->bEnableSpeedConstraint = false;
    this->bSkipTransitionInCrowd = false;
}

