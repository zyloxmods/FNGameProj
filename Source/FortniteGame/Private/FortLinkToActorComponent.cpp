#include "FortLinkToActorComponent.h"

void UFortLinkToActorComponent::SetUseActorRotationForDirectionVectors(const bool InbUseActorRotationForDirectionVectors) {
}

void UFortLinkToActorComponent::SetRegisterWithOwnerMovementComponent(const bool bRegisterWithMovementComp) {
}

void UFortLinkToActorComponent::SetPerformLinkingCheckOnBeginPlay(const bool bCheckOnBeginPlay) {
}

void UFortLinkToActorComponent::RegisterWithOwnersProjectileMovementComponent() {
}

bool UFortLinkToActorComponent::PerformLinkingCheck(const ELinkToDirection InDirection, AActor*& OutActorLinkedTo) {
    return false;
}

void UFortLinkToActorComponent::OnMonitorLinkedActor() {
}

void UFortLinkToActorComponent::HandleMovementStopped(const FHitResult& Hit) {
}

void UFortLinkToActorComponent::HandleLinkedActorDestroyed(AActor* DestroyedActor) {
}

void UFortLinkToActorComponent::HandleBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AActor* UFortLinkToActorComponent::GetActorLinkedTo() const {
    return NULL;
}

UFortLinkToActorComponent::UFortLinkToActorComponent() {
    this->bPerformLinkingCheckOnBeginPlay = true;
    this->bRegisterWithOwnerMovementComponent = true;
    this->bUseActorRotationForDirectionVectors = false;
    this->bMonitorLinkedActorForChanges = false;
    this->DirectionForLink = ELinkToDirection::Up;
    this->DirectionTraceLength = 1;
}

