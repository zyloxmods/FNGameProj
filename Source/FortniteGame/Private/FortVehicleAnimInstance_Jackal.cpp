#include "FortVehicleAnimInstance_Jackal.h"

UFortVehicleAnimInstance_Jackal::UFortVehicleAnimInstance_Jackal() {
    this->JackalVehicle = NULL;
    this->bIsSprinting = true;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->RunForwardAlpha = 1;
    this->LeanYaw = 1;
    this->CombatLeanYaw = 1;
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
    this->InPlaceLeansBlendSpaceAlpha = 1;
    this->CombatLeanYawMultiplier = 1;
    this->SlopeCheckPitchThresholdDegrees = 1;
    this->SlopeCheckYawThresholdDegrees = 1;
    this->AdditiveLeansSpeedThreshold = 1;
}

