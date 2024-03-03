#include "CurieComponent.h"

bool UCurieComponent::IsInteractingWithElement(const FGameplayTag& Element) const {
    return false;
}

bool UCurieComponent::HasStateAttached(FGameplayTag StateIdentifier) const {
    return false;
}

bool UCurieComponent::HasElementAttached(FGameplayTag ElementIdentifier) const {
    return false;
}

bool UCurieComponent::HasAnyElementAttached(FGameplayTagContainer ElementIdentifiers) const {
    return false;
}

void UCurieComponent::HandleOwningActorDestroyed(AActor* Owner) {
}

UCurieComponent::UCurieComponent() {
    this->EntityType = ECurieEntityType::Invalid;
}

