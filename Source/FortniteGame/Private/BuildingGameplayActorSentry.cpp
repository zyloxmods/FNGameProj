#include "BuildingGameplayActorSentry.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"


void ABuildingGameplayActorSentry::SetSentryState(EBuildingGameplayActorSentry_State InSentryState) {
}

void ABuildingGameplayActorSentry::SetPawnBeingTracked(AFortPawn* InPawnBeingTracked) {
}




void ABuildingGameplayActorSentry::OnRep_ExactIdleRotation() {
}

void ABuildingGameplayActorSentry::OnRep_CurrentSentryState() {
}


void ABuildingGameplayActorSentry::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorSentry, CurrentSentryState);
    DOREPLIFETIME(ABuildingGameplayActorSentry, PawnBeingTracked);
    DOREPLIFETIME(ABuildingGameplayActorSentry, StartingIdleRotation);
    DOREPLIFETIME(ABuildingGameplayActorSentry, IdleRotationDestination);
    DOREPLIFETIME(ABuildingGameplayActorSentry, ExactIdleRotation);
}

ABuildingGameplayActorSentry::ABuildingGameplayActorSentry() {
    this->CameraStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    this->BaseStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->AngleRaysStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AngleRaysMesh"));
    this->SpotLightComp = NULL;
    this->bYawLimitWhileTracking = true;
    this->bDoesNotRotate = false;
    this->bLocateDamagerIfHitWhileIdle = true;
    this->CurrentSentryState = EBuildingGameplayActorSentry_State::PassiveIdle;
    this->PawnBeingTracked = NULL;
    this->bIdleRotationStopped = false;
    this->IdleRotationPauseTime = 1;
    this->ReturnToIdlePauseTime = 1;
    this->RotationRate = 1;
    this->ReturnToIdleRotationRate = 1;
    this->TrackingRotationRate = 1;
    this->LocatingDamagerRotationRate = 1;
    this->TrackingAdditionalZLook = 1;
    this->bGoDormantAfterPassiveIdle = true;
    this->bSetRayScaleOnTrackTick = false;
    this->AngleRaysTrackingYScale = 1;
    this->AngleRaysTrackingZScale = 1;
    this->bBaseFollowsTargetRotation = false;
    this->bWasIdleStopped = false;
    this->bIdleRotatingRight = false;
    this->LastNetworkReceiveTime = 1;
    this->DisableTickAfterNoNetworkTrafficTime = 1;
    this->SentryPitchClampMin = 1;
    this->SentryPitchClampMax = 1;
    this->SpotLightRadiusLerpSpeed = 1;
    this->SpotLightOuterConeAngleLerpSpeed = 1;
}

