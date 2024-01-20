#include "SourceDriver.h"

FSourceDriver::FSourceDriver() {
    this->SourceComponent = EComponentType::None;
    this->UseQuaternion = false;
    this->DrivingCurve = NULL;
    this->Multiplier = 0.00f;
    this->bUseRange = false;
    this->RangeMin = 0.00f;
    this->RangeMax = 0.00f;
    this->RemappedMin = 0.00f;
    this->RemappedMax = 0.00f;
}

