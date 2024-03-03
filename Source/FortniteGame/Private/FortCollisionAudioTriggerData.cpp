#include "FortCollisionAudioTriggerData.h"

FFortCollisionAudioTriggerData::FFortCollisionAudioTriggerData() {
    this->Asset = NULL;
    this->bImpulseMagnitudeLowerBound = false;
    this->bImpulseMagnitudeUpperBound = false;
    this->MinRetriggerTime = 1;
    this->MaxTriggerDistance = 1;
}

