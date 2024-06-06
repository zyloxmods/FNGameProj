#include "FortVehicleAnimInstance_Jackal.h"

UFortVehicleAnimInstance_Jackal::UFortVehicleAnimInstance_Jackal() {
    JackalVehicle = NULL;
    bIsSprinting = true;
    LocomotionCardinalDirection = EFortCardinalDirection::North;
    RunForwardAlpha = 1;
    LeanYaw = 1;
    CombatLeanYaw = 1;
    bPlayJumpTrickVertical = false;
    bPlayJumpTrick = false;
    bIsMoving = false;
    bInAir = false;
    bIsVehicleJumping = false;
    bIsBoosting = false;
    bIsOnSlope = false;
    bPlayMovingFast = false;
    bPlayDriveSouth = false;
    bPlayAdditiveLeans = false;
    bIdleToMovementStartTransition = false;
    bMovementLoopToMovementStopTransition = false;
    bLocomotionPoseToJumpTransition = false;
    bJumpToLocomotionPoseTransition = false;
    bIdleToMovementLoopTransition = false;
    bMovementLoopToPivotTransition = false;
    bMovementLoopToIdleTransition = false;
    bDefaultToJumpCombatStartTransition = false;
    bJumpApexToJumpFallTransition = false;
    bDefaultToJumpStartTransition = false;
    bCombatModeToSprintModeTransition = false;
    bSprintModeToCombatModeTransition = false;
    bIsPlayingEmoteOnHoverboard = false;
    bShouldApplyAdditive = false;
    bIsBothLegFK = false;
    InPlaceLeansBlendSpaceAlpha = 1;
    CombatLeanYawMultiplier = 1;
    SlopeCheckPitchThresholdDegrees = 1;
    SlopeCheckYawThresholdDegrees = 1;
    AdditiveLeansSpeedThreshold = 1;
}

