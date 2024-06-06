#include "FortAnimInput_TurnCorrection.h"

FFortAnimInput_TurnCorrection::FFortAnimInput_TurnCorrection() {
    YawCorrectionOffset = 1;
    MaxYawCorrectionOffset = 1;
    CharacterMeshYawOffset = 1;
    CurveMultiplier = 1;
    CharacterInitialWorldYaw = 1;
    CharacterWorldYawLastFrame = 1;
    AccumulatedAnimationYaw = 1;
    TotalYawFromCurve = 1;
    RotationCurveYawLastFrame = 1;
    bEnableDebug = false;
    bIsTurnFinished = false;
}

