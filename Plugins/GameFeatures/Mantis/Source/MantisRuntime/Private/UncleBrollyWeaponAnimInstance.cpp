#include "UncleBrollyWeaponAnimInstance.h"

UUncleBrollyWeaponAnimInstance::UUncleBrollyWeaponAnimInstance() {
    this->UncleBrollyItemLayer = NULL;
    this->UmbrellaSpinSpeed = 1;
    this->BlockDeployEndPlayrate = 1;
    this->BlockDeployEndStartPosition = 1;
    this->bIsDodging = false;
    this->bIsPlayingMeleeAnim = false;
    this->bIsUmbrellaFailing = false;
    this->bIsMeleeGuarding = false;
    this->bIsInAir = false;
    this->bIsDashing = false;
    this->bIsSprinting = false;
    this->bIsPredictingEnd = false;
    this->bIsDashCharging = false;
    this->bIsDashPredictingEnd = false;
    this->bInAirAndMeleeGuarding = false;
    this->bTransition_Default_to_DeployStart = false;
    this->bTransition_DeployStart_to_Default = false;
    this->bTransition_Fail_to_FailToDeploy = false;
    this->bTransition_FailLoop_to_DeployEnd = false;
}

