#include "FortVisibilityComponent.h"

UFortVisibilityComponent::UFortVisibilityComponent() {
    bRegisterWithVisibilityManager = true;
    bObserver = false;
    bDistanceCheck2D = true;
    bCheckFacing = false;
    bCheckLOS = false;
    bRevealWithMap = true;
    VisibilityBehavior = EFortVisibilityBehavior::Proximity;
    Radius = 1;
}

