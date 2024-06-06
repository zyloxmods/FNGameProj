#include "FortAnimInput_DBNOCarried.h"

FFortAnimInput_DBNOCarried::FFortAnimInput_DBNOCarried() {
    CarrierDropMontage = NULL;
    CarrierPickupMontage = NULL;
    CarrierPawn = NULL;
    CarrierAnimBP = NULL;
    CarrierInterrogationMontage = NULL;
    SubAnimPhysicsWeight = 1;
    DropMontagePosition = 1;
    PickupMontagePosition = 1;
    InterrogationMontagePosition = 1;
    PickupToIdleTransitionPosition = 1;
    CarrierPawnVelocityZ = 1;
    CarrierYawDeltaSmoothed = 1;
    CarriedJogNAnimPosition = 1;
    CarriedJogSAnimPosition = 1;
    CarriedCrouchNAnimPosition = 1;
    CarriedCrouchSAnimPosition = 1;
    CarriedSprintAnimPosition = 1;
    CarriedCrouchSprintAnimPosition = 1;
    CarrierSpinePitch = 1;
    DropStateWeight = 1;
    bBeingCarried = false;
    bIsBeingPickedUp = false;
    bIsBeingDropped = false;
    bCarrierIsCrouching = false;
    bCarrierIsMovingBackward = false;
    bCarrierHasSyncMarkers = false;
    bTransitionFromPickupToIdle = false;
    bTransitionFromIdleToJogging = false;
    bTransitionFromJoggingToSprinting = false;
    bTransitionFromInAirToLanding = false;
    bJackalPlayJumpTrickVertical = false;
}

