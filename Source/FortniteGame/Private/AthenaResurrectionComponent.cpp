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

void UAthenaResurrectionComponent::ClientNotifyCloneMchineDestroyed_Implementation(const USoundCue* DestroyedSound) {
}

void UAthenaResurrectionComponent::ClientNotifyCloneMachineUnderAttack_Implementation(const USoundCue* DamageSound) {
}

void UAthenaResurrectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAthenaResurrectionComponent, PlayerIdsForResurrection);
    DOREPLIFETIME(UAthenaResurrectionComponent, CloneMachineRepData);
}

UAthenaResurrectionComponent::UAthenaResurrectionComponent() {
    ClosestSpawnMachineIndex = 0;
    NotifyPlayerDamageThrottle = 1;
}

