#include "FortVehicleLayerAnimInstance.h"

UFortVehicleLayerAnimInstance::UFortVehicleLayerAnimInstance() {
    this->Gender = EFortCustomGender::Invalid;
    this->LocalVelocityYawAngle = 1;
    this->SlopePitchDegreeAngle = 1;
    this->SlopeRollDegreeAngle = 1;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->bHasBalloons = false;
    this->bIsDriver = false;
    this->bIsFrontPassenger = false;
    this->bIsBackLeftPassenger = false;
    this->bIsBackRightPassenger = false;
    this->bTransitionLocomotionAdditiveCrouchTurning = false;
    this->bRecentlyFired = false;
}

