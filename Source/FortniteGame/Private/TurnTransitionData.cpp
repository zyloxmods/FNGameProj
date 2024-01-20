#include "TurnTransitionData.h"

FTurnTransitionData::FTurnTransitionData() {
    this->MinYawAngle = 0.00f;
    this->MaxYawAngle = 0.00f;
    this->TurnRate = 0.00f;
    this->PriorityLevel = 0;
    this->bEnableSpeedConstraint = false;
    this->bSkipTransitionInCrowd = false;
}

