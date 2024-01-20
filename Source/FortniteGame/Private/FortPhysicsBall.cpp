#include "FortPhysicsBall.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPhysicsBall::UpdateDirectionAndRotation(float DeltaSeconds) {
}

void AFortPhysicsBall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsBall, bApplyingBackspin);
    DOREPLIFETIME(AFortPhysicsBall, bApplyingLift);
}

AFortPhysicsBall::AFortPhysicsBall() {
    this->bDetachRootChildrenOnServer = true;
    this->bUpdateRotationOnlyIfRendered = true;
    this->bRollingAudioFaded = false;
    this->UpdateRollingAudioRangeMeters = 7.00f;
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->RotationPivot = NULL;
    this->RotatedComponent = NULL;
    this->RollingAudioComponent = NULL;
    this->bEnableBackspinOnKick = true;
    this->bApplyingBackspin = false;
    this->BackspinRotationScale = 1.00f;
    this->bEnableLiftAndDrag = false;
    this->bStopLiftWhenFalling = true;
    this->bApplyingLift = false;
    this->LiftFactor = 0.00f;
    this->StopLiftHorizontalVelocityThreshold = 500.00f;
    this->StopLiftVerticalVelocityThreshold = 0.00f;
    this->StopLiftTimeDuration = 0.00f;
    this->LiftDuration = 0.00f;
    this->DragVelocityThreshold = 0.00f;
    this->DragFactor = 0.00f;
}

