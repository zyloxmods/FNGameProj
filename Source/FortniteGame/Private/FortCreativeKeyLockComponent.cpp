#include "FortCreativeKeyLockComponent.h"
#include "Net/UnrealNetwork.h"

bool UFortCreativeKeyLockComponent::Unlock(APawn* Pawn) {
    return false;
}

void UFortCreativeKeyLockComponent::SetShouldConsumeKey(bool ShouldConsume) {
}

void UFortCreativeKeyLockComponent::SetRequiredKeys(int32 Amount) {
}

void UFortCreativeKeyLockComponent::SetRequiredAllKeysAtOne(bool Required) {
}

void UFortCreativeKeyLockComponent::SetKeyItemDefinition(UFortItemDefinition* ItemDefinition) {
}

void UFortCreativeKeyLockComponent::Reset(bool DeferredReset) {
}

void UFortCreativeKeyLockComponent::OnRep_RemainingKeysToUnlock() {
}

void UFortCreativeKeyLockComponent::OnRep_KeyItemDefinition() {
}

void UFortCreativeKeyLockComponent::OnRep_CurrentState() {
}

bool UFortCreativeKeyLockComponent::Lock(APawn* Pawn) {
    return false;
}

bool UFortCreativeKeyLockComponent::IsLocked() const {
    return false;
}

ECreativeKeyLockState UFortCreativeKeyLockComponent::GetCurrentState() const {
    return ECreativeKeyLockState::LOCKED;
}

bool UFortCreativeKeyLockComponent::BlueprintHasKeysToInteract(APawn* Pawn) {
    return false;
}

void UFortCreativeKeyLockComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCreativeKeyLockComponent, CurrentState);
    DOREPLIFETIME(UFortCreativeKeyLockComponent, RequiredKeysToUnlockAmount);
    DOREPLIFETIME(UFortCreativeKeyLockComponent, RemainingKeysToUnlockAmount);
    DOREPLIFETIME(UFortCreativeKeyLockComponent, bRequireAllKeysAtOnce);
    DOREPLIFETIME(UFortCreativeKeyLockComponent, UnlockKeyDefinitionSoftPointer);
}

UFortCreativeKeyLockComponent::UFortCreativeKeyLockComponent() {
    InitialState = ECreativeKeyLockState::LOCKED;
    CurrentState = ECreativeKeyLockState::LOCKED;
    RequiredKeysToUnlockAmount = 0;
    RemainingKeysToUnlockAmount = 0;
    bRequireAllKeysAtOnce = false;
}

