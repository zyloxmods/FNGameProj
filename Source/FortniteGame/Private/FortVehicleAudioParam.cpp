#include "FortVehicleAudioParam.h"

FFortVehicleAudioParam::FFortVehicleAudioParam() {
    Value = 1;
    InterpType = EVehicleAudioInterpolationType::None;
    Curve = NULL;
    AttackSpeed = 1;
    ReleaseSpeed = 1;
}

