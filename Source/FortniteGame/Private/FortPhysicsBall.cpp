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
    bDetachRootChildrenOnServer = true;
    bUpdateRotationOnlyIfRendered = true;
    bRollingAudioFaded = false;
    UpdateRollingAudioRangeMeters = 1;
    SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    RotationPivot = NULL;
    WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterInteractionComponent"));
    RotatedComponent = NULL;
    RollingAudioComponent = NULL;
    bEnableBackspinOnKick = true;
    bApplyingBackspin = false;
    BackspinRotationScale = 1;
    bEnableLiftAndDrag = false;
    bStopLiftWhenFalling = true;
    bApplyingLift = false;
    LiftFactor = 1;
    StopLiftHorizontalVelocityThreshold = 1;
    StopLiftVerticalVelocityThreshold = 1;
    StopLiftTimeDuration = 1;
    LiftDuration = 1;
    DragVelocityThreshold = 1;
    DragFactor = 1;
    WaterMinRotationSpeed = 1;
    WaterRotationInterpSpeed = 1;
    WaterAxisFlipSpeed = 1;
}

