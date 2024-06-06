#include "InfiltrationCarryObjectComponent.h"
#include "Net/UnrealNetwork.h"

uint8 UInfiltrationCarryObjectComponent::GetDefendingTeam() const {
    return 0;
}

uint8 UInfiltrationCarryObjectComponent::GetAttackingTeam() const {
    return 0;
}

void UInfiltrationCarryObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInfiltrationCarryObjectComponent, ParentSpawnPoint);
    DOREPLIFETIME(UInfiltrationCarryObjectComponent, CachedMutator);
    DOREPLIFETIME(UInfiltrationCarryObjectComponent, bIsInteractable);
}

UInfiltrationCarryObjectComponent::UInfiltrationCarryObjectComponent() {
    bIsInteractable = false;
}

