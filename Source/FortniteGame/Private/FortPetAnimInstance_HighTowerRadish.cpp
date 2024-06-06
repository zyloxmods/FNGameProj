#include "FortPetAnimInstance_HighTowerRadish.h"

void UFortPetAnimInstance_HighTowerRadish::UpdateBodyOffsetWithSpring(float Mass, FVector LagFactor, FVector BackpackOffset, float OwnerRootYawOffsetFractioned, bool bSlowDownInterp) {
}



bool UFortPetAnimInstance_HighTowerRadish::IsTurningSharply() const {
    return false;
}

UFortPetAnimInstance_HighTowerRadish::UFortPetAnimInstance_HighTowerRadish() {
    OwnerAnimBP = NULL;
    OwnerLocomotionDirection = 1;
    OwnerLocomotionSpeed = 1;
    StoppedMovingOrMeleeForLongEnoughTime = false;
    SharpDirectionChange = false;
    bPetUnderwater = false;
    HighTowerRadish_LobbySkyDive_Diving = false;
    HighTowerRadish_LobbySkyDive_Gliding = false;
    FrontEndIdleTransition = false;
    AdditiveTransitionCurve = 1;
    LeftHandIKCurve = 1;
    RandomLocomotionBreak = 0;
    AllowRandomLocomotionBreak = false;
    HasTargettedInLastNSeconds = false;
    TurnOffLeans = 1;
    OffsetRootYawFractioned = 1;
    OffsetRootYawSmooth = 1;
    bIsPlayingEmoteExtra = false;
    bIsInVehicle = false;
    InVehicle = 1;
}

