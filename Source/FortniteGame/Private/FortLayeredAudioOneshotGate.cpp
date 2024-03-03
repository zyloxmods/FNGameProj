#include "FortLayeredAudioOneshotGate.h"

FFortLayeredAudioOneshotGate::FFortLayeredAudioOneshotGate() {
    this->Sound = NULL;
    this->GateValue = 1;
    this->Direction = ELayeredAudioTriggerDir::Forward;
    this->FadeWhenOutsideGate = false;
    this->MinTimeSinceTrigger = 1;
    this->InterruptFadeTime = 1;
    this->AudioComp = NULL;
}

