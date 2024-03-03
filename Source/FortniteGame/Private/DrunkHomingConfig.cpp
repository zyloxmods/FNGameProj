#include "DrunkHomingConfig.h"

FDrunkHomingConfig::FDrunkHomingConfig() {
    this->DrunkOverrideSpeedCurve = NULL;
    this->DirectionChangeRate = 1;
    this->LookaheadDist = 1;
    this->TurnAngle = 1;
    this->TurnAngleBlendOut = 1;
    this->DrunkDuration = 1;
    this->MinPitch = 1;
    this->RandomTargetPositionRadius = 1;
    this->PassedTargetSlackTime = 1;
    this->TurnAngleClamp = 1;
    this->DrunkBlendOutRange = 1;
    this->DrunkBlendOutTimeThreshold = 1;
    this->DrunkBlendOutTime = 1;
    this->DrunkBlendOutTurnSpeed = 1;
    this->AimPointMaxRange = 1;
}

