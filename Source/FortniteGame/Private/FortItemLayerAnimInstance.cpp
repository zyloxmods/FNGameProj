#include "FortItemLayerAnimInstance.h"

UFortItemLayerAnimInstance::UFortItemLayerAnimInstance() {
    this->Speed2D = 1;
    this->FallPlayRate = 1;
    this->DBNOTurnPlayRate = 1;
    this->ADSToNonADSBlendTime = 1;
    this->NonADSToADSBlendTime = 1;
    this->SlopeSlidingPitch = 1;
    this->SlopeSlidingRoll = 1;
    this->Gender = EFortCustomGender::Invalid;
    this->bIsMoving2D = false;
    this->bIsAboveMinimumLocomotionSpeed = false;
    this->bIsTargeting = false;
    this->bIsRelaxedLevel1 = false;
    this->bIsRelaxedLevel2 = false;
    this->bIsCrouching = false;
    this->bIsJumpBoosting = false;
    this->bSwimmingJumpInitiatedFromWater = false;
    this->bIsRelaxedLevel1AndNotJumpBoosting = false;
    this->bIsRelaxedLevel1AndNotJumpingFromWater = false;
    this->bIsInVehicle = false;
    this->bIsDBNO = false;
    this->bIsPlayingMeleeAnim = false;
}

