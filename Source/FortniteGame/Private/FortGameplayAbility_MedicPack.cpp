#include "FortGameplayAbility_MedicPack.h"
#include "Net/UnrealNetwork.h"

void UFortGameplayAbility_MedicPack::SetCurrentState(EMedicPackState InState) {
}

void UFortGameplayAbility_MedicPack::OnRep_ServerCurrentState(EMedicPackState PreviousState) {
}

void UFortGameplayAbility_MedicPack::OnRep_bAbilityMarkedForPendingKill() {
}

void UFortGameplayAbility_MedicPack::OnFuelIsFull_Implementation() {
}

void UFortGameplayAbility_MedicPack::OnFuelIsEmpty_Implementation() {
}

void UFortGameplayAbility_MedicPack::OnCurrentStateChanged_Implementation(EMedicPackState InPreviousState, EMedicPackState InCurrentState) {
}

void UFortGameplayAbility_MedicPack::OnAbilityCanceled_Implementation() {
}

void UFortGameplayAbility_MedicPack::HandleCurrentStateChanged(EMedicPackState InPreviousState) {
}

void UFortGameplayAbility_MedicPack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameplayAbility_MedicPack, ServerCurrentState);
    DOREPLIFETIME(UFortGameplayAbility_MedicPack, bAbilityMarkedForPendingKill);
}

UFortGameplayAbility_MedicPack::UFortGameplayAbility_MedicPack() {
    ServerCurrentState = EMedicPackState::Idle;
    CurrentState = EMedicPackState::Idle;
    DelayRegenStartTime = 1;
    bAbilityMarkedForPendingKill = false;
}

