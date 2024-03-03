#include "SourceDriver.h"

FSourceDriver::FSourceDriver() {
    this->SourceComponent = EComponentType::None;
    this->UseQuaternion = false;
    this->DrivingCurve = NULL;
    this->Multiplier = 1;
    this->bUseRange = false;
    this->RangeMin = 1;
    this->RangeMax = 1;
    this->RemappedMin = 1;
    this->RemappedMax = 1;
}

