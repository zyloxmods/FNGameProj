#include "FortAnimInput_HoverBoard.h"

FFortAnimInput_HoverBoard::FFortAnimInput_HoverBoard() {
    this->bIsUsingHoverboard = false;
    this->HoverTransformAlpha = 0.00f;
    this->HoverCycle = 0.00f;
    this->HoverCycleVelocityCurve = NULL;
    this->HoverHeight = 0.00f;
    this->HoverHeightCurve = NULL;
    this->HoverLeanAngle = 0.00f;
    this->HoverLeanCurve = NULL;
    this->HoverPitchAngle = 0.00f;
    this->HoverYaw = 0.00f;
    this->HoverYawCurrent = 0.00f;
    this->HoverIdleLeanAlpha = 0.00f;
    this->HoverPitchCurve = NULL;
}

