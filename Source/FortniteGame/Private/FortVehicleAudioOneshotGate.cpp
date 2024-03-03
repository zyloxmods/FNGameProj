#include "FortVehicleAudioOneshotGate.h"

FFortVehicleAudioOneshotGate::FFortVehicleAudioOneshotGate() {
    this->GateValue = 1;
    this->Direction = EVehicleAudioTriggerDir::Forward;
    this->FadeWhenOutsideGate = false;
    this->Sound = NULL;
    this->MinTimeSinceTrigger = 1;
    this->InterruptFadeTime = 1;
    this->AudioComp = NULL;
}

