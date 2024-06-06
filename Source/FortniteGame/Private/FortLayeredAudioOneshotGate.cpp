#include "FortLayeredAudioOneshotGate.h"

FFortLayeredAudioOneshotGate::FFortLayeredAudioOneshotGate() {
    Sound = NULL;
    GateValue = 1;
    Direction = ELayeredAudioTriggerDir::Forward;
    FadeWhenOutsideGate = false;
    MinTimeSinceTrigger = 1;
    InterruptFadeTime = 1;
    AudioComp = NULL;
}

