#include "FortCurieToggleComponent.h"

void UFortCurieToggleComponent::OnInactive_Implementation() {
}

void UFortCurieToggleComponent::OnElementDetached(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier) {
}

void UFortCurieToggleComponent::OnElementAttached(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier) {
}

void UFortCurieToggleComponent::OnElementApplied(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier) {
}

void UFortCurieToggleComponent::OnActive_Implementation() {
}

UFortCurieToggleComponent::UFortCurieToggleComponent() {
    ActivationBehavior = EFortCurieToggleComponentActivationBehavior::OnValidAttachment;
    DeactivationBehavior = EFortCurieToggleComponentDeactivationBehavior::NeverDeactivate;
    DeactivationTime = 1;
}

