#include "FortAnimInput_TurnCorrection.h"

FFortAnimInput_TurnCorrection::FFortAnimInput_TurnCorrection() {
    this->YawCorrectionOffset = 1;
    this->MaxYawCorrectionOffset = 1;
    this->CharacterMeshYawOffset = 1;
    this->CurveMultiplier = 1;
    this->CharacterInitialWorldYaw = 1;
    this->CharacterWorldYawLastFrame = 1;
    this->AccumulatedAnimationYaw = 1;
    this->TotalYawFromCurve = 1;
    this->RotationCurveYawLastFrame = 1;
    this->bEnableDebug = false;
    this->bIsTurnFinished = false;
}

