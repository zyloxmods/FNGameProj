#include "FortCollisionAudioTriggerData.h"

FFortCollisionAudioTriggerData::FFortCollisionAudioTriggerData() {
    Asset = NULL;
    bImpulseMagnitudeLowerBound = false;
    bImpulseMagnitudeUpperBound = false;
    MinRetriggerTime = 1;
    MaxTriggerDistance = 1;
}

