#include "FortGameplayAbility_AIPortal.h"

void UFortGameplayAbility_AIPortal::ModifyCollisions() {
}

bool UFortGameplayAbility_AIPortal::HasPortalOutPoint() const {
    return false;
}

FVector UFortGameplayAbility_AIPortal::GetPortalOutPoint() const {
    return FVector{};
}

FVector UFortGameplayAbility_AIPortal::GetPortalInPoint() const {
    return FVector{};
}

ABuildingSMActor* UFortGameplayAbility_AIPortal::GetPortalBuilding() const {
    return NULL;
}

UFortGameplayAbility_AIPortal::UFortGameplayAbility_AIPortal() {
    PortalLifespan = 1;
}

