#include "AthenaResurrectionComponent.h"
#include "Net/UnrealNetwork.h"

void UAthenaResurrectionComponent::ServerOnInterruptResurrectionInteraction_Implementation(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
}
bool UAthenaResurrectionComponent::ServerOnInterruptResurrectionInteraction_Validate(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
    return true;
}

void UAthenaResurrectionComponent::ServerOnBeginResurrectionInteraction_Implementation(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
}
bool UAthenaResurrectionComponent::ServerOnBeginResurrectionInteraction_Validate(ABuildingGameplayActorSpawnMachine* SpawnMachine) {
    return true;
}

void UAthenaResurrectionComponent::OnRep_PlayerIdsForResurrection() {
}

void UAthenaResurrectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAthenaResurrectionComponent, PlayerIdsForResurrection);
}

UAthenaResurrectionComponent::UAthenaResurrectionComponent() {
    this->ClosestSpawnMachineIndex = -1;
}

