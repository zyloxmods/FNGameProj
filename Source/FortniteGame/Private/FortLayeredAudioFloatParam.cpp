#include "FortLayeredAudioFloatParam.h"

FFortLayeredAudioFloatParam::FFortLayeredAudioFloatParam() {
    bEnabled = false;
    Value = 1;
    InterpType = ELayeredAudioInterpolationType::None;
    Curve = NULL;
    AttackSpeed = 1;
    ReleaseSpeed = 1;
    Owner = NULL;
}

