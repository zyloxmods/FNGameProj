#include "FortCurieInteractionComponent.h"

void UFortCurieInteractionComponent::UnregisterCollisionComponent() {
}

void UFortCurieInteractionComponent::RegisterCollisionComponent(UPrimitiveComponent* InCollisionComponent) {
}

void UFortCurieInteractionComponent::OnCurieStateDetached(UObject* Owner, FCurieContainerHandle ContainerHandle, const FGameplayTag& StateIdentifier) {
}

void UFortCurieInteractionComponent::OnCurieStateAttached(UObject* Owner, FCurieContainerHandle ContainerHandle, const FGameplayTag& StateIdentifier) {
}

void UFortCurieInteractionComponent::HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UFortCurieInteractionComponent::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFortCurieInteractionComponent::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UFortCurieInteractionComponent::UFortCurieInteractionComponent() {
    CollisionComponent = NULL;
}

