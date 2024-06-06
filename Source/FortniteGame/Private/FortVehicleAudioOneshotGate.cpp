#include "FortVehicleAudioOneshotGate.h"

FFortVehicleAudioOneshotGate::FFortVehicleAudioOneshotGate() {
    GateValue = 1;
    Direction = EVehicleAudioTriggerDir::Forward;
    FadeWhenOutsideGate = false;
    Sound = NULL;
    MinTimeSinceTrigger = 1;
    InterruptFadeTime = 1;
    AudioComp = NULL;
}

