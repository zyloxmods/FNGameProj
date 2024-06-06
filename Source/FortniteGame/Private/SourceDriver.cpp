#include "SourceDriver.h"

FSourceDriver::FSourceDriver() {
    SourceComponent = EComponentType::None;
    UseQuaternion = false;
    DrivingCurve = NULL;
    Multiplier = 1;
    bUseRange = false;
    RangeMin = 1;
    RangeMax = 1;
    RemappedMin = 1;
    RemappedMax = 1;
}

