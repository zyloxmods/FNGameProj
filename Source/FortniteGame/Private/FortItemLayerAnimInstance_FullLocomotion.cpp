#include "FortItemLayerAnimInstance_FullLocomotion.h"

UFortItemLayerAnimInstance_FullLocomotion::UFortItemLayerAnimInstance_FullLocomotion() {
    LocalVelocityYawAngle = 1;
    LocalVelocityYawAngleMinusMeleeTwist = 1;
    LocalVelocityYawAngleMinusJogBlendSpaceRotation = 1;
    StartAnimDeltaAngleNorth = 1;
    StartAnimDeltaAngleEast = 1;
    StartAnimDeltaAngleSouth = 1;
    StartAnimDeltaAngleWest = 1;
    SpeedAdjustedPlayrate = 1;
    LocomotionCardinalDirection = EFortCardinalDirection::North;
    StopCardinalDirection = EFortCardinalDirection::North;
    PrePivotCardinalDirection = EFortCardinalDirection::North;
    PostPivotCardinalDirection = EFortCardinalDirection::North;
}

