#include "FortStormShieldComponent.h"

void UFortStormShieldComponent::StormShieldDestroyed(AActor* DestroyedActor) {
}

void UFortStormShieldComponent::StormShieldCreated(AFortMissionStormShield* Shield) {
}

void UFortStormShieldComponent::OwnerDestroyed(AActor* InOwner) {
}

UFortStormShieldComponent::UFortStormShieldComponent() {
    this->bDisabled = false;
    this->DistanceFromEdgeOfStormShield = 0.30f;
}

