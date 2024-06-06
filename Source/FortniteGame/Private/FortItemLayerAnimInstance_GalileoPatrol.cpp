#include "FortItemLayerAnimInstance_GalileoPatrol.h"

UFortItemLayerAnimInstance_GalileoPatrol::UFortItemLayerAnimInstance_GalileoPatrol() {
    WalkAdditiveStartOffset = 1;
    bRecentlyFired = false;
    bIsLandPatrolling = false;
    bIdle_Walk_Transition = false;
    bIsPatrolLocomotionCurrentTimeAboveThreshold = false;
}

