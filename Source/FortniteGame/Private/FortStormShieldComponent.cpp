#include "FortStormShieldComponent.h"
#include "Net/UnrealNetwork.h"

void UFortStormShieldComponent::StormShieldDestroyed(AActor* DestroyedActor) {
}

void UFortStormShieldComponent::StormShieldCreated(AFortMissionStormShield* Shield) {
}

void UFortStormShieldComponent::OwnerDestroyed(AActor* InOwner) {
}

void UFortStormShieldComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortStormShieldComponent, bCareAboutEdgeOfStorm);
}

UFortStormShieldComponent::UFortStormShieldComponent() {
    this->bCareAboutEdgeOfStorm = false;
    this->bDisabled = false;
    this->DistanceFromEdgeOfStormShield = 1;
}

