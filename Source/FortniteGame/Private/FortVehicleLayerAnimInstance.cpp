#include "FortVehicleLayerAnimInstance.h"

UFortVehicleLayerAnimInstance::UFortVehicleLayerAnimInstance() {
    Gender = EFortCustomGender::Invalid;
    LocalVelocityYawAngle = 1;
    SlopePitchDegreeAngle = 1;
    SlopeRollDegreeAngle = 1;
    LocomotionCardinalDirection = EFortCardinalDirection::North;
    bHasBalloons = false;
    bIsDriver = false;
    bIsFrontPassenger = false;
    bIsBackLeftPassenger = false;
    bIsBackRightPassenger = false;
    bTransitionLocomotionAdditiveCrouchTurning = false;
    bRecentlyFired = false;
}

