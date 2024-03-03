#include "FortSpicySakeOccupantAnimInstanceLayer.h"

UFortSpicySakeOccupantAnimInstanceLayer::UFortSpicySakeOccupantAnimInstanceLayer() {
    this->GroundIdleThreshold = 1;
    this->GroundIdleLowThreshold = 1;
    this->LocalVelocityYawAngleTurnResetThreshold = 1;
    this->LocalVelocityYawAngleTurnTransitionThreshold = 1;
    this->LocalVelocityYawAngle = 1;
    this->PawnSpeed2D = 1;
    this->PawnVelocityZ = 1;
    this->bIsFemale = false;
    this->bIsOnGround = false;
    this->bIsOnWater = false;
    this->bLandingPredicted = false;
    this->bTransition_NewFallAditive_NewFallLandAdditive = false;
    this->bTransitionNewJumpLoopAdditiveToNewFallAdditive = false;
    this->bShouldApplyIdleAdditive = false;
    this->bIsTargeting = false;
    this->bIsPlayerCloseToShark = false;
    this->bIsBoosting = false;
    this->bCanTurnLeft = true;
    this->bCanTurnRight = true;
    this->bTransition_RideLoop_TurnLeft = false;
    this->bTransition_RideLoop_TurnRight = false;
    this->bIsReloading = false;
    this->bIsPlayingMeleeAnim = false;
    this->bIsPlayingEmote = false;
    this->bShouldPlayOnGroundIdle = false;
    this->bShouldPlayOnGroundIdleLow = false;
    this->bIsJumping = false;
    this->bCanUseTargettingStateMachine = false;
    this->bTransition_SharRideLoop_To_JumpUp = false;
}

