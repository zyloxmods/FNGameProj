#include "FortHoagieDriverAnimInstance.h"

UFortHoagieDriverAnimInstance::UFortHoagieDriverAnimInstance() {
    this->BoostCardinalDirection = EFortCardinalDirection::North;
    this->NormalizedAcceleration = 1;
    this->VehicleRoll = 1;
    this->VehicleYaw = 1;
    this->ForwardSpeed = 1;
    this->bIsMovingAnyDirection = false;
    this->bIsMovingFastAnyDirection = false;
    this->bShouldReverse = false;
    this->bShouldGoBackToIdle = false;
    this->bTransition_Default_ReverseStart = false;
    this->bTransition_BoostLoop_Reverse = false;
}

