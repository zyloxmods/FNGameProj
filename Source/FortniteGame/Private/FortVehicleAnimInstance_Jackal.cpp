#include "FortVehicleAnimInstance_Jackal.h"

UFortVehicleAnimInstance_Jackal::UFortVehicleAnimInstance_Jackal() {
    this->JackalVehicle = NULL;
    this->bIsSprinting = true;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->RunForwardAlpha = 0.00f;
    this->LeanYaw = 0.00f;
    this->CombatLeanYaw = 0.00f;
    this->bPlayJumpTrickVertical = false;
    this->bPlayJumpTrick = false;
    this->bIsMoving = false;
    this->bInAir = false;
    this->bIsVehicleJumping = false;
    this->bIsBoosting = false;
    this->bIsOnSlope = false;
    this->bPlayMovingFast = false;
    this->bPlayDriveSouth = false;
    this->bPlayAdditiveLeans = false;
    this->bIdleToMovementStartTransition = false;
    this->bMovementLoopToMovementStopTransition = false;
    this->bLocomotionPoseToJumpTransition = false;
    this->bJumpToLocomotionPoseTransition = false;
    this->bIdleToMovementLoopTransition = false;
    this->bMovementLoopToPivotTransition = false;
    this->bMovementLoopToIdleTransition = false;
    this->bDefaultToJumpCombatStartTransition = false;
    this->bJumpApexToJumpFallTransition = false;
    this->bDefaultToJumpStartTransition = false;
    this->bCombatModeToSprintModeTransition = false;
    this->bSprintModeToCombatModeTransition = false;
    this->bIsPlayingEmoteOnHoverboard = false;
    this->bShouldApplyAdditive = false;
    this->bIsBothLegFK = false;
    this->InPlaceLeansBlendSpaceAlpha = 0.00f;
    this->CombatLeanYawMultiplier = 0.65f;
    this->SlopeCheckPitchThresholdDegrees = 20.00f;
    this->SlopeCheckYawThresholdDegrees = 20.00f;
    this->AdditiveLeansSpeedThreshold = 70.00f;
}

