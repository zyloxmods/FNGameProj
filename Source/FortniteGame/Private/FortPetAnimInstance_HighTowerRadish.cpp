#include "FortPetAnimInstance_HighTowerRadish.h"

void UFortPetAnimInstance_HighTowerRadish::UpdateBodyOffsetWithSpring(float Mass, FVector LagFactor, FVector BackpackOffset, float OwnerRootYawOffsetFractioned, bool bSlowDownInterp) {
}



bool UFortPetAnimInstance_HighTowerRadish::IsTurningSharply() const {
    return false;
}

UFortPetAnimInstance_HighTowerRadish::UFortPetAnimInstance_HighTowerRadish() {
    this->OwnerAnimBP = NULL;
    this->OwnerLocomotionDirection = 1;
    this->OwnerLocomotionSpeed = 1;
    this->StoppedMovingOrMeleeForLongEnoughTime = false;
    this->SharpDirectionChange = false;
    this->bPetUnderwater = false;
    this->HighTowerRadish_LobbySkyDive_Diving = false;
    this->HighTowerRadish_LobbySkyDive_Gliding = false;
    this->FrontEndIdleTransition = false;
    this->AdditiveTransitionCurve = 1;
    this->LeftHandIKCurve = 1;
    this->RandomLocomotionBreak = 0;
    this->AllowRandomLocomotionBreak = false;
    this->HasTargettedInLastNSeconds = false;
    this->TurnOffLeans = 1;
    this->OffsetRootYawFractioned = 1;
    this->OffsetRootYawSmooth = 1;
    this->bIsPlayingEmoteExtra = false;
    this->bIsInVehicle = false;
    this->InVehicle = 1;
}

