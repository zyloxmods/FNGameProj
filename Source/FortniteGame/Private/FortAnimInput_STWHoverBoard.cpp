#include "FortAnimInput_STWHoverBoard.h"

FFortAnimInput_STWHoverBoard::FFortAnimInput_STWHoverBoard() {
    HoverCycleVelocityCurve = NULL;
    HoverHeightCurve = NULL;
    HoverLeanCurve = NULL;
    HoverPitchCurve = NULL;
    HoverTransformAlpha = 1;
    HoverCycle = 1;
    HoverHeight = 1;
    HoverLeanAngle = 1;
    HoverPitchAngle = 1;
    HoverYaw = 1;
    HoverYawCurrent = 1;
    HoverIdleLeanAlpha = 1;
    bIsUsingHoverboard = false;
}

