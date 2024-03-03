#include "FortAnimInput_STWHoverBoard.h"

FFortAnimInput_STWHoverBoard::FFortAnimInput_STWHoverBoard() {
    this->HoverCycleVelocityCurve = NULL;
    this->HoverHeightCurve = NULL;
    this->HoverLeanCurve = NULL;
    this->HoverPitchCurve = NULL;
    this->HoverTransformAlpha = 1;
    this->HoverCycle = 1;
    this->HoverHeight = 1;
    this->HoverLeanAngle = 1;
    this->HoverPitchAngle = 1;
    this->HoverYaw = 1;
    this->HoverYawCurrent = 1;
    this->HoverIdleLeanAlpha = 1;
    this->bIsUsingHoverboard = false;
}

