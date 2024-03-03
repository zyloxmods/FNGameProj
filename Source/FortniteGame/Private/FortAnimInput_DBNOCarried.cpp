#include "FortAnimInput_DBNOCarried.h"

FFortAnimInput_DBNOCarried::FFortAnimInput_DBNOCarried() {
    this->CarrierDropMontage = NULL;
    this->CarrierPickupMontage = NULL;
    this->CarrierPawn = NULL;
    this->CarrierAnimBP = NULL;
    this->CarrierInterrogationMontage = NULL;
    this->SubAnimPhysicsWeight = 1;
    this->DropMontagePosition = 1;
    this->PickupMontagePosition = 1;
    this->InterrogationMontagePosition = 1;
    this->PickupToIdleTransitionPosition = 1;
    this->CarrierPawnVelocityZ = 1;
    this->CarrierYawDeltaSmoothed = 1;
    this->CarriedJogNAnimPosition = 1;
    this->CarriedJogSAnimPosition = 1;
    this->CarriedCrouchNAnimPosition = 1;
    this->CarriedCrouchSAnimPosition = 1;
    this->CarriedSprintAnimPosition = 1;
    this->CarriedCrouchSprintAnimPosition = 1;
    this->CarrierSpinePitch = 1;
    this->DropStateWeight = 1;
    this->bBeingCarried = false;
    this->bIsBeingPickedUp = false;
    this->bIsBeingDropped = false;
    this->bCarrierIsCrouching = false;
    this->bCarrierIsMovingBackward = false;
    this->bCarrierHasSyncMarkers = false;
    this->bTransitionFromPickupToIdle = false;
    this->bTransitionFromIdleToJogging = false;
    this->bTransitionFromJoggingToSprinting = false;
    this->bTransitionFromInAirToLanding = false;
    this->bJackalPlayJumpTrickVertical = false;
}

