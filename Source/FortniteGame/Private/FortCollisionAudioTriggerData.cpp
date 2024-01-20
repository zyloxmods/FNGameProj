#include "FortCollisionAudioTriggerData.h"

FFortCollisionAudioTriggerData::FFortCollisionAudioTriggerData() {
    this->Asset = NULL;
    this->bImpulseMagnitudeLowerBound = false;
    this->bImpulseMagnitudeUpperBound = false;
    this->MinRetriggerTime = 0.00f;
    this->MaxTriggerDistance = 0.00f;
}

