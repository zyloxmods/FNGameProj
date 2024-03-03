#include "GameplayStateMachine.h"
#include "Net/UnrealNetwork.h"

void UGameplayStateMachine::SetState(const FGameplayTag& InStateId) {
}

void UGameplayStateMachine::OnRep_ActiveGameplayStateData() {
}

FGameplayTag UGameplayStateMachine::GetStateMachineId() const {
    return FGameplayTag{};
}

UGameplayState* UGameplayStateMachine::GetActiveStateObject() const {
    return NULL;
}

FGameplayTag UGameplayStateMachine::GetActiveStateId() const {
    return FGameplayTag{};
}

void UGameplayStateMachine::EvaluateStateTransition_Implementation() {
}

void UGameplayStateMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayStateMachine, ActiveGameplayStateData);
}

UGameplayStateMachine::UGameplayStateMachine() {
    this->bPubliclyBroadcast = false;
    this->bPersistDelegatesOnUnregistration = false;
    this->StateMachineManager = NULL;
    this->StateMachineSubSystem = NULL;
}

