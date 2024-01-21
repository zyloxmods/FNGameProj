#include "FortVehicleAudioParam.h"

FFortVehicleAudioParam::FFortVehicleAudioParam() {
    this->Value = 0.00f;
    this->InterpType = EVehicleAudioInterpolationType::None;
    this->Curve = NULL;
    this->AttackSpeed = 0.00f;
    this->ReleaseSpeed = 0.00f;
}

