#include "FortItemLayerAnimInstance_FullLocomotion.h"

UFortItemLayerAnimInstance_FullLocomotion::UFortItemLayerAnimInstance_FullLocomotion() {
    this->LocalVelocityYawAngle = 1;
    this->LocalVelocityYawAngleMinusMeleeTwist = 1;
    this->LocalVelocityYawAngleMinusJogBlendSpaceRotation = 1;
    this->StartAnimDeltaAngleNorth = 1;
    this->StartAnimDeltaAngleEast = 1;
    this->StartAnimDeltaAngleSouth = 1;
    this->StartAnimDeltaAngleWest = 1;
    this->SpeedAdjustedPlayrate = 1;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->StopCardinalDirection = EFortCardinalDirection::North;
    this->PrePivotCardinalDirection = EFortCardinalDirection::North;
    this->PostPivotCardinalDirection = EFortCardinalDirection::North;
}

