#include "FortVehicleAudioParam.h"

FFortVehicleAudioParam::FFortVehicleAudioParam() {
    this->Value = 1;
    this->InterpType = EVehicleAudioInterpolationType::None;
    this->Curve = NULL;
    this->AttackSpeed = 1;
    this->ReleaseSpeed = 1;
}

