#include "FortVisibilityComponent.h"

UFortVisibilityComponent::UFortVisibilityComponent() {
    this->bRegisterWithVisibilityManager = true;
    this->bObserver = false;
    this->bDistanceCheck2D = true;
    this->bCheckFacing = false;
    this->bCheckLOS = false;
    this->bRevealWithMap = true;
    this->VisibilityBehavior = EFortVisibilityBehavior::Proximity;
    this->Radius = 1000.00f;
}

