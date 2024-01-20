#include "FortVehicleAudioOneshotGate.h"

FFortVehicleAudioOneshotGate::FFortVehicleAudioOneshotGate() {
    this->GateValue = 0.00f;
    this->Direction = EVehicleAudioTriggerDir::Forward;
    this->FadeWhenOutsideGate = false;
    this->Sound = NULL;
    this->MinTimeSinceTrigger = 0.00f;
    this->InterruptFadeTime = 0.00f;
    this->AudioComp = NULL;
}

