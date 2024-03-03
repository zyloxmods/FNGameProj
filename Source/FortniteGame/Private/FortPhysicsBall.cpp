#include "FortPhysicsBall.h"
#include "Components/SphereComponent.h"
#include "FortWaterInteractionComponent.h"
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
    this->UpdateRollingAudioRangeMeters = 1;
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->RotationPivot = NULL;
    this->WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterInteractionComponent"));
    this->RotatedComponent = NULL;
    this->RollingAudioComponent = NULL;
    this->bEnableBackspinOnKick = true;
    this->bApplyingBackspin = false;
    this->BackspinRotationScale = 1;
    this->bEnableLiftAndDrag = false;
    this->bStopLiftWhenFalling = true;
    this->bApplyingLift = false;
    this->LiftFactor = 1;
    this->StopLiftHorizontalVelocityThreshold = 1;
    this->StopLiftVerticalVelocityThreshold = 1;
    this->StopLiftTimeDuration = 1;
    this->LiftDuration = 1;
    this->DragVelocityThreshold = 1;
    this->DragFactor = 1;
    this->WaterMinRotationSpeed = 1;
    this->WaterRotationInterpSpeed = 1;
    this->WaterAxisFlipSpeed = 1;
}

