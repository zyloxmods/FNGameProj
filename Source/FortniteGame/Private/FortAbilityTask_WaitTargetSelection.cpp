#include "FortAbilityTask_WaitTargetSelection.h"

UFortAbilityTask_WaitTargetSelection* UFortAbilityTask_WaitTargetSelection::WaitTargetSelection(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTag InApplicationTag, bool NewBForceTargetingOnServer) {
    return NULL;
}

void UFortAbilityTask_WaitTargetSelection::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag) {
}

void UFortAbilityTask_WaitTargetSelection::OnTargetDataCancelledCallback() {
}

UFortAbilityTask_WaitTargetSelection::UFortAbilityTask_WaitTargetSelection() {
    ConfirmationType = EGameplayTargetingConfirmation::Instant;
    bForceTargetingOnServer = false;
}

