#include "FortPhysicsObjectCollisionEffectsData.h"

UFortPhysicsObjectCollisionEffectsData::UFortPhysicsObjectCollisionEffectsData() {
    this->MinRetriggerTime = 1;
    this->MinRetriggerDistance = 1;
    this->MinImpulseMagnitude = 1;
    this->MinMediumImpulseMagnitude = 1;
    this->MinLargeImpulseMagnitude = 1;
    this->MaxLargeImpulseMagnitude = 1;
    this->LinearVelocityThresholdForRolling = 1;
    this->AngularVelocityThresholdForRolling = 1;
    this->RollingCosThreshold = 1;
}

