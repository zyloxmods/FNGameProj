#include "FortPhysicsObjectCollisionEffectsData.h"

UFortPhysicsObjectCollisionEffectsData::UFortPhysicsObjectCollisionEffectsData() {
    MinRetriggerTime = 1;
    MinRetriggerDistance = 1;
    MinImpulseMagnitude = 1;
    MinMediumImpulseMagnitude = 1;
    MinLargeImpulseMagnitude = 1;
    MaxLargeImpulseMagnitude = 1;
    LinearVelocityThresholdForRolling = 1;
    AngularVelocityThresholdForRolling = 1;
    RollingCosThreshold = 1;
}

