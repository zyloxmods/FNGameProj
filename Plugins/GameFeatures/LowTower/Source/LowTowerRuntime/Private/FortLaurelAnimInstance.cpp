#include "FortLaurelAnimInstance.h"

void UFortLaurelAnimInstance::SetLaurelInformation(const bool bInHasItemInInventory, const bool bInPawnIsDestroyingBuildingForNav, const bool bInHasPawnGoal, const AActor* InGoalActor) {
}

void UFortLaurelAnimInstance::SetAnimInstanceInformation(const bool bInIsActive) {
}

UFortLaurelAnimInstance::UFortLaurelAnimInstance() {
    this->VelocityMultiplierWithItemInInventory = 1;
    this->AggroPitchCurveName = TEXT("AggroPitch");
    this->DefaultAggroPitch = 1;
    this->SpringAlphaTarget = 1;
    this->SpringAlphaInterpSpeed = 1;
    this->DynamicLegRotationSpeedUpdateRate = 1;
    this->DynamicLegRotationSpeedWithItem = 1;
    this->DynamicLegRotationSpeedWithoutItemMin = 1;
    this->DynamicLegRotationSpeedWithoutItemMax = 1;
    this->DynamicLegRotationInterpSpeed = 1;
    this->HorizontalSpeed = 1;
    this->LeanDirection = 1;
    this->AggroPitch = 1;
    this->AggroPitchAlpha = 1;
    this->bIsFalling = false;
    this->SpawnYaw = 1;
    this->SpawnPitch = 1;
    this->SpringAlpha = 1;
    this->DynamicLegRotationSpeed = 1;
    this->DynamicLegRotationSpeedSmooth = 1;
    this->DynamicLegRotation = 1;
    this->bIsActive = false;
    this->bHasItemInInventory = false;
    this->bPawnIsDestroyingBuildingForNav = false;
    this->bHasPawnGoal = false;
    this->DynamicLegRotationSpeedUpdateTime = 1;
    this->GoalActor = NULL;
}

