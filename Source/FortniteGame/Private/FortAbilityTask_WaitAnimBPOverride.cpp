#include "FortAbilityTask_WaitAnimBPOverride.h"

UFortAbilityTask_WaitAnimBPOverride* UFortAbilityTask_WaitAnimBPOverride::WaitAnimBPOverrideReady(UGameplayAbility* OwningAbility, TSoftClassPtr<UAnimInstance> AnimInstance, TSoftObjectPtr<UFortGadgetItemDefinition> GadgetItemDef) {
    return NULL;
}

void UFortAbilityTask_WaitAnimBPOverride::OnPawnAnimBPCallback() {
}

void UFortAbilityTask_WaitAnimBPOverride::OnFinishedCharacterCustomizationCallback(AFortPlayerPawn* InPawn) {
}

UFortAbilityTask_WaitAnimBPOverride::UFortAbilityTask_WaitAnimBPOverride() {
    FortPlayerPawn = NULL;
}

