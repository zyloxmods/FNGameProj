#include "FortLayeredAudioFloatParam.h"

FFortLayeredAudioFloatParam::FFortLayeredAudioFloatParam() {
    this->bEnabled = false;
    this->Value = 1;
    this->InterpType = ELayeredAudioInterpolationType::None;
    this->Curve = NULL;
    this->AttackSpeed = 1;
    this->ReleaseSpeed = 1;
    this->Owner = NULL;
}

