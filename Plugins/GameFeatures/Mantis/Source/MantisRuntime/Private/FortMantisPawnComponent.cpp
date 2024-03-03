#include "FortMantisPawnComponent.h"

void UFortMantisPawnComponent::OnPostPhysicsRotation(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds) {
}

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds) {
}

UFortMantisPawnComponent::UFortMantisPawnComponent() {
    this->MantisData = NULL;
    this->Weapon = NULL;
}

