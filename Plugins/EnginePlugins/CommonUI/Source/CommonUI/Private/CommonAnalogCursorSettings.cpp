#include "CommonAnalogCursorSettings.h"

FCommonAnalogCursorSettings::FCommonAnalogCursorSettings() {
    this->PreprocessorPriority = 0;
    this->bEnableCursorAcceleration = false;
    this->CursorAcceleration = 1;
    this->CursorMaxSpeed = 1;
    this->CursorDeadZone = 1;
    this->HoverSlowdownFactor = 1;
    this->ScrollDeadZone = 1;
    this->ScrollUpdatePeriod = 1;
    this->ScrollMultiplier = 1;
}

