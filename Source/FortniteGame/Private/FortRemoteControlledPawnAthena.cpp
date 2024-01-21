#include "FortRemoteControlledPawnAthena.h"
#include "Net/UnrealNetwork.h"

void AFortRemoteControlledPawnAthena::TriggerDestroyRemoteControlPawn() {
}

void AFortRemoteControlledPawnAthena::SetupRemoteControlPawn(AFortPlayerControllerAthena* InFortPC, AFortPlayerPawnAthena* InControllingPawn, TEnumAsByte<EFortCustomMovement::Type> CustomMovementType, const TArray<FFortGameplayEffectContainerSpec>& EffectContainerSpecOnKill) {
}

void AFortRemoteControlledPawnAthena::OnTriggeredHealthThreshold_Implementation(float PreviousTriggeredHealthThreshold, float CurrentTriggeredHealthThreshold) {
}

void AFortRemoteControlledPawnAthena::OnRep_TriggeredHealthThreshold(float PreviousTriggeredHealthThreshold) {
}

void AFortRemoteControlledPawnAthena::OnRep_TriggeredForDestroy() {
}

void AFortRemoteControlledPawnAthena::OnRep_OverrideAbilitySystemComponent() {
}

void AFortRemoteControlledPawnAthena::OnRep_ControllingPlayerPawn() {
}

void AFortRemoteControlledPawnAthena::OnDoKill_Implementation() {
}

void AFortRemoteControlledPawnAthena::OnClientSetupRemoteControlPawn_Implementation() {
}

void AFortRemoteControlledPawnAthena::OnCapsuleTouch(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool AFortRemoteControlledPawnAthena::IsCurrentlyDelayingLaunch() const {
    return false;
}

void AFortRemoteControlledPawnAthena::HandleControllingPlayerOutOfHealth() {
}

float AFortRemoteControlledPawnAthena::GetOutOfHealthExplodeDelay() const {
    return 0.0f;
}

float AFortRemoteControlledPawnAthena::GetLaunchDelay() const {
    return 0.0f;
}

float AFortRemoteControlledPawnAthena::GetFuseLength() const {
    return 0.0f;
}

void AFortRemoteControlledPawnAthena::BeginCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortRemoteControlledPawnAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, bCurrentlyDelayingLaunch);
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, ServerFuseStartTime);
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, RCTeam);
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, ControllingPlayerPawn);
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, OverrideAbilitySystemComponent);
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, TriggeredHealthThreshold);
    DOREPLIFETIME(AFortRemoteControlledPawnAthena, bTriggeredForDestroy);
}

AFortRemoteControlledPawnAthena::AFortRemoteControlledPawnAthena() {
    this->bCurrentlyDelayingLaunch = true;
    this->ServerFuseStartTime = -1.00f;
    this->RCTeam = 0;
    this->OverrideAbilitySystemComponent = NULL;
    this->TriggeredHealthThreshold = 1.00f;
    this->RemoteControlPawnSet = NULL;
    this->bTriggeredForDestroy = false;
    this->RemoteControlledPawnDefaultCameraClass = NULL;
    this->RemoteControlledPawnTriggeredCameraClass = NULL;
    this->ControllingPlayerEffect = NULL;
    this->bIsKeyboardTurnPressed = false;
    this->bIsKeyboardLookPressed = false;
}

