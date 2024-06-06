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
    CameraStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    BaseStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    AngleRaysStaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AngleRaysMesh"));
    SpotLightComp = NULL;
    bYawLimitWhileTracking = true;
    bDoesNotRotate = false;
    bLocateDamagerIfHitWhileIdle = true;
    CurrentSentryState = EBuildingGameplayActorSentry_State::PassiveIdle;
    PawnBeingTracked = NULL;
    bIdleRotationStopped = false;
    IdleRotationPauseTime = 1;
    ReturnToIdlePauseTime = 1;
    RotationRate = 1;
    ReturnToIdleRotationRate = 1;
    TrackingRotationRate = 1;
    LocatingDamagerRotationRate = 1;
    TrackingAdditionalZLook = 1;
    bGoDormantAfterPassiveIdle = true;
    bSetRayScaleOnTrackTick = false;
    AngleRaysTrackingYScale = 1;
    AngleRaysTrackingZScale = 1;
    bBaseFollowsTargetRotation = false;
    bWasIdleStopped = false;
    bIdleRotatingRight = false;
    LastNetworkReceiveTime = 1;
    DisableTickAfterNoNetworkTrafficTime = 1;
    SentryPitchClampMin = 1;
    SentryPitchClampMax = 1;
    SpotLightRadiusLerpSpeed = 1;
    SpotLightOuterConeAngleLerpSpeed = 1;
}

