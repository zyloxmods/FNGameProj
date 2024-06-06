#include "FortGameplayAbility_JumpBoostPack.h"
#include "Net/UnrealNetwork.h"

void UFortGameplayAbility_JumpBoostPack::SetCurrentState(EJumpBoostPackState InState) {
}

void UFortGameplayAbility_JumpBoostPack::OnRep_ServerCurrentState(EJumpBoostPackState PreviousState) {
}

void UFortGameplayAbility_JumpBoostPack::OnRep_bAbilityMarkedForPendingKill() {
}

void UFortGameplayAbility_JumpBoostPack::OnFuelIsFull_Implementation() {
}

void UFortGameplayAbility_JumpBoostPack::OnFuelIsEmpty_Implementation() {
}

void UFortGameplayAbility_JumpBoostPack::OnCurrentStateChanged_Implementation(EJumpBoostPackState InPreviousState, EJumpBoostPackState InCurrentState) {
}

void UFortGameplayAbility_JumpBoostPack::OnAbilityCanceled_Implementation() {
}

void UFortGameplayAbility_JumpBoostPack::HandleCurrentStateChanged(EJumpBoostPackState InPreviousState) {
}

void UFortGameplayAbility_JumpBoostPack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameplayAbility_JumpBoostPack, ServerCurrentState);
    DOREPLIFETIME(UFortGameplayAbility_JumpBoostPack, bAbilityMarkedForPendingKill);
}

UFortGameplayAbility_JumpBoostPack::UFortGameplayAbility_JumpBoostPack() {
    ServerCurrentState = EJumpBoostPackState::Idle;
    CurrentState = EJumpBoostPackState::Idle;
    DelayRegenStartTime = 1;
    bAbilityMarkedForPendingKill = false;
}

